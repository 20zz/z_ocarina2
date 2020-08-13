/* $Id: z_eff_spark_flash.h,v 2.1 1998-10-22 21:13:45+09 zelda Exp $ */
/* $Log: z_eff_spark_flash.h,v $
 * Revision 2.1  1998-10-22 21:13:45+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.6  1998/08/26 12:49:10  matutani
 * �Ŀ�Ū��Ĵ�����ܤ�����Ԥ�)
 *
 * Revision 1.5  1998-03-18 19:55:17+09  sumiyosi
 * �������ꤪ���ޤ�����
 *
 * Revision 1.4  1996/10/31  02:06:24  matutani
 * *** empty log message ***
 *
 * Revision 1.3  1996/10/29  07:39:08  matutani
 * *** empty log message ***
 *
 * Revision 1.2  1996/10/28  02:15:51  matutani
 * spark flash add
 *
 * Revision 1.1  1996/10/24  04:14:53  matutani
 * Initial revision
 * */
/*-----------------------------------------------------------------------------
 *
 * z_eff_spark_flash.h
 *
 * ���Ƚ��Ѳв�
 * Program:Kenji Matsutani
 * 1996ǯ10��24��(������) 10��27ʬ52�� JST
 *
 *---------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_EFF_SPARK_FLASH_H
#define INCLUDE_Z_EFF_SPARK_FLASH_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif    

#include"z_effect.h"
#include"z_basic.h"

/*
 * Spark Flash��¤��
 */
typedef struct effect_spark_flash {
    xyz_t in_position; /* ��¦�ΰ��� */
    xyz_t in_vec; /* �Ѳ��� */
    xyz_t out_position; /* ��¦�ΰ��� */
    xyz_t out_vec; /* �Ѳ��� */

} Effect_Spark_Flash;

/* �����ܿ� */
#define EFFECT_SPARK_FLASH_MAX_NUM 16

/*
 * spark flash info
 */
typedef struct effect_spark_flash_info {
    s_xyz center; /* �����濴���� */

    int flash_num; /* �����ο� */
    Effect_Spark_Flash flash_table[EFFECT_SPARK_FLASH_MAX_NUM]; /* �ơ��֥� */
    
    unsigned char start_in_color[4]; /* r,g,b,a */
    unsigned char start_out_color[4]; /* r,g,b,a */

    unsigned char end_in_color[4]; /* r,g,b,a */
    unsigned char end_out_color[4]; /* r,g,b,a */

    float speed; /* ��¦��ĺ����®�� */
    float mag; /* ��¦����¦���Ф���®����Ψ */
    
    int now_frame; /* ���ߤΥե졼��� */
    int end_frame; /* �ǽ��ե졼��� */

    /* light */
    Light_data light; /* light�Υǡ����� */
    Light_list *light_list; /* light list�Υǡ��� */
    int light_flag; /* �饤�Ƚ����򤹤뤫�ɤ����Υե饰 */
    
    /* ambient off */
#if 1
    short reg0, reg1, reg2; /* �����¸�ѥ�᡼���� */
    int ambient_off_frame; /* ��ž����ޤǤΥե졼��� */
#endif

} EffectSparkFlashInfo;


/*-----------------------------------------------------------------------------
 *
 * EffectSparkFlashInfo �����
 *
 *---------------------------------------------------------------------------*/
extern void EffectSparkFlashInfo_ct(void *this, void *init_data);


/*-----------------------------------------------------------------------------
 *
 * EffectSparkFlashInfo�ǥ��ȥ饯����
 *
 *--------------------------------------------------------------------------*/
extern void EffectSparkFlashInfo_dt(void *this);


/*----------------------------------------------------------------------------
 *
 * EffectSparkFlashInfoư�����
 *
 *--------------------------------------------------------------------------*/
extern Effect_Proc_Func EffectSparkFlashInfo_proc(void *this);


/*----------------------------------------------------------------------------
 *
 * EffectInfoɽ������
 *
 *---------------------------------------------------------------------------*/
extern void EffectSparkFlashInfo_disp(void *this, Graph *graph);

#ifdef _LANGUAGE_C_PLUS_PLUS
}	/* extern "C"	*/
#endif

#endif

/*** z_eff_spark_flash.h end ***/

