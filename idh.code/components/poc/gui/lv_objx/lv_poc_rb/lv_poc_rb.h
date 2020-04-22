/******************************************
*   ��check box��װΪ��ѡ(radio box)��ť
*   ���� radio box ��Ĺ���ʽ��һ�� radio box ���У�����ֻ��һ�� check box ����ѡ��(����)״̬
*   �����ж������״̬
*   rb�鲻����cb�������Ĵ�����rb�����ɾ������������ɾ��ʵ�ʶ���cb, ��Ҫ�Լ�ʹ��lv_obj_del()ɾ��cb
******************************************/
#ifndef __INCLUDE_LV_POC_RB__
#define  __INCLUDE_LV_POC_RB__

#ifdef __cplusplus
extern "C" {
#endif

/*************************************************
*
*                  INCLUDE
*
*************************************************/
#include "lvgl.h"
#include "lv_include/lv_poc.h"
//#include "lv_include/lv_poc_conf.h"
#include <stdarg.h>

/*************************************************
*
*                  DEFINE
*
*************************************************/
#define LV_POC_WIN_TITLE_HEIGHT_RATIO  5

/*************************************************
*
*                  ENUM
*
*************************************************/


/*************************************************
*
*                  TYPEDEF
*
*************************************************/
/*Data of list*/
typedef struct _lv_poc_rb_node_t {
    lv_obj_t * cb;
    lv_btn_state_t state;
    struct _lv_poc_rb_node_t * next;
} lv_poc_rb_node_t;


typedef struct _lv_poc_rb_t{
    lv_obj_t * last_cb;
    lv_poc_rb_node_t *cbs;
} lv_poc_rb_t;



/*************************************************
*
*                  STRUCT
*
*************************************************/
/*******************
*     NAME:
*   AUTHOR:   lugj
* DESCRIPT:
*     DATE:   2019-11-25
********************/


/*************************************************
*
*                  EXTERN
*
*************************************************/


/*************************************************
*
*                  STATIC
*
*************************************************/


/*************************************************
*
*                  PUBLIC DEFINE
*
*************************************************/
/*******************
*     NAME:   lv_poc_rb_create
*   AUTHOR:   lugj
* DESCRIPT:   ����interphone radio box������
*     DATE:   2019-11-25
********************/
lv_poc_rb_t * lv_poc_rb_create(void);

/*******************
*     NAME:   lv_poc_rb_add
*   AUTHOR:   lugj
* DESCRIPT:   ��check box��Ϊradio box��ӵ�radio box��������
*     DATE:   2019-11-25
********************/
void lv_poc_rb_add(lv_poc_rb_t * rb, lv_obj_t * cb);

/*******************
*     NAME:   lv_poc_rb_press
*   AUTHOR:   lugj
* DESCRIPT:   ѡ��rb��cb
*     DATE:   2019-11-25
********************/
void lv_poc_rb_press(lv_poc_rb_t * rb, lv_obj_t * cb);

/*******************
*     NAME:   lv_poc_rb_get_pressed
*   AUTHOR:   lugj
* DESCRIPT:   ��ȡrb�е�ǰ��ѡ�е�cb
*     DATE:   2019-11-25
********************/
lv_obj_t * lv_poc_rb_get_pressed(lv_poc_rb_t * rb);

/*******************
*     NAME:   lv_poc_rb_remove_cb
*   AUTHOR:   lugj
* DESCRIPT:   ɾ��rb��ָ����cb
*     DATE:   2019-11-25
********************/
void lv_poc_rb_remove_cb(lv_poc_rb_t * rb, lv_obj_t * cb);

/*******************
*     NAME:   lv_poc_rb_clean
*   AUTHOR:   lugj
* DESCRIPT:   ���rb������cb
*     DATE:   2019-11-25
********************/
void lv_poc_rb_clean(lv_poc_rb_t * rb);

/*******************
*     NAME:   lv_poc_rb_del
*   AUTHOR:   lugj
* DESCRIPT:   ɾ��rb���������cb
*     DATE:   2019-11-25
********************/
void lv_poc_rb_del(lv_poc_rb_t * rb);



#ifdef __cplusplus
}
#endif


#endif //__INCLUDE_LV_INTER_PHONE_RB__

