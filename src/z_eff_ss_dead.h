/* $Id: z_eff_ss_dead.h,v 2.1 1998-10-22 21:13:45+09 zelda Exp $ */
/*----------------------------------------------------------------------------
 *
 * Ũ�������ѥ��եȥ��ץ饤�ȥ��ե�����
 *
 * Program: Tarukado
 *
 *$Log: z_eff_ss_dead.h,v $
 *Revision 2.1  1998-10-22 21:13:45+09  zelda
 *�ңϣͽФ��С������(NTSC)
 *
 *Revision 1.12  1998/08/05 11:25:21  matutani
 *�����С��쥤��
 *
 *
 * Initial revision
 *
 *
 *
 *--------------------------------------------------------------------------*/
#ifndef INCLUDE_Z_EFF_SS_DEAD_H
#define INCLUDE_Z_EFF_SS_DEAD_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" { 
#endif    

#include"z_basic.h" 
#include"z_effect_soft_sprite_type.h"
#include"z_eff_ss_dead_db.h"
#include"z_eff_ss_dead_dd.h"
#include"z_eff_ss_dead_ds.h"
#include"z_eff_ss_dead_sound.h"
    
#if 0
    /* z_eff_ss_dead_dk.h�ذ��ñۤ� */
/*----------------------------------------------------------------------------
 *
 * ���� ����ѥ������������ӻ��� �ǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dk_ct0(
    Game *game,
    xyz_t *ppos,
    xyz_t *pvec,
    xyz_t *pacc,
    short sc,
    short sc_deff,
    int	  frame);
/*----------------------------------------------------------------------------
 *
 * ���� ����ѥ������������ӻ��� �ǡ������åȣ�
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Dk_ct1(
    Game *game,
    xyz_t *ppos,
    short sc,
    short sc_deff,
    float size,
    int	  count,
    int	  frame);
#endif

#if 0
/*-------------------------------------------------------------------------
 *
 * ���� �� ���եȥ��ץ饤�ȥ��ե����� �ǡ������å�1
 *
 *--------------------------------------------------------------------------*/
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

#define Effect_SS_Db_ct0( game, ppos, pvec, pacc, sc, sc_deff, prim_r, prim_g, prim_b, prim_a, env_r, env_g, env_b, del_p, frame) _Effect_SS_Db_ct( game, ppos, pvec, pacc, sc, sc_deff, prim_r, prim_g, prim_b, prim_a, env_r, env_g, env_b, del_p, frame, 1);

#define Effect_SS_Db_ct1( game, ppos, pvec, pacc, sc, sc_deff, prim_r, prim_g, prim_b, prim_a, env_r, env_g, env_b, del_p, frame) _Effect_SS_Db_ct( game, ppos, pvec, pacc, sc, sc_deff, prim_r, prim_g, prim_b, prim_a, env_r, env_g, env_b, del_p, frame, 0);

/* �� �������� */
#define Effect_SS_Db_ct( game, ppos, pvec, pacc, sc, sc_deff, prim_a, del_p, frame) Effect_SS_Db_ct0( game, ppos, pvec, pacc, sc, sc_deff, 255, 255, 255, prim_a, 150, 150, 150, del_p, frame);

/* �� �餯�餯���� */
#define Effect_DB_Set( game, pos, vec, acc) Effect_SS_Db_ct( game, pos, vec,acc, 100, 0, 255, 1, 9);

/* �� ���������ѹ���ǽ ���� */
#define Effect_DB_Set_s( game, pos, vec, acc, sc, sc_d) Effect_SS_Db_ct( game, pos, vec,acc, sc, sc_d, 255, 1, 9);

/* �� ���������ѹ���ǽ ���� */
#define Effect_DB_Set_r_s( game, ppos, pvec, pacc, sc, sc_deff) Effect_SS_Db_ct0( game, ppos, pvec, pacc, sc, sc_deff, 255, 255, 255, 255, 255, 0, 0, 1, 9);

/* �� ���������ѹ���ǽ ���� */
#define Effect_DB_Set_g_s( game, ppos, pvec, pacc, sc, sc_deff) Effect_SS_Db_ct0( game, ppos, pvec, pacc, sc, sc_deff, 255, 255, 255, 255, 0, 255, 0, 1, 9);

/* �� ���������ѹ���ǽ ���� */
#define Effect_DB_Set_b_s( game, ppos, pvec, pacc, sc, sc_deff) Effect_SS_Db_ct0( game, ppos, pvec, pacc, sc, sc_deff, 255, 255, 255, 255, 0, 0, 255, 1, 9);

/* ��  ���� ���� */
#define Effect_DB_Set_r( game, ppos, pvec, pacc) Effect_DB_Set_r_s( game, ppos, pvec, pacc, 100, 0);

/* ��  ���� ���� */
#define Effect_DB_Set_g( game, ppos, pvec, pacc) Effect_DB_Set_g_s( game, ppos, pvec, pacc, 100, 0);

/* ��  ���� ���� */
#define Effect_DB_Set_b( game, ppos, pvec, pacc) Effect_DB_Set_b_s( game, ppos, pvec, pacc, 100, 0);
/*-------------------------------------------------------------------------
 *
 * ���� �����ڤ����� ���եȥ��ץ饤�ȥ��ե����� �ǡ������å�1
 *
 *--------------------------------------------------------------------------*/
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
/*-------------------------------------------------------------------------
 *
 * ���� �����ڤ����� ���եȥ��ץ饤�ȥ��ե����� �ǡ������å�2
 *
 *--------------------------------------------------------------------------*/
extern void Effect_SS_Dd_ct1(
    Game *game,
    xyz_t *ppos,
    short sc,
    short sc_deff,
    float size,
    int	  count,
    int	  frame);
#endif
/************************************************************************
 *									*
 *	���ѥե������� ����			 			*
 *									*
 ************************************************************************/
#define Eff_Set_Fog(game, now_time, max_time) Eff_Set_Fog2(game, NULL, now_time, max_time)
extern void Eff_Set_Fog2(Game *game, rgba_t *fog_color,
			 short now_time, short max_time);
extern void Eff_Set_Fog3(Game *game, rgba_t *fog_color,
			 short now_time, short max_time);
extern void Eff_Off_Fog(Game *game);
/************************************************************************
 *									*
 *	���ѥե������̽�����ȾƩ���ѡ�		 			*
 *									*
 ************************************************************************/
extern void Eff_Set_Fog2_xlu(Game *game, rgba_t *fog_color,
			     short now_time, short max_time);
extern void Eff_Set_Fog3_xlu(Game *game, rgba_t *fog_color,
			     short now_time, short max_time);
extern void Eff_Off_Fog_xlu(Game *game);
#if 0
/*----------------------------------------------------------------------------
 *
 * ���� �ä���� ���ե����ȥǡ������å�1
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Ds_ct0( Game *game, xyz_t *ppos, xyz_t *pvec,
			      xyz_t *pacc, short sc, short sc_deff,
			      short prim_a, int	  frame);
/*----------------------------------------------------------------------------
 *
 * ���� �ä���� ���ե����ȥǡ������åȣ�
 *
 *---------------------------------------------------------------------------*/
extern void Effect_SS_Ds_ct1( Game *game, xyz_t *ppos, short sc, short sc_deff,
			      short prim_a, int	  frame);

/*---------------------------------------------------------------------------
 *
 * ���� ��ȯ�� ���ե����� 
 *
 *--------------------------------------------------------------------------*/
enum { /* ����ͥ���� */
    S_NOM, /* �̾� */
    S_MAX  /* ���� */
};
enum { /* �������� */
    S_TRG = 1, /* �ȥꥬ */
    S_LEV /* ��٥� */
};
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
#endif


#ifdef _LANGUAGE_C_PLUS_PLUS
}	/* extern "C"	*/
#endif

#endif

/*** z_eff_ss_dead.h  end ***/
