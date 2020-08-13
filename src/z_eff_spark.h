/* $Id: z_eff_spark.h,v 2.1 1998/10/22 12:13:45 zelda Exp $ */
/* $Log: z_eff_spark.h,v $
 * Revision 2.1  1998/10/22  12:13:45  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.4  1998/07/04 11:30:46  matutani
 * γ�β�ž���ɲ�
 *
 * Revision 1.3  1998-03-18 19:55:26+09  sumiyosi
 * �������ꤪ���ޤ�����
 *
 * Revision 1.2  1997/11/10  08:23:08  matutani
 * *** empty log message ***
 *
 * Revision 1.1  1996/10/23  13:45:32  matutani
 * Initial revision
 * */
/*-----------------------------------------------------------------------------
 *
 * z_eff_spark.h
 *
 * Program:Kenji Matsutani
 * 1996ǯ10��19��(������) 21��05ʬ49�� JST
 * �в�:���ʾõ
 *
 *---------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_EFF_SPARK_H
#define INCLUDE_Z_EFF_SPARK_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif    

#define PAIF (3.14159f)

#include"z_effect.h"
#include"z_basic.h"

#define EFFECT_SPARK_PARTICLE_MAX_NUM (32)

/*
 * ��Spark����
 */
typedef struct effect_spark {
    xyz_t vec; /* ®�� */
    xyz_t pos; /* ���� */

    s_xyz diff_rot; /* ��ž®�� */
    s_xyz rot; /* ��ž */
} EffectSpark;

/*
 * Spark����¤�Υǡ�����ʬ
 */
typedef struct effect_spark_info_data {
    s_xyz center; /* �в��濴���� */

    float speed;
    float gravity;
    
    /*
     * �岼�ζˤΰ��֤ˤϾ������
     * u_div����ƻ��˲����Ȥ뤫��
     * v_div�϶˰ʳ������Ȥ��Ʋ����Ȥ뤫?�ʣ��ξ��u_div��̵����
     * �򼨤���
     */
    int u_div; 
    int v_div;

    unsigned char start_color0[4]; /* r,g,b,a */
    unsigned char start_color1[4]; /* r,g,b,a */
    unsigned char start_color2[4]; /* r,g,b,a */
    unsigned char start_color3[4]; /* r,g,b,a */
    
    unsigned char end_color0[4]; /* r,g,b,a */
    unsigned char end_color1[4]; /* r,g,b,a */
    unsigned char end_color2[4]; /* r,g,b,a */
    unsigned char end_color3[4]; /* r,g,b,a */
   
    int now_frame; /* ���ߥե졼��� */
    int end_frame; /* ��λ�ե졼��� */
} EffectSparkInfoData;

/*
 * Spark����¤��
 */
typedef struct effect_spark_info {
    s_xyz center; /* �в��濴���� */

    /*
     * Spark�Υơ��֥�
     * size 2 + u_div * v_div
     */
    int table_size; 
    EffectSpark spark_table[EFFECT_SPARK_PARTICLE_MAX_NUM];

    float speed;
    float gravity;
    
    /*
     * �岼�ζˤΰ��֤ˤϾ������
     * u_div����ƻ��˲����Ȥ뤫��
     * v_div�϶˰ʳ������Ȥ��Ʋ����Ȥ뤫?�ʣ��ξ��u_div��̵����
     * �򼨤���
     */
    int u_div; 
    int v_div;

    unsigned char start_color0[4]; /* r,g,b,a */
    unsigned char start_color1[4]; /* r,g,b,a */
    unsigned char start_color2[4]; /* r,g,b,a */
    unsigned char start_color3[4]; /* r,g,b,a */
    
    unsigned char end_color0[4]; /* r,g,b,a */
    unsigned char end_color1[4]; /* r,g,b,a */
    unsigned char end_color2[4]; /* r,g,b,a */
    unsigned char end_color3[4]; /* r,g,b,a */
   
    int now_frame; /* ���ߥե졼��� */
    int end_frame; /* ��λ�ե졼��� */
} EffectSparkInfo;



/*-----------------------------------------------------------------------------
 *
 * EffectInfo�����
 *
 *---------------------------------------------------------------------------*/
extern void EffectSparkInfo_ct(void *this, void *init);

/*-----------------------------------------------------------------------------
 *
 * EffectInfo�ǥ��ȥ饯����
 *
 *---------------------------------------------------------------------------*/
extern void EffectSparkInfo_dt(void *this);



/*---------------------------------------------------------------------------
 *
 * EffectInfoư�����
 *
 *--------------------------------------------------------------------------*/
extern Effect_Proc_Func EffectSparkInfo_proc(void *this);


/*----------------------------------------------------------------------------
 *
 * EffectInfoɽ������
 *
 *---------------------------------------------------------------------------*/
extern void EffectSparkInfo_disp(void *this, Graph *graph);



#ifdef _LANGUAGE_C_PLUS_PLUS
}	/* extern "C"	*/
#endif

#endif

/*** z_eff_spark.h ***/

 
