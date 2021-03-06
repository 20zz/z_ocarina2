/*  $Id: z_bgcheck_movebg.h,v 2.1 1998-10-22 20:45:49+09 zelda Exp $ */
/*============================================================================
 *
 * z_bgcheck_movebg.h
 *
 * Program:Kenji Matsutani
 * 1997年 7月29日(火曜日) 09時41分28秒 JST
 *
 *$Log: z_bgcheck_movebg.h,v $
 *Revision 2.1  1998-10-22 20:45:49+09  zelda
 *ＲＯＭ出しバージョン(NTSC)
 *
 *Revision 1.7  1998/08/27 07:24:40  matutani
 *SW用ビット処理
 *
 *Revision 1.6  1998-03-18 10:32:38+09  takahata
 **** empty log message ***
 *
 * Revision 1.5  1998/03/11  05:32:28  matutani
 * プレイヤーが上にいる
 *
 * Revision 1.4  1998/02/17  07:49:40  umemiya
 * MoveBG_checkMoveArea追加
 *
 * Revision 1.3  1997/08/06  06:01:23  matutani
 * *** empty log message ***
 *
 * Revision 1.2  1997/08/06  05:17:24  matutani
 * 乗っているかビット
 *
 * Revision 1.1  1997/07/29  09:54:06  matutani
 * Initial revision
 *
 *
 *==========================================================================*/

#ifndef Z_BGCHECK_MOVEBG_H
#define Z_BGCHECK_MOVEBG_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include"z_bgcheck_movebg_type.h"


/*----------------------------------------------------------------------------
 *
 * moveBG基底クラス メンバー変数クリア
 *
 *--------------------------------------------------------------------------*/
extern void MoveBG_ct(
    MoveBG_Actor *pmbg_actor,
    long func_mask);

/*=========================================================================
 *
 * status 関連処理
 *
 *=========================================================================*/

/*--------------------------------------------------------------------------
 *
 * moveBG status クリア
 *
 *------------------------------------------------------------------------*/
extern void MoveBG_clearStatus(
    MoveBG_Actor *pmbg_actor);

/*--------------------------------------------------------------------------
 *
 * moveBG status 乗っている
 *
 *-------------------------------------------------------------------------*/
extern void MoveBG_setRideStatus(
    MoveBG_Actor *pmbg_actor);

/*----------------------------------------------------------------------------
 *
 * プレイヤーが乗っているstatusビットセット
 *
 *---------------------------------------------------------------------------*/
extern void MoveBG_setRidePlayerStatus(
    MoveBG_Actor *pmbg_actor);

/*----------------------------------------------------------------------------
 *
 * プレイヤーからのプレイヤーの乗っている statusビットセット
 *
 *---------------------------------------------------------------------------*/
extern void MoveBG_setRidePlayerStatus_ai(
    T_BGCheck *pbgcheck,
    int bg_actor_index);
/*----------------------------------------------------------------------------
 *
 * プレイヤーが上にいるstatusビットセット
 *
 *---------------------------------------------------------------------------*/
extern void MoveBG_setOverPlayerStatus(
    MoveBG_Actor *pmvbg_actor);


/*-----------------------------------------------------------------------------
 *
 * プレイヤーからのプレイヤーが上にいるかというビットフラグ
 *
 *---------------------------------------------------------------------------*/
extern void MoveBG_setOverPlayerStatus_ai(
    T_BGCheck *pbgcheck,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * スイッチを押されたフラグ。
 *
 *--------------------------------------------------------------------------*/
extern void MoveBG_setSwOnStatus(
    MoveBG_Actor *pmvbg_actor);

/*=============================================================================
 *
 * status 確認
 *
 *===========================================================================*/
/*----------------------------------------------------------------------------
 *
 * 乗っているかチェック
 *
 *--------------------------------------------------------------------------*/
extern int MoveBG_checkRideStatus(
    MoveBG_Actor *pmbg_actor);

/*----------------------------------------------------------------------------
 *
 * プレイヤーが乗っているかどうかチェック
 *
 *---------------------------------------------------------------------------*/
extern int MoveBG_checkRidePlayerStatus(
    MoveBG_Actor *pmbg_actor);

/*----------------------------------------------------------------------------
 *
 * プレイヤーが上にいるかどうかチェック
 *
 *---------------------------------------------------------------------------*/
extern int MoveBG_checkOverPlayerStatus(
    MoveBG_Actor *pmvbg_actor);

/*--------------------------------------------------------------------------
 *
 * スイッチが押されたフラグ確認
 *
 *--------------------------------------------------------------------------*/
extern int MoveBG_checkSwOnStatus(
    MoveBG_Actor *pmvbg_actor);

/*-----------------------------------------------------------------------
 *
 *	箱型移動先範囲チェック
 *	（幅と長さは0.1ひかれます）
 *
 *---------------------------------------------------------------------*/
extern int MoveBG_checkMoveArea(Game_play *game_play,
				MoveBG_Actor *moveBG,
				short width,
				short length,
				short offset_y);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_bgcheck_movebg.h end ***/
