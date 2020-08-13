/* $Id: z_kaleido_scope.h,v 2.1 1998/10/22 12:17:25 zelda Exp $
 * $Log: z_kaleido_scope.h,v $
 * Revision 2.1  1998/10/22  12:17:25  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.64  1998/09/19 14:11:41  hayakawa
 * kaleido_scope_dt�ɲ�
 *
 * Revision 1.63  1998-09-19 18:28:18+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/02/06  04:45:57  soejima
 * Initial revision
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_KALEIDO_SCOPE_H
#define INCLUDE_Z_KALEIDO_SCOPE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_basic.h"
#include "audio.h"
#include "sys_segment.h"

#include "z_kanfont.h"



/************************************************************************
 *									*
 *	���쥤�ɡ���������						*
 *				1997ǯ02��06��(������) 09��00ʬ00�� JST *
 ************************************************************************/
typedef struct {
	short	r, g, b, a;
} rgba_z;

typedef struct {
	short	ob[2];			/* x, y */
} Vtx_z;



typedef struct zelda_z_kscope_struct {
    View	view;

    char	*icon_itemSegment;	/* �����ƥ� �������� */
    char	*icon_item24Segment;	/* �����ƥ� �������� */
    char	*icon_item_map_Segment;	/* �����ƥ� �������� */
    char	*icon_item_jpn_nes_Segment;	/* �����ƥ� �������� */
    char	*item_nameSegment;	/* �����ƥ�Σ��� �������� */
    char	*playerSegment;		/* �ץ쥤�䡼 �������� */
    char	*map_nameSegment;	/* ������̾ �������� */

    Vtx_t	*item_frame_Vtx;	/* �ɣԣţͥե졼�� */
    Vtx_t	*equipment_frame_Vtx;	/* �ţѣգɣХե졼�� */
    Vtx_t	*map_frame_Vtx;		/* �ͣ��Хե졼�� */
    Vtx_t	*collect_frame_Vtx;	/* �ãϣ̣̣ţãԥե졼�� */
    
    Vtx_t	*menuVtx;		/* ��˥塼 �ѥͥ� */
    Vtx_t	*itemVtx;		/* �ɣ�������ƥ� */
    Vtx_t	*equipVtx;		/* �ţ����𥢥��ƥ� */
    Vtx_t	*mapVtx;		/* �ͣ��Х����ƥ� */
    Vtx_t	*collectVtx;		/* �ãϣ̣̣ţãԥ����ƥ� */
    Vtx_t	*cursolVtx;		/* �������� */
    Vtx_t	*saveVtx;		/* ������ ��å����� */

    char	map_palete[16*2];	/* �ͣ��Хѥ�å� */


    char	*cvg;


    NA_OCARINA_PLAY_INFO	*info;	/* ������� */


    dma_t	k_dma;			/* ����ž���ط� */
    OSMesgQueue	mq;			/*		  */
    OSMesg	m;			/*	  	  */
    
    
    unshort	pause;			/* on/off�ե饰 */
    unshort	debug;			/* on/off�ե饰 */

    xyz_t	eye;			/* LookAt �������� */

    unshort	kscp_status;		/* ���� */
    unshort	kscp_mode;		/* �⡼�� */
    unshort	kscp_pos;		/* ɽ���� */
    unshort	kscp_scroll;		/* �����󥿨� */
    unshort	save_status;		/* �ӣ��֣ž��� */

    float	translate;		/* ��Υ */
    float	angle_i;		/* �ɣԣţ����ѳ��� */
    float	angle_e;		/* �ţѣգɣУͣţΣ����ѳ��� */
    float	angle_m;		/* �ͣ������ѳ��� */
    float	angle_c;		/* �ãϣ̣̣ţã����ѳ��� */
    float	angle_s;		/* �ӣ��֣����ѳ��� */
    unshort	alpha;			/* ����ե��� */
    short	yp;			/* �����٣Уϣ� */

    int		xbuff, ybuff;		/* �أ����ϥ��� */
    short	wkey_x, wkey_y;		/* ���ϥ��� �Хåե� */
    short	cursor_point[5];	/* ���̥���������� */
    short	cur_xpt[5], cur_ypt[5];	/* �ţѣգɣ��̥ݥ��� */
    short	dungeon_map_pt;		/* �ͣ����̥ݥ��� */

    short	key_angle;		/* ���ϥ������� */
    short	key_frame;		/* ���ϥ����ף����ե졼�� */


    unshort	zoom_name;		/* ���祢���ƥ�̾���ݥ��󥿡� */
    unshort	select_name[4];		/* ����̾���ݥ��󥿡� */
    unshort	select_pt[4];		/* ���򥢥��ƥ�ݥ��󥿡� */

    unshort	sl_item_no;		/* ���򥢥��ƥ�Σ*/
    unshort	sl_number;		/* ���򥢥��ƥ��ֹ� */
    unshort	sl_button;		/* ����ܥ��� */
    short	sl_xpos;		/* ���򥢥��ƥ��ư�� */
    short	sl_ypos;		/*                 �� */
    short	sl_alpha;		/*             ������� */

    short	menu_myp;		/* ��˥塼����ư�� */
    unshort	name_flush;		/* �����ƥ����ǥ����󥿡� */
    unshort	name_hold;		/* �����ƥ�ȣϣ̣ĥե饰 */
    short	cursor_colp;		/* �������� ���顼�ݥ��� */

    short	save_cursor;

    short	ocarina_no;

    unchar	field_map_evt[20];	/* �ե�����ɣͣ����� ���٥�� */

    unchar	warashibe_flag;		/* ��餷�٥ե饰 */

    /* �ץ쥤�䡼 */
    Skeleton_Info 	skeleton;		/* ������ȥ󥷥����ץ��饹 */
} Kscope; 



/*==============================================================*/
extern void
kaleido_scope_ct( Game_play *game_play );	/* ���ۻҡʥ��󥹥ȥ饯����*/

extern void
kaleido_scope_dt( Game_play *game_play );	/* ���ǻҡʥǥ��ȥ饯����*/

extern void
kaleido_scope_draw( Game_play *game_play );

extern void
kaleido_scope_move( Game_play *game_play );


/*==============================================================*/


#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_kaleido_scope.h end ***/
