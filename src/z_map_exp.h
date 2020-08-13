/*
 * $Id: z_map_exp.h,v 2.1 1998-10-22 21:17:25+09 zelda Exp $
 *
 *
 *
 * $Log: z_map_exp.h,v $
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.7  1998/09/26 13:48:07  hayakawa
 * *** empty log message ***
 *
 * Revision 1.6  1998-09-21 14:31:55+09  soejima
 * *** empty log message ***
 *
 * Revision 1.5  1998-09-19 22:29:58+09  hayakawa
 * map_exp_dt�ɲ�
 *
 * Revision 1.4  1998-09-19 15:08:09+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.3  1998-09-11 16:06:19+09  soejima
 * *** empty log message ***
 *
 * Revision 1.2  1998-07-29 22:52:38+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1998-07-24 22:01:32+09  soejima
 * Initial revision
 *
 * Revision 1.134  1998-07-23 22:52:26+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/05/21  01:12:28  soejima
 * Initial revision
 * $Log�ɲ�
 *
 */


#ifndef INCLUDE_Z_MAP_EXP_H
#define INCLUDE_Z_MAP_EXP_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_save_area_h.h"




/************************************************************************
 *									*
 *	�����64 �ͣ���							*
 *				1998ǯ07��24��(������) 14��00ʬ00�� JST *
 *									*
 ************************************************************************/
/*
 * �ͣ���
 */
#define MAP_ALPHA	255	/* �ͣ��� ������� */
////////#define MAP_COLOR	0x52bf
////////#define LINK_MAP	0xf801
#define MAP_COLOR	0x02bf
#define LINK_MAP	0x0663
#define MAP_COLOR_H	((MAP_COLOR & 0xff00)>>8)	/* �ͣ��� �ϣΥ��顼�ʣȡ�*/
#define MAP_COLOR_L	(MAP_COLOR & 0x00ff)		/*                  �ʣ̡�*/
#define LINK_MAP_H	((LINK_MAP & 0xff00)>>8)	/* �ͣ��� �ϣΥ��顼�ʣȡ�*/
#define LINK_MAP_L	(LINK_MAP & 0x00ff)		/*                  �ʣ̡�*/

/* �ͣ��� �ϣΥ��å� */
#define SIZE0		((64*57)/2)		/* �Ͼ�ͣ��Х����� */
#define SIZE1		((96*85)/2)		/* ���󥸥��ͣ��Х����� */
#define SIZE2		((48*85)/2)		/* ���쥤�ɡ��������� �ͣ��Х����� */



extern short map_no_data[][8];
extern short boss_floor_data[];

/* �ͣ��� �Ƴ��ϣΥ����å� */
extern void
map_floor_check( Game_play *game_play, short floor );
/* �ͣ��� �ƥ�������ģͣ� */
extern void
map_textuer_dma( Game_play *game_play, short room_no  );
/* �ͣ��� �ϣΥ��å� */
extern void
map_enter_set( Game_play *game_play, short room_no );
/* �ͣ��� �ãϣΣӣԣңգã� */
extern void
map_exp_ct( Game_play *game_play );
/* �ͣ��� �Ǥ��Ȥ餯�� */
extern void
map_exp_dt( Game_play *game_play );
/* �ͣ��� �ģң��� */
extern void
map_exp_draw( Game_play *game_play );
/* map_no */
extern int
map_exp_get_map_no( int sceneid, int no );
/* �ͣ��� �ͣϣ֣� */
extern void
map_exp_move( Game_play *game_play );

/* �����ץ쥤�䡼������¸ */
extern void
player_position_hold( Game_play *game_play );


#include "z_map_exp_data.h"
extern map_exp_data_tbl_t *map_exp_data_tbl_p;



#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_map_exp.h end ***/
