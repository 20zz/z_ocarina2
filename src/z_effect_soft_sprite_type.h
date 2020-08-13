/* $Id: z_effect_soft_sprite_type.h,v 2.1 1998-10-22 21:13:45+09 zelda Exp $ */
/*----------------------------------------------------------------------------
 * 
 * z_effect_soft_sprite_type.h
 *
 * Program:Kenji Matsutani
 *
 *$Log: z_effect_soft_sprite_type.h,v $
 *Revision 2.1  1998-10-22 21:13:45+09  zelda
 *�ңϣͽФ��С������(NTSC)
 *
 *Revision 1.18  1998/08/11 08:30:13  matutani
 *�ݽ�
 *
 *Revision 1.17  1998-08-05 19:51:25+09  matutani
 *�����С��쥤��
 *
 *Revision 1.16  1998-06-17 13:39:45+09  umemiya
 *work_mtx�򳰤��ޤ���
 *
 *Revision 1.15  1998-03-18 19:46:06+09  sumiyosi
 *�������ꤪ���ޤ�����
 *
 * Revision 1.14  1998/03/10  01:57:12  tarukado
 * �ޥȥꥯ����¸�ΰ� �ɲ�
 *
 * Revision 1.13  1998/02/21  10:54:24  sumiyosi
 * ���̤Υ���Хåե��򣱣����ѹ���
 *
 * Revision 1.12  1997/09/10  11:27:38  matutani
 * priority
 *
 * Revision 1.11  1997/09/10  06:22:56  matutani
 * ��٥뽤��
 *
 * Revision 1.10  1997/09/10  01:36:05  matutani
 * EffectSoftSprite_clear():�ɲ� ���������
 *
 * Revision 1.9  1997/07/31  12:52:50  matutani
 * max_counter��Ϥ�����
 *
 * Revision 1.8  1997/07/30  13:38:05  umemiya
 * *** empty log message ***
 *
 * Revision 1.7  1997/07/23  11:09:39  tarukado
 * ����ΰ����䤷����
 *
 * Revision 1.6  1997/07/02  11:52:14  tarukado
 * *** empty log message ***
 *
 * Revision 1.5  1997/04/14  01:16:27  matutani
 * ��¤�Υ��С��ѹ����ɲ�
 *
 * Revision 1.4  1997/04/01  13:26:27  matutani
 * EFFECT_SS_WORK_BUFFER_SIZE ��٥롩̾�ѹ�
 *
 * Revision 1.3  1997/03/31  06:17:53  matutani
 * ���饭�饫�顼°���ɲäˤ�����ΰ�����
 *
 * Revision 1.2  1997/03/27  09:57:39  matutani
 * �������ղ�
 *
 * Revision 1.1  1997/03/27  02:13:15  matutani
 * Initial revision
 *
 *
 *---------------------------------------------------------------------------*/


#ifndef INCLUDE_Z_EFFECT_SOFT_SPRITE_TYPE_H
#define INCLUDE_Z_EFFECT_SOFT_SPRITE_TYPE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif    

#include"z_basic.h"
#include"z_effect_soft_sprite_label.h"

/* �����С��쥤�ƥ��� */ 
    
/*==========================================================================
 *
 * �����С��쥤�б�
 *
 *========================================================================*/


/*=========================================================================
 *
 * ��٥�
 *
 *========================================================================*/

/* ����ΰ� : ���餹�Ȥ��ϱƶ����礭���Τ���� */
#define EFFECT_SS2_WORK_BUFFER_SIZE 13

/*--------------------------------------------------------------------------
 *
 * ���ơ������ӥå�
 *
 *-------------------------------------------------------------------------*/
/*
 * �ǥե��������
 * �������ե����Ⱦ�񤭲�ǽ
 */
#define EFF_SS_STATUS_NONE 0
/*
 * �������ե����Ⱦ�񤭶ػ�
 * counter��0̤���ˤʤ�ʤ��ȱʵפ˾ä��ʤ���
 * Ʊ��ͥ���̤ξ��Τ�ͭ��:ͥ���̺����priority 0�Ǥ��ΥӥåȤ�
 * Ω�ƤƤ�����
 */
#define EFF_SS_STATUS_OVER_WRITE_LOCK (1<<0)

/*
 * ���ե����Ⱥ������Na_StopAllObjSe()��elem->pos, pos2�ǹԤ�
 * ����������ʬ��counter < 0�ˤ���Ȥ��ʤɤϼ�ʬ����߽������Ƥ���������
 *
 */
#define EFF_SS_STATUS_NA_OBJ_POS (1<<1)
#define EFF_SS_STATUS_NA_OBJ_POS2 (1<<2)

/*--------------------------------------------------------------------------
 *
 * ����
 *
 *-------------------------------------------------------------------------*/
typedef struct effect_ss2_element {

    /*--------------------------------------------------------
     *
     * z_eff_ss_*.c ��Ϣ�ѥ�᡼��:�ᥤ�󥷥��ƥ໲��
     *
     *------------------------------------------------------*/
    
    /* ���־��� */
    xyz_t pos; /* ���� */
    xyz_t vec; /* ®�� */
    xyz_t acc; /* �ø�® */
    
    /* ư��ؿ�: NULL�λ��������ʤ� */
    void (* func_proc)(Game *game,
		       int effect_index, /* ��ʬ�Υ���ǥå��� */
		       struct effect_ss2_element *elem); /* ��ʬ�κ���ΰ� */

    /* ɽ���ؿ�: �⡼�ɤʤɤ����ꤷ��ɽ�����롣NULL�λ��������ʤ��� */
    void (* disp_func)(
	Game *game, 
	int effect_index, /* ��ʬ�Υ���ǥå��� */
	struct effect_ss2_element *elem); /* ��ʬ�κ���ΰ� */

    /*-----------------------------------------------------------
     *	
     * �ƥ��ե����������ѥ�᡼��:�����
     *
     *---------------------------------------------------------*/

    /* ���־��� */
    xyz_t pos2;     
    
    /* ���᡼�� */
    Gfx *gfx;

    /* ���������ݥ��󥿡�:�ƤӽФ����������ʤ� */
    Actor *actor;

    /* ����ΰ� */
    short work[EFFECT_SS2_WORK_BUFFER_SIZE];
    
    /* ���ơ�����:�����ǥե���Ȥˤʤ�褦�ˡ� */
    unsigned short status;
    
    /* �����󥿡� (��̤���ˤʤ�Ƚ�λ) */
    short counter;
    
    /*
     * ͥ����
     * priority ���ͤ��㤤����ͥ�褷�ƻĤ���
     */
    unsigned char priority;
    
    /* ������ */
    unsigned char type;

} Effect_SS2_Element;

/*=========================================================================
 *
 * ���ե����ȥץ�ե�����
 *
 *========================================================================*/
typedef struct effect_ss_profile {
    /* ��٥� */
    TYPE_EFFECT_SS2_LABEL type; 
    
    /* ���󥹥ȥ饯���� */
    int (* ct_proc)(Game *game, int effect_index,
		    struct effect_ss2_element *elem,
		    void *data);
} EffectSSProfile;

#ifdef _LANGUAGE_C_PLUS_PLUS
}	/* extern "C"	*/
#endif

#endif

/*** z_effect_soft_sprite_type.h end ***/



