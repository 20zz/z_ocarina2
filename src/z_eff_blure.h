/* $Id: z_eff_blure.h,v 2.1 1998/10/22 12:13:45 zelda Exp $ */
/* $Log: z_eff_blure.h,v $
 * Revision 2.1  1998/10/22  12:13:45  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.18  1998/09/07 12:35:17  matutani
 * *** empty log message ***
 *
 * Revision 1.17  1998-09-04 22:45:02+09  matutani
 * *** empty log message ***
 *
 * Revision 1.16  1998-08-26 21:51:51+09  matutani
 * *** empty log message ***
 *
 * Revision 1.15  1998-08-25 20:49:41+09  matutani
 * *** empty log message ***
 *
 * Revision 1.14  1998-07-15 22:25:42+09  matutani
 * *** empty log message ***
 *
 * Revision 1.13  1998-03-18 19:57:01+09  sumiyosi
 * �������ꤪ���ޤ�����
 *
 * Revision 1.12  1998/03/07  11:34:42  matutani
 * Ǳ�ƥ���
 *
 * Revision 1.11  1998/03/03  13:35:14  matutani
 * *** empty log message ***
 *
 * Revision 1.10  1998/03/03  10:42:42  matutani
 * �֥騡�ƥ�������ʥƥ��ȡ�
 *
 * Revision 1.9  1997/03/14  00:33:29  hayakawa
 * �إå��ɲ�
 *
 * Revision 1.8  1996/11/26  13:01:58  matutani
 * �⤦ɬ�פΤʤ������ɺ��
 *
 * Revision 1.7  1996/11/15  08:35:11  matutani
 * �ѹ��ʤ�
 *
 * Revision 1.6  1996/10/31  02:05:37  matutani
 * *** empty log message ***
 *
 * Revision 1.5  1996/10/22  10:09:06  matutani
 * �֥騡�ꥹ�Ƚ������
 *
 * Revision 1.4  1996/09/20  05:18:13  matutani
 * ĺ���Хåե������ե饰��¤�Τ�����
 *
 * Revision 1.3  1996/09/20  04:15:24  matutani
 * *** empty log message ***
 *
 * Revision 1.2  1996/09/20  01:00:21  matutani
 * �ǿ��Υե��������
 *
 */

/*----------------------------------------------------------------------------
 *
 * z_eff_blure.h
 * �֥顼����
 * Program:Kenji Matsutani
 * 1996/09/04
 *---------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_EFF_BLURE_H
#define INCLUDE_Z_EFF_BLURE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif    

#include<ultra64.h>
#include<u64types.h>
#include"z_basic.h"
#include"z_effect.h"
#include"graph.h"		/* Graph */

/* ɽ������ĺ���κ���� */
/* ���ǳ���� */
#define EFFECT_BLURE_MAX_DISP_VERTEX 32
#define EFFECT_BLURE_MAX_EDGE_NUM (32 /2)

/*
 * �֥騡�Υ�����
 */
typedef enum {
    EFFECT_BLURE_TYPE_SPACE, /* ���� */
    EFFECT_BLURE_TYPE_EDGE, /* ���å� */
    EFFECT_BLURE_TYPE_NO_USE, /* ̤���� */
    EFFECT_BLURE_TYPE_LAST_INDEX
} EFFECT_BLURE_TYPE;

/*
 * Blure_proc�ν�λ������
 */
typedef enum effect_blure_proc_type {
    EFFECT_BLURE_PROC_NO_DATA, /* �ꥹ�Ȥ˥ǡ�����¸�ߤ��ʤ� */
    EFFECT_BLURE_PROC_USE_DATA /* �ꥹ�Ȥ˥ǡ�����¸�ߤ��� */
} EFFECT_BLURE_PROC_TYPE;

/*
 * ���å����ơ������ӥåȾ���
 *
 * 5432109876543210
 *               +-- ���å�����
 *
 */
/* ���å����� */
/* ���̵�� */
#define EBE_STTS_NO_INTERP 0
/* ��� */
#define EBE_STTS_HERMITE_INTERP 1
/* ü */
#define EBE_STTS_EDGE 2

#define EBE_STTS_DEFAULT EBE_STTS_NO_INTERP

/* ���å����ּ��� */
#define EBE_STTS_Get(pedge) ((pedge)->status & 0x3)
/* ���å����֥��å� */
#define EBE_STTS_Set(pedge, type) \
{(pedge)->status &= ~0x3; (pedge)->status |= type;}

/*
 * �֥顼�ѤΥǡ�����¤��
 */
typedef struct effect_blure_edge {
    /* ������ */
    EFFECT_BLURE_TYPE type;
    
    /* ���ߤΥե졼��� */
    int now_frame;

    /* ���֥ǡ����� */
    /* ����ǡ��� */
    s_xyz tpos; 
    /* �����ǡ��� */
    s_xyz rpos;

    /* ���֥ӥå� */
    unsigned short status;
    
} EFFECT_BLURE_EDGE;


/*----------------------------------------------------------------------------
 *
 * �֥騡����¤��
 *
 *---------------------------------------------------------------------------*/

/*
 * blure form type
 */
typedef enum effect_blure_form_type {
    EFFECT_BLURE_FORM_DEC_NONE, /* ��������̵�� */
    EFFECT_BLURE_FORM_DEC_TOP, /* ����������äƤ��� */
    EFFECT_BLURE_FORM_DEC_ROOT, /* �������������äƤ��� */
    EFFECT_BLURE_FORM_DEC_BOTH, /* �衿����ξ�����äƤ��� */
    EFFECT_BLURE_FORM_SPREAD, /* �����äƤ��� */
    EFFECT_BLURE_FORM_LAST_INDEX
} EFFECT_BLURE_FORM_TYPE;

/*
 * blure diplay buffer
 */
typedef enum effect_blure_display_buffer {
    EFFECT_BLURE_DISPLAY_BUFFER_0,
    EFFECT_BLURE_DISPLAY_BUFFER_1
} EFFECT_BLURE_DISPLAY_BUFFER_TYPE;

/* ���ơ������ӥå�:�ǥե���Ȥ򣰤ˤ��� */
/*
 * ���ѥ����(�ͤ����:������
 */
#define Z_EFF_BLURE_SPR_ON (1<<1)
/*
 * ����:������
 */
#define Z_EFF_BLURE_CROSS_ON (1<<2)
/*
 * ������
 */
#define Z_EFF_BLURE_NEW (1<<3)
/*
 * SHADE_OFF
 * ��ˣ�����
 */
#define Z_EFF_BLURE_SHADE_OFF (1<<4)

/*
 * �⡼������
 */
enum {
    EFF_BLURE_MODE_NORMAL,
    EFF_BLURE_MODE_ARROW_TXT,
    EFF_BLURE_MODE_HERMITE_INTER,
    EFF_BLURE_MODE_LAST_INDEX
};

/*-----------------------------------------------------------------------------
 *
 * �칽¤�Ρʥƥ�������̵����
 * ���ߤϥǡ������åȻ��Τ߻���
 * �ѹ�����ʤ���Ѥ��Ƥ���Ũ��ƥ���ѥ���ݤ�ľ���ޤ��礦��
 *
 *---------------------------------------------------------------------------*/
typedef struct effect_blure_info {
    /* ���å��� */
    int now_edge_num;

    /* ���å��ǡ��� */
    EFFECT_BLURE_EDGE edge[EFFECT_BLURE_MAX_EDGE_NUM];
    
    /* �������ȥ��顼 */
    unsigned char start_top[4]; /* r, g, b, a */
    unsigned char start_root[4]; /* r, g, b, a */

    /* ����ɥ��顼 */
    unsigned char end_top[4]; /* r, g, b, a */ 
    unsigned char end_root[4]; /* r, g, b, a */
    
    /* �ü��ե졼��� */
    int remove_frame;

    /* ���ƥåץե饰 */
    int step_flag;

    /* ���������� */
    EFFECT_BLURE_FORM_TYPE form_type;
    
} EFFECT_BLURE_INFO;

/*---------------------------------------------------------------------------
 *
 * ����¤��
 * �ǡ������å��ѹ�¤��
 * Version1:1998ǯ 2��27��(������) 16��32ʬ45�� JST
 *
 *--------------------------------------------------------------------------*/
typedef struct effect_blure_info_data1 {
    /* ���������� */
    EFFECT_BLURE_FORM_TYPE form_type;
    
    /* ���ơ������ӥå�:�ǥե���Ȥ򣰤ˤ��롣 */
    /*
     * status�����Ǥ���ȵ������,ư��ޤ���
     */
    unsigned short status;

    /* ��ž���ԡ��� */
    short rot_speed;
    
    /* �������ȥ��顼 */
    unsigned char start_top[4]; /* r, g, b, a */
    unsigned char start_root[4]; /* r, g, b, a */

    /* ����ɥ��顼 */
    unsigned char end_top[4]; /* r, g, b, a */ 
    unsigned char end_root[4]; /* r, g, b, a */

    /* �ü��ե졼��� */
    unsigned char remove_frame;

    /* ���ƥåץե饰 */
    unsigned char step_flag;

    /* �⡼�ɥ���ǥå��� */
    /*
     * 0.���ޤǤ�Ʊ��,�ǥե����
     * 1.Arrow�ƥ������㨡(status != 0�Ǥʤ���Ư���ޤ���)
     * 2.Hermite���
     */
    unsigned char mode;

    /* 
     * ������ѥ�᡼����
     */
    unsigned char spread_param;

    /* texture work */
    rgba_t prim;
    rgba_t env;
    
} Effect_Blure_Info_Data1;

/*---------------------------------------------------------------------------
 *
 * ����¤��
 * �ƥ��������б�
 *
 *--------------------------------------------------------------------------*/
typedef struct effect_blure_info2 {
    
    /* ���å��ǡ��� */
    EFFECT_BLURE_EDGE edge[EFFECT_BLURE_MAX_EDGE_NUM];
    
    /* ���������� */
    EFFECT_BLURE_FORM_TYPE form_type;
    /* �����ꥵ���� */
    float spread_size;
    
    /* ���ơ������ӥå�:�ǥե���Ȥ򣰤ˤ��롣 */
    unsigned short status;
    
    /* ��ž���ԡ��� */
    short rot_speed;
    short rot;

    /* �������ȥ��顼 */
    unsigned char start_top[4]; /* r, g, b, a */
    unsigned char start_root[4]; /* r, g, b, a */
    
    /* ����ɥ��顼 */
    unsigned char end_top[4]; /* r, g, b, a */ 
    unsigned char end_root[4]; /* r, g, b, a */
    
    /* ���å��� */
    unsigned char now_edge_num;
    
    /* �ü��ե졼��� */
    unsigned char remove_frame;
    
    /* ���ƥåץե饰 */
    unsigned char step_flag;
    
    /* �����⡼�� */
    unsigned char mode;

    /* texture_work */
    rgba_t prim;
    rgba_t env;
    
} EFFECT_BLURE_INFO2;


/*----------------------------------------------------------------------------
 *
 * �֥顼�����ؿ�(��ؿ�)
 *
 *---------------------------------------------------------------------------*/

/*
 * ĺ���ɲ�
 */
extern void EffectBlure_edge_add(
    EFFECT_BLURE_INFO *pbl_info,
    xyz_t *ptpos,
    xyz_t *prpos);


/*
 * �����ɲ�
 */
extern void EffectBlure_space_add(EFFECT_BLURE_INFO *pbl_info);


#if 0


/*
 * ���󥹥ȥ饯����
 */
extern void EffectBlure_ct(
    EFFECT_BLURE_INFO *pbl_info,
    unsigned char *start_top, /* size 4������:�������Ȥη�������Υ��顼 */
    unsigned char *start_root, /* size 4������:�������Ȥκ��������Υ��顼 */
    unsigned char *end_top, /* size 4������:�ü����η���Υ��顼 */
    unsigned char *end_root, /* size 4������:�ü����κ����Υ��顼 */
    int remove_frame, /* �ü��ե졼��� */
    int step_flag, /* ���ƥåפ�ON, OFF ��TRUE�ޤ���FALSE) */
    EFFECT_BLURE_FORM_TYPE form_type); /* ���� */

/*
 * �ǥ��ȥ饯����
 */
extern void EffectBlure_dt(EFFECT_BLURE_INFO *pbl_info);


/*
 * �ꥹ�Ȳ���
 */
extern void EffectBlure_edge_free(EFFECT_BLURE_INFO *pbl_info);


/*
 * ���ַв�
 */
extern EFFECT_BLURE_PROC_TYPE EffectBlure_proc(EFFECT_BLURE_INFO *pbl_info);

   
/*
 * ɽ��
 */
extern void EffectBlure_disp(EFFECT_BLURE_INFO *pbl_info, Graph *graph);
#endif
/*----------------------------------------------------------------------------
 *
 * ���ե����ȥ����ƥ��ѥ֥顼����
 *
 *---------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 *
 * EFFECT_BLURE_INFO�����
 *
 *--------------------------------------------------------------------------*/
extern void EffectBlureInfo_ct(void *this, void *init);

/*---------------------------------------------------------------------------
 *
 * ���ǡ������åȹ�¤���ѥ��åȴؿ� (for Version 1)
 * ��⡨init�ϼ¤�Effect_Blure_Info_Data1�ؤΥݥ��󥿡�
 *
 *------------------------------------------------------------------------*/
extern void EffectBlureInfo_v1_ct(
    void *this,
    void *init);

/*----------------------------------------------------------------------------
 *
 * EFFECT_BLURE_INFO�ǥ��ȥ饯����
 *
 *--------------------------------------------------------------------------*/
extern void EffectBlureInfo_dt(void *this);


/*----------------------------------------------------------------------------
 *
 * EFFECT_BLURE_INFOư�����
 *
 *---------------------------------------------------------------------------*/
extern Effect_Proc_Func EffectBlureInfo_proc(void *this);

 
/*----------------------------------------------------------------------------
 *
 * EffectBlureInfoɽ������
 *
 *---------------------------------------------------------------------------*/
extern void EffectBlureInfo_disp(void *this, Graph *graph);

#ifdef _LANGUAGE_C_PLUS_PLUS
}	/* extern "C"	*/
#endif

#endif

/*** eff_blure.h ***/

