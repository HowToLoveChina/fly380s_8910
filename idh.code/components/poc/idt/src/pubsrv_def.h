#ifndef _PUBSRV_DEF_H_
#define _PUBSRV_DEF_H_

//ȫ�ֺ궨��
#define USR_SHORT_NUMMAXLEN     8   //�����û����̺ų���
//�ַ�������:
// 1.32�ֽڣ����룬�ο���(��ǰʱ��+���,�������вο��ŵ�Ψһ��ʶ����һ��������Ψһ����ͬ������Ψһ)
typedef UCHAR UC_32[32];
// 2.64�ֽڣ��û��������룬��Ȩ����
typedef UCHAR UC_64[64];
// 3.128�ֽڣ��û�����������������DNS
typedef UCHAR UC_128[128];
typedef UCHAR UC_256[256];
typedef UCHAR UC_512[512];
typedef UCHAR UC_1024[1024];
typedef UCHAR UC_1280[1280];

typedef UCHAR UC_TIMESTR[20];   //%04d-%02d-%02d %02d:%02d:%02d         2015-10-01 12:15:35
typedef UCHAR UC_IPSTR[16];     //xxx.xxx.xxx.xxx
typedef UCHAR UC_IPPORTSTR[22]; //xxx.xxx.xxx.xxx:xxxxx

//��֯����
#define O_TYPE_TRIAL        0       //����
#define O_TYPE_FOMAL        1       //��ʽ
#define O_TYPE_AGENT        2       //������

//��/�û�����������,���λ��ʾ
#define GU_TYPE_LOCAL       0x00
#define GU_TYPE_CROSS       0x80

//������
#define G_TYPE_FOMAL        1       //��ʽ��
#define G_TYPE_TEMPORARY    2       //��ʱ��
#define G_TYPE_OUTGROUP     3       //������
#define G_TYPE_TRUNK        4       //����ʹ�õ��м���,����ΪOAMʹ��

//�ն�����
//���λ,GU_TYPE_LOCAL,��ʾ���ڵ��û�;GU_TYPE_CROSS,��ʾ�����ڵ��û�
#define UT_TYPE_NONE        0       //��Ч
// 1~0x3f:       ��׼�ն�
#define UT_TYPE_SIP         0x01    //��׼SIP�ն�                   1
#define UT_TYPE_SIPEX       0x02    //֧����չSIP�ӿڵ��ն�         2
#define UT_TYPE_SIPEX_JNZJT 0x03    //��ŵ�м�̨(����̨)            3
#define UT_TYPE_SUB         0x04    //���������ֻ�,��ŵ�м�̨�����ն� 4

//0x40~0x5f:    ʹ��TAPЭ����ն�
#define UT_TYPE_TAP         0x40    //ͨ��TAP�ն�                   64
#define UT_TYPE_DISPATCH    0x41    //����̨                        65
#define UT_TYPE_VGW         0x42    //��Ƶ����                      66
#define UT_TYPE_NS          0x43    //�洢                          67
#define UT_TYPE_ORGADMIN    0x44    //��֯����Ա                    68
#define UT_TYPE_GPSONLY     0x45    //ֻ��GPS���ܵ��ն�             69
#define UT_TYPE_28181       0x46    //ʹ��28181Э���ƽ̨���ն�     70
#define UT_TYPE_OUT         0x47    //�����û�                      71
#define UT_TYPE_MANAGER     0x48    //�����̹���Ա                  72

//0x60~0x6f:    ���������ն�
//ucCamType
#define UT_TYPE_AHCS        0x60    //���մ�������ͷ                96
#define UT_TYPE_HK          0x61    //��������ͷ                    97
#define UT_TYPE_FSAN        0x62    //���Ӱ�����ͷ                  98
#define UT_TYPE_HKPLAT      0x63    //����ƽ̨                      99
#define UT_TYPE_DHPLAT      0x64    //��ƽ̨                      100
#define UT_TYPE_BTX         0x65    //BTX������                     101
#define UT_TYPE_TDWY        0x66    //���ΰҵ                      102
#define UT_TYPE_DH          0x67    //��                          103

//�ڲ�ʹ�õ��ն����ͣ����ڽӿ�����,0x70~0x7f
#define UT_TYPE_WEBRTC      0x70    //��׼WEBRTC�ӿ�                240

//�ն�����,ʹ�ó���,��ʾ��
#define UT_ATTR_NONE        0       //��Ч
#define UT_ATTR_PC          1       //PC��
#define UT_ATTR_FIXED       2       //�̶�̨
#define UT_ATTR_HS          3       //�ֳֻ�
#define UT_ATTR_VEHICLE     4       //����̨
#define UT_ATTR_GW          5       //����
#define UT_ATTR_ADMIN       0x10    //����Ա                        16
#define UT_ATTR_DS          0x11    //����̨                        17
#define UT_ATTR_MS          0x12    //�ֳֻ�                        18
#define UT_ATTR_IPPHONE     0x13    //IP����                        19
#define UT_ATTR_GATEWAY     0x14    //����                          20
#define UT_ATTR_FIXCAM      0x15    //�̶�����ͷ                    21
#define UT_ATTR_DISPATCH_SIMPLE 0x16//ֻ�����Լ������û��ĵ���Ա    22
#define UT_ATTR_P_VEHICLE   0x30    //����                          48
#define UT_ATTR_F_VEHICLE   0x31    //������                        49
#define UT_ATTR_E_VEHICLE   0x32    //���̳�                        50
#define UT_ATTR_TAXI        0x33    //���⳵                        51
#define UT_ATTR_TRUCK       0x34    //����                          52
#define UT_ATTR_P_MOTO      0x35    //����Ħ�г�                    53

//0x60~0x7f:    ���������ն�,��UT_TYPE_һ��
#define UT_ATTR_HKPLAT      0x63    //����ƽ̨                      99
#define UT_ATTR_DHPLAT      0x64    //��ƽ̨                      100
#define UT_ATTR_BTX         0x65    //BTX������                     101
#define UT_ATTR_TDWY        0x66    //���ΰҵ                      102
#define UT_ATTR_DH          0x67    //��                          103

#define UT_ATTR_GROUP       0x80    //����,��OAM������ʹ��          128

#define UT_ATTR_PC_2        200     //PC
#define UT_ATTR_IHS         201     //�����ֻ�
#define UT_ATTR_HS_NOSCR    202	    //������
#define UT_ATTR_HS_MINI     203	    //С����
#define UT_ATTR_IPPHONE_2   204	    //IP����
#define UT_ATTR_IPPHONE_V   205	    //IP���ӻ���
#define UT_ATTR_BALL_CTRL   206     //������
#define UT_ATTR_CAM_PTZ     207     //��̨���ͷ
#define UT_ATTR_CAM         208     //���ͷ
#define UT_ATTR_GPS         209     //GPS��λ��
#define UT_ATTR_CAR_S       210     //��ͨ����̨
#define UT_ATTR_CAR_VS      211     //��Ƶ����̨
#define UT_ATTR_AGW         213     //��������
#define UT_ATTR_RADAR       214     //�״�
#define UT_ATTR_CAM_LE      215     //�������ͷ
#define UT_ATTR_BS          216     //��վ
#define UT_ATTR_OTHER       220     //����

//�û�״̬
#define UT_STATUS_OFFLINE   0       //����
#define UT_STATUS_ONLINE    1       //����
#define UT_STATUS_MAX       0xff    //������
//����,ͬSRV_TYPE_e

//ע������
enum REG_TYPE_e
{
    REG_TYPE_START = 1,             //�����Ǽ�
    REG_TYPE_HB,                    //����
    REG_TYPE_EXIT,                  //�˳��Ǽ�    
    REG_TYPE_EXITALL,               //ע�����е�ַҵ��

    REG_TYPE_SIPQUEUE,              //SIP��ѯ

    REG_TYPE_DEACTIVE,              //����ȥ��
    REG_TYPE_MAX
};

//HTTP��ѯ�Ľڵ�����
#define HTTP_QUERYTYPE_CAM  0
#define HTTP_QUERYTYPE_CAR  1
#define HTTP_QUERYTYPE_NODE 2

//ý������
typedef struct _MEDIAATTR_s
{
    UCHAR       ucAudioRecv;        // �Ƿ��������
    UCHAR       ucAudioSend;        // �Ƿ�������
    UCHAR       ucVideoRecv;        // �Ƿ������Ƶ
    UCHAR       ucVideoSend;        // �Ƿ�����Ƶ
}MEDIAATTR_s;

//ҵ������,���0xff,������1�ֽڴ�
enum SRV_TYPE_e
{
    SRV_TYPE_NONE       = 0,                    //��ҵ��

    //����ҵ��
    SRV_TYPE_BASIC_CALL = 16,                   //������������
    SRV_TYPE_CONF       = 17,                   //����,Ҳ�ǻ�����ϯ
    SRV_TYPE_CONF_JOIN  = 18,                   //������뷽
    SRV_TYPE_FORCE_INJ  = 19,                   //ǿ��
    SRV_TYPE_FORCE_REL  = 20,                   //ǿ��
    SRV_TYPE_WATCH      = 21,                   //���
    SRV_TYPE_WATCH_DOWN = 21,                   //�������
    SRV_TYPE_WATCH_UP   = 22,                   //����ϴ�
    SRV_TYPE_NS_CALL    = 23,                   //���洢�������ĺ���    ����ݹ�洢
    SRV_TYPE_SIMP_CALL  = 24,                   //��������
    SRV_TYPE_CALL_END   = 0x4f,                 //����ҵ�����
    
    SRV_TYPE_IM         = 0x50,                 //��ʱ��Ϣ

    SRV_TYPE_MULTICALL  = 0x80,                 //����ҵ��,ֻ�����û���ѯ,������̨��ʾ��
    SRV_TYPE_OAM        = 0x81,                 //OAM����
    SRV_TYPE_GPS        = 0x82,                 //GPS

    SRV_TYPE_MAX,
};

//ҵ�����  #ҵ����#����
#define SRV_TYPE_FLAG_CHAR          '#'
#define SRV_TYPE_FLAG_STR           "#"
#define SRV_TYPE_BASIC_CALL_STR     "#16"
#define SRV_TYPE_CONF_STR           "#17"
#define SRV_TYPE_CONF_JOIN_STR      "#18"
#define SRV_TYPE_FORCE_INJ_STR      "#19"
#define SRV_TYPE_FORCE_REL_STR      "#20"
#define SRV_TYPE_WATCH_DOWN_STR     "#21"
#define SRV_TYPE_WATCH_UP_STR       "#22"
#define SRV_TYPE_NS_CALL_STR        "#23"

//�ֻ��� ����ͷͨ���� ����-�ֻ���
#define SRV_TYPE_NUMEXT_CHAR        '*'
#define SRV_TYPE_NUMEXT_STR         "*"

//���вο��� -type-fsmid-��չID(CS��)-���-ʱ��     type: csa,1 cs,2 bcsm,3
#define SRV_TYPE_CALLREF_CHAR       '-'       //���вο���
#define SRV_TYPE_CALLREF_STR        "-"       //���вο���

//��ⷽ��1-���У�2-���У�3-˫��
#define WATCH_DIR_NONE              0
#define WATCH_DIR_UP                1
#define WATCH_DIR_DOWN              2
#define WATCH_DIR_BOTH              3

#define SRV_TYPE_PRIO_HIGH          0
#define SRV_TYPE_PRIO_LOW           7
#define SRV_TYPE_PRIO_DEF           SRV_TYPE_PRIO_LOW
#define SRV_TYPE_PRIO_ERROR         (SRV_TYPE_PRIO_LOW + 1)

//�պ�ʱ�Ľ�������
#define RECVNUM_END_CHAR            '#'

enum CALL_OT_e
{
    CC_OT_ERROR = 0,
    CC_O,                           //O��
    CC_T,                           //T��
    CC_OT_MAX
};

//�����,֧��10XX~20XX�����ĸ�ʽ
typedef struct _NUM_SEG_s
{
    UC_32           ucStartNum;     //��ʼ����
    UC_32           ucEndNum;       //��������
}NUM_SEG_s;

//"0"��ʾ���������û�,"###"��ʾ�����Լ�������������
#define GU_STATUSSUBS_STR_CLEARALL      "##0"
#define GU_STATUSSUBS_STR_GROUP         "###"
#define GU_STATUSSUBS_STR_ALL           "0"
//״̬���ļ���ö��ֵ
enum GU_STATUSSUBS_e
{
    GU_STATUSSUBS_NONE = 0,         //ȡ������
    GU_STATUSSUBS_OAM,              //�������û��Ĳ���ά��
    GU_STATUSSUBS_BASIC,            //����״̬,��������
    GU_STATUSSUBS_DETAIL,           //��ϸ״̬,����״̬
    GU_STATUSSUBS_DETAIL1,          //����ϸ״̬,���к���
    GU_STATUSSUBS_QUERY_ONETIME,    //ֻ���β�ѯ,������
    
    GU_STATUSQUERY_MAX
};

//OAM��������
#define OPT_USER_ADD                1           //����û�
#define OPT_USER_DEL                2           //ɾ���û�
#define OPT_USER_MODIFY             3           //�޸��û�
#define OPT_USER_QUERY              4           //��ѯ�û�
#define OPT_G_ADD                   5           //�����
#define OPT_G_DEL                   6           //ɾ����
#define OPT_G_MODIFY                7           //�޸���
#define OPT_G_QUERY                 8           //��ѯ��
#define OPT_G_ADDUSER               9           //������ӳ�Ա
#define OPT_G_DELUSER               10          //����ɾ����Ա
#define OPT_G_MODIFYUSER            11          //�����޸ĳ�Ա
#define OPT_G_QUERYUSER             12          //��ѯ���Ա
#define OPT_U_QUERYGROUP            13          //��ѯ�û�������
#define OPT_O_ADD                   14          //�����֯
#define OPT_O_DEL                   15          //ɾ����֯
#define OPT_O_MODIFY                16          //�޸���֯
#define OPT_O_QUERY                 17          //��֯��ѯ
#define OPT_GMEMBER_EXTINFO         18          //���Ա��չ��Ϣ
#define OPT_R_ADD                   19          //���·��
#define OPT_R_DEL                   20          //ɾ��·��
#define OPT_R_MODIFY                21          //�޸�·��
#define OPT_R_QUERY                 22          //��ѯ·��
#define OPT_CROSS_G2U               23          //��ڵ��鵽�û���Ϣ
#define OPT_CROSS_U2G               24          //��ڵ��û�������Ϣ
#define OPT_CROSS_STATUS_U_2LOW     25          //��ڵ��û�״̬���͵��¼�
#define OPT_CROSS_STATUS_G_2LOW     26          //��ڵ���״̬���͵��¼�
#define OPT_CROSS_STATUS_U_2HIGH    27          //��ڵ��û�״̬���͵��ϼ�
#define OPT_LIC_QUERY               28          //��Ȩ��Ϣ��ѯ

//���λ,GU_TYPE_LOCAL,��ʾ���ڵ��û�;GU_TYPE_CROSS,��ʾ�����ڵ��û�
#define GROUP_MEMBERTYPE_NONE       0
#define GROUP_MEMBERTYPE_USER       1           //�û�(��ŵ�м�վ,ʱ϶1)
#define GROUP_MEMBERTYPE_GROUP      2           //��
#define GROUP_MEMBERTYPE_USER_OUT   3           //�����û�
#define GROUP_MEMBERTYPE_USER_SLOT2 4           //�û�,ʱ϶2,��ŵ�м�վ

#define GROUP_MAX_MEMBER            1024        //һ�����������ٸ��û�
#define GROUP_MAX_MEMBER_MINI       100         //�����ʹ�õ�
#define USER_MAX_GROUP              32          //�����û�����ڶ��ٸ�����
#define GROUP_MAX_LAYER             8           //�����㼶

//���Ա��Ϣ
#define FGNUM_MAX_LEN               1024    //(32 * USER_MAX_GROUP)
typedef struct _GROUP_MEMBER_s
{
    UCHAR           ucPrio;             //���ȼ�
    UCHAR           ucType;             //���û�������,GROUP_MEMBERTYPE_USER,GU_TYPE_LOCAL,GU_TYPE_CROSS��Ч

    UCHAR           ucUTType;           //UTType,UT_TYPE_NONE
    UCHAR           ucAttr;             //�ն�����,UT_ATTR_HS

    UC_32           ucNum;              //����
    UC_64           ucName;             //����
    UC_32           ucAGNum;            //��������Ϣ
    UCHAR           ucGType;            //������,G_TYPE_FOMAL
    UCHAR           ucChanNum;          //����ͷͨ������
    UCHAR           ucStatus;           //��״̬ UT_STATUS_OFFLINE֮��

    UCHAR           ucFGCount;          //�������

#ifndef T_TINY_MODE
#ifdef IDT
    UCHAR           ucFGNum[FGNUM_MAX_LEN];//������� ÿ���鶼��32������
#else
    UCHAR           ucFGNum[FGNUM_MAX_LEN / 2];//������� ÿ���鶼��32������,ռ���ڴ�̫��????????��Ϊ�ڴ��,������Էſ�
#endif
#endif
}GROUP_MEMBER_s;

//һ�����籨��,��෢�Ͷ��ٸ���Ա
typedef struct _USERGINFO_s
{
    unsigned short  usNum;
    GROUP_MEMBER_s  stGInfo[USER_MAX_GROUP];
}USERGINFO_s;

//״̬����
//��������û�״̬����
#define GU_STATUSSUBS_MAXNUM        16  //һ���û������Զ���
//��ʱ����ʧЧ
#define GU_STATUSSUBS_TIMEMAX       70  //70��û�м�������,ʧЧ.�ն�30�뷢��һ��

// ״̬����,�ּ���:
// 1.����״̬,����/������.�Ժ�,��ͨ���,�����ﶨ��.GPS�ϱ�״̬
// 2.����״̬(��������,����ID)
// 3.��ϸ����״̬,�Զ˺���/����
#define GU_STATUSCALL_IDLE          0
#define GU_STATUSCALL_OALERT        1   //����������,�����������,�п��ܱ��л�û����,�����ڽ�����
#define GU_STATUSCALL_TALERT        2   //��������
#define GU_STATUSCALL_TALKING       3   //ͨ��
#define GU_STATUSCALL_G_TALKING     4   //�������
#define GU_STATUSCALL_G_LISTEN      5   //�������
typedef struct _GU_STATUS_CALL_s
{
    UCHAR           ucCallType;         //��������          SRV_TYPE_BASIC_CALL
    UCHAR           ucCallStatus;       //����״̬          GU_STATUSCALL_OALERT
    DWORD           dwCallId;           //����ID            CSA��ID
    UC_32           ucPeerNum;          //�Զ˺���
    UC_64           ucPeerName;         //�Զ�����
}GU_STATUS_CALL_s;
#define GU_STATUS_CALL_MAXNUM       4
typedef struct _GU_STATUE_s
{
    UCHAR           ucStatus;           //��״̬ UT_STATUS_OFFLINE֮��
    UCHAR           ucGpsReport;        //�Ƿ������ϱ�GPS,0δ�ϱ�,1�����ϱ�
    UCHAR           ucCallNum;          //���и���
    GU_STATUS_CALL_s CallStatus[GU_STATUS_CALL_MAXNUM];//����״̬
}GU_STATUE_s;
//���Ա״̬
typedef struct _GROUP_MEMBERSTATUS_s
{
    UCHAR           ucType;             //���û�������,1�û�,2��

    UC_32           ucNum;              //����
    GU_STATUE_s     Status;             //״̬
}GROUP_MEMBERSTATUS_s;

#define GU_STATUSGINFO_MAXNUM       8
typedef struct _GU_STATUSGINFO_s
{
    USHORT                  usNum;
    GROUP_MEMBERSTATUS_s    stStatus[GU_STATUSGINFO_MAXNUM];
}GU_STATUSGINFO_s;

//���û���չ��Ϣ,���û�����
typedef struct _GMEMBER_EXTINFO_ENT_s
{
    UC_32           ucNum;              //����
    UC_512          ucInfo;             //��Ϣ,json��ʽ
}GMEMBER_EXTINFO_ENT_s;
typedef struct _GMEMBER_EXTINFO_s
{
    WORD                    wNum;
    GMEMBER_EXTINFO_ENT_s   stExtInfo[GROUP_MAX_MEMBER];
}GMEMBER_EXTINFO_s;

//��֯��Ϣ
#define ORG_RUN_IDLE        0       //����״̬
#define ORG_RUN_ACTIVE      1       //����״̬,���Է�����Ϣ
#define ORG_RUN_INACTIVE    2       //�Ǽ���״̬,�ѿ���,�����ɷ�����Ϣ
typedef struct _ORG_s
{
    UC_32           ucNum;              //����
    UC_64           ucName;             //����
    UCHAR           ucType;             //����      O_TYPE_TRIAL
    UC_128          ucDesc;             //����
    DWORD           dwUserNum;          //���û�����
    DWORD           dwDsNum;            //����̨����
    DWORD           dwGroupNum;         //�����
    DWORD           dwEndUserNum;       //�ն��û�����
    UC_32           ucDs0Num;           //0�ŵ���̨����
    UC_32           ucDs0Pwd;           //0�ŵ���̨����
    UC_64           ucDsName;           //����̨��ʾ������
    UC_128          ucDsIcon;           //����̨���õ�ͼ��
    UC_64           ucAppName;          //APP��ʾ������
    UC_128          ucAppIcon;          //APP���õ�ͼ��
    NUM_SEG_s       USeg;               //�û��Ŷ�
    NUM_SEG_s       GSeg;               //��Ŷ�
    NUM_SEG_s       DSSeg;              //����̨�Ŷ�
    UC_32           ucStartTime;        //��ʼʱ��
    UC_32           ucEndTime;          //����ʱ��
    UC_64           ucMcAddr;           //MC��ַ
    DWORD           dwMcStaus;          //MC״̬,ORG_RUN_IDLE
    UC_32           ucModifyTime;       //���һ���޸�ʱ��
    UC_32           ucPrefix;           //ǰ׺
}ORG_s;


#ifdef T_TINY_MODE
#define ORGLIST_MAX_NUM     1           //�����֯����
#else
#define ORGLIST_MAX_NUM     128         //�����֯����
#endif
//��֯�б���Ϣ
typedef struct _ORG_LIST_s
{
    WORD                    wNum;
    ORG_s                   stOrg[ORGLIST_MAX_NUM];
}ORG_LIST_s;

//·����Ϣ
typedef struct _ROUTECFG_s
{
    UC_32           ucName;             //����
    UCHAR           ucStatus;           //״̬,0����,1����

    UC_32           ucPeerZone;         //�Զ�����                  ""��ʾĬ��·��,�����ڱ��ֵ����к���,��·�ɱ��в鲻��������Ϣ,���ߵ�����
    UC_32           ucPeerOrg;          //�Զ���֯����
    NUM_SEG_s       CalledSeg;          //���к����
    UC_32           ucMyZone;           //��������
    UC_32           ucMyOrg;            //������֯����              �ձ�ʾ������֯���ܿ������·��,��ֵ��ʾ�ض���֯��·��
    NUM_SEG_s       CallingSeg;         //���к����
    UC_32           ucSwitchBoard;      //�����ܻ�����              �Զ���������������,�ͽ���"�벦��ֻ���"               "x" "X" "." ��ʾ�����κκ���,������"�벦�ֻ���"
    UCHAR           ucCall;             //�Ƿ�֧�ֺ���
    UCHAR           ucIm;               //�Ƿ�֧�ּ�ʱ��Ϣ
    UCHAR           ucOam;              //�Ƿ�֧��OAM
    UCHAR           ucGps;              //�Ƿ�֧��GPS
    UCHAR           ucMetr;             //����Ȩ,ԽС����ȨԽ��
    UC_32           ucFid;              //����Э�鹦�ܿ��,�ַ�����ʽ
    UC_32           ucIpAddr;           //�Զ�IP��ַ,�����Ч,ʹ��ע������IP��ַ
    UC_32           ucRegNum;           //ע�����,���������������ע����,���½ӿ����Ե�ģ��ź�IP��ַ.����ֻ������
    UC_32           ucFileSrvAddr;      //�ļ���������ַ
    UC_32           ucUserName;         //�ļ��������û���
    UC_32           ucPwd;              //�ļ�����������
}ROUTECFG_s;

#define ROUTECFG_QUERYLIST_MAX_COUNT    4     //���һ��·�ɲ�ѯ�ж�������¼
//·���б���Ϣ
typedef struct _ROUTECFG_QUERYLIST_s
{
    WORD                    wCount;
    ROUTECFG_s              stRouteCfg[ROUTECFG_QUERYLIST_MAX_COUNT];
}ROUTECFG_QUERYLIST_s;

//�᳡��Ϣ״̬
#define CONF_MEMBERSTATUS_IDLE      0       //����
#define CONF_MEMBERSTATUS_LISTEN    1       //����
#define CONF_MEMBERSTATUS_TALK1     2       //̨�½���
#define CONF_MEMBERSTATUS_TALK0     3       //̨�Ͻ���

//GPS��Ϣ
#ifdef T_TINY_MODE
#define GPS_SUBS_MAXNUM     8     //һ���û������Զ��Ķ��ٸ�GPS��Ϣ
#else
#define GPS_SUBS_MAXNUM     4096 //һ���û������Զ��Ķ��ٸ�GPS��Ϣ
#endif

//GPS����ʧЧʱ��
#define GPS_SUBS_TIMEMAX    70  //70��û�м�������,ʧЧ.�ն�30�뷢��һ��
//GPS����ʱ��
#define GPS_OFFLINE_TIME    90  //90��û���յ�GPS����,��Ϊ����
//GPS��������
typedef struct _GPS_DATA_s
{
    float           longitude;          //����
    float           latitude;           //γ��
    float           speed;              //�ٶ�
    float           direction;          //����
    //ʱ��
    USHORT          year;               //��
    UCHAR           month;              //��
    UCHAR           day;                //��
    UCHAR           hour;               //ʱ
    UCHAR           minute;             //��
    UCHAR           second;             //��
}GPS_DATA_s;
//GPS��¼
#define GPS_REC_MAX   24
typedef struct _GPS_REC_s
{
    UC_32           ucNum;              //����
    UCHAR           ucStatus;           //�Ƿ�����,UT_STATUS_ONLINE
    UCHAR           ucCount;            //��Ч����
    GPS_DATA_s      gps[GPS_REC_MAX];   //����
}GPS_REC_s;

#define ucQueryExtUser_All      100
//�û����ݲ�ѯʹ�õĸ��Ӳ���
typedef struct _QUERY_EXT_s
{
    UCHAR           ucAll;                      //�Ƿ������û�,0����,1�������û�(��ʱ����ѯ������,�ǵ���̨��ѯ�����û�)
    UCHAR           ucGroup;                    //�Ƿ���Ҫ��ѯ������
    UCHAR           ucUser;                     //�Ƿ���Ҫ��ѯ�����û�
    UCHAR           ucOrder;                    //����ʽ,0����������,1����������
    DWORD           dwPage;                     //�ڼ�ҳ
    DWORD           dwCount;                    //ÿҳ�ж�������
    DWORD           dwTotalCount;               //����
}QUERY_EXT_s;

//�洢��ѯʹ�õĲ���
typedef struct _NS_QUERY_s
{
    UC_32           ucNum;                      //���˺���
    UC_32           ucPeerNum;                  //�Զ˺���
    UC_32           ucStartTime;                //��ʼʱ��
    UC_32           ucEndTime;                  //����ʱ��
    UCHAR           ucOT;                       //���л��Ǳ���
    UCHAR           ucSrvType;                  //ҵ������
    UC_64           ucRef;                      //�ο���
    DWORD           dwStartCount;               //���ݿ��ѯ��ʼ���,0��ʾ������ѯ
}NS_QUERY_s;


//�洢��ѯ��Ӧ
typedef struct _NS_QUERYREC_s
{
    UC_64           ucNum;                      //���˺���
    UC_64           ucPeerNum;                  //�Զ˺���
    UC_32           ucStartTime;                //��ʼʱ��
    UC_32           ucEndTime;                  //����ʱ��
    UCHAR           ucOT;                       //���л��Ǳ���
    UCHAR           ucSrvType;                  //ҵ������
    UCHAR           ucMediaType;                //ý������
    UC_64           ucRef;                      //�ο���
    UC_128          ucFileName;                 //�ļ���
    UC_1024         ucTxt;                      //��Ϣ����
    UC_256          ucUserMark;                 //�û���־
}NS_QUERYREC_s;
#define NS_QUERYREC_MAX     50
typedef struct _NS_QUERYRSP_s
{
    UCHAR           ucCount;                    //��Ч��¼����
    NS_QUERYREC_s   stRec[NS_QUERYREC_MAX];     //��ѯ��¼
}NS_QUERYRSP_s;

typedef struct _SDP_AINFO_s
{
    unsigned char   ucSend;         //�Ƿ�������
    unsigned char   ucRecv;         //�Ƿ��������
    unsigned char   ucCodec;        //������
    int             iBitRate;       //����
    unsigned char   ucTime;         //���ʱ��

    int Init()
    {
        ucSend = 0;
        ucRecv = 0;
        ucCodec = 0xff;
        iBitRate = -1;
        ucTime = 0;
        return 0;
    }
}SDP_AINFO_s;
//��Ƶ��Ϣ
typedef struct _SDP_VINFO_s
{
    unsigned char   ucSend;         //�Ƿ�����Ƶ
    unsigned char   ucRecv;         //�Ƿ������Ƶ
    unsigned char   ucCodec;        //������ID
    int             iWidth;         //��
    int             iHeight;        //��
    int             iFrameRate;     //֡��
    int             iBitRate;       //����
    int             iGop;           //I֡���

    int Init()
    {
        ucSend  = 0;
        ucRecv  = 0;
        ucCodec = 0xff;
        iWidth  = 0;
        iHeight = 0;
        iFrameRate = 0;
        iBitRate = -1;
        iGop = 0;
        return 0;
    }
}SDP_VINFO_s;

//INFO��Ϣ��
#define SRV_INFO_MICNONE    0           //δ����
#define SRV_INFO_MICREQ     1           //��Ȩ����
#define SRV_INFO_MICREL     2           //��Ȩ�ͷ�
#define SRV_INFO_MICGIVE    3           //���뻰Ȩ
#define SRV_INFO_MICTAKE    4           //�ջػ�Ȩ
#define SRV_INFO_MICINFO    5           //��Ȩ��ʾ
#define SRV_INFO_AUTOMICON  10          //�����ɷ���
#define SRV_INFO_AUTOMICOFF 11          //�ر����ɷ���
#define SRV_INFO_CAMHISPLAY 12          //������ʷ��Ƶ
#define SRV_INFO_TALKON     13          //�򿪶Խ�
#define SRV_INFO_TALKOFF    14          //�رնԽ�
#define SRV_INFO_TALKONRSP  15          //�򿪶Խ���Ӧ
#define SRV_INFO_TALKOFFRSP 16          //�رնԽ���Ӧ
#define SRV_INFO_NSREC      17          //NS�洢��¼
#define SRV_INFO_ICECAND    18          //IceCandidate
#define SRV_INFO_ICESTATE   19          //IceStateChange
#define SRV_INFO_SDP        20          //����SDP����
#define SRV_INFO_CAMCTRL    21          //����ͷ����
#define SRV_INFO_NUM        22          //����          DTMF-RELAY
#define SRV_INFO_USERMARK   23          //�û���ʶ
#define SRV_INFO_CALLREF    24          //������ˮ��,�������Լ�,����������,�鿴�ǶԶ�
#define SRV_INFO_MICMODIFY  25          //��Ͳ�޸�
#define SRV_INFO_NUM_DTMF   26          //����          DTMF

//����ͷ�������Ҿ۽��ȿ���
#define SRV_CAMCTRL_UP          1       //��            �ٶ�(0~0x3f)            ��׼
#define SRV_CAMCTRL_DOWN        2       //��            �ٶ�(0~0x3f)            ��׼
#define SRV_CAMCTRL_LEFT        3       //��            �ٶ�(0~0x3f)            ��׼
#define SRV_CAMCTRL_RIGHT       4       //��            �ٶ�(0~0x3f)            ��׼
#define SRV_CAMCTRL_ZOOMWIDE    5       //��С          �ٶ�(0~0x3f)            ��׼
#define SRV_CAMCTRL_ZOOMTELE    6       //�Ŵ�          �ٶ�(0~0x3f)            ��׼
#define SRV_CAMCTRL_FOCUSNEAR   7       //����          �ٶ�(0~0x3f)            ��׼
#define SRV_CAMCTRL_FOCUSFAR    8       //Զ��          �ٶ�(0~0x3f)            ��׼
#define SRV_CAMCTRL_IRISOPEN    9       //��Ȧ�Ŵ�      �ٶ�(0~0x3f)            ?
#define SRV_CAMCTRL_IRISCLOSE   10      //��Ȧ��С      �ٶ�(0~0x3f)            ?
#define SRV_CAMCTRL_AUTOSCAN    11      //�Զ�ɨ��      ����/ֹͣ(0/1)          ?
#define SRV_CAMCTRL_CRUISE      12      //Ѳ��          ����/ֹͣ(0/1)          ?
#define SRV_CAMCTRL_INFRARED    13      //����          ����/ֹͣ(0/1)          ��׼
#define SRV_CAMCTRL_RAINSTRIP   14      //��ˢ          ����/ֹͣ               ?
#define SRV_CAMCTRL_PRESET      15      //Ԥ��λ        Ԥ��λλ��              ?
#define SRV_CAMCTRL_WARNOUTPUT  16      //�澯���                              ?
#define SRV_CAMCTRL_SETPARAM    17      //���ò���                              ?
#define SRV_CAMCTRL_REBOOT      18      //�����豸                              ?
#define SRV_CAMCTRL_STOP        19      //ֹ֮ͣǰ��̨����

//��ʱͨ����Ϣ��,Ҳ�Ǽ�ʱͨ��״ָ̬ʾ��
#define PTE_CODE_TXREQ          1       //��������
#define PTE_CODE_TXCFM          2       //����ȷ��
#define PTE_CODE_USRREAD        3       //�û��Ķ�
#define PTE_CODE_USRREADCFM     4       //�û��Ķ���Ϣ��ȷ��
#define PTE_CODE_FILENAMEREQ    5       //�ļ�������
#define PTE_CODE_FILENAMERSP    6       //�ļ�����Ӧ


//��ʱ��Ϣ����
#define IM_TYPE_NONE            0x00    //��
//01~7f��Ҫ�洢ת��,�û�ȷ���յ���,ͨ��IDT_IMSend/IDT_IMRecv����
#define IM_TYPE_TXT             0x01    //ֻ���ı�                  ����Ҫ�ļ�          from + to + orito + text
#define IM_TYPE_GPS             0x02    //GPSλ����Ϣ               ����Ҫ�ļ�          from + to + orito + text(�ַ���:����,γ��)
#define IM_TYPE_IMAGE           0x03    //ͼ��                      ��Ҫ�ļ�            from + to + orito + text + filename + sourcefilename
#define IM_TYPE_AUDIO           0x04    //�����ļ�,΢��             ��Ҫ�ļ�            from + to + orito + text + filename + sourcefilename
#define IM_TYPE_VIDEO           0x05    //��Ƶ¼���ļ�              ��Ҫ�ļ�            from + to + orito + text + filename + sourcefilename
#define IM_TYPE_FILE            0x06    //�����ļ�                  ��Ҫ�ļ�            from + to + orito + text + filename + sourcefilename
#define IM_TYPE_BCALL           0x07    //������������              APP���ش洢ʹ��,������
#define IM_TYPE_VCALL           0x08    //������Ƶ����              APP���ش洢ʹ��,������
#define IM_TYPE_GCALL           0x09    //���                      APP���ش洢ʹ��,������
#define IM_TYPE_CONF            0x11    //�����ʽ����              ����Ҫ�ļ�          from + to + orito + text
                                        //IDT_IMSend/IDT_IMRecv��pcTxt�ֶ�,�ǻ����ʽ��������.����Json��ʽ,����Ϊ:
                                        //  {
                                        //  public int type;       //0 ����ԤԼ��Ϣ֪ͨ 1 ��Ա����ظ������Ϣ 2 ���鿪ʼ֪ͨ
                                        //  public String number;   //�����������Ϣ
                                        //  public String meetId;   //�᳡����
                                        //����ԤԼ��Ϣ֪ͨ ��д
                                        //  public String title; // �������
                                        //  public String desc;  // ��������
                                        //  public String time;  // ����ʱ��
                                        //��Ա����ظ������Ϣ ��д
                                        //  public boolean accept;  // �Ƿ����
                                        //  public String reason;    // �ܾ�ԭ��
                                        //  }
                                        //  ����������Ⱥ������ʱ,from=�����˺���,to=�����
                                        //  �����Ա���Ƿ���ܻ���ʱ,from=�����Ա����,to=�����
#define IM_TYPE_GCALLAUDIO      0x12    //���������Ϣ              ��Ҫ�ļ�            from + to + orito + text + filename + sourcefilename
#define IM_TYPE_CONFREC         0x13    //����¼��                  ��Ҫ�ļ�            from + to + orito + text + filename + sourcefilename

//0x80~0xff����Ҫ�洢ת��,�û����������,��ֱ�Ӷ���,ͨ��IDT_SendPassThrouth/IDT_RecvPassTrouth����
#define IM_TYPE_NSSUBS          0x80    //�洢����                  ����Ҫ�ļ�          ��ʼ����~��������;��ʼ����~��������;��ʼ����~��������;
#define IM_TYPE_NSQUERYREQ      0x81    //�洢��ѯ                  ����Ҫ�ļ�          NS_QUERY_s
#define IM_TYPE_NSQUERYRSP      0x82    //�洢��ѯ��Ӧ              ����Ҫ�ļ�          NS_QUERYRSP_s
#define IM_TYPE_VSQUERYCHAN_REQ 0x83    //��Ƶ���ز�ѯͨ������      ����Ҫ�ļ�          4001*97*192.168.2.38*8000*admin*admin123
#define IM_TYPE_VSQUERYCHAN_RSP 0x84    //��Ƶ���ز�ѯͨ����Ӧ      ����Ҫ�ļ�          ����#ͨ����-����;ͨ����-����;ͨ����-����;ͨ����-����;ͨ����-����;ͨ����-����
#define IM_TYPE_CAM_PLAYBACK    0x85    //����ͷ�ط�                ����Ҫ�ļ�          ��ʼʱ��~����ʱ��
#define IM_TYPE_ECHO_REQ        0x86    //EchoReq                   ����Ҫ�ļ�          �����*��*����*���  TimeMs��ֵ  (%d*%d*%d)
#define IM_TYPE_ECHO_RSP        0x87    //EchoRsp                   ����Ҫ�ļ�          �����*��*����*���  TimeMs��ֵ  (%d*%d*%d)
#define IM_TYPE_WRITE_PAR_REQ   0x88    //д��������                ����Ҫ�ļ�          �����*section*key*value    (%d*%s*%s*%s)
#define IM_TYPE_WRITE_PAR_RSP   0x89    //д������Ӧ                ����Ҫ�ļ�          �����*section*key*value    (%d*%s*%s*%s)
#define IM_TYPE_READ_PAR_REQ    0x8A    //����������                ����Ҫ�ļ�          �����*section*key          (%d*%s*%s)
#define IM_TYPE_READ_PAR_RSP    0x8B    //��������Ӧ                ����Ҫ�ļ�          �����*section*key*value    (%d*%s*%s*%s)
#define IM_TYPE_DISP_CMD_REQ    0x8C    //������������              ����Ҫ�ļ�          �����*�����*Ŀ�����      (%d*%d*%s)
                                        //  0x01    �汾�鿴
                                        //  0x02    ��Ƶ�ϴ�
                                        //  0x03    ��Ƶ����
                                        //  0x04    ͨ��
                                        //  0x05    ����λ����Ϣ
#define IM_TYPE_DISP_CMD_RSP    0x8D    //����������Ӧ              ����Ҫ�ļ�          �����*�����*Ŀ�����      (%d*%d*%s)
#define IM_TYPE_PHONE_SOS       0x91    //�ֻ���Ⱥ�鷢��sos��Ϣ
#define IM_TYPE_UPVIDEO_NOTIFY  0x92    //�ֻ�֪ͨ����û��ϴ���Ƶ

#define IM_TYPE_AUS_AUTH_REQ    0xa0    //��Ȩ����                  ����Ҫ�ļ�          �ն�->AUS   {"MyId":"MyId1", "OrgNum":"201910251439090", "AudioId":"AudioId1", "Imei":"Imei1", "HardType":"HardType1", "OsVer":"OsVer1", "IdsIp":"192.168.0.225:10022", "IdsNum":"1132"}
#define IM_TYPE_AUS_AUTH_RSP    0xa1    //��Ȩ��Ӧ                  ����Ҫ�ļ�          AUS->�ն�   {"MyId":"xxxxxxx", "Cause":0}
#define IM_TYPE_AUS_AUTH_IND    0xa2    //��Ȩָʾ                  ����Ҫ�ļ�          �ն�->AUS   {"MyId":"MyId1", "OrgNum":"201910251439090", "AudioId":"AudioId11", "Imei":"Imei1", "HardType":"HardType1", "OsVer":"OsVer1", "IdsIp":"192.168.0.225:10022", "IdsNum":"1132"}
#define IM_TYPE_AUS_AUTH_IND_RSP 0xa3   //��Ȩָʾ��Ӧ              ����Ҫ�ļ�          AUS->�ն�   {"MyId":"xxxxxxx", "Cause":0}
#define IM_TYPE_AUS_CREATE_REQ  0xa4    //��������                  ����Ҫ�ļ�          ����̨->AUS {"Name":"xxxxxxx", "Count":100}                                     
#define IM_TYPE_AUS_CREATE_RSP  0xa5    //������Ӧ                  ����Ҫ�ļ�          AUS->����̨ {"Name":"xxxxxxx", "Count":100, "Num":"xxxxxxx"}
#define IM_TYPE_AUS_LOAD_REQ    0xa6    //��������                  ����Ҫ�ļ�          ����̨->AUS {"Name":"xxxxxxx"}
#define IM_TYPE_AUS_LOAD_RSP    0xa7    //������Ӧ                  ����Ҫ�ļ�          AUS->����̨ {"Name":"xxxxxxx", "Count":100, "Num":"xxxxxxx", "CTime":""}
#define IM_TYPE_AUS_SYNDXSK_REQ 0xa8    //ͬ������������������      ����Ҫ�ļ�          AUS->����̨ {}
#define IM_TYPE_AUS_SYNDXSK_RSP 0xa9    //ͬ����������������Ӧ      ����Ҫ�ļ�          AUS->����̨ {""}

#define IM_TYPE_JNZJT_GPS_QUERY 0xb0    //��ŵ�м�̨GPS��ѯ         ����Ҫ�ļ�
#define IM_TYPE_DEBUG           0xb1    //��������

#define IM_TYPE_USER            0xff    //�û��Զ���                ����Ҫ�ļ�

#include "cause.h"

//��־
//���˺���                  �Զ˺���                ��ʼʱ��                ����ʱ��
//�ն�����(UT_TYPE_TAP)     �ն˽���Э��(FID_TAP)   IP��ַ                    
//��־����(LOGDB_TYPE_REG)  ������(OPT_USER_ADD)    ��������(�����Ǽ�)      ��ע(��������ϸ��Ϣ)
#define LOGDB_TYPE_REG          0x01        //��¼ϵͳ      ������ΪREG_TYPE_START��
#define LOGDB_TYPE_OAM          0x03        //OAM����       ������ΪOPT_USER_ADD��
#define LOGDB_TYPE_CALL         0x04        //�������      ������ΪSRV_TYPE_BASIC_CALL��
//�ն˽���Э��
//FID_TAP       4
//FID_SIPUA     8
//FID_WSSRV     16

#endif



