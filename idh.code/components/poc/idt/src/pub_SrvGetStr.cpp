#ifndef MC_CC_TM_DEFINE
enum
{
    CCTM_HB_CSA_P               = 1,
    CCTM_HB_CSA_MG              = 2,
    CCTM_HB_BCSM                = 3,
    
    //CSA��Ϣ
    CCTM_WAIT_MGBINGRSP         = 4,
    CCTM_WAIT_MGIVRRSP          = 5,
    CCTM_WAIT_MGCONNRSP         = 6,
    CCTM_WAIT_MGDISCRSP         = 7,
    CCTM_WAIT_MMACCRSP          = 8,
    CCTM_WAIT_PSETUPACK         = 9,
    CCTM_WAIT_PCONNACK          = 10,
    CCTM_WAIT_MY_MGMODMYRSP     = 11,
    CCTM_WAIT_MY_PMODRSP        = 12,
    CCTM_WAIT_MY_MGMODPEERRSP   = 13,
    CCTM_WAIT_P_MGMODRSP        = 14,
    
    //BCSM��Ϣ
    //��Ϣ��ʱ��
    CCTM_WAIT_SETUPACK          = 15,
    CCTM_WAIT_CONNACK           = 16,
    //�պŶ�ʱ��
    CCTM_RECVNUM_START          = 17,
    CCTM_RECVNUM_INTER          = 18,
    CCTM_RECVNUM_TOTAL          = 19,
    //O��
    CCTM_O_PIC_AuthorizeOriginationAttempt = 20,        //�ȴ�MM�Ľ�����Ӧ,CSA
    CCTM_O_PIC_CollectInfomation= 21,
    CCTM_O_PIC_AnalyzeInfomation= 22,
    CCTM_O_PIC_SelectRoute      = 23,                   //�ȴ�MM��·����Ӧ BCSM
    CCTM_O_PIC_AuthorizeCallSetup= 24,
    CCTM_O_PIC_SendCall         = 25,
    CCTM_O_PIC_Alerting         = 26,
    CCTM_O_PIC_Active           = 27,
    CCTM_O_PIC_Suspended        = 28,
    CCTM_O_PIC_Exception        = 29,
    //T��
    CCTM_T_PIC_AuthorizeTerminationAttempt = 30,
    CCTM_T_PIC_SelectFacility   = 31,
    CCTM_T_PIC_PresentCall      = 32,
    CCTM_T_PIC_Alerting         = 33,
    CCTM_T_PIC_Active           = 34,
    CCTM_T_PIC_Suspended        = 35,
    CCTM_T_PIC_Exception        = 36,

    CCTM_RE_CALL                = 37,
    CCTM_CS_MICGET              = 38,
    CCTM_CS_MICREL              = 39,

    CCTM_RECV_NUM               = 40,
    CCTM_RECV_NUM_TOTAL         = 41,

    CCTM_SCAN_DEV               = 42,                   //ɨ���豸
    CCTM_SCAN_TER               = 43,                   //ɨ���ն�

    CCTM_WAIT_SETUP             = 44,
    

    MSG_TM_MAX,
};
#endif
char* GetMcTmStr(WORD wTm)
{
    static char cBuf[32];
    
    switch (wTm)
    {
    case CCTM_HB_CSA_P:
        return (char*)"CCTM_HB_CSA_P";
    case CCTM_HB_CSA_MG:
        return (char*)"CCTM_HB_CSA_MG";
    case CCTM_HB_BCSM:
        return (char*)"CCTM_HB_BCSM";
    
    //CSA��Ϣ
    case CCTM_WAIT_MGBINGRSP:
        return (char*)"CCTM_WAIT_MGBINGRSP";
    case CCTM_WAIT_MGIVRRSP:
        return (char*)"CCTM_WAIT_MGIVRRSP";
    case CCTM_WAIT_MGCONNRSP:
        return (char*)"CCTM_WAIT_MGCONNRSP";
    case CCTM_WAIT_MGDISCRSP:
        return (char*)"CCTM_WAIT_MGDISCRSP";
    case CCTM_WAIT_MMACCRSP:
        return (char*)"CCTM_WAIT_MMACCRSP";
    case CCTM_WAIT_PSETUPACK:
        return (char*)"CCTM_WAIT_PSETUPACK";
    case CCTM_WAIT_PCONNACK:
        return (char*)"CCTM_WAIT_PCONNACK";
    case CCTM_WAIT_MY_MGMODMYRSP:
        return (char*)"CCTM_WAIT_MY_MGMODMYRSP";
    case CCTM_WAIT_MY_PMODRSP:
        return (char*)"CCTM_WAIT_MY_PMODRSP";
    case CCTM_WAIT_MY_MGMODPEERRSP:
        return (char*)"CCTM_WAIT_MY_MGMODPEERRSP";
    case CCTM_WAIT_P_MGMODRSP:
        return (char*)"CCTM_WAIT_P_MGMODRSP";
    
    //BCSM��Ϣ
    //��Ϣ��ʱ��
    case CCTM_WAIT_SETUPACK:
        return (char*)"CCTM_WAIT_SETUPACK";
    case CCTM_WAIT_CONNACK:
        return (char*)"CCTM_WAIT_CONNACK";
    //�պŶ�ʱ��
    case CCTM_RECVNUM_START:
        return (char*)"CCTM_RECVNUM_START";
    case CCTM_RECVNUM_INTER:
        return (char*)"CCTM_RECVNUM_INTER";
    case CCTM_RECVNUM_TOTAL:
        return (char*)"CCTM_RECVNUM_TOTAL";
    //O��
    case CCTM_O_PIC_AuthorizeOriginationAttempt:
        return (char*)"CCTM_O_PIC_AuthorizeOriginationAttempt";
    case CCTM_O_PIC_CollectInfomation:
        return (char*)"CCTM_O_PIC_CollectInfomation";
    case CCTM_O_PIC_AnalyzeInfomation:
        return (char*)"CCTM_O_PIC_AnalyzeInfomation";
    case CCTM_O_PIC_SelectRoute:
        return (char*)"CCTM_O_PIC_SelectRoute";
    case CCTM_O_PIC_AuthorizeCallSetup:
        return (char*)"CCTM_O_PIC_AuthorizeCallSetup";
    case CCTM_O_PIC_SendCall:
        return (char*)"CCTM_O_PIC_SendCall";
    case CCTM_O_PIC_Alerting:
        return (char*)"CCTM_O_PIC_Alerting";
    case CCTM_O_PIC_Active:
        return (char*)"CCTM_O_PIC_Active";
    case CCTM_O_PIC_Suspended:
        return (char*)"CCTM_O_PIC_Suspended";
    case CCTM_O_PIC_Exception:
        return (char*)"CCTM_O_PIC_Exception";
    //T��
    case CCTM_T_PIC_AuthorizeTerminationAttempt:
        return (char*)"CCTM_T_PIC_AuthorizeTerminationAttempt";
    case CCTM_T_PIC_SelectFacility:
        return (char*)"CCTM_T_PIC_SelectFacility";
    case CCTM_T_PIC_PresentCall:
        return (char*)"CCTM_T_PIC_PresentCall";
    case CCTM_T_PIC_Alerting:
        return (char*)"CCTM_T_PIC_Alerting";
    case CCTM_T_PIC_Active:
        return (char*)"CCTM_T_PIC_Active";
    case CCTM_T_PIC_Suspended:
        return (char*)"CCTM_T_PIC_Suspended";
    case CCTM_T_PIC_Exception:
        return (char*)"CCTM_T_PIC_Exception";

    case CCTM_RE_CALL:
        return (char*)"CCTM_RE_CALL";
    case CCTM_CS_MICGET:
        return (char*)"CCTM_CS_MICGET";
    case CCTM_CS_MICREL:
        return (char*)"CCTM_CS_MICREL";

    case CCTM_RECV_NUM:
        return (char*)"CCTM_RECV_NUM";
    case CCTM_RECV_NUM_TOTAL:
        return (char*)"CCTM_RECV_NUM_TOTAL";

    case CCTM_SCAN_DEV:
        return (char*)"CCTM_SCAN_DEV";
    case CCTM_SCAN_TER:
        return (char*)"CCTM_SCAN_TER";

    case CCTM_WAIT_SETUP:
        return (char*)"CCTM_WAIT_SETUP";

    default:
        snprintf(cBuf, sizeof(cBuf), "Tm=%d", wTm);
        return cBuf;        
    }
}

#ifndef IDT_CC_TM_DEFINE
#define     CPTM_MM_REG         0x10        // ע������
#define     CPTM_MM_OFFLINE     0x11        // ����ɨ��
#define     CPTM_MM_PERIOD      0x12        // ����ע��
#define     CPTM_MM_MODIFY      0x13        // �޸��û�����
#define     CPTM_MM_NAT         0x14        // NAT

#define     CPTM_CC_SETUPACK    0x20        // ����SETUP,�ȴ�SETUP_ACK
#define     CPTM_CC_CONN        0x21        // ����SETUP,�ȴ�CONN
#define     CPTM_CC_ANSWER      0x22        // ����CallIn���û�,���û�Ӧ��
#define     CPTM_CC_CONNACK     0x23        // ����CONN���Զ�,�ȴ�CONNACK
#define     CPTM_CC_HB          0x24        // ͨ�����������ʱ��
#define     CPTM_CC_PRESS       0x25        // ������ʱ��
#endif
char* GetIdtTmStr(WORD wTm)
{
    static char cBuf[32];
    
    switch (wTm)
    {
    case CPTM_MM_REG:
        return (char*)"CPTM_MM_REG";
    case CPTM_MM_OFFLINE:
        return (char*)"CPTM_MM_OFFLINE";
    case CPTM_MM_PERIOD:
        return (char*)"CPTM_MM_PERIOD";
    case CPTM_MM_MODIFY:
        return (char*)"CPTM_MM_MODIFY";
    case CPTM_MM_NAT:
        return (char*)"CPTM_MM_NAT";
    case CPTM_CC_SETUPACK:
        return (char*)"CPTM_CC_SETUPACK";
    case CPTM_CC_CONN:
        return (char*)"CPTM_CC_CONN";
    case CPTM_CC_ANSWER:
        return (char*)"CPTM_CC_ANSWER";
    case CPTM_CC_CONNACK:
        return (char*)"CPTM_CC_CONNACK";
    case CPTM_CC_HB:
        return (char*)"CPTM_CC_HB";
    case CPTM_CC_PRESS:
        return (char*)"CPTM_CC_PRESS";
    default:
        snprintf(cBuf, sizeof(cBuf), "Tm=%d", wTm);
        return cBuf;        
    }
}

#ifndef MG_CC_TM_DEFINE
#define     CPTM_SCAN        0x01   //TCPɨ�趨ʱ��
#define     CPTM_HB          0x02   //״̬��������״̬����������ʱ��
#define     CPTM_NUM         0x03   //���ͺ��붨ʱ��
#endif

char* GetMgTmStr(WORD wTm)
{
    static char cBuf[32];
    
    switch (wTm)
    {
    case CPTM_SCAN:
        return (char*)"CPTM_SCAN";
    case CPTM_HB:
        return (char*)"CPTM_HB";
    case CPTM_NUM:
        return (char*)"CPTM_NUM";
    default:
        snprintf(cBuf, sizeof(cBuf), "Tm=%d", wTm);
        return cBuf;        
    }
}

char *GetCauseStr(USHORT usCause)
{
    static char cBuf[32];
    if (CAUSE_TIMER_EXPIRY == (usCause & 0xff))
    {
        WORD ucSrc = (usCause & 0xc000);
        UCHAR ucH = (usCause & 0x3f00) >> 8;
        switch (ucSrc)
        {
        case CAUSE_EXPIRE_IDT://IDT��ʱ����ʱ
            snprintf(cBuf, sizeof(cBuf), "��ʱ����ʱ:IDT-%s", GetIdtTmStr(ucH));
            break;
        case CAUSE_EXPIRE_MC://MC��ʱ����ʱ
            snprintf(cBuf, sizeof(cBuf), "��ʱ����ʱ:MC-%s", GetMcTmStr(ucH));
            break;
        case CAUSE_EXPIRE_MG://MG��ʱ����ʱ
            snprintf(cBuf, sizeof(cBuf), "��ʱ����ʱ:MG-%s", GetMgTmStr(ucH));
            break;
        default:
            snprintf(cBuf, sizeof(cBuf), "��ʱ����ʱ:%d-%d", ucSrc, ucH);
            break;
        }
        return cBuf;
    }
    
    switch (usCause)
    {
    case CAUSE_ZERO:
        return (char*)"����0";
    case CAUSE_UNASSIGNED_NUMBER:
        return (char*)"δ�������";
    case CAUSE_NO_ROUTE_TO_DEST:
        return (char*)"��Ŀ��·��";
    case CAUSE_USER_BUSY:
        return (char*)"�û�æ";
    case CAUSE_ALERT_NO_ANSWER:
        return (char*)"�û���Ӧ��(�˲�Ӧ��)";
    case CAUSE_CALL_REJECTED:
        return (char*)"���б��ܾ�";
    case CAUSE_ROUTING_ERROR:
        return (char*)"·�ɴ���";
    case CAUSE_FACILITY_REJECTED:
        return (char*)"�豸�ܾ�";
    case CAUSE_NORMAL_UNSPECIFIED:
        return (char*)"ͨ��,δָ��";
    case CAUSE_TEMPORARY_FAILURE:
        return (char*)"��ʱ����";
    case CAUSE_RESOURCE_UNAVAIL:
        return (char*)"��Դ������";
    case CAUSE_INVALID_CALL_REF:
        return (char*)"����ȷ�ĺ��вο���";
    case CAUSE_MANDATORY_IE_MISSING:
        return (char*)"��ѡ��Ϣ��Ԫ��ʧ";
    case CAUSE_TIMER_EXPIRY:
        return (char*)"��ʱ����ʱ";
    case CAUSE_CALL_REJ_BY_USER:
        return (char*)"���û��ܾ�";
    case CAUSE_CALLEE_STOP:
        return (char*)"����ֹͣ";
    case CAUSE_USER_NO_EXIST:
        return (char*)"�û�������";
    case CAUSE_MS_UNACCESSAVLE:
        return (char*)"���ɽ���";
    case CAUSE_MS_POWEROFF:
        return (char*)"�û��ػ�";
    case CAUSE_FORCE_RELEASE:
        return (char*)"ǿ�Ʋ���";
    case CAUSE_HO_RELEASE:
        return (char*)"�л�����";
    case CAUSE_CALL_CONFLICT:
        return (char*)"���г�ͻ";
    case CAUSE_TEMP_UNAVAIL:
        return (char*)"��ʱ�޷���ͨ";
    case CAUSE_AUTH_ERROR:
        return (char*)"��Ȩ����";
    case CAUSE_NEED_AUTH:
        return (char*)"��Ҫ��Ȩ";
    case CAUSE_SDP_SEL:
        return (char*)"SDPѡ�����";
    case CAUSE_MS_ERROR:
        return (char*)"ý����Դ����";
    case CAUSE_INNER_ERROR:
        return (char*)"�ڲ�����";
    case CAUSE_PRIO_ERROR:
        return (char*)"���ȼ�����";
    case CAUSE_SRV_CONFLICT:
        return (char*)"ҵ���ͻ";
    case CAUSE_NOTREL_RECALL:
        return (char*)"����ҵ��Ҫ��,���ͷ�,�����غ���ʱ��";
    case CAUSE_NO_CALL:
        return (char*)"���в�����";
    case CAUSE_ERROR_IPADDR:
        return (char*)"����IP��ַ������ҵ������";
    case CAUSE_DUP_REG:
        return (char*)"�ظ�ע��";
    case CAUSE_MG_OFFLINE:
        return (char*)"MG����";
    case CAUSE_DS_REQ_QUITCALL:
        return (char*)"����ԱҪ���˳�����";
    case CAUSE_DB_ERROR:
        return (char*)"���ݿ��������";
    case CAUSE_TOOMANY_USER:
        return (char*)"�û���̫��";
    case CAUSE_SAME_USERNUM:
        return (char*)"��ͬ���û�����";
    case CAUSE_SAME_USERIPADDR:
        return (char*)"��ͬ�Ĺ̶�IP��ַ";
    case CAUSE_PARAM_ERROR:
        return (char*)"��������";
    case CAUSE_SAME_GNUM:
        return (char*)"��ͬ�������";
    case CAUSE_TOOMANY_GROUP:
        return (char*)"̫�����";
    case CAUSE_NO_GROUP:
        return (char*)"û�������";
    case CAUSE_SAME_USERNAME:
        return (char*)"��ͬ���û�����";
    case CAUSE_OAM_OPT_ERROR:
        return (char*)"OAM��������";
    case CAUSE_INVALID_NUM_FORMAT:
        return (char*)"����ȷ�ĵ�ַ��ʽ";
    case CAUSE_INVALID_DNSIP:
        return (char*)"DNS��IP��ַ����";
    case CAUSE_SRV_NOTSUPPORT:
        return (char*)"��֧�ֵ�ҵ��";
    case CAUSE_MEDIA_NOTDATA:
        return (char*)"û��ý������";
    case CAUSE_RECALL:
        return (char*)"���º���";
    case CAUSE_LINK_DISC:
        return (char*)"����";
    case CAUSE_ORG_RIGHT:
        return (char*)"��֯ԽȨ";
    case CAUSE_SAME_ORGNUM:
        return (char*)"��ͬ����֯����";
    case CAUSE_SAME_ORGNAME:
        return (char*)"��ͬ����֯����";
    case CAUSE_UNASSIGNED_ORG:
        return (char*)"δ�������֯����";
    case CAUSE_INOTHER_ORG:
        return (char*)"��������֯��";
    case CAUSE_HAVE_GCALL:
        return (char*)"�Ѿ����������";
    case CAUSE_HAVE_CONF:
        return (char*)"�Ѿ��л������";
    case CAUSE_SEG_FORMAT:
        return (char*)"����ĺŶθ�ʽ";
    case CAUSE_USEG_CONFLICT:
        return (char*)"�û�����γ�ͻ";
    case CAUSE_GSEG_CONFLICT:
        return (char*)"�����γ�ͻ";
    case CAUSE_NOTIN_SEG:
        return (char*)"���ںŶ���";
    case CAUSE_USER_IN_TOOMANY_GROUP:
        return (char*)"�û�������̫��";
    case CAUSE_DSSEG_CONFLICT:
        return (char*)"����̨�Ŷγ�ͻ";
    case CAUSE_OUTNETWORK_NUM:
        return (char*)"�����û�";
    case CAUSE_CFU:
        return (char*)"����������ǰת";
    case CAUSE_CFB:
        return (char*)"��æ����ǰת";
    case CAUSE_CFNRc:
        return (char*)"���ɼ�����ǰת";
    case CAUSE_CFNRy:
        return (char*)"��Ӧ�����ǰת";
    case CAUSE_MAX_FWDTIME:
        return (char*)"���ǰת����";
    case CAUSE_OAM_RIGHT:
        return (char*)"OAM������Ȩ��";
    case CAUSE_DGT_ERROR:
        return (char*)"�������";
    case CAUSE_RESOURCE_NOTENOUGH:
        return (char*)"��Դ����";
    case CAUSE_ORG_EXPIRE:
        return (char*)"��֯����";
    case CAUSE_USER_EXPIRE:
        return (char*)"�û�����";
    case CAUSE_SAME_ROUTENAME:
        return (char*)"��ͬ��·������";
    case CAUSE_UNASSIGNED_ROUTE:
        return (char*)"δ�����·��";
    case CAUSE_OAM_FWD:
        return (char*)"OAM��Ϣǰת";
    case CAUSE_UNCFG_MAINNUM:
        return (char*)"δ����������";
    case CAUSE_G_NOUSER:
        return (char*)"����û���û�";
    case CAUSE_U_LOCK_G:
        return (char*)"�û�������������";
    case CAUSE_U_OFFLINE_G:
        return (char*)"����û�������û�";
    default:
        snprintf(cBuf, sizeof(cBuf), "CAUSE=%d", usCause);
        return cBuf;
    }
}

//��Ϣ�붨��
#ifndef MSG_DEFINE
enum
{
    MSG_TRANS = 1,                  //͸����Ϣ

    // ������Ϣ
    MSG_HB,                         //������Ϣ

    // �ƶ��Թ���
    MSG_MM_REGREQ           = 0x10, //�Ǽ�����
    MSG_MM_REGRSP,                  //�Ǽ���Ӧ
    MSG_MM_ACCREQ,                  //��������
    MSG_MM_ACCRSP,                  //������Ӧ
    MSG_MM_ROUTEREQ,                //·������
    MSG_MM_ROUTERSP,                //·����Ӧ
    MSG_MM_PROFREQ,                 //��ȡҵ����Ϣ
    MSG_MM_PROFRSP,                 //��ȡҵ����Ϣ��Ӧ
    MSG_MM_QUIT,                    //ҵ���˳�
    MSG_MM_MODREQ,                  //�޸��û���Ϣ
    MSG_MM_MODRSP,                  //�޸��û���Ϣ��Ӧ
    MSG_MM_PASSTHROUGH,             //͸��ͨ��
    MSG_MM_PROXYREGREQ,             //����ע��
    MSG_MM_PROXYREGRSP,             //����ע����Ӧ
    MSG_MM_NAT,                     //NAT

    //MG��Ϣ
    MSG_MG_BINDREQ          = 0x30, //������
    MSG_MG_BINDRSP,                 //����Ӧ
    MSG_MG_IVRREQ,                  //IVR����
    MSG_MG_IVRRSP,                  //IVR��Ӧ
    MSG_MG_CONNREQ,                 //��������
    MSG_MG_CONNRSP,                 //������Ӧ
    MSG_MG_MODIFYREQ,               //�޸�����
    MSG_MG_MODIFYRSP,               //�޸���Ӧ
    MSG_MG_DISCREQ,                 //�Ͽ�����
    MSG_MG_DISCRSP,                 //�Ͽ���Ӧ
    MSG_MG_BINDCLR,                 //�����
    MSG_MG_EVENT,                   //�¼�,��Ҫ���պ�
    MSG_MG_STATEIND,                //״ָ̬ʾ
    MSG_MG_INFO,                    //INFO
    MSG_MG_DTMF,                    //DTMF

    //������Ϣ
    MSG_CC_SETUP            = 0x50, //����
    MSG_CC_SETUPACK,                //����Ӧ��
    MSG_CC_ALERT,                   //����
    MSG_CC_CONN,                    //����
    MSG_CC_CONNACK,                 //����Ӧ��
    MSG_CC_INFO,                    //��Ϣ
    MSG_CC_INFOACK,                 //��ϢӦ��
    MSG_CC_MODIFY,                  //ý���޸�
    MSG_CC_MODIFYACK,               //ý���޸�Ӧ��
    MSG_CC_REL,                     //�ͷ�
    MSG_CC_RLC,                     //�ͷ����
    MSG_CC_USERCTRL,                //�û�����,�������/�߳�����
    MSG_CC_STREAMCTRL,              //������
    MSG_CC_CONFSTATUSREQ,           //�᳡״̬����
    MSG_CC_CONFSTATUSRSP,           //�᳡״̬��Ӧ

    //����ά��
    MSG_OAM_REQ             = 0x70, //��������
    MSG_OAM_RSP,                    //������Ӧ
    MSG_OAM_NOTIFY,                 //OAM������ʾ
    MSG_OAM_SETID,                  //����OAM ID��
    MSG_OAM_CTRL,                   //��OAMģ��Ŀ�������
    MSG_OAM_CROSS_G2U,              //��ڵ��鵽�û���Ϣ
    MSG_OAM_CROSS_U2G,              //��ڵ��û�������Ϣ
    MSG_OAM_MC2MCC,                 //�ֿط��������ܿط�����
    MSG_OAM_MCC2MC,                 //�ܿط��������ֿط�����

    //�ƶ��Թ�������
    MSG_MM_STATUSSUBS       = 0x90, //����״̬/GPS����
    MSG_MM_STATUSNOTIFY,            //״̬��ʾ
    MSG_MM_GPSREPORT,               //GPS�ϱ�
    MSG_MM_GPSRECIND,               //GPS����ָʾ
    MSG_MM_GPSHISQUERYREQ,          //GPS��ʷ���ݲ�ѯ����
    MSG_MM_GPSHISQUERYRSP,          //GPS��ʷ���ݲ�ѯ��Ӧ
    MSG_MM_GMEMBEREXTINFO,          //���û���չ��Ϣ
    MSG_MM_NSQUERYREQ,              //�洢���ݲ�ѯ����
    MSG_MM_NSQUERYRSP,              //�洢���ݲ�ѯ��Ӧ

    //ý�����ֵ�����
    MSG_MA_OPENREQ          = 0xb0, //������
    MSG_MA_OPENRSP,                 //����Ӧ
    MSG_MA_REL,                     //�ͷ�
    
    MSG_MAX
};
#endif


char *GetSrvMsgStr(WORD wMsgId)
{
    static char cBuf[32];

    switch (wMsgId)
    {
    case MSG_TRANS:
        return (char*)"TRANS";

    // ������Ϣ
    case MSG_HB:
        return (char*)"HB";

    // �ƶ��Թ���
    case MSG_MM_REGREQ:
        return (char*)"MM_REGREQ";
    case MSG_MM_REGRSP:
        return (char*)"MM_REGRSP";
    case MSG_MM_ACCREQ:
        return (char*)"MM_ACCREQ";
    case MSG_MM_ACCRSP:
        return (char*)"MM_ACCRSP";
    case MSG_MM_ROUTEREQ:
        return (char*)"MM_ROUTEREQ";
    case MSG_MM_ROUTERSP:
        return (char*)"MM_ROUTERSP";
    case MSG_MM_PROFREQ:
        return (char*)"MM_PROFREQ";
    case MSG_MM_PROFRSP:
        return (char*)"MM_PROFRSP";
    case MSG_MM_QUIT:
        return (char*)"MM_QUIT";
    case MSG_MM_MODREQ:
        return (char*)"MM_MODREQ";
    case MSG_MM_MODRSP:
        return (char*)"MM_MODRSP";
    case MSG_MM_PASSTHROUGH:
        return (char*)"MM_PASSTHROUGH";
    case MSG_MM_PROXYREGREQ:
        return (char*)"MM_PROXYREGREQ";
    case MSG_MM_PROXYREGRSP:
        return (char*)"MM_PROXYREGRSP";

    //MG��Ϣ
    case MSG_MG_BINDREQ:
        return (char*)"MG_BINDREQ";
    case MSG_MG_BINDRSP:
        return (char*)"MG_BINDRSP";
    case MSG_MG_IVRREQ:
        return (char*)"MG_IVRREQ";
    case MSG_MG_IVRRSP:
        return (char*)"MG_IVRRSP";
    case MSG_MG_CONNREQ:
        return (char*)"MG_CONNREQ";
    case MSG_MG_CONNRSP:
        return (char*)"MG_CONNRSP";
    case MSG_MG_MODIFYREQ:
        return (char*)"MG_MODIFYREQ";
    case MSG_MG_MODIFYRSP:
        return (char*)"MG_MODIFYRSP";
    case MSG_MG_DISCREQ:
        return (char*)"MG_DISCREQ";
    case MSG_MG_DISCRSP:
        return (char*)"MG_DISCRSP";
    case MSG_MG_BINDCLR:
        return (char*)"MG_BINDCLR";
    case MSG_MG_EVENT:
        return (char*)"MG_EVENT";
    case MSG_MG_STATEIND:
        return (char*)"MG_STATEIND";
    case MSG_MG_INFO:
        return (char*)"MSG_MG_INFO";
    case MSG_MG_DTMF:
        return (char*)"MSG_MG_DTMF";

    //������Ϣ
    case MSG_CC_SETUP:
        return (char*)"CC_SETUP";
    case MSG_CC_SETUPACK:
        return (char*)"CC_SETUPACK";
    case MSG_CC_ALERT:
        return (char*)"CC_ALERT";
    case MSG_CC_CONN:
        return (char*)"CC_CONN";
    case MSG_CC_CONNACK:
        return (char*)"CC_CONNACK";
    case MSG_CC_INFO:
        return (char*)"CC_INFO";
    case MSG_CC_INFOACK:
        return (char*)"CC_INFOACK";
    case MSG_CC_MODIFY:
        return (char*)"CC_MODIFY";
    case MSG_CC_MODIFYACK:
        return (char*)"CC_MODIFYACK";
    case MSG_CC_REL:
        return (char*)"CC_REL";
    case MSG_CC_RLC:
        return (char*)"CC_RLC";
    case MSG_CC_USERCTRL:
        return (char*)"CC_USERCTRL";
    case MSG_CC_STREAMCTRL:
        return (char*)"CC_STREAMCTRL";
    case MSG_CC_CONFSTATUSREQ:
        return (char*)"CC_CONFSTATUSREQ";
    case MSG_CC_CONFSTATUSRSP:
        return (char*)"CC_CONFSTATUSRSP";

    //����ά��
    case MSG_OAM_REQ:
        return (char*)"OAM_REQ";
    case MSG_OAM_RSP:
        return (char*)"OAM_RSP";
    case MSG_OAM_NOTIFY:
        return (char*)"OAM_NOTIFY";
    case MSG_OAM_SETID:
        return (char*)"OAM_SETID";
    case MSG_OAM_CTRL:
        return (char*)"OAM_CTRL";

    case MSG_MM_STATUSSUBS:
        return (char*)"MM_STATUSSUBS";
    case MSG_MM_STATUSNOTIFY:
        return (char*)"MM_STATUSNOTIFY";
    case MSG_MM_GPSREPORT:
        return (char*)"MM_GPSREPORT";
    case MSG_MM_GPSRECIND:
        return (char*)"MM_GPSRECIND";
    case MSG_MM_GPSHISQUERYREQ:
        return (char*)"MM_GPSHISQUERYREQ";
    case MSG_MM_GPSHISQUERYRSP:
        return (char*)"MM_GPSHISQUERYRSP";
    case MSG_MM_GMEMBEREXTINFO:
        return (char*)"MSG_MM_GMEMBEREXTINFO";
    case MSG_MM_NSQUERYREQ:
        return (char*)"MSG_MM_NSQUERYREQ";
    case MSG_MM_NSQUERYRSP:
        return (char*)"MSG_MM_NSQUERYRSP";

    case MSG_MA_OPENREQ:
        return (char*)"MSG_MA_OPENREQ";
    case MSG_MA_OPENRSP:
        return (char*)"MSG_MA_OPENRSP";
    case MSG_MA_REL:
        return (char*)"MSG_MA_REL";

    default:
        snprintf(cBuf, sizeof(cBuf), "MSGID=%d", wMsgId);
        return cBuf;
    }
}

#ifdef WINDOWS
WORD GetSrvMsgCode(std::string &msg)
{
    if (0 == msg.compare("TRANS"))
    {
        return MSG_TRANS;
    }
    else if (0 == msg.compare("HB"))
    {
        return MSG_HB;
    }
    // �ƶ��Թ���
    else if (0 == msg.compare("MM_REGREQ"))
    {
        return MSG_MM_REGREQ;
    }
    else if (0 == msg.compare("MM_REGRSP"))
    {
        return MSG_MM_REGRSP;
    }
    else if (0 == msg.compare("MM_ACCREQ"))
    {
        return MSG_MM_ACCREQ;
    }
    else if (0 == msg.compare("MM_ACCRSP"))
    {
        return MSG_MM_ACCRSP;
    }
    else if (0 == msg.compare("MM_ROUTEREQ"))
    {
        return MSG_MM_ROUTEREQ;
    }
    else if (0 == msg.compare("MM_ROUTERSP"))
    {
        return MSG_MM_ROUTERSP;
    }
    else if (0 == msg.compare("MM_PROFREQ"))
    {
        return MSG_MM_PROFREQ;
    }
    else if (0 == msg.compare("MM_PROFRSP"))
    {
        return MSG_MM_PROFRSP;
    }
    else if (0 == msg.compare("MM_QUIT"))
    {
        return MSG_MM_QUIT;
    }
    else if (0 == msg.compare("MM_MODREQ"))
    {
        return MSG_MM_MODREQ;
    }
    else if (0 == msg.compare("MM_MODRSP"))
    {
        return MSG_MM_MODRSP;
    }
    else if (0 == msg.compare("MM_PASSTHROUGH"))
    {
        return MSG_MM_PASSTHROUGH;
    }
    else if (0 == msg.compare("MM_PROXYREGREQ"))
    {
        return MSG_MM_PROXYREGREQ;
    }
    else if (0 == msg.compare("MM_PROXYREGRSP"))
    {
        return MSG_MM_PROXYREGRSP;
    }

    //MG��Ϣ
    else if (0 == msg.compare("MG_BINDREQ"))
    {
        return MSG_MG_BINDREQ;
    }
    else if (0 == msg.compare("MG_BINDRSP"))
    {
        return MSG_MG_BINDRSP;
    }
    else if (0 == msg.compare("MG_IVRREQ"))
    {
        return MSG_MG_IVRREQ;
    }
    else if (0 == msg.compare("MG_IVRRSP"))
    {
        return MSG_MG_IVRRSP;
    }
    else if (0 == msg.compare("MG_CONNREQ"))
    {
        return MSG_MG_CONNREQ;
    }
    else if (0 == msg.compare("MG_CONNRSP"))
    {
        return MSG_MG_CONNRSP;
    }
    else if (0 == msg.compare("MG_MODIFYREQ"))
    {
        return MSG_MG_MODIFYREQ;
    }
    else if (0 == msg.compare("MG_MODIFYRSP"))
    {
        return MSG_MG_MODIFYRSP;
    }
    else if (0 == msg.compare("MG_DISCREQ"))
    {
        return MSG_MG_DISCREQ;
    }
    else if (0 == msg.compare("MG_DISCRSP"))
    {
        return MSG_MG_DISCRSP;
    }
    else if (0 == msg.compare("MG_BINDCLR"))
    {
        return MSG_MG_BINDCLR;
    }
    else if (0 == msg.compare("MG_EVENT"))
    {
        return MSG_MG_EVENT;
    }
    else if (0 == msg.compare("MG_STATEIND"))
    {
        return MSG_MG_STATEIND;
    }

    //������Ϣ
    else if (0 == msg.compare("CC_SETUP"))
    {
        return MSG_CC_SETUP;
    }
    else if (0 == msg.compare("CC_SETUPACK"))
    {
        return MSG_CC_SETUPACK;
    }
    else if (0 == msg.compare("CC_ALERT"))
    {
        return MSG_CC_ALERT;
    }
    else if (0 == msg.compare("CC_CONN"))
    {
        return MSG_CC_CONN;
    }
    else if (0 == msg.compare("CC_CONNACK"))
    {
        return MSG_CC_CONNACK;
    }
    else if (0 == msg.compare("CC_INFO"))
    {
        return MSG_CC_INFO;
    }
    else if (0 == msg.compare("CC_INFOACK"))
    {
        return MSG_CC_INFOACK;
    }
    else if (0 == msg.compare("CC_MODIFY"))
    {
        return MSG_CC_MODIFY;
    }
    else if (0 == msg.compare("CC_MODIFYACK"))
    {
        return MSG_CC_MODIFYACK;
    }
    else if (0 == msg.compare("CC_REL"))
    {
        return MSG_CC_REL;
    }
    else if (0 == msg.compare("CC_RLC"))
    {
        return MSG_CC_RLC;
    }
    else if (0 == msg.compare("CC_USERCTRL"))
    {
        return MSG_CC_USERCTRL;
    }
    else if (0 == msg.compare("CC_STREAMCTRL"))
    {
        return MSG_CC_STREAMCTRL;
    }
    else if (0 == msg.compare("CC_CONFSTATUSREQ"))
    {
        return MSG_CC_CONFSTATUSREQ;
    }
    else if (0 == msg.compare("CC_CONFSTATUSRSP"))
    {
        return MSG_CC_CONFSTATUSRSP;
    }

    //����ά��
    else if (0 == msg.compare("OAM_REQ"))
    {
        return MSG_OAM_REQ;
    }
    else if (0 == msg.compare("OAM_RSP"))
    {
        return MSG_OAM_RSP;
    }
    else if (0 == msg.compare("OAM_NOTIFY"))
    {
        return MSG_OAM_NOTIFY;
    }
    else if (0 == msg.compare("OAM_SETID"))
    {
        return MSG_OAM_SETID;
    }
    else if (0 == msg.compare("OAM_CTRL"))
    {
        return MSG_OAM_CTRL;
    }
    
    else if (0 == msg.compare("MM_STATUSSUBS"))
    {
        return MSG_MM_STATUSSUBS;
    }
    else if (0 == msg.compare("MM_STATUSNOTIFY"))
    {
        return MSG_MM_STATUSNOTIFY;
    }
    else if (0 == msg.compare("MM_GPSREPORT"))
    {
        return MSG_MM_GPSREPORT;
    }
    else if (0 == msg.compare("MM_GPSRECIND"))
    {
        return MSG_MM_GPSRECIND;
    }
    else if (0 == msg.compare("MM_GPSHISQUERYREQ"))
    {
        return MSG_MM_GPSHISQUERYREQ;
    }
    else if (0 == msg.compare("MM_GPSHISQUERYRSP"))
    {
        return MSG_MM_GPSHISQUERYRSP;
    }
    else if (0 == msg.compare("MSG_MM_GMEMBEREXTINFO"))
    {
        return MSG_MM_GMEMBEREXTINFO;
    }
    else if (0 == msg.compare("MSG_MM_NSQUERYREQ"))
    {
        return MSG_MM_NSQUERYREQ;
    }
    else if (0 == msg.compare("MSG_MM_NSQUERYRSP"))
    {
        return MSG_MM_NSQUERYRSP;
    }    
    else if (0 == msg.compare("MSG_MA_OPENREQ"))
    {
        return MSG_MA_OPENREQ;
    }
    else if (0 == msg.compare("MSG_MA_OPENRSP"))
    {
        return MSG_MA_OPENRSP;
    }
    else if (0 == msg.compare("MSG_MA_REL"))
    {
        return MSG_MA_REL;
    }

    return MSG_MAX;
}
#endif

//��Ϣ��Ԫ�붨��
#ifndef MSG_IE_DEFINE
enum
{
    // 01
    MSG_IE_SYSTIME = 1,             //ϵͳʱ��
    MSG_IE_CAUSE,                   //ԭ��ֵ
    MSG_IE_PLAYINFO,                //������Ϣ
    MSG_IE_APTYPE,                  //����Э������
    MSG_IE_APPOS,                   //����Э���ַ
    MSG_IE_APVER,                   //����Э��汾��
    MSG_IE_AUTHALG,                 //��Ȩ�㷨
    MSG_IE_AUTHNAME,                //��Ȩʹ�õ��û���
    MSG_IE_AUTHNONCE,               //��Ȩʹ�õ������
    MSG_IE_AUTHREALM,               //��Ȩʹ�õ�����

    // 11
    MSG_IE_AUTHRSP,                 //��Ȩ���
    MSG_IE_AUTHURI,                 //��Ȩʹ�õ�URI
    MSG_IE_MYNUM,                   //���˺���
    MSG_IE_PEERNUM,                 //�Զ˺���
    MSG_IE_CONF,                    //������Դ
    MSG_IE_DNSADDR,                 //DNS��ַ,contact��DNS��ַ
    MSG_IE_DSTLEGID,                //Ŀ��Leg ID
    MSG_IE_EXPIRED,                 //����ʱ��
    MSG_IE_FROMADDR,                //Դ��ַ,contact��IPV4��ַ
    MSG_IE_IDLIST,                  //ID�б�

    // 21
    MSG_IE_INFO,                    //��Ϣ
    MSG_IE_LEGID,                   //Leg ID
    MSG_IE_MGFSMID,                 //MG״̬��ID
    MSG_IE_MSGCODE,                 //��Ϣ��
    MSG_IE_MYSDP,                   //����SDP
    MSG_IE_PEERSDP,                 //�Զ�SDP
    MSG_IE_OPCODE,                  //������
    MSG_IE_RECVNUMTYPE,             //�պŷ�ʽ
    MSG_IE_REGTYPE,                 //ע������
    MSG_IE_RESULT,                  //���

    // 31
    MSG_IE_RSPCODE,                 //SIPЭ����Ӧ��
    MSG_IE_RSPTYPE,                 //��Ӧ����
    MSG_IE_SN,                      //���к�
    MSG_IE_SRCLEGID,                //ԴLeg ID
    MSG_IE_SRVTYPE,                 //ҵ������
    MSG_IE_TOADDR,                  //�շ���ַ
    MSG_IE_TRANSMSGID,              //͸����ϢID
    MSG_IE_TRANSMSG,                //͸����Ϣ����
    MSG_IE_USRNUM,                  //�û��绰����
    MSG_IE_USRNAME,                 //�û���

    // 41
    MSG_IE_USRPOS,                  //�û�λ����Ϣ
    MSG_IE_PWD,                     //����
    MSG_IE_FWDTIME,                 //ǰ������
    MSG_IE_FWDTYPE,                 //ǰ������
    MSG_IE_USRGINFO,                //�û���������Ϣ
    MSG_IE_CAMINFO,                 //����ͷ��Ϣ
    MSG_IE_ORIGSRVCS,               //ʼ����CS����
    MSG_IE_PRIO,                    //���ȼ�
    MSG_IE_IDS,                     //�Ƿ���IDS
    MSG_IE_NOTMODSDP,               //�Ƿ�Ҫ�޸��޸�SDP

    // 51
    MSG_IE_WATCHLEG,                //�����
    MSG_IE_CONFNUM,                 //�᳡����
    MSG_IE_OPSN,                    //�������
    MSG_IE_USERTYPE,                //�û�����
    MSG_IE_USERATTR,                //�û�����
    MSG_IE_USERSTATUS,              //�û�״̬
    MSG_IE_CONCURRENT,              //������
    MSG_IE_USERIPADDR,              //�û�IP��ַ
    MSG_IE_USERADDR,                //�û���ַ
    MSG_IE_USERCONTACT,             //�û���ϵ��ʽ

    // 61
    MSG_IE_USERDESC,                //�û�����
    MSG_IE_CTIME,                   //����ʱ��
    MSG_IE_VTIME,                   //����ʱ��
    MSG_IE_GNUM,                    //�����
    MSG_IE_GNAME,                   //������
    MSG_IE_GNUMU,                   //�����û�����
    MSG_IE_GMEMBER,                 //���ڳ�Ա
    MSG_IE_TRANSID,                 //TRANS ID
    MSG_IE_TRUENUM,                 //��ʵ����,ԭʼ���к���
    MSG_IE_TRUENAME,                //��ʵ����,ԭʼ��������

    // 71
    MSG_IE_ORIGCALLEDNUM,           //ԭʼ���к���
    MSG_IE_ORIGCALLEDNAME,          //ԭʼ��������
	MSG_IE_IMINFO,
    MSG_IE_QUERYEXT,                //��ѯʹ�õĸ��Ӳ���
    MSG_IE_STATUSSUBS,              //״̬����
    MSG_IE_STATUSNOTIFY,            //״ָ̬ʾ
    MSG_IE_GMEMBERSTATUS,           //��/�û�״̬
    MSG_IE_GPSREC,                  //GPS��¼
    MSG_IE_GPSQUERYEXT,             //GPS��ʷ���ݲ�ѯ����
    MSG_IE_CALLEXT,                 //���и�����Ϣ

    // 81
    MSG_IE_BCSMID,                  //BCSM״̬��ID
    MSG_IE_BCSMSTATE,               //BCSM״̬
    MSG_IE_CALLCONF,                //���л�����Ϣ
    MSG_IE_CALLUSERCTRL,            //�����û�����
    MSG_IE_CALLSTREAMCTRL,          //����������
    MSG_IE_PEERNUM_EX,              //��չ�ı��к���                �������Ƶ����,������4001-1-hkcam-192.168.2.38-8000-admin-admin123��������Ϣ
    MSG_IE_REFSDP,                  //�ο�SDP
    MSG_IE_AGNUM,                   //���ӵ������,����ͷ��
    MSG_IE_FTPSERVERINFO,           //FTP��������Ϣ
    MSG_IE_GPSSERVERINFO,           //GPS��������Ϣ

    // 91
    MSG_IE_WORKINFO,                //WORKINFO�ַ���
    MSG_IE_ORGLIST,                 //��֯�б�
    MSG_IE_INVOKENUM,               //��������ĺ���
    MSG_IE_TASKSERVERINFO,          //�����������Ϣ
    MSG_IE_USERPROXY,               //�û�������Ϣ
    MSG_IE_CAUSESTR,                //ԭ���ַ���
    MSG_IE_ORGLIST_MGR,             //��֯�б�,����ʱ�õ�
    MSG_IE_DATAROLE,                //����Ȩ��
    MSG_IE_MENUROLE,                //�˵�Ȩ��
    MSG_IE_DEPTNUM,                 //���ź���

    // 101
    MSG_IE_ID,                      //���֤
    MSG_IE_WORKID,                  //����֤
    MSG_IE_WORKUNIT,                //��λ
    MSG_IE_TITLE,                   //ְ��
    MSG_IE_CARID,                   //����
    MSG_IE_TEL,                     //�绰����
    MSG_IE_OTHER,                   //����
    MSG_IE_SOSNUM,                  //SOS����
    MSG_IE_GPSRECSTR,               //GPS��¼,STR��ʽ
    MSG_IE_GTYPE,                   //������

    // 111
    MSG_IE_GPSSERVERINFOWSS,        //GPS��������Ϣ,WSS
    MSG_IE_FWDNUM,                  //ǰת
    MSG_IE_GMEMBEREXTINFO,          //���û���չ��Ϣ
    MSG_IE_RESREPORT,               //��Դ����
    MSG_IE_FSMPAIR,                 //״̬����
    MSG_IE_CALLREFNUM,              //���вο���
    MSG_IE_LEGEXT,                  //����չ��Ϣ
    MSG_IE_USERMARK,                //�û���־
    MSG_IE_USERCALLREF,             //�û�ʹ�õĺ��вο���,�������Լ�,����������,�鿴�ǶԶ�
    MSG_IE_ROUTECFG,                //·��������Ϣ

    // 121
    MSG_IE_COMMQUERY,               //ͨ�ò�ѯ����
    MSG_IE_MYUG,                    //�Լ����û�������
    MSG_IE_LICENSE_COUNT,           //��Ȩ��
    MSG_IE_RUN_COUNT,               //������
    MSG_IE_ASSIGN_TYPE,             //MC����ҵ����֯��ʽ
    MSG_IE_SUBNUM,                  //�ֻ���
    MSG_IE_SLOT,                    //ʱ϶��
    MSG_IE_LIC,                     //��Ȩ��Ϣ
    MSG_IE_NSQUERYEXT,              //NS��ѯ����

    MSG_IE_MAX
};
#endif

#if 1
char *GetSrvIEStr(WORD wIEId)
{
    static char cBuf[32];

    switch (wIEId)
    {
    // 01
    case MSG_IE_SYSTIME:
        return (char*)"SysTime";
    case MSG_IE_CAUSE:
        return (char*)"Cause";
    case MSG_IE_PLAYINFO:
        return (char*)"PlayInfo";
    case MSG_IE_APTYPE:
        return (char*)"ApType";
    case MSG_IE_APPOS:
        return (char*)"ApPos";
    case MSG_IE_APVER:
        return (char*)"ApVer";
    case MSG_IE_AUTHALG:
        return (char*)"AuthAlg";
    case MSG_IE_AUTHNAME:
        return (char*)"AuthName";
    case MSG_IE_AUTHNONCE:
        return (char*)"AuthNonce";
    case MSG_IE_AUTHREALM:
        return (char*)"AuthRealm";

    // 11
    case MSG_IE_AUTHRSP:
        return (char*)"AuthRsp";
    case MSG_IE_AUTHURI:
        return (char*)"AuthUri";
    case MSG_IE_MYNUM:
        return (char*)"MyNum";
    case MSG_IE_PEERNUM:
        return (char*)"PeerNum";
    case MSG_IE_CONF:
        return (char*)"Conf";
    case MSG_IE_DNSADDR:
        return (char*)"DnsAddr";
    case MSG_IE_DSTLEGID:
        return (char*)"DstLegID";
    case MSG_IE_EXPIRED:
        return (char*)"Expired";
    case MSG_IE_FROMADDR:
        return (char*)"FromAddr";
    case MSG_IE_IDLIST:
        return (char*)"IdList";

    // 21
    case MSG_IE_INFO:
        return (char*)"Info";
    case MSG_IE_LEGID:
        return (char*)"LegId";
    case MSG_IE_MGFSMID:
        return (char*)"MgFsmID";
    case MSG_IE_MSGCODE:
        return (char*)"MsgCode";
    case MSG_IE_MYSDP:
        return (char*)"MySdp";
    case MSG_IE_PEERSDP:
        return (char*)"PeerSdp";
    case MSG_IE_OPCODE:
        return (char*)"OpCode";
    case MSG_IE_RECVNUMTYPE:
        return (char*)"RecvNumType";
    case MSG_IE_REGTYPE:
        return (char*)"RegType";
    case MSG_IE_RESULT:
        return (char*)"Result";
        
    // 31
    case MSG_IE_RSPCODE:
        return (char*)"RspCode";
    case MSG_IE_RSPTYPE:
        return (char*)"RspType";
    case MSG_IE_SN:
        return (char*)"SN";
    case MSG_IE_SRCLEGID:
        return (char*)"SrcLegID";
    case MSG_IE_SRVTYPE:
        return (char*)"SrvType";
    case MSG_IE_TOADDR:
        return (char*)"ToAddr";
    case MSG_IE_TRANSMSGID:
        return (char*)"TransMsgID";
    case MSG_IE_TRANSMSG:
        return (char*)"TransMsg";
    case MSG_IE_USRNUM:
        return (char*)"UsrNum";
    case MSG_IE_USRNAME:
        return (char*)"UsrName";
        
    // 41
    case MSG_IE_USRPOS:
        return (char*)"UsrPos";
    case MSG_IE_PWD:
        return (char*)"Pwd";
    case MSG_IE_FWDTIME:
        return (char*)"FwdTime";
    case MSG_IE_FWDTYPE:
        return (char*)"FwdType";
    case MSG_IE_USRGINFO:
        return (char*)"UsrGInfo";
    case MSG_IE_CAMINFO:
        return (char*)"CamInfo";
    case MSG_IE_ORIGSRVCS:
        return (char*)"OrigSrvCS";
    case MSG_IE_PRIO:
        return (char*)"Prio";
    case MSG_IE_IDS:
        return (char*)"IDS";
    case MSG_IE_NOTMODSDP:
        return (char*)"NotModSdp";

    // 51
    case MSG_IE_WATCHLEG:
        return (char*)"WatchLeg";
    case MSG_IE_CONFNUM:
        return (char*)"ConfNum";
    case MSG_IE_OPSN:
        return (char*)"OpSN";
    case MSG_IE_USERTYPE:
        return (char*)"UserType";
    case MSG_IE_USERATTR:
        return (char*)"UserAttr";
    case MSG_IE_USERSTATUS:
        return (char*)"UserStatus";
    case MSG_IE_CONCURRENT:
        return (char*)"ConCurrent";
    case MSG_IE_USERIPADDR:
        return (char*)"UserIPAddr";
    case MSG_IE_USERADDR:
        return (char*)"UserAddr";
    case MSG_IE_USERCONTACT:
        return (char*)"UserContact";
        
    // 61
    case MSG_IE_USERDESC:
        return (char*)"UserDesc";
    case MSG_IE_CTIME:
        return (char*)"CTime";
    case MSG_IE_VTIME:
        return (char*)"VTime";
    case MSG_IE_GNUM:
        return (char*)"GNum";
    case MSG_IE_GNAME:
        return (char*)"GName";
    case MSG_IE_GNUMU:
        return (char*)"GNumU";
    case MSG_IE_GMEMBER:
        return (char*)"GMember";
    case MSG_IE_TRANSID:
        return (char*)"TransID";
    case MSG_IE_TRUENUM:
        return (char*)"TrueNum";
    case MSG_IE_TRUENAME:
        return (char*)"TrueName";
        
    // 71
    case MSG_IE_ORIGCALLEDNUM:
        return (char*)"OrigCalledNum";
    case MSG_IE_ORIGCALLEDNAME:
        return (char*)"OrigCalledName";
    case MSG_IE_IMINFO:
        return (char*)"ImInfo";
    case MSG_IE_QUERYEXT:
        return (char*)"QueryExt";
    case MSG_IE_STATUSSUBS:
        return (char*)"StatusSubs";
    case MSG_IE_STATUSNOTIFY:
        return (char*)"StatusNotify";
    case MSG_IE_GMEMBERSTATUS:
        return (char*)"GMemberStatus";
    case MSG_IE_GPSREC:
        return (char*)"GpsRec";
    case MSG_IE_GPSQUERYEXT:
        return (char*)"GpsQueryExt";
    case MSG_IE_CALLEXT:
        return (char*)"CallExt";
        
    // 81
    case MSG_IE_BCSMID:
        return (char*)"BcsmID";
    case MSG_IE_BCSMSTATE:
        return (char*)"BcsmState";
    case MSG_IE_CALLCONF:
        return (char*)"CallConf";
    case MSG_IE_CALLUSERCTRL:
        return (char*)"CallUserCtrl";
    case MSG_IE_CALLSTREAMCTRL:
        return (char*)"CallStreamCtrl";
    case MSG_IE_PEERNUM_EX:
        return (char*)"PeerNumEx";
    case MSG_IE_REFSDP:
        return (char*)"RefSdp";
    case MSG_IE_AGNUM:
        return (char*)"AGNum";
    case MSG_IE_FTPSERVERINFO:
        return (char*)"FtpServerInfo";
    case MSG_IE_GPSSERVERINFO:
        return (char*)"GpsServerInfo";
        
    // 91
    case MSG_IE_WORKINFO:
        return (char*)"WorkInfo";
    case MSG_IE_ORGLIST:
        return (char*)"OrgList";
    case MSG_IE_INVOKENUM:
        return (char*)"InvokeNum";
    case MSG_IE_TASKSERVERINFO:
        return (char*)"TaskServerInfo";
    case MSG_IE_USERPROXY:
        return (char*)"UserProxy";
    case MSG_IE_CAUSESTR:
        return (char*)"CauseStr";
    case MSG_IE_ORGLIST_MGR:
        return (char*)"OrgListMgr";
    case MSG_IE_DATAROLE:
        return (char*)"DataRole";
    case MSG_IE_MENUROLE:
        return (char*)"MenuRole";
    case MSG_IE_DEPTNUM:
        return (char*)"DeptNum";
        
    // 101
    case MSG_IE_ID:
        return (char*)"ID";
    case MSG_IE_WORKID:
        return (char*)"WorkID";
    case MSG_IE_WORKUNIT:
        return (char*)"WorkUnit";
    case MSG_IE_TITLE:
        return (char*)"Title";
    case MSG_IE_CARID:
        return (char*)"CarID";
    case MSG_IE_TEL:
        return (char*)"Tel";
    case MSG_IE_OTHER:
        return (char*)"Other";
    case MSG_IE_SOSNUM:
        return (char*)"SosNum";
    case MSG_IE_GPSRECSTR:
        return (char*)"GpsRecStr";
    case MSG_IE_GTYPE:
        return (char*)"GType";

    // 111
    case MSG_IE_GPSSERVERINFOWSS:
        return (char*)"GpsServerInfoWss";
    case MSG_IE_FWDNUM:
        return (char*)"FdwNum";
    case MSG_IE_GMEMBEREXTINFO:
        return (char*)"GMemberExtInfo";
    case MSG_IE_RESREPORT://��Դ����
        return (char*)"ResReport";
    case MSG_IE_FSMPAIR://״̬����
        return (char*)"FsmPair";
    case MSG_IE_CALLREFNUM://���вο���
        return (char*)"CallRefNum";
    case MSG_IE_LEGEXT://����չ��Ϣ
        return (char*)"LegExt";
    case MSG_IE_USERMARK://�û���־
        return (char*)"UserMark";
    case MSG_IE_USERCALLREF://�û�ʹ�õĺ��вο���,�������Լ�,����������,�鿴�ǶԶ�
        return (char*)"UserCallRef";
    case MSG_IE_ROUTECFG://·��������Ϣ
        return (char*)"RouteCfg";
    case MSG_IE_COMMQUERY://ͨ�ò�ѯ
        return (char*)"CommQuery";
    case MSG_IE_MYUG://�Լ����û�������
        return (char*)"MyUG";
    case MSG_IE_LICENSE_COUNT://��Ȩ��
        return (char*)"LicCount";
    case MSG_IE_RUN_COUNT://������
        return (char*)"RunCount";
    case MSG_IE_ASSIGN_TYPE://MC����ҵ����֯��ʽ
        return (char*)"AssignType";
    case MSG_IE_SUBNUM://�ֻ���
        return (char*)"SubNum";
    case MSG_IE_SLOT://ʱ϶��
        return (char*)"Slot";
    case MSG_IE_LIC://��Ȩ��Ϣ
        return (char*)"Lic";
    case MSG_IE_NSQUERYEXT://NS��ѯ����
        return (char*)"NsQueryExt";

    default:
        snprintf(cBuf, sizeof(cBuf), "IEId=%d", wIEId);
        return cBuf;
    }
}
#endif
#if 0
char *GetSrvIEStr(WORD wIEId)
{
    static char cBuf[32];

    switch (wIEId)
    {
    // 01
    case MSG_IE_SYSTIME:
        return (char*)"SYSTIME";
    case MSG_IE_CAUSE:
        return (char*)"CAUSE";
    case MSG_IE_PLAYINFO:
        return (char*)"PLAYINFO";
    case MSG_IE_APTYPE:
        return (char*)"APTYPE";
    case MSG_IE_APPOS:
        return (char*)"APPOS";
    case MSG_IE_APVER:
        return (char*)"APVER";
    case MSG_IE_AUTHALG:
        return (char*)"AUTHALG";
    case MSG_IE_AUTHNAME:
        return (char*)"AUTHNAME";
    case MSG_IE_AUTHNONCE:
        return (char*)"AUTHNONCE";
    case MSG_IE_AUTHREALM:
        return (char*)"AUTHREALM";

    // 11
    case MSG_IE_AUTHRSP:
        return (char*)"AUTHRSP";
    case MSG_IE_AUTHURI:
        return (char*)"AUTHURI";
    case MSG_IE_MYNUM:
        return (char*)"MYNUM";
    case MSG_IE_PEERNUM:
        return (char*)"PEERNUM";
    case MSG_IE_CONF:
        return (char*)"CONF";
    case MSG_IE_DNSADDR:
        return (char*)"DNSADDR";
    case MSG_IE_DSTLEGID:
        return (char*)"DSTLEGID";
    case MSG_IE_EXPIRED:
        return (char*)"EXPIRED";
    case MSG_IE_FROMADDR:
        return (char*)"FROMADDR";
    case MSG_IE_IDLIST:
        return (char*)"IDLIST";

    // 21
    case MSG_IE_INFO:
        return (char*)"INFO";
    case MSG_IE_LEGID:
        return (char*)"LEGID";
    case MSG_IE_MGFSMID:
        return (char*)"MGFSMID";
    case MSG_IE_MSGCODE:
        return (char*)"MSGCODE";
    case MSG_IE_MYSDP:
        return (char*)"MYSDP";
    case MSG_IE_PEERSDP:
        return (char*)"PEERSDP";
    case MSG_IE_OPCODE:
        return (char*)"OPCODE";
    case MSG_IE_RECVNUMTYPE:
        return (char*)"RECVNUMTYPE";
    case MSG_IE_REGTYPE:
        return (char*)"REGTYPE";
    case MSG_IE_RESULT:
        return (char*)"RESULT";
        
    // 31
    case MSG_IE_RSPCODE:
        return (char*)"RSPCODE";
    case MSG_IE_RSPTYPE:
        return (char*)"RSPTYPE";
    case MSG_IE_SN:
        return (char*)"SN";
    case MSG_IE_SRCLEGID:
        return (char*)"SRCLEGID";
    case MSG_IE_SRVTYPE:
        return (char*)"SRVTYPE";
    case MSG_IE_TOADDR:
        return (char*)"TOADDR";
    case MSG_IE_TRANSMSGID:
        return (char*)"TRANSMSGID";
    case MSG_IE_TRANSMSG:
        return (char*)"TRANSMSG";
    case MSG_IE_USRNUM:
        return (char*)"USRNUM";
    case MSG_IE_USRNAME:
        return (char*)"USRNAME";
        
    // 41
    case MSG_IE_USRPOS:
        return (char*)"USRPOS";
    case MSG_IE_PWD:
        return (char*)"PWD";
    case MSG_IE_FWDTIME:
        return (char*)"FWDTIME";
    case MSG_IE_FWDTYPE:
        return (char*)"FWDTYPE";
    case MSG_IE_USRGINFO:
        return (char*)"USRGINFO";
    case MSG_IE_CAMINFO:
        return (char*)"CAMINFO";
    case MSG_IE_ORIGSRVCS:
        return (char*)"ORIGSRVCS";
    case MSG_IE_PRIO:
        return (char*)"PRIO";
    case MSG_IE_IDS:
        return (char*)"IDS";
    case MSG_IE_NOTMODSDP:
        return (char*)"NOTMODSDP";

    // 51
    case MSG_IE_WATCHLEG:
        return (char*)"WATCHLEG";
    case MSG_IE_CONFNUM:
        return (char*)"CONFNUM";
    case MSG_IE_OPSN:
        return (char*)"OPSN";
    case MSG_IE_USERTYPE:
        return (char*)"USERTYPE";
    case MSG_IE_USERATTR:
        return (char*)"USERATTR";
    case MSG_IE_USERSTATUS:
        return (char*)"USERSTATUS";
    case MSG_IE_CONCURRENT:
        return (char*)"CONCURRENT";
    case MSG_IE_USERIPADDR:
        return (char*)"USERIPADDR";
    case MSG_IE_USERADDR:
        return (char*)"USERADDR";
    case MSG_IE_USERCONTACT:
        return (char*)"USERCONTACT";
        
    // 61
    case MSG_IE_USERDESC:
        return (char*)"USERDESC";
    case MSG_IE_CTIME:
        return (char*)"CTIME";
    case MSG_IE_VTIME:
        return (char*)"VTIME";
    case MSG_IE_GNUM:
        return (char*)"GNUM";
    case MSG_IE_GNAME:
        return (char*)"GNAME";
    case MSG_IE_GNUMU:
        return (char*)"GNUMU";
    case MSG_IE_GMEMBER:
        return (char*)"GMEMBER";
    case MSG_IE_TRANSID:
        return (char*)"TRANSID";
    case MSG_IE_TRUENUM:
        return (char*)"TRUENUM";
    case MSG_IE_TRUENAME:
        return (char*)"TRUENAME";
        
    // 71
    case MSG_IE_ORIGCALLEDNUM:
        return (char*)"ORIGCALLEDNUM";
    case MSG_IE_ORIGCALLEDNAME:
        return (char*)"ORIGCALLEDNAME";
    case MSG_IE_IMINFO:
        return (char*)"IMINFO";
    case MSG_IE_QUERYEXT:
        return (char*)"QUERYEXT";
    case MSG_IE_STATUSSUBS:
        return (char*)"STATUSSUBS";
    case MSG_IE_STATUSNOTIFY:
        return (char*)"STATUSNOTIFY";
    case MSG_IE_GMEMBERSTATUS:
        return (char*)"GMEMBERSTATUS";
    case MSG_IE_GPSREC:
        return (char*)"GPSREC";
    case MSG_IE_GPSQUERYEXT:
        return (char*)"GPSQUERYEXT";
    case MSG_IE_CALLEXT:
        return (char*)"CALLEXT";
        
    // 81
    case MSG_IE_BCSMID:
        return (char*)"BCSMID";
    case MSG_IE_BCSMSTATE:
        return (char*)"BCSMSTATE";
    case MSG_IE_CALLCONF:
        return (char*)"CALLCONF";
    case MSG_IE_CALLUSERCTRL:
        return (char*)"CALLUSERCTRL";
    case MSG_IE_CALLSTREAMCTRL:
        return (char*)"CALLSTREAMCTRL";
    case MSG_IE_PEERNUM_EX:
        return (char*)"PEERNUM_EX";
    case MSG_IE_REFSDP:
        return (char*)"REFSDP";
    case MSG_IE_AGNUM:
        return (char*)"AGNUM";
    case MSG_IE_FTPSERVERINFO:
        return (char*)"FTPSERVERINFO";
    case MSG_IE_GPSSERVERINFO:
        return (char*)"GPSSERVERINFO";
        
    // 91
    case MSG_IE_WORKINFO:
        return (char*)"WORKINFO";
    case MSG_IE_ORGLIST:
        return (char*)"ORGLIST";
    case MSG_IE_INVOKENUM:
        return (char*)"INVOKENUM";
    case MSG_IE_TASKSERVERINFO:
        return (char*)"TASKSERVERINFO";
    case MSG_IE_USERPROXY:
        return (char*)"USERPROXY";
    case MSG_IE_CAUSESTR:
        return (char*)"CAUSESTR";
    case MSG_IE_ORGLIST_MGR:
        return (char*)"ORGLIST_MGR";
    case MSG_IE_DATAROLE:
        return (char*)"DATAROLE";
    case MSG_IE_MENUROLE:
        return (char*)"MENUROLE";
    case MSG_IE_DEPTNUM:
        return (char*)"DEPTNUM";
        
    // 101
    case MSG_IE_ID:
        return (char*)"ID";
    case MSG_IE_WORKID:
        return (char*)"WORKID";
    case MSG_IE_WORKUNIT:
        return (char*)"WORKUNIT";
    case MSG_IE_TITLE:
        return (char*)"TITLE";
    case MSG_IE_CARID:
        return (char*)"CARID";
    case MSG_IE_TEL:
        return (char*)"TEL";
    case MSG_IE_OTHER:
        return (char*)"OTHER";
        
    default:
        snprintf(cBuf, sizeof(cBuf), "IEId=%d", wIEId);
        return cBuf;
    }
}
#endif


char *GetOamOptStr(DWORD dwOpt)
{
    static char cBuf[32];
    switch (dwOpt)
    {
    case OPT_USER_ADD:
        return (char*)"OPT_USER_ADD";
    case OPT_USER_DEL:
        return (char*)"OPT_USER_DEL";
    case OPT_USER_MODIFY:
        return (char*)"OPT_USER_MODIFY";
    case OPT_USER_QUERY:
        return (char*)"OPT_USER_QUERY";
    case OPT_G_ADD:
        return (char*)"OPT_G_ADD";
    case OPT_G_DEL:
        return (char*)"OPT_G_DEL";
    case OPT_G_MODIFY:
        return (char*)"OPT_G_MODIFY";
    case OPT_G_QUERY:
        return (char*)"OPT_G_QUERY";
    case OPT_G_ADDUSER:
        return (char*)"OPT_G_ADDUSER";
    case OPT_G_DELUSER:
        return (char*)"OPT_G_DELUSER";
    case OPT_G_MODIFYUSER:
        return (char*)"OPT_G_MODIFYUSER";
    case OPT_G_QUERYUSER:
        return (char*)"OPT_G_QUERYUSER";
    case OPT_U_QUERYGROUP:
        return (char*)"OPT_U_QUERYGROUP";
    case OPT_O_ADD:
        return (char*)"OPT_O_ADD";
    case OPT_O_DEL:
        return (char*)"OPT_O_DEL";
    case OPT_O_MODIFY:
        return (char*)"OPT_O_MODIFY";
    case OPT_O_QUERY:
        return (char*)"OPT_O_QUERY";
    case OPT_GMEMBER_EXTINFO:
        return (char*)"OPT_GMEMBER_EXTINFO";
    case OPT_R_ADD:
        return (char*)"OPT_R_ADD";
    case OPT_R_DEL:
        return (char*)"OPT_R_DEL";
    case OPT_R_MODIFY:
        return (char*)"OPT_R_MODIFY";
    case OPT_R_QUERY:
        return (char*)"OPT_R_QUERY";
    case OPT_CROSS_G2U:
        return (char*)"OPT_CROSS_G2U";
    case OPT_CROSS_U2G:
        return (char*)"OPT_CROSS_U2G";
    case OPT_CROSS_STATUS_U_2LOW:
        return (char*)"OPT_CROSS_STATUS_U_2LOW";
    case OPT_CROSS_STATUS_G_2LOW:
        return (char*)"OPT_CROSS_STATUS_G_2LOW";
    case OPT_CROSS_STATUS_U_2HIGH:
        return (char*)"OPT_CROSS_STATUS_U_2HIGH";
    default:
        snprintf(cBuf, sizeof(cBuf), "OPT=%d", (int)dwOpt);
        return cBuf;
    }
}


char *GetSrvTypeStr(SRV_TYPE_e SrvType)
{
    static char cBuf[32];
    switch (SrvType)
    {
    case SRV_TYPE_NONE:
        return (char*)"SRV_TYPE_NONE";
    case SRV_TYPE_BASIC_CALL:
        return (char*)"SRV_TYPE_BASIC_CALL";
    case SRV_TYPE_CONF:
        return (char*)"SRV_TYPE_CONF";
    case SRV_TYPE_CONF_JOIN:
        return (char*)"SRV_TYPE_CONF_JOIN";
    case SRV_TYPE_FORCE_INJ:
        return (char*)"SRV_TYPE_FORCE_INJ";
    case SRV_TYPE_FORCE_REL:
        return (char*)"SRV_TYPE_FORCE_REL";
    case SRV_TYPE_WATCH_DOWN:
        return (char*)"SRV_TYPE_WATCH_DOWN";
    case SRV_TYPE_WATCH_UP:
        return (char*)"SRV_TYPE_WATCH_UP";
    case SRV_TYPE_NS_CALL:
        return (char*)"SRV_TYPE_NS_CALL";
    case SRV_TYPE_SIMP_CALL:
        return (char*)"SRV_TYPE_SIMP_CALL";
    case SRV_TYPE_IM:
        return (char*)"SRV_TYPE_IM";
    case SRV_TYPE_MULTICALL:
        return (char*)"SRV_TYPE_MULTICALL";
    case SRV_TYPE_OAM:
        return (char*)"SRV_TYPE_OAM";
    case SRV_TYPE_GPS:
        return (char*)"SRV_TYPE_GPS";        
    case SRV_TYPE_MAX:
        return (char*)"SRV_TYPE_MAX";
    default:
        snprintf(cBuf, sizeof(cBuf), "SRV_TYPE=%d", SrvType);
        return cBuf;        
    }
}

char *GetImCodeStr(UCHAR ucCode)
{
    static char cBuf[32];
    switch (ucCode)
    {
    case PTE_CODE_TXREQ://��������
        return (char*)"��������";
    case PTE_CODE_TXCFM:
        return (char*)"����ȷ��";
    case PTE_CODE_USRREAD:
        return (char*)"�û��Ķ�";
    case PTE_CODE_USRREADCFM:
        return (char*)"�û��Ķ���Ϣ��ȷ��";
    case PTE_CODE_FILENAMEREQ:
        return (char*)"�ļ�������";
    case PTE_CODE_FILENAMERSP:
        return (char*)"�ļ�����Ӧ";
    default:
        snprintf(cBuf, sizeof(cBuf), "IMCode=%d", ucCode);
        return cBuf;
    }
}

char *GetImTypeStr(DWORD dwType)
{
    static char cBuf[32];
    switch (dwType)
    {
    case IM_TYPE_NONE:
        return (char*)"��";
//01~7f��Ҫ�洢ת��,�û�ȷ���յ���
    case IM_TYPE_TXT:
        return (char*)"�ı�";
    case IM_TYPE_GPS:
        return (char*)"GPS";
    case IM_TYPE_IMAGE:
        return (char*)"ͼ��";
    case IM_TYPE_AUDIO:
        return (char*)"�����ļ�";
    case IM_TYPE_VIDEO:
        return (char*)"��Ƶ�ļ�";
//0x80~0xff����Ҫ�洢ת��,�û�ȷ�Ͻ��յ�
    case IM_TYPE_NSSUBS:
        return (char*)"�洢����";
    case IM_TYPE_NSQUERYREQ:
        return (char*)"�洢��ѯ";
    case IM_TYPE_NSQUERYRSP:
        return (char*)"�洢��ѯ��Ӧ";
    case IM_TYPE_USER:
        return (char*)"�û��Զ���";
    default:
        snprintf(cBuf, sizeof(cBuf), "IMType=%d", (int)dwType);
        return cBuf;
    }
}

char *GetGUTypeStr(UCHAR ucType)
{
    static char cBuf[32];
    switch (ucType)
    {
    case GROUP_MEMBERTYPE_USER:
        return (char*)"�û�";
    case GROUP_MEMBERTYPE_GROUP:
        return (char*)"��";
    case GROUP_MEMBERTYPE_USER_OUT:
        return (char*)"�����û�";
    case GROUP_MEMBERTYPE_USER_SLOT2:
        return (char*)"ʱ϶2�û�";

    default:
        snprintf(cBuf, sizeof(cBuf), "GUType=%d", ucType);
        return cBuf;
    }
}

char *GetStatusStr(UCHAR ucStatus)
{
    static char cBuf[32];
    switch (ucStatus)
    {
    case UT_STATUS_OFFLINE:
        return (char*)"����";
    case UT_STATUS_ONLINE:
        return (char*)"����";
    default:
        snprintf(cBuf, sizeof(cBuf), "Status=%d", ucStatus);
        return cBuf;
    }
}

char *GetCallOTStr(UCHAR ucOT)
{
    static char cBuf[32];
    switch (ucOT)
    {
    case CC_O:
        return (char*)"����";
    case CC_T:
        return (char*)"����";
    default:
        snprintf(cBuf, sizeof(cBuf), "OT=%d", ucOT);
        return cBuf;
    }
}

char *GetCallTypeStr(UCHAR ucCallType)
{
    static char cBuf[32];
    switch (ucCallType)
    {
    case SRV_TYPE_BASIC_CALL:
        return (char*)"��������";
    case SRV_TYPE_CONF:
        return (char*)"����";
    case SRV_TYPE_CONF_JOIN:
        return (char*)"����";
    case SRV_TYPE_FORCE_INJ:
        return (char*)"ǿ��";
    case SRV_TYPE_FORCE_REL:
        return (char*)"ǿ��";
    case SRV_TYPE_WATCH_DOWN:
        return (char*)"�������";
    case SRV_TYPE_WATCH_UP:
        return (char*)"����ϴ�";
    case SRV_TYPE_NS_CALL:
        return (char*)"�洢����";
    case SRV_TYPE_SIMP_CALL:
        return (char*)"��������";
    default:
        snprintf(cBuf, sizeof(cBuf), "CallType=%d", ucCallType);
        return cBuf;
    }
}

char *GetCallStatusStr(UCHAR ucCallStatus)
{
    static char cBuf[32];
    switch (ucCallStatus)
    {
    case GU_STATUSCALL_IDLE:
        return (char*)"����";
    case GU_STATUSCALL_OALERT:
        return (char*)"���л���";
    case GU_STATUSCALL_TALERT:
        return (char*)"��������";
    case GU_STATUSCALL_TALKING:
        return (char*)"ͨ��";
    case GU_STATUSCALL_G_TALKING:
        return (char*)"���齲��";
    case GU_STATUSCALL_G_LISTEN:
        return (char*)"��������";
    default:
        snprintf(cBuf, sizeof(cBuf), "CallStatus=%d", ucCallStatus);
        return cBuf;
    }
}


char *GetWatchDir(UCHAR ucDir)
{
    static char cBuf[32];
    switch (ucDir)
    {
    case WATCH_DIR_NONE:
        return (char*)"û��";
    case WATCH_DIR_UP:
        return (char*)"����";
    case WATCH_DIR_DOWN:
        return (char*)"����";
    case WATCH_DIR_BOTH:
        return (char*)"˫��";
    default:
        snprintf(cBuf, sizeof(cBuf), "����=%d", ucDir);
        return cBuf;        
    }
}

char *GetInfoStr(DWORD dwInfo)
{
    UCHAR ucCode    = dwInfo & 0xff;
    UCHAR ucQueue   = (dwInfo & 0xff00) >> 8;
    
    static char cBuf[32];
    switch (ucCode)
    {
    case SRV_INFO_MICREQ:
        snprintf(cBuf, sizeof(cBuf), "��Ȩ����:����%d", ucQueue);
        break;
    case SRV_INFO_MICREL:
        snprintf(cBuf, sizeof(cBuf), "��Ȩ�ͷ�:����%d", ucQueue);
        break;
    case SRV_INFO_MICGIVE:
        snprintf(cBuf, sizeof(cBuf), "���뻰Ȩ:����%d", ucQueue);
        break;
    case SRV_INFO_MICTAKE:
        snprintf(cBuf, sizeof(cBuf), "�ջػ�Ȩ:����%d", ucQueue);
        break;
    case SRV_INFO_MICINFO:
        snprintf(cBuf, sizeof(cBuf), "��Ȩ��ʾ:����%d", ucQueue);
        break;
    case SRV_INFO_AUTOMICON:
        snprintf(cBuf, sizeof(cBuf), "�����ɷ���:����%d", ucQueue);
        break;
    case SRV_INFO_AUTOMICOFF:
        snprintf(cBuf, sizeof(cBuf), "�ر����ɷ���:����%d", ucQueue);
        break;
    case SRV_INFO_CAMHISPLAY:
        snprintf(cBuf, sizeof(cBuf), "������ʷ��Ƶ");
        break;
    case SRV_INFO_TALKON:
        snprintf(cBuf, sizeof(cBuf), "�򿪶Խ�");
        break;
    case SRV_INFO_TALKOFF:
        snprintf(cBuf, sizeof(cBuf), "�رնԽ�");
        break;
    case SRV_INFO_TALKONRSP:
        snprintf(cBuf, sizeof(cBuf), "�򿪶Խ���Ӧ");
        break;
    case SRV_INFO_TALKOFFRSP:
        snprintf(cBuf, sizeof(cBuf), "�رնԽ���Ӧ");
        break;
    case SRV_INFO_NSREC:
        snprintf(cBuf, sizeof(cBuf), "NS�洢��¼");
        break;
    case SRV_INFO_ICECAND:
        snprintf(cBuf, sizeof(cBuf), "IceCandidate");
        break;
    case SRV_INFO_ICESTATE:
        snprintf(cBuf, sizeof(cBuf), "IceStateChange");
        break;
    case SRV_INFO_SDP:
        snprintf(cBuf, sizeof(cBuf), "����SDP����");
        break;
    case SRV_INFO_CAMCTRL:
        snprintf(cBuf, sizeof(cBuf), "����ͷ����");
        break;
    case SRV_INFO_NUM:
        snprintf(cBuf, sizeof(cBuf), "����");
        break;
    case SRV_INFO_USERMARK:
        snprintf(cBuf, sizeof(cBuf), "�û���ʶ");
        break;
    case SRV_INFO_CALLREF:
        snprintf(cBuf, sizeof(cBuf), "������ˮ��");
        break;
    case SRV_INFO_MICMODIFY:
        snprintf(cBuf, sizeof(cBuf), "��Ͳ�޸�");
        break;
    case SRV_INFO_NUM_DTMF:
        snprintf(cBuf, sizeof(cBuf), "DTMF");
        break;
    default:
        snprintf(cBuf, sizeof(cBuf), "Info=%d:%d", ucCode, ucQueue);
        break;
    }
    return cBuf;
}


