/* $Id: z_effect.h,v 1.1.1.1 2003/03/10 22:42:45 tong Exp $ */
/* $Log: z_effect.h,v $
 * Revision 1.1.1.1  2003/03/10 22:42:45  tong
 * new OBJ tree for ocarina from Nintendo
 *
 * Revision 2.1  1998-10-22 21:13:45+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.16  1998/09/10 09:11:21  matutani
 * *** empty log message ***
 *
 * Revision 1.15  1998-09-10 15:33:28+09  matutani
 * *** empty log message ***
 *
 * Revision 1.14  1998-09-10 15:26:50+09  matutani
 * *** empty log message ***
 *
 * Revision 1.13  1998-09-01 23:23:17+09  matutani
 * ���ե����Ⱥ��
 *
 * Revision 1.12  1998-08-28 10:47:13+09  matutani
 * ���ե������ɲ�
 *
 * Revision 1.11  1998-07-15 21:13:17+09  matutani
 * �֥騡������̥С������
 *
 * Revision 1.10  1998-03-18 19:46:51+09  sumiyosi
 * �������ꤪ���ޤ�����
 *
 * Revision 1.9  1998/03/03  10:48:00  matutani
 * *** empty log message ***
 *
 * Revision 1.8  1997/05/30  07:23:55  matutani
 * *** empty log message ***
 *
 * Revision 1.7  1997/03/14  00:33:42  hayakawa
 * �إå��ɲ�
 *
 * Revision 1.6  1997/02/27  02:21:05  matutani
 * ���ե����ȤΥ�����ݲ�����game malloc���ѹ�
 *
 * Revision 1.5  1996/11/06  06:06:48  matutani
 * *** empty log message ***
 *
 * Revision 1.4  1996/10/31  02:05:26  matutani
 * *** empty log message ***
 *
 * Revision 1.3  1996/10/29  07:39:23  matutani
 * *** empty log message ***
 *
 * Revision 1.2  1996/10/28  02:15:51  matutani
 * spark flash add
 *
 * Revision 1.1  1996/10/23  13:45:13  matutani
 * Initial revision
 * */
/*----------------------------------------------------------------------------
 *
 * Effect����
 * z_effect.h
 * Program:Kenji Matsutani
 * 1996ǯ10��19��(������) 20��38ʬ25�� JST
 *
 *--------------------------------------------------------------------------*/

#ifndef INCLUDE_EFFECT_H
#define INCLUDE_EFFECT_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif    

/*
 * �����ؿ��֤���
 */
typedef enum effect_proc_func_return {
    EFFECT_RPOC_FUNC_NORMAL_RETURN, /* �ä˰�̵̣�� */
    EFFECT_PROC_FUNC_DESTRUCT, /* �ǥ��ȥ饯�Ƚ�����Ԥ� */
    EFFECT_PROC_FUNC_LAST_INDEX
} Effect_Proc_Func;

#include"z_basic.h"
#include"graph.h"		/* Graph */
#include"z_eff_spark.h"
#include"z_eff_blure.h"
#include"z_eff_shield_particle.h"

#define SH_TEST

#define EFFECT_TYPE_SPARK_NUM 3
#define EFFECT_TYPE_BLURE_NUM 25
#define EFFECT_TYPE_SH_PARTICLE_NUM 3

#define MAX_EFFECT_INDEX \
(EFFECT_TYPE_SPARK_NUM + EFFECT_TYPE_BLURE_NUM + EFFECT_TYPE_SH_PARTICLE_NUM)

/*
 * ���ե����ȥ��꡼�ݥ��󥿡���
 */
typedef void * Effect_Memory_Pointer;

/*
 * ���ե����ȥ�����
 */
typedef enum effect_type {
    EFFECT_TYPE_SPARK,
    EFFECT_TYPE_BLURE,
    EFFECT_TYPE_BLURE2,
    EFFECT_TYPE_SH_PARTICLE,
    EFFECT_TYPE_LAST_INDEX
} EFFECT_TYPE;
   
/*
 * �ƥ��ե����Ⱦ��� �ơ��֥����Ƿ�
 */
typedef struct effect_type_info {
    
    unsigned int effect_memory_size; /* ���ե����ȥ��꡼������ */
    
    /* ���󥹥ȥ饯�ȴؿ��ݥ��󥿡� */
    void (*construct_func)(Effect_Memory_Pointer this, /* �����ǡ��� */
			   Effect_Memory_Pointer init); /* ������ǡ��� */
    /* �ǥ��ȥ饯�ȴؿ��ݥ��󥿡� */
    void (*destruct_func)(Effect_Memory_Pointer p); 
    Effect_Proc_Func (*proc_func)(Effect_Memory_Pointer p); /* �����ؿ� */
    void (*disp_func)(Effect_Memory_Pointer p,
		      Graph *graph); /* ɽ���ؿ� */
    
} Effect_Type_Info;

/*
 * ���ե�����ư��ơ��֥����Ƿ�
 */
typedef struct effect_current {
    EFFECT_TYPE type; /* ���ե����ȥ����� */
    void *effect_memory; /* ���ե����ȥ��꡼�ݥ��󥿡� */
 
    unsigned char priority; /* ͥ���� */
    unsigned char flag; /* �ե饰 */
    
} Effect_Current;

/*
 * ���ե�����ư��ե饰����
 */
/* �ޥ������ꥢ�� */
#define EFFECT_FLAG_TYPE_NO_MASK (0)
/* ���ʾü��� */
#define EFFECT_FLAG_TYPE_SELF_DESTRUCT_MASK (1<<0)

/*
 * ����¾ define
 */



/*----------------------------------------------------------------------------
 *
 * �ؿ�
 *
 *---------------------------------------------------------------------------*/


/*--------------------------------------------------------------------------
 *
 * Game �ݥ��󥿡������롣
 *
 *---------------------------------------------------------------------------*/
extern Game *Effect_GetGamePointer(void);

/*--------------------------------------------------------------------------
 *
 * ����ư���ֹ�Υ��ե����ȤΥ��꡼�ݥ��󥿡����֤�
 *
 *------------------------------------------------------------------------*/
extern void *Effect_GetEffectMemoryPointer(int effect_index);

/*----------------------------------------------------------------------------
 *
 * ���ե�������������
 *
 *--------------------------------------------------------------------------*/
extern void EffectInit(Game *pgame);


/*----------------------------------------------------------------------------
 *
 * ���ե������ղ�
 *
 *--------------------------------------------------------------------------*/
extern void EffectAdd(
    Game *game, /* ������ */
    int *index, /* ư��ơ��֥�Υ���ǥå������֤� */
    EFFECT_TYPE type, /* ���ե����ȥ����� */
    unsigned char priority, /* ͥ���� */
    unsigned char flag, /* �ե饰 */
    void *init_data); /* ������ǡ��� */


/*----------------------------------------------------------------------------
 *
 * Effect Disp
 *
 * ���ե�����ɽ��
 *
 *--------------------------------------------------------------------------*/
extern void EffectDisp(Graph *graph);


/*----------------------------------------------------------------------------
 *
 * Effect Proc
 *
 * �ƥ��ե����Ƚ���
 *
 *--------------------------------------------------------------------------*/
extern void EffectProc(Game *game);

/*----------------------------------------------------------------------------
 *
 * ���륤��ǥå����Υ��ե����Ȥ����
 *
 *---------------------------------------------------------------------------*/
extern void EffectFreeIndex(Game *game, int i);

/*----------------------------------------------------------------------------
 *
 * ���ե�������Ʋ���
 *
 *--------------------------------------------------------------------------*/
extern void EffectFreeAllIndex(Game *game);




#ifdef _LANGUAGE_C_PLUS_PLUS
}	/* extern "C"	*/
#endif

#endif

/*** z_effect.h end ***/



