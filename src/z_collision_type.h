/* $Id: z_collision_type.h,v 2.1 1998/10/22 11:45:49 zelda Exp $ */
/* $Log: z_collision_type.h,v $
 * Revision 2.1  1998/10/22  11:45:49  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.37  1998/09/05 14:00:12  matutani
 * *** empty log message ***
 *
 * Revision 1.36  1998-09-04 00:01:43+09  matutani
 * *** empty log message ***
 *
 * Revision 1.35  1998-08-25 20:51:00+09  matutani
 * �ѹ��Ԥ��ä��ѹ���̵��
 *
 * Revision 1.34  1998-07-14 21:36:03+09  matutani
 * Shield_Info���
 *
 * Revision 1.33  1998-05-08 22:06:26+09  matutani
 * �������
 *
 * Revision 1.32  1998-05-08 21:35:29+09  matutani
 * *** empty log message ***
 *
 * Revision 1.31  1998-04-30 19:31:43+09  matutani
 * ������¤���ѹ�
 * �������������ѥ��뤷�ʤ���ư���ޤ���
 *
 * Revision 1.30  1998-04-29 15:14:05+09  matutani
 * �������ɲ�
 *
 * Revision 1.29  1998-03-18 12:00:44+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.28  1998/03/17  07:31:37  kuzuhara
 * MAX_CLCH_AC_NUM 60���ѹ�
 *
 * Revision 1.27  1998/03/09  13:37:13  matutani
 * �ϣå����å����ѹ�
 *
 * Revision 1.26  1998/02/26  02:40:49  matutani
 * *** empty log message ***
 *
 * Revision 1.25  1998/02/25  13:40:24  matutani
 * status��offset�ɲ�
 *
 * Revision 1.24  1998/02/11  11:58:44  matutani
 * *** empty log message ***
 *
 * Revision 1.23  1997/11/17  06:57:56  matutani
 * �ҥåȻ�������������
 *
 * Revision 1.22  1997/11/13  05:51:31  matutani
 * �ɲá����ꥢ��߽���
 *
 * Revision 1.21  1997/11/12  14:02:29  matutani
 * �ҥåȻ��ΥХå�����
 *
 * Revision 1.20  1997/11/10  06:39:35  matutani
 * ������ʥӥåȡ��ʰ׵�Υ�׻��ˡ��Хȥ�ǡ�������
 * 
 * Revision 1.19  1997/11/05  02:47:34  matutani
 * ���ꥸ���ǡ�����¤��
 *
 * Revision 1.18  1997/11/05  01:19:07  matutani
 * *** empty log message ***
 *
 * Revision 1.17  1997/11/04  12:53:58  matutanib_heart_2_modelT
 * �ҥåȥޡ�������
 *
 * Revision 1.16  1997/10/31  03:06:21  matutani
 * ���ơ��������ǥХå�ɽ��
 *
 * Revision 1.15  1997/10/30  14:13:41  matutani
 * Status ��¤���ɲ�
 * Damage��¤�Τ��褦�ʤ顣��ͽ���
 *
 * Revision 1.14  1997/10/30  08:00:46  matutani
 * *** empty log message ***
 *
 * Revision 1.13  1997/10/30  02:35:54  matutani
 * *** empty log message ***
 *
 * Revision 1.12  1997/10/29  13:57:44  matutani
 * ���ǥ��ꥸ�������å��������ȥС������
 *
 * Revision 1.11  1997/10/18  14:09:32  matutani
 * �ǥХå�����
 *
 * Revision 1.10  1997/10/14  06:01:26  matutani
 * �Ǥ����߽�λ
 *
 * Revision 1.9  1997/10/13  05:03:22  matutani
 * *** empty log message ***
 *
 * Revision 1.8  1997/10/10  12:59:20  matutani
 * NewCollisionCheck ������
 *
 * Revision 1.7  1997/10/08  02:45:03  matutani
 * *** empty log message ***
 *
 * Revision 1.6  1997/10/08  01:38:13  matutani
 * CollisionCheck��¤��
 *
 * Revision 1.5  1997/08/28  02:36:06  matutani
 * ���⥿���ץ�٥��ɲ�
 *
 * Revision 1.4  1997/08/18  00:49:58  matutani
 * ˡ������
 *
 * Revision 1.3  1996/09/25  01:40:36  matutani
 * *** empty log message ***
 *
 * Revision 1.2  1996/09/24  13:02:41  matutani
 * *** empty log message ***
 *
 * Revision 1.1  1996/09/24  12:10:34  matutani
 * Initial revision
 *
 */
/*----------------------------------------------------------------------------
 *
 * z_collision_type.h
 * COLLISION�ι�¤�����
 * ���Υإå����򥤥󥯥롼�ɤ�������sys_math3d.h�򥤥󥯥롼�ɤ��Ƥ���������
 *
 *---------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_COLLISION_TYPE_H
#define INCLUDE_Z_COLLISION_TYPE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/*==========================================================================
 *
 * ����¤��Version3 (Version2���ܺ�)
 *
 * ư������
 * ����Ƚ��ʷ��ʤɡ�                  AT 
 * ������Ф�������Ƚ��(�Τʤɡ�       AC (Attack Collision)
 * OBJƱ�ΤΥ����å��ʥ��ꥸ����     OC (Object Collision)
 *
 *==========================================================================*/
/*===========================================================================
 *
 * ���⥿����
 *
 *===========================================================================*/
/*----------------------------------------------------------------------------
 *
 * ���⥿���ץ�٥�(��ǡ�����
 *
 *---------------------------------------------------------------------------*/
typedef enum {
    CL_AT_LBL_NONE, /* �ʤ� */
    CL_AT_LBL_SWORD, /* �� */
    CL_AT_LBL_ARROW, /* �� */
    CL_AT_LBL_BOMB, /* ���� */
    CL_AT_LBL_OTHERS, /* ����¾����� */
    
    CL_AT_LBL_LAST_INDEX
} CL_AT_LBL;
/*===========================================================================
 *
 * ������δ��ܹ�¤��
 * ��⡧��������������Ȥ��Σ��ĤΥ����פˤĤ����Ļ��ġ�
 *
 *=========================================================================*/
/*--------------------------------------------------------------------------
 *
 * DATA������
 * z_collision_check.c��collection_function���б����Ƥ���Τ����
 *
 *-------------------------------------------------------------------------*/
typedef enum cl_data_lbl {
    CL_DATA_LBL_JNT_SPH, /* ����� */
    CL_DATA_LBL_PIPE, /* �ѥ��ף��� */
    CL_DATA_LBL_TRIS, /* ���ѷ����� */
    CL_DATA_LBL_SWRD, /* ���ǡ��� */
    CL_DATA_LBL_LAST_INDEX
} CL_DATA_LBL;

#if 0
/* dead */
/*==========================================================================
 *
 * ������ɾ���
 *
 *==========================================================================*/
typedef struct shield_info {
    /* ͭ���ϰ� */
    Math3D_pipe pipe; /* ���������� */
    short start_angle; /* �ϰϳ���:�������Ȱ��� */
    short diff_angle; /* start_angle����γ���,����ξ��OK */
} Shield_Info;
#endif

/*---------------------------------------------------------------------------
 *
 * ClObj����¤��
 *
 * Actor *self : ��ʬ�Υݥ��󥿡�
 * Actor *at_ac_actor : ̿����
 * Actor *ac_at_actor : ���⸵
 * Acotr *oc_actor : ���ꥸ�����������������줿���������ݥ��󥿡�
 *
 * unsigned char at_bit,ac_bit,oc_bit,oc_bit2 :
 *                                      ����ӥåȤ�z_collision_param.h����
 * ���:
 * *at_bit:����ط�
 * �����å�,�ҥåȻ��ӥå�,�ҥå��оݥ��롼��,����¾
 * *ac_bit:�����оݴط�
 * �����å�,�ҥåȻ��ӥå�,��ӥå�,�ҥå��оݥ��롼��,����¾
 * *oc_bit:�����Ʊ�Τΰ�������
 * �����å�,�ҥåȻ��ӥå�,�оݥ��롼��,����¾
 * *oc_bit2:�����Ʊ�Τΰ���������ĥ
 * �ץ쥤�䡼�ȤΥҥå�,���ʥ��롼��
 *
 * unsigned char hit_mark_type: �ҥåȥޡ��� �ǥե���Ȥ�CL_HM_HM1 
 *
 * unsigned char data_type :�ǡ�����
 *
 *--------------------------------------------------------------------------*/
typedef struct cl_obj {
    /*
     * ���
     * Actor��̵�ط��ʾ���NULL�ˤ��Ƥ���
     */
    Actor *self; /* ��ʬ:OC�ξ��������о� */
    Actor *at_ac_actor; /* ̿���� */
    Actor *ac_at_actor; /* ���⸵ */
    Actor *oc_actor; /* �ܿ����륢������ */
    
    /* ����ӥå� */
    unsigned char at_bit;
    unsigned char ac_bit;
    unsigned char oc_bit;
    unsigned char oc_bit2;
    
    unsigned char hit_mark_type; /* �ҥåȥޡ����ѥ�᡼�� */
    unsigned char data_type; /* CL_DATA_LBL �����Ƥ����� */
} ClObj;

/*
 * ����x¤�Υ��å��ѥǡ�����¤��
 */
typedef struct cl_obj_data {
    Actor *self; /* ��ʬ:OC�ξ��������о� */

    /* ����ӥå� */
    unsigned char at_bit;
    unsigned char ac_bit;
    unsigned char oc_bit;

    unsigned char data_type; /* CL_DATA_LBL �����Ƥ����� */
} ClObjData;

/*
 * ����¤�Υ��åȥǡ�����¤��:�ҥåȥޡ����ɲ�
 * Version 3
 */
typedef struct cl_obj_datat3 {
    /* �ҥåȥޡ��� */
    unsigned char hit_mark_type;

    /* ����ӥå� */
    unsigned char at_bit;
    unsigned char ac_bit;
    unsigned char oc_bit;

    unsigned char data_type; /* CL_DATA_LBL�����Ƥ����� */
} ClObjData3;

/*
 * ����¤�Υ��åȥǡ�����¤��:oc_bit2�ɲ�
 * Version 4
 */
typedef struct cl_obj_data4 {
    /* �ҥåȥޡ��� */
    unsigned char hit_mark_type;

    /* ����ӥå� */
    unsigned char at_bit;
    unsigned char ac_bit;
    unsigned char oc_bit;
    unsigned char oc_bit2; /* ����OC�����ɲ� */

    unsigned char data_type; /* CL_DATA_LBL�����Ƥ����� */
} ClObjData4;

/*---------------------------------------------------------------------------
 *
 * �Хȥ�ǡ�����Ϣ����
 *
 *--------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------
 *
 * AT�Хȥ����
 *
 * unsigned long at_type : ���⥿���ץӥåȾ��� z_collision_param.h ����
 * 
 * unsigned char at_special : �ҥåȻ��ü�ǡ��� z_collision_param.h ����
 * ���Υǡ����Ϲ��⤬�ҥåȤ��������Ϥ���롣
 * unsigned char atp : ������ ���᡼���ͤ˲û�
 *
 *--------------------------------------------------------------------------*/
typedef struct cle_at_btl_info {
    /* ���� */
    unsigned long at_type; /* ���⥿���ץӥåȾ��� */
    
    unsigned char at_special; /* �ҥåȻ��ü�ǡ���:CLE_AT_SPECIAL_TYPE */
    unsigned char atp; /* ������ */
} CleAtBtlInfo;

/*--------------------------------------------------------------------------
 *
 * AT�Хȥ����ǡ�����ʬ
 *
 * Ʊ��
 *
 *--------------------------------------------------------------------------*/
typedef struct cle_at_btl_info_data {
    unsigned long at_type;  /* ���⥿���ץӥåȾ��� */
    unsigned char at_special; /* �ҥåȻ��ü�ǡ���:CLE_AT_SPECIAL_TYPE  */
    unsigned char atp; /* ������ */
} CleAtBtlInfoData;

/*----------------------------------------------------------------------------
 *
 * AC�Хȥ����
 *
 * unsigned long at_type_mask : ����ӥåȾ���ޥ���
 *
 * unsigned char ac_special : ����ҥåȻ��ü�ǡ���
 * ���Υǡ����Ϲ��⤷�������Ϥ���롣
 *
 * unsigned char ac : �ɸ��� ���᡼���ͤ������
 *
 *--------------------------------------------------------------------------*/
typedef struct cle_ac_btl_info {
    unsigned long ac_type_mask; /* ����ӥåȥҥåȾ���ޥ��� */
    unsigned char ac_special; /* ����ҥåȻ��ü�ǡ���:CLE_AC_SPECIAL_TYPE */
    unsigned char ac; /* �ɸ��� */
    s_xyz cross; /* �򺹰��� */
} CleAcBtlInfo;

/*----------------------------------------------------------------------------
 *
 * AC�Хȥ����ǡ�����ʬ
 *
 * Ʊ��
 *
 *---------------------------------------------------------------------------*/
typedef struct cle_ac_btl_info_data {
    unsigned long ac_type_mask; /* ����ӥåȥҥåȾ���ޥ��� */
    unsigned char ac_special; /* ����ҥåȻ��ü�ǡ���:CLE_AC_SPECIAL_TYPE*/
    unsigned char ac; /* �ɸ��� */
} CleAcBtlInfoData;

/*-----------------------------------------------------------------------------
 *
 * ����¤��
 * ���:ClObj�Ȥϰۤʤ�,���칽¤�Ρ��Ȥ��ƤϻȤ�ʤ���
 * ���
 * CleAtBtlInfo at_btl_info : ����¦�ǡ�����Ϣ
 * CleAcBtlInfo ac_btl_info : �����о�¦�ǡ�����Ϣ
 *
 * unsinged char at_bit,ac_bit,oc_bit : ����ӥå� z_collision_param.h����
 *
 *---------------------------------------------------------------------------*/
typedef struct cl_obj_elem {
    
    /* ��Ʈ�ǡ�����Ϣ */
    CleAtBtlInfo at_btl_info; 
    CleAcBtlInfo ac_btl_info;
    
    /* ����ǡ��� */
    unsigned char material;
    
    /* ����ӥå� */
    unsigned char at_bit; 
    unsigned char ac_bit;
    unsigned char oc_bit;
    
    ClObj *at_hit_obj; /* ���ä�ClObj�ؤΥݥ��󥿡� (for at) */
    ClObj *ac_hit_obj; /* ����ClObj�ؤΥݥ��󥿡� (for ac) */
    struct cl_obj_elem *at_hit_elem;/*���ä�������ȤؤΥݥ��󥿡� (for at)*/
    struct cl_obj_elem *ac_hit_elem;/* ���⥨����ȤؤΥݥ��󥿡� (for ac) */
    
} ClObjElem;

/*---------------------------------------------------------------------------
 *
 * ���󥻥å��ѹ�¤��
 *
 * Ʊ��
 *
 *--------------------------------------------------------------------------*/
typedef struct cl_obj_elem_data {
    /* ����ǡ��� */
    unsigned char material;
    
    CleAtBtlInfoData at_btl_info_data; /* ����ǡ��� */
    CleAcBtlInfoData ac_btl_info_data; /* �ɸ�ǡ��� */

    /* ����ӥå� */
    unsigned char at_bit; 
    unsigned char ac_bit;
    unsigned char oc_bit;
    
} ClObjElemData;

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
 *
 * ��������
 *
 *::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

/*--------------------------------------------------------------------------
 *
 * ��������ǥǡ���°��
 *
 * ��⡧
 * char sph_index_tbl;�ϳƵ���б����른�祤��ȥ���ǥå�����ؤ�������
 * Math3D_sphere local_sph;�ޥȥ�å������Ѵ����ε�ǡ������б����른��
 * ����Ȥ��Ф��������ǡ��������äƤ��롣
 * Math3D_sphere��s_xyz���濴���֤Τߥȥ�󥹥졼�Ȥ��롣
 * Math3D_sphere global_sph;�ޥȥ�å������Ѵ���Υǡ��� �����Ƚ���Ԥ�
 * float scl_r; r���Ф��륹�������� 
 *
 *---------------------------------------------------------------------------*/
typedef struct cl_obj_jnt_sph_elem_attr {
    Math3D_sphere local_sph; /* ����������ǡ���  */
    Math3D_sphere global_sph; /* �����Х�����ǡ��� */
    float scl_r; /* r���Ф��륹��������:100���ͤǤʤ��� */
    unsigned char sph_index; /* ���ᥤ��ǥå����ơ��֥�ؤΥ���ǥå��� */
} ClObjJntSphElemAttr;

/*-------------------------------------------------------------------------
 *
 * ��������ǥ��å��ѥǡ���
 *
 *------------------------------------------------------------------------*/
typedef struct cl_obj_jnt_sph_elem_attr_data {
    unsigned char sph_index;
    Math3D_sphere local_sph;
    short scl_r100; /* r���Ф��륹�������� */
} ClObjJntSphElemAttrData;

/*-------------------------------------------------------------------------
 *
 * ��������ǥǡ���
 *
 *-------------------------------------------------------------------------*/
typedef struct cl_obj_jnt_sph_elem {
    ClObjElem cl_elem; /* �������������ѥǡ��� */
    ClObjJntSphElemAttr attr; /* ��������°���� */
} ClObjJntSphElem;


/*-------------------------------------------------------------------------
 *
 * ��������ǥǡ������å��ѹ�¤��
 *
 *-------------------------------------------------------------------------*/
typedef struct cl_obj_jnt_sph_elem_data {
    ClObjElemData cl_elem_data; /* �������������ѥǡ��� */
    ClObjJntSphElemAttrData attr_data; /* ��������°���� */
} ClObjJntSphElemData;

/*---------------------------------------------------------------------------
 *
 * �����
 * 
 *---------------------------------------------------------------------------*/
typedef struct cl_obj_jnt_sph {
    ClObj cl_obj; /* ������� */
    int num; /* �����:�ʲ����δ����ʬ�����ǡ�����¸�ߤ��롣 */
    ClObjJntSphElem *elem_tbl; /* ��������ǥơ��֥� */
} ClObjJntSph;

/*----------------------------------------------------------------------------
 *
 * �����ǡ������å��ѹ�¤��
 *
 *--------------------------------------------------------------------------*/
typedef struct cl_obj_jnt_sph_data {
    ClObjData cl_obj_data; /* �������ǡ��� */
    int num;
    ClObjJntSphElemData *elem_data_tbl;
} ClObjJntSphData;

/*--------------------------------------------------------------------------
 *
 * �����ǡ������å��ѹ�¤��
 * Version3
 *
 *-------------------------------------------------------------------------*/
typedef struct cl_obj_jnt_sph_data3 {
    ClObjData3 cl_obj_data;
    int num;
    ClObjJntSphElemData *elem_data_tbl;
} ClObjJntSphData3;

/*----------------------------------------------------------------------------
 *
 * �����ǡ������å��ѹ�¤��(ClObjData4��version up!!)
 * Version5
 *
 *--------------------------------------------------------------------------*/
typedef struct cl_obj_jnt_sph_data5 {
    ClObjData4 cl_obj_data;
    int num;
    ClObjJntSphElemData *elem_data_tbl;
} ClObjJntSphData5;

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
 *
 * ������ѥ��׹�¤�ξ���
 *
 *:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*----------------------------------------------------------------------------
 *
 * °������
 *
 *---------------------------------------------------------------------------*/
typedef struct cl_obj_pipe_attr {
    Math3D_pipe pipe; /* �������� */
} ClObjPipeAttr;

/*---------------------------------------------------------------------------
 *
 * °�����󥻥åȹ�¤��
 *
 *--------------------------------------------------------------------------*/
typedef struct cl_obj_pipe_attr_data {
    Math3D_pipe pipe;
} ClObjPipeAttrData;

/*----------------------------------------------------------------------------
 *
 * �ѥ���
 *
 *-------------------------------------------------------------------------*/
typedef struct cl_obj_pipe {
    ClObj cl_obj; /* ������� */
    ClObjElem cl_elem; /* ������ǡ������� */
    ClObjPipeAttr attr; /* °������ */
} ClObjPipe;

/*--------------------------------------------------------------------------
 *
 * �ѥ��׾��󥻥åȹ�¤��
 *
 *-------------------------------------------------------------------------*/
typedef struct cl_obj_pipe_data {
    ClObjData cl_obj_data;  /* �������ǡ��� */
    ClObjElemData cl_elem_data; /* ������ǡ������� */
    ClObjPipeAttrData attr_data; /* °������ */
} ClObjPipeData;

/*---------------------------------------------------------------------------
 *
 * �ѥ��׾��󥻥åȹ�¤��
 * Version3
 *
 *---------------------------------------------------------------------------*/
typedef struct cl_obj_pipe_data3 {
    ClObjData3 cl_obj_data; /* �������ǡ��� */
    ClObjElemData cl_elem_data; /* ������ǡ������� */
    ClObjPipeAttrData attr_data; /* °������ */
} ClObjPipeData3;

/*---------------------------------------------------------------------------
 *
 * �ѥ��׾��󥻥åȹ�¤��(ClObjData4��Version up!!)
 * Version5
 *
 *-------------------------------------------------------------------------*/
typedef struct cl_obj_pipe_data5 {
    ClObjData4 cl_obj_data; /* �������ǡ��� */
    ClObjElemData cl_elem_data; /* ����ǡ������� */
    ClObjPipeAttrData attr_data; /* °������ */
} ClObjPipeData5;

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
 *
 * �����껰�ѷ���¤�ξ���
 *
 *:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*--------------------------------------------------------------------------
 *
 * °������
 *
 *------------------------------------------------------------------------*/
typedef struct cl_obj_tris_elem_attr {
    Math3D_triangle tri; /* ���ѷ��������� */
} ClObjTrisElemAttr;
 
/*-------------------------------------------------------------------------
 *
 * °����������ǡ���
 *
 *------------------------------------------------------------------------*/
typedef struct cl_obj_tris_elem_attr_set {
    xyz_t pos[3]; /* ���ѷ��������� */
} ClObjTrisElemAttrData;
 
/*--------------------------------------------------------------------------
 *
 * �����껰�ѷ��ǡ�������
 *
 *------------------------------------------------------------------------*/
typedef struct cl_obj_tris_elem {
    ClObjElem cl_elem; /* ������ǡ������� */
    ClObjTrisElemAttr attr; /* °������ */
} ClObjTrisElem;

/*-------------------------------------------------------------------------
 *
 * ���껰�ѷ��ǡ������ǥǡ������å�
 *
 *------------------------------------------------------------------------*/
typedef struct cl_obj_tris_elem_data {
    ClObjElemData cl_elem_data; /* ����ǡ����������깽¤�� */
    ClObjTrisElemAttrData attr_data; /* °������ */
} ClObjTrisElemData;

/*-------------------------------------------------------------------------
 *
 * ���ѷ� ����
 *
 *-------------------------------------------------------------------------*/
typedef struct cl_obj_tris {
    ClObj cl_obj; /* ������� */
    int num; /* ���ǿ� */
    ClObjTrisElem *elem_tbl; /* ���ѷ����ǥơ��֥� */
} ClObjTris;

/*--------------------------------------------------------------------------
 *
 * ���ѷ�����
 *
 *---------------------------------------------------------------------------*/
typedef struct cl_obj_tris_data {
     ClObjData cl_obj_data; /* �������ǡ��� */
     int num; /* ���ǿ� */
     ClObjTrisElemData *elem_data_tbl; /* �ǡ����ơ��֥��� */
 } ClObjTrisData;

/*----------------------------------------------------------------------------
 *
 * ���ѷ�����
 * Version3
 *
 *--------------------------------------------------------------------------*/
typedef struct cl_obj_tris_data3 {
    ClObjData3 cl_obj_data; /*  /* �������ǡ��� */
     int num; /* ���ǿ� */
     ClObjTrisElemData *elem_data_tbl; /* �ǡ����ơ��֥��� */
 } ClObjTrisData3;
 
/*----------------------------------------------------------------------------
 *
 * ���ѷ�����
 * Version5
 *
 *--------------------------------------------------------------------------*/
typedef struct cl_obj_tris_data5 {
    ClObjData4 cl_obj_data; /* �������ǡ��� */
    int num; /* ���ǿ� */
    ClObjTrisElemData *elem_data_tbl; /* �ǡ����ơ��֥��� */
} ClObjTrisData5;

/*:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
 *
 * ����ƻ�ǡ���
 *
 *:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*------------------------------------------------------------------------
 *
 * ����ƻ�ǡ������ȥ�ӥ塼��
 * xyz_t new_root, new_top, prev_root, prev_top: �������ǡ���
 * s_xyz start, end : �������������ǡ��� ClObjSwrdAttr_set()�Ƿ׻���ľ��
 *
 *-----------------------------------------------------------------------*/
typedef struct cl_obj_swrd_attr {
    xyz_t new_root;
    xyz_t new_top;
    xyz_t prev_root;
    xyz_t prev_top;
    
    s_xyz start;
    s_xyz end;
    
    /*
     * ���ߤι����Υ:end����ҥåȰ��֤ޤǤε�Υ
     * ���:���⸵�Ϲ��⥿���פˤ���Ѳ������礬���ꡢ�����ˤ�äƤ�
     * ������ʤ���礬���뤫���Τ�ʤ���
     * �ͤϣ�����
     */
    float hit_length;

} ClObjSwrdAttr;

/*------------------------------------------------------------------------
 *
 * ����ƻ�ǡ������ȥ�ӥ塼������ǡ���
 *
 *-----------------------------------------------------------------------*/
typedef struct cl_obj_swrd_attr_data {
    xyz_t new_root;
    xyz_t new_top;
    xyz_t prev_root;
    xyz_t prev_top;
} ClObjSwrdAttrData;

/*-------------------------------------------------------------------------
 *
 * ����ƻ
 *
 *------------------------------------------------------------------------*/
typedef struct cl_obj_swrd {
    ClObj cl_obj; /* ������� */
    ClObjElem cl_elem; /* ������ǡ������� */
    ClObjSwrdAttr attr; /* °���ǡ��� */
} ClObjSwrd;

/*-----------------------------------------------------------------------
 *
 * ����ƻ����ǡ���
 *
 *--------------------------------------------------------------------*/
typedef struct cl_obj_swrd_data {
    ClObjData cl_obj_data; /* �������ǡ��� */
    ClObjElemData cl_elem_data; /* ����ǡ�����������ǡ��� */
    ClObjSwrdAttrData attr_data; /* °������ǡ��� */
} ClObjSwrdData;

/*-----------------------------------------------------------------------
 *
 * ����ƻ����ǡ���
 * Version3
 *
 *--------------------------------------------------------------------*/
typedef struct cl_obj_swrd_data3 {
    ClObjData3 cl_obj_data; /* �������ǡ��� */
    ClObjElemData cl_elem_data; /* ����ǡ�����������ǡ��� */
    ClObjSwrdAttrData attr_data; /* °������ǡ��� */
} ClObjSwrdData3;

/*--------------------------------------------------------------------------
 *
 * ����ƻ����ǡ���(ClObjData4��Version up!!)
 * Version5
 *
 *------------------------------------------------------------------------*/
typedef struct cl_obj_swrd_data5 {
    ClObjData4 cl_obj_data;  /* �������ǡ��� */
    ClObjElemData cl_elem_data; /* ����ǡ�����������ǡ��� */
    ClObjSwrdAttrData attr_data; /* °������ǡ��� */
} ClObjSwrdData5;

/*=========================================================================
 *
 * OC���� �饤������å�
 *
 *========================================================================*/
/*-------------------------------------------------------------------------
 *
 * �ƥ����å�����
 *
 *------------------------------------------------------------------------*/
typedef struct cl_oc_line {
    
    /* ���������� */
    Math3D_lineSegment ls;
    
    /* �����ӥå� */
    unsigned short status;
} ClOCLine;

/*---------------------------------------------------------------------------
 *
 * ���å��ѥǡ�����
 *
 *--------------------------------------------------------------------------*/
typedef struct cl_oc_line_data {
    
    /* �������� */
    Math3D_lineSegment ls;
    
    /* �����ӥå� */
    unsigned short status;
    
} ClOCLineData;
    

/*=========================================================================
 *
 * ���ꥸ�������å�������¤��
 *
 *========================================================================*/
#define MAX_CLCH_AT_NUM 50
#define MAX_CLCH_AC_NUM 60
#define MAX_CLCH_OC_NUM 50
#define MAX_CLCH_OC_LINE_NUM 3
typedef struct collision_check {
    /* ���ꥸ���ǡ����ơ��֥� */

    /* AT */
    short at_num;
    unsigned short status;
    ClObj *at_tbl[MAX_CLCH_AT_NUM];
    /* AC */
    int ac_num;
    ClObj *ac_tbl[MAX_CLCH_AC_NUM];
    /* OC */
    int oc_num;
    ClObj *oc_tbl[MAX_CLCH_OC_NUM];
    
    /* OC Line */
    int oc_line_num;
    ClOCLine *oc_line_tbl[MAX_CLCH_OC_LINE_NUM];
    
} CollisionCheck;

/*===========================================================================
 *
 * Damage��¤��
 *
 * int hp: ���ߤ�����
 * int damage: ���᡼��(����������ϸ�����
 * Actor *pactor: ����ԤؤΥݥ��󥿡�
 *
 *==========================================================================*/
typedef struct damage_s {
    int hp; /* HP */
    int damage; /* ���᡼���� */
    /* �ü�ǡ��� */
    unsigned char at_special;
    unsigned char ac_special;
    unsigned char weight; /* weight */
    
    
    /* ��¢���� */
    CL_AT_LBL type; /* ���᡼�������� */
    Actor *pactor; /* ����� */
    CL_AT_LBL at_lbl; /* �����٥� */

    xyz_t attacker_pos; /* ����԰��� */
    int set_damage; /* ���᡼���ե�å� */
} DAMAGE_S;

/*==========================================================================
 *
 * Ũȿ���ǡ���
 * unsigned char reaction[32]: ȿ���ǡ���
 *
 *=========================================================================*/
typedef struct btl_data {
    /* Ũȿ����٥�:z_collision_param.h CL_BTD_TYPE */
    unsigned char reaction[32];
} BtlData;

/*===========================================================================
 *
 * Status ��¤��
 *
 *===========================================================================*/
typedef struct status_s {
    /* Ũȿ���ǡ��� */
    BtlData *btl_data;
    /* ���룱�ե졼����������٥��ȥ� */
    xyz_t coll_vec;
    
    /* Ⱦ�� */
    short r;
    /* �⤵ */
    short h;
    /* ���ե��å� */
    short offset;
    /* weight */ 
    unsigned char weight;
    
    unsigned char hp; /* HP */
    unsigned char damage; /* damage */
    unsigned char hit_reaction; /* �����������Ȥ��Υꥢ������� */
    
    /* �ü�ǡ��� */
    unsigned char at_special;
    unsigned char ac_special;
    
} Status;

/*---------------------------------------------------------------------------
 *
 * ���ơ������ǡ���
 *
 *--------------------------------------------------------------------------*/
typedef struct status_data_s {
    unsigned char hp; /* HP */
    unsigned char hit_mark_type; /* �ҥåȥޡ����ѥ�᡼�� */
    
    /* Ⱦ�� */
    short r;
    /* �⤵ */
    short h;
    /* weight */
    unsigned char weight;
} Status_Data;

/*--------------------------------------------------------------------------
 *
 * ���ơ������ǡ���
 * Version2
 *
 *-------------------------------------------------------------------------*/
typedef struct status_data_s2 {
    unsigned char hp; /* HP */

    /* Ⱦ�� */
    short r;
    /* �⤵ */
    short h;
    /* weight */
    unsigned char weight;
} Status_Data2;

/*--------------------------------------------------------------------------
 *
 * ���ơ������ǡ���(���ե��åȻ��꤬ɬ�פʤȤ��Τ߻��ѡ�
 * Version3
 *
 *-------------------------------------------------------------------------*/
typedef struct status_data_s3 {
    unsigned char hp; /* HP */

    /* Ⱦ�� */
    short r;
    /* �⤵ */
    short h;
    /* ���ե��å� */
    short offset;
    /* weight */
    unsigned char weight;
} Status_Data3;

/*============================================================================
 *
 * �췿��¤��
 *
 *==========================================================================*/

/*
 * ���ѷ�������¤��
 */
typedef struct collision_triangle_s {
    xyz_t pos[3]; /* ���ѷ���ĺ���ǡ��� */
    float a, b, c, d;
} COLLISION_TRIANGLE_S;

/*
 * ����������¤��
 */
typedef struct collision_pipe_s {
    float r; /* Ⱦ�� */
    float h; /* �⤵ */
    float offset; /* ���ե��å� */
} COLLISION_PIPE_S;


/*
 * ������ ��̥ѥ�᡼��
 */
typedef enum sword_attack_result_e {
    ACTOR_SW_AT_RSLT_MISS, /* ���� */
    ACTOR_SW_AT_RSLT_SUCCESS, /* ̿�� */
    ACTOR_SW_AT_RSLT_DEFENCE /* �ɤ��줿�ʷ����᤹��,��å����뤫���� */
} ATTACK_RESULT_E;

 /* ���ΰ��֥ǡ��� */
typedef struct sword_pos_s {
    int prev_data_on_flag; /* ������ΰ��֥ǡ��������äƤ��� */
    xyz_t prev_top_pos;
    xyz_t prev_root_pos;
} SWORD_POS_S;

  /* ��ΰ��֥ǡ��� */
typedef struct shield_pos_s {
    COLLISION_TRIANGLE_S tri[2];
    COLLISION_TRIANGLE_S current_tri[2];
} SHIELD_POS_S;

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_collision_type.h end ***/
