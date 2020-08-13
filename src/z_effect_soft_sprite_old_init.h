/* $Id: z_effect_soft_sprite_old_init.h,v 2.1 1998-10-22 21:13:45+09 zelda Exp $ */
/*=============================================================================
 *
 * ���եȥ��ץ饤�ȥ��ե����� �������롼����(����ե�����)
 * z_effect_soft_sprite_old_init.h
 *
 * Program:Kenji Matsutani
 * $Log: z_effect_soft_sprite_old_init.h,v $
 * Revision 2.1  1998-10-22 21:13:45+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.14  1998/09/23 15:03:18  sakakibara
 * Effect_Kakera_ct2 ����
 *
 * Revision 1.13  1998-09-18 16:08:58+09  umemiya
 * �ե������ձ��ɲ�
 *
 * Revision 1.12  1998-09-12 21:09:15+09  matutani
 * *** empty log message ***
 *
 * Revision 1.11  1998-09-12 17:25:18+09  matutani
 * *** empty log message ***
 *
 * Revision 1.10  1998-09-03 10:13:57+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.9  1998-09-01 14:33:50+09  matutani
 * *** empty log message ***
 *
 * Revision 1.8  1998-09-01 11:59:18+09  matutani
 * ������ �饤�����ɲ�
 *
 * Revision 1.7  1998-08-18 19:51:01+09  umemiya
 * �夷�֤��ο�������Ǥ���褦�ѹ�
 *
 * Revision 1.6  1998-08-13 16:26:37+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.5  1998-08-13 10:57:18+09  nisiwaki
 * fire_tail_effect_set3 �ѹ�
 *
 * Revision 1.4  1998-08-12 19:54:54+09  nisiwaki
 * fire_tail_effect_set3 �ɲ�
 *
 * Revision 1.3  1998-08-11 18:31:05+09  matutani
 * Effect_SS_Magma2_ct()����˺��
 *
 * Revision 1.2  1998-08-07 18:36:30+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.1  1998-08-05 19:51:34+09  matutani
 * Initial revision
 *
 *
 *===========================================================================*/

#ifndef INCLUDE_Z_EFFECT_SOFT_SPRITE_OLD_INIT_H
#define INCLUDE_Z_EFFECT_SOFT_SPRITE_OLD_INIT_H

#include"z_basic.h"
#include"z_effect_soft_sprite_type.h"

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" { /* extern "C" */
#endif

/*=============================================================================
 *
 * �쥨�ե����Ƚ�����ؿ���
 *
 *=========================================================================*/

/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dust_ct_direct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc);

/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 * �饤�Ȼ�����
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_Dust_ct_li_direct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc);

/*----------------------------------------------------------------------------
 *
 * ������С������
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_Dust_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env);


/*----------------------------------------------------------------------------
 *
 * ������С������
 * �饤����
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_Dust_li_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env);

/*--------------------------------------------------------------------------
 *
 * ��������С������
 *
 *-------------------------------------------------------------------------*/
extern void Effect_SS_Dust_sc_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short scale100,
    short scale_diff);

/*--------------------------------------------------------------------------
 *
 * ��������С������
 * �饤����
 *
 *-------------------------------------------------------------------------*/
extern void Effect_SS_Dust_sc_li_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short scale100,
    short scale_diff);

/*--------------------------------------------------------------------------
 *
 * ��������С������
 *
 *-------------------------------------------------------------------------*/
extern void Effect_SS_Dust_sc_co_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short scale100,
    short scale_diff,
    short counter);

/*-----------------------------------------------------------------------------
 *
 * ��������С������
 * �����󥿻���,�饤�ȤĤ�
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dust_sc_co_li_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short scale100,
    short scale_diff,
    short counter);

/*-----------------------------------------------------------------------------
 *
 * ���顼/��������������С������
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dust_sc_cl_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    short scale_diff);

/*-----------------------------------------------------------------------------
 *
 * ��������������С������ �饤�Ȼ�����
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dust_sc_cl_li_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    short scale_diff);

/*-----------------------------------------------------------------------------
 *
 * ���顼/�����������/�����󥿡�����С������
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dust_sc_cl_co_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    short scale_diff,
    short counter);

/*-----------------------------------------------------------------------------
 *
 * ���顼/�����������/�����󥿡�����/�饤�ȥС������
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dust_sc_cl_co_li_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    short scale_diff,
    short counter);

/*-----------------------------------------------------------------------------
 *
 * ���顼/�����������/�����󥿡�����/�ե����ʤ��С������
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dust_sc_cl_co_nofog_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    short scale_diff,
    short counter);

/*==========================================================================
 *
 * ������֤��濴�Ȥ���,�����Ĥκ��줬������
 *
 *=========================================================================*/
extern void Effect_SS_Dust_spread20(
    Game *game,
    float r,
    xyz_t *center);

/*==========================================================================
 *
 * ������֤��濴�Ȥ���,�����Ĥκ��줬������
 * �饤����
 *
 *=========================================================================*/
extern void Effect_SS_Dust_li_spread20(
    Game *game,
    float r,
    xyz_t *center);

/*=============================================================================
 *
 * ���饭�饨�ե�����
 *
 *===========================================================================*/
/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_KiraKira_ct_direct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc);


/*----------------------------------------------------------------------------
 *
 * ���ե����ȥ��å�/���顼���å�
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_KiraKira_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env);

/*-----------------------------------------------------------------------
 *
 *	��������/ �����󥿻���С������
 *
 *----------------------------------------------------------------------*/
extern void Effect_SS_KiraKira_sc_ct_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    int counter
);

/*----------------------------------------------------------------------------
 *
 * ��������/ �����󥿻���С������ (��˺�����ˡ�˻Ȥ��Ƥ���)
 * ư�����㤦
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_KiraKira_soul_sc_ct_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    int counter
);

/*===========================================================================
 *
 * ��:z_eff_ss_bom.c�ѥ��󥹥ȥ饯��
 *
 *==========================================================================*/

/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Bomb_ct_direct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc);


/*===========================================================================
 *
 * ��:z_eff_ss_bomb2.c�ѥ��󥹥ȥ饯��
 *
 *==========================================================================*/
/*---------------------------------------------------------------------------
 *
 * �ǡ������å�
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Bomb2_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc);

/*---------------------------------------------------------------------------
 *
 * �ǡ������å�:���������б���
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Bomb2_2_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short scale,
    short scale_diff);

/*===========================================================================
 *
 * ��:z_eff_ss_blast.c���󥹥ȥ饯��
 *
 *==========================================================================*/
/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Blast_ct_direct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc);


/*----------------------------------------------------------------------------
 *
 * ������С������
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_Blast_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short del_time);


/*--------------------------------------------------------------------------
 *
 * ��������С������
 *
 *-------------------------------------------------------------------------*/
extern void Effect_SS_Blast_sc_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short scale100,
    short scale_diff,
    short del_time);

/*-----------------------------------------------------------------------------
 *
 * ���顼/��������������С������
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Blast_sc_cl_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    short scale_diff,
    short scale_diff_diff,
    short del_time);

/*============================================================================
 *
 * �졧z_effect_soft_sprite_old_int.c���󥹥ȥ饯��
 *
 *===========================================================================*/
/*-----------------------------------------------------------------------------
 *
 * ��������������С������
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Spk_sc_cl_ct(
    Game *game,
    Actor *actor,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    short scale_diff);


/*-----------------------------------------------------------------------------
 *
 * ��������������С������2
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Spk_sc_cl_ct2(
    Game *game,
    Actor *actor,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    short scale_diff);

/*-----------------------------------------------------------------------------
 *
 * ��������������С������2
 * �饤�Ȼ�����
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Spk_sc_cl_li_ct2(
    Game *game,
    Actor *actor,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    short scale_diff);

/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_Spk_ct_direct(
    Game *game,
    Actor *actor,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc);

/*--------------------------------------------------------------------------
 *
 * ��������С������
 *
 *-------------------------------------------------------------------------*/
extern void Effect_SS_Spk_sc_ct(
    Game *game,
    Actor *actor,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short scale100,
    short scale_diff);

/*----------------------------------------------------------------------------
 *
 * ������С������
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_Spk_ct(
    Game *game,
    Actor *actor,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env);

/*============================================================================
 *
 * ��:z_eff_ss_d_fire.c���󥹥ȥ饯����
 *
 *===========================================================================*/

/*-------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_Dfire_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short prim_a,
    short del_p);

/*-------------------------------------------------------------------------
 *
 * �ǡ������åȣ�
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_Dfire_ct_s(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short sc,
    short sc_deff,
    short prim_a,
    short del_p,
    int	  frame);

/*===========================================================================
 *
 * ��:z_eff_ss_bubble.c���󥹥ȥ饯����
 *
 *=========================================================================*/
/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Bubble_ct(
    Game  *game,
    xyz_t *ppos,
    float offset_y,
    float rand_y,
    float rand_w,
    float scale
);
#if 0
/*============================================================================
 *
 * �졧z_eff_ss_magic.c���󥹥ȥ饯����
 *
 *==========================================================================*/
/*-------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_Magic_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short no,
    float size,
    short scrl_type);
/*----------------------------------------------------------------------------
 *
 * ε����ˡ���å�
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_twister_ct_direct(
    Game *game,
    xyz_t *ppos);

/*----------------------------------------------------------------------------
 *
 * �б���ˡ���å�
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_mfire_ct_direct(
    Game *game,
    xyz_t *ppos,
    float size,
    short scrl_type);
#endif
/*=============================================================================
 *
 * z_eff_ss_g_ddg_smoke.c�����Хե�����
 *
 *==========================================================================*/
#if 0
/*-------------------------------------------------------------------------
 *
 *	����������
 *    
 *------------------------------------------------------------------------*/
extern	void	Effect_SS_G_Ddg_Smoke_ct(Game *game, xyz_t *ppos, short scale);
#endif

extern void effect_disp_mode_sub(Game *game, Effect_SS2_Element *buf,
				 unsigned char *image_txt);

/*============================================================================
 *
 * ��:z_eff_ss_g_ripple.c���󥹥ȥ饯����
 *
 *===========================================================================*/
extern void Effect_SS_G_Ripple_ct2(
    Game *game, xyz_t *ppos, short start_scale, short end_scale,
    short timer);

#define Effect_SS_G_Ripple_ct(game, ppos, scale, timer)		Effect_SS_G_Ripple_ct2(game, ppos, scale, 500, timer)

/*-------------------------------------------------------------------------
 *
 *	����������
 *    
 *------------------------------------------------------------------------*/
extern	void	Effect_SS_G_Splash_sc_cl_ct(Game *game, xyz_t *ppos, rgba_t *prim, rgba_t *env, short no, short scale);

#define Effect_SS_G_Splash_sc_ct(game, ppos, no, scale) Effect_SS_G_Splash_sc_cl_ct(game, ppos, NULL, NULL, no, scale);
#define Effect_SS_G_Splash_ct(game, ppos, no) Effect_SS_G_Splash_sc_ct(game, ppos, no, 0)

/*-------------------------------------------------------------------------
 *
 *  �졧z_eff_ss_g_magma.c���󥹥ȥ饯����
 *    
 *------------------------------------------------------------------------*/
extern	void	Effect_SS_G_Magma_ct(Game *game, xyz_t *ppos);


/*============================================================================
 *
 * ��:z_eff_ss_g_fire.c���󥹥ȥ饯����
 *
 *==========================================================================*/
extern void Effect_SS_G_Fire_ct(
    Game *game, xyz_t *ppos);


/*============================================================================
 *
 * ��:z_eff_ss_lightning.c���󥹥ȥ饯����
 *
 *===========================================================================*/
extern void Effect_SS_Lightning_sc_cl_co_ct(
    Game *game,
    xyz_t *ppos,
    rgba_t *prim,
    rgba_t *env,
    short scale100_y,
    short angle_z,
    short counter,
    short length);

/*============================================================================
 *
 * ��:z_eff_ss_dt_bubble.c���󥹥ȥ饯����
 *
 *=========================================================================*/
/*----------------------------------------------------------------------------
 *
 * ���ꥫ�顼/��������/�����󥿡�����С������
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dt_Bubble_sc_co_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short scale100,
    short counter,
    short color_num,
    short type);

/*----------------------------------------------------------------------------
 *
 * ���顼/��������/�����󥿡�����С������
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dt_Bubble_sc_cl_co_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    rgba_t *prim,
    rgba_t *env,
    short scale100,
    short counter,
    short type);

/* ��������/�����󥿡�����С������ */
#define Effect_SS_Dt_Bubble_r_sc_co_ct(game, ppos, pvec, pacc, scale100, counter) Effect_SS_Dt_Bubble_sc_co_ct(game, ppos, pvec, pacc, scale100, counter, 0, 1)
#define Effect_SS_Dt_Bubble_g_sc_co_ct(game, ppos, pvec, pacc, scale100, counter) Effect_SS_Dt_Bubble_sc_co_ct(game, ppos, pvec, pacc, scale100, counter, 1, 1)
#define Effect_SS_Dt_Bubble_b_sc_co_ct(game, ppos, pvec, pacc, scale100, counter) Effect_SS_Dt_Bubble_sc_co_ct(game, ppos, pvec, pacc, scale100, counter, 2, 1)

/* �����������С������ʥ����󥿡���25�� */
#define Effect_SS_Dt_Bubble_r_sc_ct(game, ppos, pvec, pacc, scale100) Effect_SS_Dt_Bubble_sc_co_ct(game, ppos, pvec, pacc, scale100, 25, 0, 1)
#define Effect_SS_Dt_Bubble_g_sc_ct(game, ppos, pvec, pacc, scale100) Effect_SS_Dt_Bubble_sc_co_ct(game, ppos, pvec, pacc, scale100, 25, 1, 1)
#define Effect_SS_Dt_Bubble_b_sc_ct(game, ppos, pvec, pacc, scale100) Effect_SS_Dt_Bubble_sc_co_ct(game, ppos, pvec, pacc, scale100, 25, 2, 1)

#if 0
/*=============================================================================
 *
 * ��:z_eff_ss_dust2.c���󥹥ȥ饯����
 *
 *===========================================================================*/

/*-----------------------------------------------------------------------
 *
 *	���󥹥ȥ饯��
 *
 *----------------------------------------------------------------------*/
extern void Effect_SS_Dust2_ct(
    Game	*game,
    xyz_t	*pos,
    xyz_t	*vec,
    xyz_t	*acc,
    rgba_t	*prim,
    rgba_t	*env,
    short	scale,
    short	count);

/*-----------------------------------------------------------------------
 *
 *	�ƥ����Ǥۤ���ȯ��
 *
 *----------------------------------------------------------------------*/
extern void effect_dust2_set(
    Game	*game,
    xyz_t	*pos,
    short	kosuu
);
#endif
#if 0
/*=============================================================================
 *
 * �졧z_eff_ss_ddj_dust.c���󥹥ȥ饯����
 *
 *===========================================================================*/
/************************************************************************
 *
 *	����������
 *			
 ************************************************************************/
extern void Effect_SS_Ddj_Dust_ct(
    Game	*game,
    xyz_t	*wpos,
    xyz_t	*wvec,
    xyz_t	*wacc,
    short	scale,
    short	set_type
);

/************************************************************************
 *
 *	�٥ӡ��ɥɥ��Ѻ��쥻�å�
 *			
 ************************************************************************/
extern void ddj_dust_set(
    Game_play	*game_play,
    xyz_t	*wpos,
    float	scale,
    float	base_speed,
    float	rsize,
    int		count,
    int		set_type);
#endif

/*===========================================================================
 *
 * ��:z_eff_hahen.c���󥹥ȥ饯����
 *
 *=========================================================================*/

/************************************************************************
 *
 *	����������
 *			
 ************************************************************************/
extern void Effect_Hahen_ct3(
    Game	*game,
    xyz_t	*wpos,
    xyz_t	*wvec,
    xyz_t	*wacc,
    short	type,
    short	scale,
    short	bank_num,
    short	min_frm,
    Gfx		*shape_model
);


/************************************************************************
 *
 *	���ҳȻ��ʰ�����
 *			
 ************************************************************************/
extern void Effect_Hahen_Kakusan_ct3(
    Game	*game,
    xyz_t	*ppos,
    float	vec_scale,
    short	type,
    short	shape_scale,
    short	shape_random_scale,
    short	hahen_cnt,
    short	bank_num,
    short	min_frm,
    Gfx		*shape_model);

/************************************************************************
 *
 *	����������
 *	�������ס�bomb_fragment_model
 *	����ɽ���ե졼�ࡧ10
 *			
 ************************************************************************/
#define Effect_Hahen_ct(game, wpos, wvec, wacc, type, scale)	Effect_Hahen_ct3(game, wpos, wvec, wacc, type, scale, -1, 10, NULL)

/************************************************************************
 *
 *	���ҳȻ��ʰ�����
 *			
 ************************************************************************/
#define Effect_Hahen_Kakusan_ct(game, ppos, vec_scale, type, shape_scale, shape_random_scale, hahen_cnt)	Effect_Hahen_Kakusan_ct3(game, ppos, vec_scale, type, shape_scale, shape_random_scale, hahen_cnt, -1, 10, NULL)

/************************************************************************
 *
 *	������������
 *	�������ס�����
 *	����ɽ���ե졼�ࡧ10
 *			
 ************************************************************************/
#define Effect_Hahen_ct2(game, wpos, wvec, wacc, type, scale, bank_num, shape_model)	Effect_Hahen_ct3(game, wpos, wvec, wacc, type, scale, bank_num, 10, shape_model)

/************************************************************************
 *
 *	���ҳȻ��ʰ����ꣲ
 *			
 ************************************************************************/
#define Effect_Hahen_Kakusan_ct2(game, ppos, vec_scale, type, shape_scale, shape_random_scale, hahen_cnt, bank_num, shape_model)	Effect_Hahen_Kakusan_ct3(game, ppos, vec_scale, type, shape_scale, shape_random_scale, hahen_cnt, bank_num, 10, shape_model)

/************************************************************************
 *
 *	����������
 *	�������ס�bomb_fragment_model
 *	����ɽ���ե졼�ࡧ����
 *			
 ************************************************************************/
#define Effect_Hahen_frm_ct(game, wpos, wvec, wacc, type, scale, min_frm)	Effect_Hahen_ct3(game, wpos, wvec, wacc, type, scale, -1, min_frm, NULL)

/************************************************************************
 *
 *	���ҳȻ��ʰ�����
 *			
 ************************************************************************/
#define Effect_Hahen_Kakusan_frm_ct(game, ppos, vec_scale, type, shape_scale, shape_random_scale, hahen_cnt, min_frm)	Effect_Hahen_Kakusan_ct3(game, ppos, vec_scale, type, shape_scale, shape_random_scale, hahen_cnt, -1, min_frm, NULL)

/*============================================================================
 *
 * ��:z_eff_ss_stick.c ���󥹥ȥ饯����
 *
 *===========================================================================*/
/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Stick_ct(
    Game  *game,
    xyz_t *ppos,
    short move_angle_y
);

/*=============================================================================
 *
 * ��:z_eff_ss_sibuki.c���󥹥ȥ饯����
 *
 *===========================================================================*/
extern void Effect_SS_Sibuki_ct(
    Game	*game,
    xyz_t	*wpos,
    xyz_t	*wvec,
    xyz_t	*wacc,
    short	time,
    short	way,
    short	scale
);

/* ���᡼���ҥåȻ� */
extern void DamageEffectSibukiSet(
    Game	*game,
    xyz_t	*wpos
);

/*=============================================================================
 *
 * ��z_eff_ss_sibuki.c���󥹥ȥ饯����
 *
 *===========================================================================*/
extern void Effect_SS_Sibuki2_ct(
    Game	*game,
    xyz_t	*wpos,
    xyz_t	*wvec,
    xyz_t	*wacc,
    short	scale
);

/*=============================================================================
 *
 * ��:z_eff_ss_g_magma2.c���󥹥ȥ饯����
 *
 *===========================================================================*/
extern void Effect_SS_Magma2_ct(
    Game	*game,
    xyz_t	*wpos,
    rgba_t      *prim,
    rgba_t      *env,
    short       ch_spd,
    short       flg,
    short       scale100);

/*=============================================================================
 *
 * ��:z_eff_ss_stone1.c���󥹥ȥ饯����
 *
 *==========================================================================*/
/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Stone1_ct(
    Game  *game,
    xyz_t *ppos,
    int	  flag);

/*============================================================================
 *
 * ��:z_eff_ss_hitmark.c�Υ��󥹥ȥ饯��
 *
 *==========================================================================*/

/*----------------------------------------------------------------------------
 *
 * ���󥹥ȥ饯����
 * hit_mark_type = �ҥåȥޡ����Υ����ף���������������롣���ͽ�Ǥϡ�����
 * �������ʤΤ����
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_HitMark_ct(
    Game *game,
    int hit_mark_type,
    xyz_t *ppos);

/*--------------------------------------------------------------------------
 *
 * ���󥹥ȥ饯����
 * ���������ѹ���
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_HitMark_scl_ct(
    Game *game,
    int hit_mark_type,
    short scale100,
    xyz_t *ppos);

/*============================================================================
 *
 * ��:z_eff_ss_fhg_flash.c���󥹥ȥ饯����
 *
 *=========================================================================*/
extern void Effect_fhg_flash_ct(
    Game	*game,
    xyz_t	*wpos,
    xyz_t	*vec,
    xyz_t	*acc,
    short       scale100,
    u8          flg
);
extern void Effect_fhg_flash_mini_ct(
    Game	*game,
    Actor       *ac,
    xyz_t	*wpos,
    short       scale100,
    u8          flg
);

/*============================================================================
 *
 * ��:z_eff_k_fire.c���󥹥ȥ饯����
 *
 *==========================================================================*/
/************************************************************************
 *
 *	����������
 *			
 ************************************************************************/
extern void Effect_k_fire_ct(
    Game	*game,
    xyz_t	*wpos,
    xyz_t	*vec,
    xyz_t	*acc,
    short       scale100,
    u8          flag);

/*=============================================================================
 *
 * ��:z_eff_ss_solder_srch_ball.c�Υ��󥹥ȥ饯����
 *
 *===========================================================================*/
/*-------------------------------------------------------------------------
 *
 *	����������
 *    
 *------------------------------------------------------------------------*/
extern void Effect_Ss_Solder_Srch_Ball_ct(
    Game	*game,
    xyz_t	*wpos,
    xyz_t	*wvec,
    xyz_t	*wacc,
    short	scale,
    short       *find_flag
);

#define Effect_SS_Solder_Srch_Ball_ct(game, ppos, scale, timer)		Effect_SS_Solder_Srch_Ball_ct2(game, ppos, scale, 500, timer)


/*=============================================================================
 *
 * ��:z_eff_kakera.c�Υ��󥹥ȥ饯����
 *
 *===========================================================================*/

/************************************************************************
 *	����������
 ************************************************************************/
extern void Effect_Kakera_ct2(
    Game	*game,		/*  */
    xyz_t	*wPos,		/* ������� */
    xyz_t	*wSpd,		/* ���®�� */
    xyz_t	*center,	/* ή�Τ��濴���� */
    short	gravity,	/* ���ϲ�®�� (256��) */
    short	info,		/* ����ӥå� */
    short	airK1,		/* ������(®�٤�����) (1024��) */
    short	airK2,		/* ������(®�٤Σ��������) (1024��) */
    short	accType,	/* �٥��ȥ��Υ�����(���Ϥ����) */
    short	scale,		/* �礭�� (256��) */
    short	boundNum,	/* �Х���ɲ�� */
    short	entropy,	/* ���� (0-1024)(0:����Ū  1024:̵¤��) */
    int		counter,	/* �����󥿡� */
    short	prim_type,	/* �ץ�५�顼������ */
    short	bank_num,	/*  */
    Gfx		*shape_model	/*  */
);

#define Effect_Kakera_ct(game, wPos, wSpd, center, gravity, info, airK1, airK2, accType, scale, boundNum, entropy, counter, bank_num, shape_model)	\
Effect_Kakera_ct2((game), (wPos), (wSpd), (center), (gravity), (info), (airK1), (airK2), (accType), (scale), (boundNum), (entropy), (counter), KAKERA_PRIM_DEFAULT, (bank_num), (shape_model))

/*============================================================================
 *
 * ��:z_eff_ice_piece.c���󥹥ȥ饯����
 *
 *==========================================================================*/
/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Ice_Piece_ct(
    Game  *game,
    xyz_t *pos,	/* ȯ������ */
    float scale,	/* �������� */
    xyz_t *vec,	/* ���®�� */
    xyz_t *acc,	/* ��®�� */
    int	counter	/* ���ǤޤǤλ��� */
);

extern void ice_piece_effect_set(
    Game_play	*game_play,
    xyz_t	*ppos,
    float	scale
);

/*============================================================================
 *
 * ��:z_effect_soft_sprite_old_init.c���󥹥ȥ饯����
 *
 *===========================================================================*/

/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_En_Ice_ct0(
    Game  *,
    Actor *,
    xyz_t *,	/* ȯ������ */
    short	prim_r,
    short	prim_g,
    short	prim_b,
    short	prim_a,
    short	env_r,
    short	env_g,
    short	env_b,
    float 	/* �������� */
);
#define Effect_En_Ice_ct( g, a, xyz, f) Effect_En_Ice_ct0( g, a, xyz, 150, 150, 150, 250, 235, 245, 255, f)

extern void Effect_En_Ice_ct1(
    Game  *,
    Actor *,
    s_xyz *,	/* ȯ������ */
    short	prim_r,
    short	prim_g,
    short	prim_b,
    short	prim_a,
    short	env_r,
    short	env_g,
    short	env_b,
    float 	/* �������� */
);
#define Effect_En_Ice_ct_s( g, a, xyz, f) Effect_En_Ice_ct1( g, a, xyz, 150, 150, 150, 250, 235, 245, 255, f)

#if 0

#define Effect_En_Ice_ct( g, a, xyz, f) Effect_En_Ice_ct0( g, a, xyz, 200, 230, 230, 255, 0, 20, 50, f);

#endif

extern void Effect_SS_Ice_Piece2_ct(
    Game	*game,
    xyz_t	*ppos,
    float	scale,
    xyz_t 	*vec,
    xyz_t	*acc,
    rgba_t	*prim,
    rgba_t	*env,
    int 	counter
);

/*=============================================================================
 *
 * ��:z_eff_fire_tail.c���󥹥ȥ饯����
 *
 *==========================================================================*/

/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Fire_Tail_ct(
    Game  	*game,
    Actor	*actor,
    xyz_t 	*ppos,		/* ���߰��� */
    float 	scale,		/* ���ˤʤ��礭�� */
    xyz_t	*pvec,		/* ���ߤοƤ�®�� */
    short	param,		/* ����� */
    rgba_t	*prim,		
    rgba_t	*env,
    short	type,		/* ������ 0 torch4 ������ 1 torch5 */
    short	part,
    int 	counter		/* ���ǤޤǤΥ����󥿡� */
    );


extern void fire_tail_effect_set2(Game_play*,float,short,float);
extern void fire_tail_effect_set3(Game_play*,Actor *,xyz_t*,float,short,float);

/*===========================================================================
 *
 * ��:z_eff_en_fire.c���󥹥ȥ饯��
 *
 *=========================================================================*/
/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_En_Fire_ct(
    Game  	*game,
    Actor	*actor,
    xyz_t 	*ppos,		/* ���߰��� */
    short 	scale,		/* ���ˤʤ��礭�� */
    short	param,		/* �ƥ����������ǻ� 0:�����˾ä��� 1:¨���� */
    short	type,		/* ������ 0 torch4 ������ 1 torch5 */
    short	part		/* ��³������ -1:���ե��å� 0-n: �ѡ��� */
);
extern void Effect_En_Fire_ct_s(
    Game  	*game,
    Actor	*actor,
    s_xyz 	*ppos,		/* ���߰��� */
    short 	scale,		/* ���ˤʤ��礭�� */
    short	param,		/* �ƥ����������ǻ� 0:�����˾ä��� 1:¨���� */
    short	type,		/* ������ 0 torch4 ������ 1 torch5 */
    short	part		/* ��³������ -1:���ե��å� 0-n: �ѡ��� */
);

/*===========================================================================
 *
 * ��:z_eff_ss_extra.c���󥹥ȥ饯����
 *
 *==========================================================================*/
/*-------------------------------------------------------------------------
 *
 *	����������
 *    
 *------------------------------------------------------------------------*/
extern void Effect_SS_Extra_ct(
    Game	*game,
    xyz_t	*wpos,
    xyz_t	*wvec,
    xyz_t	*wacc,
    short	scale,
    short	point);

/*=============================================================================
 *
 * ��:z_eff_fcircle.c���󥹥ȥ饯����
 *
 *===========================================================================*/
/*-----------------------------------------------------------------------------
 *
 *  �ǡ������å�
 *
 *---------------------------------------------------------------------------*/
extern void Effect_Fcircle_ct(
    Game *game,
    Actor *thisx,
    xyz_t *ppos,
    short scale1000_xz,
    short scale1000_y);

/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void _Effect_SS_Db_ct(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short sc,
    short sc_deff,
    short prim_r,
    short prim_g,
    short prim_b,
    short prim_a,
    short env_r,
    short env_g,
    short env_b,
    short del_p,
    int	  frame, short sound);


/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dd_ct0(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short sc,
    short sc_deff,
    short prim_r,
    short prim_g,
    short prim_b,
    short prim_a,
    short env_r,
    short env_g,
    short env_b,
    short del_p,
    int	  frame);

/*----------------------------------------------------------------------------
 *
 * �ǡ������åȣ�
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dd_ct1(
    Game *game,
    xyz_t *ppos,
    short sc,
    short sc_deff,
    float size,
    int	  count,
    int	  frame);

/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Ds_ct0(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short sc,
    short sc_deff,
    short prim_a,
    int	  frame);

/*----------------------------------------------------------------------------
 *
 * �ǡ������åȣ�
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Ds_ct1(
    Game *game,
    xyz_t *ppos,
    short sc,
    short sc_deff,
    short prim_a,
    int	  frame);

/*----------------------------------------------------------------------------
 *
 * �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_sound_ct0(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    u16   s_flg,
    short pri,
    short s_type,
    int	  frame);

/*----------------------------------------------------------------------------
 * �ǡ������åȣ�
 *---------------------------------------------------------------------------*/
extern void Effect_sound_ct(
    Game *game,
    xyz_t *ppos,
    u16   s_flg,
    short pri,
    short s_type,
    int	  frame);

/*=============================================================================
 *
 * ɹ�ѱ쥨�ե�����
 *
 *===========================================================================*/
extern void Effect_SS_Ice_Smoke_make(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short scale1000);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_effect_soft_sprite_old_init.h EOF ***/
