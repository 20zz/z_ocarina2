/*
 * $Id: z_end_title.h,v 2.1 1998/10/22 12:13:45 zelda Exp $
 *
 * $Log: z_end_title.h,v $
 * Revision 2.1  1998/10/22  12:13:45  zelda
 * ＲＯＭ出しバージョン(NTSC)
 *
 * Revision 1.2  1998/08/03 04:38:51  nisiwaki
 * *** empty log message ***
 *
 * Revision 1.1  1998-07-28 11:31:39+09  nisiwaki
 * Initial revision
 *
 *
 *
 * */
/*-----------------------------------------------------------------------------
 *
 *
 *----------------------------------------------------------------------*/
#ifndef INCLUDE_Z_END_TITLE_H
#define INCLUDE_Z_END_TITLE_H

/*-----------------------------------------------------------------------
 *
 *	シーククラス
 *
 *----------------------------------------------------------------------*/
typedef struct End_Title_actor_s {
    Actor actor;			/* 基底クラス			*/

    unchar alpha[3];

} End_Title_Actor;


/*-----------------------------------------------------------------------
 *
 *	プロフィール
 *
 *----------------------------------------------------------------------*/
extern Actor_profile End_Title_Profile;

#endif
/*** z_end_title.h ***/


