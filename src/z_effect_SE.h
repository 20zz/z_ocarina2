/* $Id: z_effect_SE.h,v 2.1 1998/10/22 12:13:45 zelda Exp $ */	
/* $Log: z_effect_SE.h,v $
 * Revision 2.1  1998/10/22  12:13:45  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.2  1998/04/20 14:20:55  iwawaki
 * *** empty log message ***
 *
 * Revision 1.1  1998/04/18 07:46:18  iwawaki
 * Initial revision
 *
 */

/*----------------------------------------------------------------------------
 *
 * �ӣť��ե�����
 * z_effect_SE.h
 * Program:Toshio Iwawaki
 * 1998ǯ4��18��(������)
 *
 *--------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_EFFECT_SE_H
#define INCLUDE_Z_EFFECT_SE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/************************************************************************
 *
 *	�ӣť��ե�����
 *
 ************************************************************************/
#include "z_play_h.h"
    
    
/*-----------------------------------------------------------------------
 *
 *	�ӣť��ե����ȥ��饹
 *
 *----------------------------------------------------------------------*/
#define	EFFECT_SE_MAX	16
    
typedef struct {
    unsigned short	timer;
    xyz_t		world_position;
    xyz_t		camera_position;
} Effect_SE;
      
typedef struct {
    Effect_SE	effect_SE_buf[EFFECT_SE_MAX];
} Effect_SE_Info;
      
/*-----------------------------------------------------------------------
 *
 *	���󥹥ȥ饯��
 *
 *----------------------------------------------------------------------*/
extern void Effect_SE_Info_ct(
    Game_play      *game_play
);

/*-----------------------------------------------------------------------
 *
 *	����
 *
 *----------------------------------------------------------------------*/
extern void Effect_SE_Info_proc(
    Game_play      *game_play
);

/*-----------------------------------------------------------------------
 *
 *	��Ͽ
 *
 *----------------------------------------------------------------------*/
extern void Effect_SE_Info_new(
    Game_play      *game_play,
    xyz_t	   *world_position,
    int		   timer,
    u16		   SE_flag
);



#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_effect_SE.h end ***/
