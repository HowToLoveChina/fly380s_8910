/* Copyright (C) 2018 RDA Technologies Limited and/or its affiliates("RDA").
 * All rights reserved.
 *
 * This software is supplied "AS IS" without any warranties.
 * RDA assumes no responsibility or liability for the use of the software,
 * conveys no license or title under any patent, copyright, or mask work
 * right to the product. RDA reserves the right to make changes in the
 * software without notification.  RDA also make no representation or
 * warranty that such application will be suitable for the specified use
 * without further testing or modification.
 */

#include "osi_log.h"
#include "osi_api.h"
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include "poc_config.h"

#define FREERTOS
#define T_TINY_MODE

#include "IDT.h"

#define APPTEST_THREAD_PRIORITY (OSI_PRIORITY_NORMAL)
#define APPTEST_STACK_SIZE (8192 * 4)
#define APPTEST_EVENT_QUEUE_SIZE (64)

osiThread_t *gAppTest;



char *GetCauseStr(USHORT usCause);
char *GetOamOptStr(DWORD dwOpt);
char *GetSrvTypeStr(SRV_TYPE_e SrvType);


//--------------------------------------------------------------------------------
//      TRACEС����
//  ����:
//      pcFormat:       ��ʽ��
//      ...:            ����
//  ����:
//      0:              �ɹ�
//      -1:             ʧ��
//  ע��:
//      ��ӡ���ݲ��ܳ���256�ֽ�
//--------------------------------------------------------------------------------
int IDT_TRACE(const char* pcFormat, ...)
{
    if (NULL == pcFormat)
        return -1;

    char   cBuf[256];
    va_list va;
    va_start(va, pcFormat);
    int iLen = 0;
    iLen = snprintf((char*)&cBuf[iLen], sizeof(cBuf) - iLen - 1, "IDT: ");
    iLen = vsnprintf((char*)&cBuf[iLen], sizeof(cBuf) - iLen - 1, pcFormat, va);
    va_end(va);
    if (iLen <= 0)
        return -1;

    OSI_LOGXE(OSI_LOGPAR_S, 0, "%s", (char*)cBuf);
    return 0;
}

//����Ϣ
class CGroup
{
public:
    CGroup()
    {
        Reset();
    }
    ~CGroup()
    {
    }
    int Reset()
    {
        m_ucGNum[0]     = 0;
        m_ucGName[0]    = 0;
        return 0;
    }

public:
    UCHAR   m_ucGNum[32];     //�����
    UCHAR   m_ucGName[64];    //������
};

//ȫ������
class CAllGroup
{
public:
    CAllGroup()
    {
        Reset();
    }
    ~CAllGroup()
    {
    }

    int Reset()
    {
        int i;
        for (i = 0; i < USER_MAX_GROUP; i++)
        {
            m_Group[i].Reset();
        }
        return 0;
    }

public:
    CGroup  m_Group[USER_MAX_GROUP];//һ���û�,��ദ��32������
};

//IDTʹ����
class CIdtUser
{
public:
    CIdtUser()
    {
        Reset();
    }

    ~CIdtUser()
    {
    }

    int Reset()
    {
        m_iCallId   = -1;
        m_iRxCount  = 0;
        m_iTxCount  = 1;
        m_Group.Reset();
        return 0;
    }

public:
    int m_iCallId;//ȫϵͳֻ��һ·����,����������һЩ
    int m_iRxCount, m_iTxCount;//ͳ���շ�����������
    CAllGroup m_Group;
};
CIdtUser m_IdtUser;


int Func_GQueryU(DWORD dwSn, UCHAR *pucGNum)
{
    QUERY_EXT_s ext;
    memset(&ext, 0, sizeof(ext));
    ext.ucGroup = 0;    //�����鲻����
    ext.ucUser  = 1;    //��ѯ�û�
    ext.dwPage  = 0;    //�ӵ�0ҳ��ʼ
    ext.dwCount = GROUP_MAX_MEMBER;//ÿҳ��1024�û�
    ext.ucOrder =0;     //����ʽ,0����������,1����������
    IDT_GQueryU(dwSn, pucGNum, &ext);
    return 0;
}


//--------------------------------------------------------------------------------
//      �û�״ָ̬ʾ
//  ����:
//      status:         ��ǰ�û�״̬
//      usCause:        ԭ��ֵ
//  ����:
//      ��
//  ע��:
//      ��IDT.dll����,�����û�״̬�����仯
//--------------------------------------------------------------------------------
void callback_IDT_StatusInd(int status, unsigned short usCause)
{
    IDT_TRACE("callback_IDT_StatusInd: status=%d, usCause=%s(%d)", status, GetCauseStr(usCause), usCause);

    if (UT_STATUS_ONLINE == status)
    {
        IDT_StatusSubs((char*)"###", GU_STATUSSUBS_BASIC);
    }
}

//--------------------------------------------------------------------------------
//      ����Ϣָʾ
//  ����:
//      pGInfo:         ����Ϣ
//  ����:
//      ��
//  ע��:
//      ��IDT.dll����,�����û�״̬�����仯
//--------------------------------------------------------------------------------
void callback_IDT_GInfoInd(USERGINFO_s *pGInfo)
{
    if (NULL == pGInfo)
        return;

    IDT_TRACE("callback_IDT_GInfoInd: FGCount=%d", pGInfo->usNum);

    m_IdtUser.m_Group.Reset();
    for (int i = 0; i < pGInfo->usNum; i++)
    {
        IDT_TRACE("%s,", pGInfo->stGInfo[i].ucNum);
        strcpy((char*)m_IdtUser.m_Group.m_Group[i].m_ucGNum, (char*)pGInfo->stGInfo[i].ucNum);
        strcpy((char*)m_IdtUser.m_Group.m_Group[i].m_ucGName, (char*)pGInfo->stGInfo[i].ucName);
    }

    // ������ѯ�������Ա
    Func_GQueryU(0, pGInfo->stGInfo[0].ucNum);
}

//--------------------------------------------------------------------------------
//      ��/�û�״ָ̬ʾ
//  ����:
//      pStatus:        ״̬
//  ����:
//      ��
//  ע��:
//      ��IDT.dll����,�����û�״̬�����仯
//--------------------------------------------------------------------------------
void callback_IDT_GUStatusInd(GU_STATUSGINFO_s *pStatus)
{
    if (NULL == pStatus)
        return;

    IDT_TRACE("callback_IDT_GUStatusInd: usNum=%d", pStatus->usNum);
    for (int i = 0; i < pStatus->usNum; i++)
    {
        IDT_TRACE("%d:%s--%d", pStatus->stStatus[i].ucType, pStatus->stStatus[i].ucNum, pStatus->stStatus[i].Status.ucStatus);
    }
}

//--------------------------------------------------------------------------------
//      ����Ӧ��
//  ����:
//      pUsrCtx:        �û�������
//      pcPeerNum:      �Է�Ӧ��ĺ���,�п����뱻�к��벻ͬ
//      pcPeerName:     �Է�Ӧ����û���
//      SrvType:        ҵ������,ʵ�ʵ�ҵ������,������MakeOut��ͬ
//      pcUserMark:     �û���ʶ
//      pcUserCallRef:  �û�ʹ�õĺ��вο���,�������Լ�,����������,�鿴�ǶԶ�
//  ����:
//      0:              �ɹ�
//      -1:             ʧ��
//  ע��:
//      ��IDT.dll����,�����û��Է�Ӧ��
//--------------------------------------------------------------------------------
int callback_IDT_CallPeerAnswer(void *pUsrCtx, char *pcPeerNum, char *pcPeerName, SRV_TYPE_e SrvType, char *pcUserMark, char *pcUserCallRef)
{
    IDT_TRACE("callback_IDT_CallPeerAnswer: pUsrCtx=0x%x, pcPeerNum=%s, pcPeerName=%s, SrvType=%s(%d), pcUserMark=%s, pcUserCallRef=%s",
        pUsrCtx, pcPeerNum, pcPeerName, GetSrvTypeStr(SrvType), SrvType, pcUserMark, pcUserCallRef);
    //����ͨ������
    return 0;
}

//--------------------------------------------------------------------------------
//      �յ�����
//  ����:
//      ID:             IDT�ĺ���ID
//      pcMyNum:        �Լ�����
//      pcPeerNum:      �Է�����
//      pcPeerName:     �Է�����
//      SrvType:        ҵ������
//      pAttr:          ý������
//      pExtInfo:       ������Ϣ
//      pcUserMark:     �û���ʶ
//      pcUserCallRef:  �û�ʹ�õĺ��вο���,�������Լ�,����������,�鿴�ǶԶ�
//  ����:
//      0:              �ɹ�
//      -1:             ʧ��
//  ע��:
//      ��IDT.dll����,�����û��к��н���
//--------------------------------------------------------------------------------
int callback_IDT_CallIn(int ID, char *pcMyNum, char *pcPeerNum, char *pcPeerName, SRV_TYPE_e SrvType, MEDIAATTR_s *pAttr, void *pExtInfo, char *pcUserMark, char *pcUserCallRef)
{
    IDT_TRACE("callback_IDT_CallIn: ID=%d, pcMyNum=%s, pcPeerNum=%s, pcPeerName=%s, SrvType=%s(%d), Attr=ARx(%d):ATx(%d), pcUserMark=%s, pcUserCallRef=%s",
        ID, pcMyNum, pcPeerNum, pcPeerName, GetSrvTypeStr(SrvType), SrvType, pAttr->ucAudioRecv, pAttr->ucAudioSend, pcUserMark, pcUserCallRef);
    m_IdtUser.m_iCallId = ID;
    m_IdtUser.m_iRxCount = 0;
    m_IdtUser.m_iTxCount = 0;

    switch (SrvType)
    {
    case SRV_TYPE_BASIC_CALL://����
        //����
        break;

    case SRV_TYPE_CONF://���
        //ֱ�ӽ�ͨ
        {
            MEDIAATTR_s attr;
            memset(&attr, 0, sizeof(attr));
            attr.ucAudioRecv = 1;
            attr.ucAudioSend = 0;
            IDT_CallAnswer(m_IdtUser.m_iCallId, &attr, NULL);
        }
        break;

    default:
        IDT_CallRel(ID, NULL, CAUSE_SRV_NOTSUPPORT);
        m_IdtUser.m_iCallId = -1;
        m_IdtUser.m_iRxCount = 0;
        m_IdtUser.m_iTxCount = 0;
        break;
    }
    return 0;
}
//--------------------------------------------------------------------------------
//      �Է���IDT�ڲ��ͷź���
//  ����:
//      ID:             IDT�ĺ���ID,ͨ����ʹ�����,�������������к�,�û���û��Ӧ��,���ͷ���
//      pUsrCtx:        �û�������
//      uiCause:        �ͷ�ԭ��ֵ
//  ����:
//      0:              �ɹ�
//      -1:             ʧ��
//--------------------------------------------------------------------------------
int callback_IDT_CallRelInd(int ID, void *pUsrCtx, UINT uiCause)
{
    IDT_TRACE("callback_IDT_CallRelInd: ID=%d, pUsrCtx=0x%x, uiCause=%d, m_iCallId=%d", ID, pUsrCtx, uiCause, m_IdtUser.m_iCallId);
    m_IdtUser.m_iCallId = -1;
    m_IdtUser.m_iRxCount = 0;
    m_IdtUser.m_iTxCount = 0;
    return 0;
}
//--------------------------------------------------------------------------------
//      ��Ȩָʾ
//  ����:
//      pUsrCtx:        �û�������
//      uiInd:          ָʾֵ:0��Ȩ���ͷ�,1��û�Ȩ,��ý��������ͬ
//  ����:
//      0:              �ɹ�
//      -1:             ʧ��
//--------------------------------------------------------------------------------
int callback_IDT_CallMicInd(void *pUsrCtx, UINT uiInd)
{
    IDT_TRACE("callback_IDT_CallMicInd: pUsrCtx=0x%x, uiInd=%d", pUsrCtx, uiInd);
    // 0���˲�����
    // 1���˽���
    return 0;
}
//--------------------------------------------------------------------------------
//      �յ���������
//  ����:
//      pUsrCtx:        �û�������
//      dwStreamId:     StreamId
//      ucCodec:        CODEC
//      pucBuf:         ����
//      iLen:           ���ݳ���
//      dwTsOfs:        ʱ���ն�
//      dwTsLen:        ���ݿ�ʱ������
//      dwTs:           ��ʼʱ��
//  ����:
//      0:              �ɹ�
//      -1:             ʧ��
//--------------------------------------------------------------------------------
int callback_IDT_CallRecvAudioData(void *pUsrCtx, DWORD dwStreamId, UCHAR ucCodec, UCHAR *pucBuf, int iLen, DWORD dwTsOfs, DWORD dwTsLen, DWORD dwTs)
{
    m_IdtUser.m_iRxCount++;
    IDT_TRACE("callback_IDT_CallRecvAudioData: pUsrCtx=0x%x, iLen=%d, m_iRxCount=%d", pUsrCtx, iLen, m_IdtUser.m_iRxCount);

    return 0;
}

//--------------------------------------------------------------------------------
//      ��������ʾ
//  ����:
//      pUsrCtx:        �û�������
//      pcNum:          ����������
//      pcName:         ����������
//  ����:
//      0:              �ɹ�
//      -1:             ʧ��
//--------------------------------------------------------------------------------
int callback_IDT_CallTalkingIDInd(void *pUsrCtx, char *pcNum, char *pcName)
{
    IDT_TRACE("callback_IDT_CallTalkingIDInd: pUsrCtx=0x%x, pcNum=%s, pcName=%s", pUsrCtx, pcNum, pcName);
    //��ʾ�����˺���/����,UTF-8����
    return 0;
}

//--------------------------------------------------------------------------------
//      �û�������Ӧ
//  ����:
//      dwOptCode:      ������      OPT_USER_ADD
//      dwSn:           �������
//      wRes:           ���        CAUSE_ZERO
//      pUser:          �û���Ϣ
//  ����:
//      ��
//  ע��:
//      ��IDT.dll����,�����û��������
//--------------------------------------------------------------------------------
void callback_IDT_UOptRsp(DWORD dwOptCode, DWORD dwSn, WORD wRes, UData_s* pUser)
{
    if (NULL == pUser)
    {
        IDT_TRACE("callback_IDT_UOptRsp: dwOptCode=%s(%d), dwSn=%d, wRes=%s(%d)",
            GetOamOptStr(dwOptCode), dwOptCode, dwSn, GetCauseStr(wRes), wRes);
    }
    else
    {
        IDT_TRACE("callback_IDT_UOptRsp: dwOptCode=%s(%d), dwSn=%d, wRes=%s(%d), pUser->ucNum=%s",
            GetOamOptStr(dwOptCode), dwOptCode, dwSn, GetCauseStr(wRes), wRes, pUser->ucNum);
    }
}

//--------------------------------------------------------------------------------
//      �������Ӧ
//  ����:
//      dwOptCode:      ������
//      dwSn:           �������
//      wRes:           ���
//      pGroup:         ����Ϣ
//  ����:
//      ��
//  ע��:
//      ��IDT.dll����,�����û��������
//--------------------------------------------------------------------------------
void callback_IDT_GOptRsp(DWORD dwOptCode, DWORD dwSn, WORD wRes,  GData_s *pGroup)
{
    if (NULL == pGroup)
    {
        IDT_TRACE("callback_IDT_GOptRsp: dwOptCode=%s(%d), dwSn=%d, wRes=%s(%d)",
            GetOamOptStr(dwOptCode), dwOptCode, dwSn, GetCauseStr(wRes), wRes);
        return;
    }

    IDT_TRACE("callback_IDT_GOptRsp: dwOptCode=%s(%d), dwSn=%d, wRes=%s(%d), pGroup->ucNum=%s, pGroup->dwNum=%d",
        GetOamOptStr(dwOptCode), dwOptCode, dwSn, GetCauseStr(wRes), wRes, pGroup->ucNum, pGroup->dwNum);
    if (OPT_G_QUERYUSER == dwOptCode)
    {
        if (CAUSE_ZERO != wRes)
            return;

        int i;
        for (i = 0; i < (int)pGroup->dwNum; i++)
        {
            IDT_TRACE("    %s(%s): %d", pGroup->member[i].ucNum, pGroup->member[i].ucName, pGroup->member[i].ucStatus);
        }

        dwSn++;
        if (dwSn >= USER_MAX_GROUP)
            return;

        if (0 == m_IdtUser.m_Group.m_Group[dwSn].m_ucGNum[0])
            return;
        // ������ѯʣ�µ����Ա
        Func_GQueryU(dwSn, m_IdtUser.m_Group.m_Group[dwSn].m_ucGNum);
    }
}

//--------------------------------------------------------------------------------
//      OAM������ʾ
//  ����:
//      dwOptCode:      ������
//                      OPT_USER_ADD        pucUNum,pucUName,ucUAttr��Ч
//                      OPT_USER_DEL        pucUNum��Ч
//                      OPT_USER_MODIFY     pucUNum,pucUName,ucUAttr��Ч
//                      OPT_G_ADD           pucGNum,pucGName��Ч
//                      OPT_G_DEL           pucGNum��Ч
//                      OPT_G_MODIFY        pucGNum,pucGName��Ч
//                      OPT_G_ADDUSER       pucGNum,pucUNum,pucUName,ucUAttr��Ч
//                      OPT_G_DELUSER       pucGNum,pucUNum��Ч
//                      OPT_G_MODIFYUSER    pucGNum,pucUNum,pucUName,ucUAttr��Ч
//      pucGNum:        �����
//      pucGName:       ������
//      pucUNum:        �û�����
//      pucUName:       �û�����
//      ucUAttr:        �û�����
//  ����:
//      ��
//  ע��:
//      ��IDT.dll����,�����û���ɾ��/����û��Ȳ���
//--------------------------------------------------------------------------------
void callback_IDT_OamNotify(DWORD dwOptCode, UCHAR *pucGNum, UCHAR *pucGName, UCHAR *pucUNum, UCHAR *pucUName, UCHAR ucUAttr)
{
    if (NULL != pucGNum)
    {
        IDT_TRACE("callback_IDT_OamNotify: dwOptCode=%s(%d), pucGNum=%s, ucUAttr=%d",
            GetOamOptStr(dwOptCode), dwOptCode, pucGNum, ucUAttr);
    }
    else if (NULL != pucUNum)
    {
        IDT_TRACE("callback_IDT_OamNotify: dwOptCode=%s(%d), pucUNum=%s, ucUAttr=%d",
            GetOamOptStr(dwOptCode), dwOptCode, pucUNum, ucUAttr);
    }
    else
    {
        IDT_TRACE("callback_IDT_OamNotify: dwOptCode=%s(%d), ucUAttr=%d",
            GetOamOptStr(dwOptCode), dwOptCode, ucUAttr);
    }
}

//--------------------------------------------------------------------------------
//      �û����Ժ���
//  ����:
//      pcTxt:          �����ַ���
//  ����:
//      0:              �ɹ�
//      -1:             ʧ��
//  ע��:
//      FREERTOS���ԱȽ��鷳,�������,����Զ�̵���
//--------------------------------------------------------------------------------
extern int _stricmp(const char *string1, const char *string2);
int callback_IDT_Dbg(char *pcTxt)
{
    if (NULL == pcTxt)
        return -1;
    IDT_TRACE("callback_IDT_Dbg: %s", pcTxt);

    MEDIAATTR_s attr;
    if (0 == _stricmp("query", pcTxt))
    {
        //��ѯ��Ϣ
        char cBuf[256];
        IDT_GetStatus(cBuf, sizeof(cBuf));
        IDT_TRACE("IDT_GetStatus: %s", cBuf);
    }
    else if (0 == _stricmp("callout", pcTxt))
    {
        if (-1 != m_IdtUser.m_iCallId)
        {
            IDT_CallRel(m_IdtUser.m_iCallId, NULL, 0);
            osiThreadSleep(500);
            m_IdtUser.m_iCallId = -1;
        }

        //��������
        memset(&attr, 0, sizeof(attr));
        attr.ucAudioRecv = 1;
        attr.ucAudioSend = 1;
        //�Զ˺���2013,��������,�����շ�,��Ƶû��
        m_IdtUser.m_iCallId = IDT_CallMakeOut((char*)"2013", SRV_TYPE_BASIC_CALL, &attr, NULL, NULL, 1, 0, 1, NULL);
        m_IdtUser.m_iRxCount = 0;
        m_IdtUser.m_iTxCount = 0;
    }
    else if (0 == _stricmp("gcallout", pcTxt))
    {
        if (-1 != m_IdtUser.m_iCallId)
        {
            IDT_CallRel(m_IdtUser.m_iCallId, NULL, 0);
            osiThreadSleep(500);
            m_IdtUser.m_iCallId = -1;
        }

        //�������
        memset(&attr, 0, sizeof(attr));
        attr.ucAudioSend = 1;
        //�Զ������2090,���,����ֻ������,��Ƶû��
        m_IdtUser.m_iCallId = IDT_CallMakeOut((char*)"2090", SRV_TYPE_CONF, &attr, NULL, NULL, 1, 0, 1, NULL);
        m_IdtUser.m_iRxCount = 0;
        m_IdtUser.m_iTxCount = 0;
    }
    else if (0 == _stricmp("answer", pcTxt))
    {
        //����Ӧ��
        memset(&attr, 0, sizeof(attr));
        attr.ucAudioRecv = 1;
        attr.ucAudioSend = 1;
        IDT_CallAnswer(m_IdtUser.m_iCallId, &attr, NULL);
    }
    else if (0 == _stricmp("rel", pcTxt))
    {
        //�ͷź���
        IDT_CallRel(m_IdtUser.m_iCallId, NULL, CAUSE_ZERO);
        m_IdtUser.m_iCallId = -1;
    }
    else if (0 == _stricmp("ptton", pcTxt))
    {
        //����Ȩ
        IDT_CallMicCtrl(m_IdtUser.m_iCallId, true);
    }
    else if (0 == _stricmp("pttoff", pcTxt))
    {
        //�ͷŻ�Ȩ
        IDT_CallMicCtrl(m_IdtUser.m_iCallId, false);
    }
    else if (0 == _stricmp("gquery", pcTxt))
    {
        Func_GQueryU(0, m_IdtUser.m_Group.m_Group[0].m_ucGNum);
    }

    return 0;
}

extern int g_iLog;

void IDT_Entry(void*)
{
    m_IdtUser.Reset();

    // 0�ر���־,1����־
    //g_iLog = 0;
    g_iLog = 1;

    IDT_CALLBACK_s CallBack;
    memset(&CallBack, 0, sizeof(CallBack));
    CallBack.pfStatusInd        = callback_IDT_StatusInd;
    CallBack.pfGInfoInd         = callback_IDT_GInfoInd;
    CallBack.pfGUStatusInd      = callback_IDT_GUStatusInd;

    CallBack.pfCallPeerAnswer   = callback_IDT_CallPeerAnswer;
    CallBack.pfCallIn           = callback_IDT_CallIn;
    CallBack.pfCallRelInd       = callback_IDT_CallRelInd;
    CallBack.pfCallRecvAudioData= callback_IDT_CallRecvAudioData;
    CallBack.pfCallMicInd       = callback_IDT_CallMicInd;
    CallBack.pfCallTalkingIDInd = callback_IDT_CallTalkingIDInd;
    CallBack.pfCallRecvAudioData= callback_IDT_CallRecvAudioData;

    CallBack.pfUOptRsp          = callback_IDT_UOptRsp;
    CallBack.pfGOptRsp          = callback_IDT_GOptRsp;
    CallBack.pfOamNotify        = callback_IDT_OamNotify;

    CallBack.pfDbg              = callback_IDT_Dbg;

    IDT_Start(NULL, 1, (char*)"124.160.11.21", 10000, NULL, 0, (char*)"2014", (char*)"2014", 1, &CallBack, 0, 20000, 0);
}

static void appTestTaskEntry(void *argument)
{
    int i, iDelay = 10;

    for(i = 0; ; i++)
    {
        //��֪��Ϊʲô,��ʼ��ʱ,���ȴ�һ������,��ʧ��
        if (i == iDelay)//��10��,���ųɹ�
        {
            IDT_Entry(NULL);
        }
    	OSI_LOGE(0, "app main task running = %d", i);
    	osiThreadSleep(1000);
        if (i >= 1000000)
        {
            i = iDelay + 1;
        }
    }
}

extern "C" void appTestStart(void)
{
#if 0
    OSI_LOGE(0, "----------------------------------------------------");
    gAppTest = osiThreadCreate(
		"IdtTaskEntry", IdtTaskEntry, NULL,
		APPTEST_THREAD_PRIORITY, APPTEST_STACK_SIZE,
		APPTEST_EVENT_QUEUE_SIZE);
    return;
#else
    OSI_LOGE(0, "----------------------------------------------------");
    gAppTest = osiThreadCreate(
		"apptest", appTestTaskEntry, NULL,
		APPTEST_THREAD_PRIORITY, APPTEST_STACK_SIZE,
		APPTEST_EVENT_QUEUE_SIZE);
#endif
}




