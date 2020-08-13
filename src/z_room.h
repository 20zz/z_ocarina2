/*
 * $Id: z_room.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $
 * $Log: z_room.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.21  1998/09/15 12:56:47  hayakawa
 * *** empty log message ***
 *
 * Revision 1.20  1998-09-05 18:02:24+09  goron
 * *** empty log message ***
 *
 * Revision 1.19  1998-07-04 22:31:42+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.18  1998-06-25 22:58:14+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.17  1998-06-16 23:06:18+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.16  1998-03-19 22:01:41+09  komatu
 * *** empty log message ***
 *
 * Revision 1.15  1998/03/16  04:46:15  iwawaki
 * *** empty log message ***
 *
 * Revision 1.14  1998/02/27  13:20:29  iwawaki
 * *** empty log message ***
 *
 * Revision 1.13  1998/02/18  14:20:22  iwawaki
 * *** empty log message ***
 *
 * Revision 1.12  1998/02/14  13:43:49  iwawaki
 * *** empty log message ***
 *
 * Revision 1.11  1998/01/30  13:21:51  iwawaki
 * *** empty log message ***
 *
 * Revision 1.10  1997/12/01  12:05:31  iwawaki
 * *** empty log message ***
 *
 * Revision 1.9  1997/10/22  14:45:46  iwawaki
 * *** empty log message ***
 *
 * Revision 1.8  1997/10/16  11:19:14  hayakawa
 * Room_Move�Σ��ò��ܤ�����ܤ�ʬ����褦�ˤ���
 *
 * Revision 1.7  1997/08/07  14:00:14  hayakawa
 * Room_Move���ɲ�
 *
 * Revision 1.6  1997/07/23  08:35:58  iwawaki
 * *** empty log message ***
 *
 * Revision 1.5  1997/07/16  05:07:28  hayakawa
 * *** empty log message ***
 *
 */


#ifndef INCLUDE_Z_ROOM_H
#define INCLUDE_Z_ROOM_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

    
#include "z_play_h.h"
#include "z_scene.h"
#include "z_actor.h"


/************************************************************************
 *
 *	���������ףΣ�
 *
 ************************************************************************/
enum {
    ROOM_WEATHER_NORMAL,
    ROOM_WEATHER_COLD,
    ROOM_WEATHER_HOT,
    ROOM_WEATHER_HEAVY_HOT,
    ROOM_WEATHER_WARM,
    ROOM_WEATHER_MILD,
    ROOM_WEATHER_COOL,
    ROOM_WEATHER_MAX
};

/************************************************************************
 *
 *	���������ףΣ�
 *
 ************************************************************************/
enum {
    ROOM_TYPE_FIELD,
    ROOM_TYPE_DANGEON,
    ROOM_TYPE_ROOM,
    ROOM_TYPE_FOREST,
    ROOM_TYPE_TOWN,
    ROOM_TYPE_BOSS,
    ROOM_TYPE_MAX
};

/************************************************************************
 *
 *	�����ǡ������饹
 *
 ************************************************************************/
typedef struct {
    signed char		ID;			/* �����Σ� */
    signed char		area;			/* ���ꥢ�Σ� */
    unsigned char	weather;		/* ���������� */
    unsigned char	type;			/* ���������� */
    unsigned char	sound_echo_level;	/* ������ɥ�������٥� */
    unsigned char	glass_mode;		/* ��ˡ�Υᥬ�ͥ⡼�� */
    Ground_Shape	*ground_shape;		/* �Ϸ��������ץǡ����ݥ��� */
    char		*Segment;		/* �����ǡ����ݥ��� */

    int			TOOL_OFFSET;		/* �ġ����ѥ��ե��å� */	
} Room;

typedef struct {
    Room		now;			/* ���������ǡ��� */
    Room		old;			/* ���������ǡ��� */
    
    char		*buffer_address[2];	/* �����ؤ��ޥåץǡ����Хåե����ϥݥ��� */
    unsigned char	buffer_count;		/* �����ؤ��ޥåץǡ����Хåե������� */
    
    signed char		read_flag;		/* �����ɤ߹��ߥե饰 */
    signed char		read_data;		/* �����ɤ߹��ߥ��ꥢ�Σ� */
    char		*read_buffer_address;	/* �����ɤ߹��ߥޥåץǡ����Хåե��ݥ��� */

    dma_t		dma;
    OSMesgQueue		mq;
    OSMesg		m;

    short		work[2];		/* �����ѿ� */
} Room_Info;

/*-----------------------------------------------------------------------
 *
 *	�����������ץǡ���ɽ������
 *
 *----------------------------------------------------------------------*/
extern void Room_Draw(
    Game_play *game_play,
    Room      *this,
    int       drawflag		/* 1:OPA, 2:XLU, 3:OPA&XLU */
);

/*-----------------------------------------------------------------------
 *
 *	�����������ץǡ���ɽ���ʳ�����
 *
 *----------------------------------------------------------------------*/
extern void Room_Move(
    Game_play *game_play,
    Room      *this,
    pad_t     *pad,
    int	      now_old		/* 0:now 1:old */
);

/************************************************************************
 *
 *	�����ǡ��������ؤ����饹
 *
 ************************************************************************/

/*-----------------------------------------------------------------------
 *
 *	�����ǡ��������ؤ����饹 ���󥹥ȥ饯��
 *
 *----------------------------------------------------------------------*/
extern void Room_Info_ct(
    Game_play	*game_play,
    Room_Info   *this
);

/*-----------------------------------------------------------------------
 *
 *	�����ǡ��������ؤ����饹�������
 *
 *----------------------------------------------------------------------*/
extern size_t Room_Info_init(
    Game_play	*game_play,
    Room_Info   *this
);

/*-----------------------------------------------------------------------
 *
 *	�����ǡ��������ؤ���������
 *
 *----------------------------------------------------------------------*/
extern int Room_Info_exchange_start(
    Game_play *game_play,
    Room_Info *this,
    int	      read_room_ID
);

/*-----------------------------------------------------------------------
 *
 *	�����ǡ��������ؤ������å�
 *
 *----------------------------------------------------------------------*/
extern int Room_Info_exchange_check(
    Game_play *game_play,
    Room_Info *this
);

/*-----------------------------------------------------------------------
 *
 *	�������ǡ������
 *
 *----------------------------------------------------------------------*/
extern void Room_Info_old_room_clear(
    Game_play *game_play,
    Room_Info *this
);
/*
 * �ץ������ɽ��
 */
extern void
prerender_draw2(
    Gfx 	**glistpp,
    u16		*timg,		/* �ץ���������̥ƥ������� */
    u16		*tlut,		/* !NULL:�ѥ�åȥơ��֥� */
    u16 	width,		/* �ƥ������㲣�� 320 */
    u16 	height,		/* �ƥ�������⤵ 240 */
    u8		txlfmt,		/* G_IM_FMT_* */
    u8		txlsiz,		/* G_IM_SIZ_* */
    u16		tt,		/* G_TT_ */
    u16		pnum,		/* �ѥ�åȿ�0-256 */
    float	xpos,
    float	ypos
);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_room.h end ***/
