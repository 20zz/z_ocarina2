/*
 * $Id: z_en_mag.h,v 2.2 2002-05-27 16:19:20+09 zelda Exp $
 *
 * $Log: z_en_mag.h,v $
 * Revision 2.2  2002-05-27 16:19:20+09  zelda
 * *** empty log message ***
 *
 * Revision 2.1  1998-10-22 21:13:45+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.8  1998/10/13 05:15:40  soejima
 * *** empty log message ***
 *
 * Revision 1.7  1998-10-06 18:47:12+09  soejima
 * *** empty log message ***
 *
 * Revision 1.6  1998-10-05 23:00:42+09  soejima
 * *** empty log message ***
 *
 * Revision 1.5  1998-09-22 17:27:06+09  takahata
 * *** empty log message ***
 *
 * Revision 1.4  1998-07-22 22:46:14+09  soejima
 * *** empty log message ***
 *
 * Revision 1.3  1998-07-18 22:42:09+09  soejima
 * *** empty log message ***
 *
 * Revision 1.2  1998-07-17 17:51:35+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1998-07-16 21:24:54+09  soejima
 * Initial revision
 *
 *
 *
 * */
/*-----------------------------------------------------------------------------
 *
 *
 *----------------------------------------------------------------------*/
#ifndef INCLUDE_Z_EN_MAG_H
#define INCLUDE_Z_EN_MAG_H

/*-----------------------------------------------------------------------
 *
 *	���������饹
 *
 *----------------------------------------------------------------------*/
typedef struct En_Mag_actor_s {
    Actor actor;			/* ���쥯�饹			*/

    Sram	sram;		/* �ӣң��� ���饹 */

    Kanfont	kanfont;		/* ʸ�� ���饹 */

    short	effect_rgb_fg;		/* ���ե����ȣңǣ¥ե饰 */
    short	effect_rgb_ct;		/*                 �����󥿡� */
    short	title_mode;		/* �����ȥ�ͣϣģ� */

    float	effect_prim_f;		/*                 �Уңɣ͡��� */
    float	effect_prim[3];		/* ���ե����ȣУңɣ͡��ңǣ� */
    float	effect_env[3];		/* ���ե����ȣţΣ֡��ңǣ� */
    
    float	effect_alpha;		/* ���ե����� ����ե��� */
    float	title_alpha;		/* �����ȥ� ����ե��� */
    float	sub_alpha;		/* ���ܸ쥿���ȥ륢��ե��� */
    float	copy_alpha;		/* "���������Σ��������" ����ե��� */

    short	scroll_x;
    short	scroll_y;
    short	alpha_ct;
    short	alpha_fdin;
    short	alpha_fdout;

    /* �ӣң��ͥ��˥���饤���ط� */
    short	key_point;
    short	key_frame;

    int		old_key;
    int		key_wait;
} En_Mag_Actor;

/* /project/ZELDA/data/shape2/zelda_mag/ : �����ȥ� */
#if defined(USE_NEW_DUNGEON)
extern unsigned char  g_title_ura_txt[];
#else /* defined(USE_NEW_DUNGEON) */
extern unsigned char  g_title_txt[];
#endif /* defined(USE_NEW_DUNGEON) */
extern unsigned char  g_title_sub_1_txt[];
extern unsigned char  g_title_sub_2_txt[];
extern unsigned char  g_title_sub_j_txt[];
extern unsigned char  g_title_efc_1_txt[];
extern unsigned char  g_title_efc_2_txt[];
extern unsigned char  g_title_efc_3_txt[];
extern unsigned char  g_title_efc_4_txt[];
extern unsigned char  g_title_efc_5_txt[];
extern unsigned char  g_title_efc_6_txt[];
extern unsigned char  g_title_efc_7_txt[];
extern unsigned char  g_title_efc_8_txt[];
extern unsigned char  g_title_efc_9_txt[];
#if defined(USE_NEW_DUNGEON)
extern unsigned char  g_title_cpr_ura_txt[];
#else /* defined(USE_NEW_DUNGEON) */
extern unsigned char  g_title_cpr_txt[];
#endif /* defined(USE_NEW_DUNGEON) */
extern unsigned char  g_title_mable_txt[];
extern unsigned char  g_dd_txt[];

/*-----------------------------------------------------------------------
 *
 *	�ץ�ե�����
 *
 *----------------------------------------------------------------------*/
extern Actor_profile En_Mag_Profile;

#endif
/*** z_en_mag.h ***/


