#if !defined _CAUSE_H_
#define _CAUSE_H_

#ifdef __cplusplus
extern "C" {
#endif

//--------------------------------------------------------------------------------
//     ԭ��ֵ��ʼ
//--------------------------------------------------------------------------------
//Normal class
#define CAUSE_ZERO  					0       //null
#define CAUSE_UNASSIGNED_NUMBER 		1       //δ�������
#define CAUSE_NO_ROUTE_TO_DEST  		2       //��Ŀ��·��
#define CAUSE_USER_BUSY 				3       //�û�æ
#define CAUSE_ALERT_NO_ANSWER   		4       //�û���Ӧ��(�˲�Ӧ��)
#define CAUSE_CALL_REJECTED 			5       //���б��ܾ�
#define CAUSE_ROUTING_ERROR 			6       //·�ɴ���
#define CAUSE_FACILITY_REJECTED 		7       //�豸�ܾ�
#define CAUSE_ERROR_IPADDR              8       //����IP��ַ������ҵ������
#define CAUSE_NORMAL_UNSPECIFIED		9       //ͨ��,δָ��
#define CAUSE_TEMPORARY_FAILURE 		10      //��ʱ����
#define CAUSE_RESOURCE_UNAVAIL  		11      //��Դ������
#define CAUSE_INVALID_CALL_REF  		12      //����ȷ�ĺ��вο���
#define CAUSE_MANDATORY_IE_MISSING  	13      //��ѡ��Ϣ��Ԫ��ʧ
#define CAUSE_TIMER_EXPIRY  			14      //��ʱ����ʱ
#define CAUSE_CALL_REJ_BY_USER          15      //���û��ܾ�
#define CAUSE_CALLEE_STOP               16      //����ֹͣ
#define CAUSE_USER_NO_EXIST             17      //�û�������
#define CAUSE_MS_UNACCESSAVLE           18      //���ɽ���
#define CAUSE_MS_POWEROFF               19      //�û��ػ�
#define CAUSE_FORCE_RELEASE             20      //ǿ�Ʋ���
#define CAUSE_HO_RELEASE                21      //�л�����
#define CAUSE_CALL_CONFLICT             22      //���г�ͻ
#define CAUSE_TEMP_UNAVAIL              23      //��ʱ�޷���ͨ
#define CAUSE_AUTH_ERROR                24      //��Ȩ����
#define CAUSE_NEED_AUTH                 25      //��Ҫ��Ȩ
#define CAUSE_SDP_SEL                   26      //SDPѡ�����
#define CAUSE_MS_ERROR                  27      //ý����Դ����
#define CAUSE_INNER_ERROR               28      //�ڲ�����
#define CAUSE_PRIO_ERROR                29      //���ȼ�����
#define CAUSE_SRV_CONFLICT              30      //ҵ���ͻ
#define CAUSE_NOTREL_RECALL             31      //����ҵ��Ҫ��,���ͷ�,�����غ���ʱ��
#define CAUSE_NO_CALL                   32      //���в�����
#define CAUSE_DUP_REG                   33      //�ظ�ע��
#define CAUSE_MG_OFFLINE                34      //MG����
#define CAUSE_DS_REQ_QUITCALL           35      //����ԱҪ���˳�����
#define CAUSE_DB_ERROR                  36      //���ݿ��������
#define CAUSE_TOOMANY_USER              37      //̫����û�
#define CAUSE_SAME_USERNUM              38      //��ͬ���û�����
#define CAUSE_SAME_USERIPADDR           39      //��ͬ�Ĺ̶�IP��ַ
#define CAUSE_PARAM_ERROR               40      //��������
#define CAUSE_SAME_GNUM                 41      //��ͬ�������
#define CAUSE_TOOMANY_GROUP             42      //̫�����
#define CAUSE_NO_GROUP                  43      //û�������
#define CAUSE_SAME_USERNAME             44      //��ͬ���û�����
#define CAUSE_OAM_OPT_ERROR             45      //OAM��������
#define CAUSE_INVALID_NUM_FORMAT		46      //����ȷ�ĵ�ַ��ʽ
#define CAUSE_INVALID_DNSIP             47      //DNS��IP��ַ����
#define CAUSE_SRV_NOTSUPPORT            48      //��֧�ֵ�ҵ��
#define CAUSE_MEDIA_NOTDATA             49      //û��ý������
#define CAUSE_RECALL                    50      //���º���
#define CAUSE_LINK_DISC                 51      //����
#define CAUSE_ORG_RIGHT                 52      //��֯ԽȨ(�ڵ�)
#define CAUSE_SAME_ORGNUM               53      //��ͬ����֯����
#define CAUSE_SAME_ORGNAME              54      //��ͬ����֯����
#define CAUSE_UNASSIGNED_ORG            55      //δ�������֯����
#define CAUSE_INOTHER_ORG               56      //��������֯��
#define CAUSE_HAVE_GCALL                57      //�Ѿ����������
#define CAUSE_HAVE_CONF                 58      //�Ѿ��л������
#define CAUSE_SEG_FORMAT                59      //����ĺŶθ�ʽ
#define CAUSE_USEG_CONFLICT             60      //�û�����γ�ͻ
#define CAUSE_GSEG_CONFLICT             61      //�����γ�ͻ
#define CAUSE_NOTIN_SEG                 62      //���ںŶ���
#define CAUSE_USER_IN_TOOMANY_GROUP     63      //�û�������̫��
#define CAUSE_DSSEG_CONFLICT            64      //����̨����γ�ͻ
#define CAUSE_OUTNETWORK_NUM            65      //�����û�
#define CAUSE_CFU                       66      //����������ǰת
#define CAUSE_CFB                       67      //��æ����ǰת
#define CAUSE_CFNRc                     68      //���ɼ�����ǰת
#define CAUSE_CFNRy                     69      //��Ӧ�����ǰת
#define CAUSE_MAX_FWDTIME               70      //�������ǰת����
#define CAUSE_OAM_RIGHT                 71      //OAM������Ȩ��
#define CAUSE_DGT_ERROR                 72      //�������
#define CAUSE_RESOURCE_NOTENOUGH        73      //��Դ����
#define CAUSE_ORG_EXPIRE                74      //��֯����
#define CAUSE_USER_EXPIRE               75      //�û�����
#define CAUSE_SAME_ROUTENAME            76      //��ͬ��·������
#define CAUSE_UNASSIGNED_ROUTE          77      //δ�����·��
#define CAUSE_OAM_FWD                   78      //OAM��Ϣǰת
#define CAUSE_UNCFG_MAINNUM             79      //δ����������
#define CAUSE_G_NOUSER                  80      //����û���û�
#define CAUSE_U_LOCK_G                  81      //�û�������������
#define CAUSE_U_OFFLINE_G               82      //����û�������û�

#define CAUSE_MAX                       0x1fff

#define CAUSE_EXPIRE_IDT                0x0000  //IDT��ʱ����ʱ
#define CAUSE_EXPIRE_MC                 0x4000  //MC��ʱ����ʱ
#define CAUSE_EXPIRE_MG                 0x8000  //MG��ʱ����ʱ

//--------------------------------------------------------------------------------
//     ԭ��ֵ����
//--------------------------------------------------------------------------------

#ifdef __cplusplus
}
#endif

#endif //


