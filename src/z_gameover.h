/* $Id: z_gameover.h,v 2.1 1998/10/22 12:17:25 zelda Exp $ 
 * $Log: z_gameover.h,v $
 * Revision 2.1  1998/10/22  12:17:25  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.16  1998/09/19 09:27:51  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/03/25  05:51:16  soejima
 * Initial revision
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_GAMEOVER_H
#define INCLUDE_Z_GAMEOVER_H

#include "z_basic.h"
#include "z_kanfont.h"



/************************************************************************
 *									*
 *	�ǣ��ͣš��ϣ֣ţ�						*
 *				1997ǯ03��25��(������) 09��30ʬ00�� JST *
 ************************************************************************/
typedef struct zelda_z_gameover_struct {
    unshort	gover_mode;		/* �⡼�� */
} Gover; 



#define	GAMEOVER_Pause_on_off( this )	( ( this ) -> gover_mode )





/*==============================================================*/
extern void
gameover_ct( Game_play *game_play );	/* ���ۻҡʥ��󥹥ȥ饯����*/

extern void
gameover_draw( Game_play *game_play );

extern void
gameover_move( Game_play *game_play );
    
/*==============================================================*/


#endif

/*** z_gameover.h end ***/
