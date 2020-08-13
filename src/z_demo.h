/*
 * $Id: z_demo.h,v 2.1 1998/10/22 11:45:49 zelda Exp $
 *
 * �ǥ�
 *
 * $Log: z_demo.h,v $
 * Revision 2.1  1998/10/22  11:45:49  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.16  1998/10/15 06:54:15  hayakawa
 * *** empty log message ***
 *
 * Revision 1.15  1998-10-15 14:32:50+09  hayakawa
 * set_showdata�ɲ�
 *
 * Revision 1.14  1998-09-24 00:08:14+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.13  1998-08-18 23:05:27+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.12  1998/03/18 03:05:43  ogawa
 * *** empty log message ***
 *
 * Revision 1.11  1998/02/24  09:23:54  sasaki
 * *** empty log message ***
 *
 * Revision 1.10  1998/02/19  09:19:32  sasaki
 * *** empty log message ***
 *
 * Revision 1.9  1997/12/22  08:26:15  sasaki
 * *** empty log message ***
 *
 * Revision 1.8  1997/12/17  01:39:22  sasaki
 * *** empty log message ***
 *
 * Revision 1.7  1997/11/07  11:58:59  sasaki
 * *** empty log message ***
 *
 * Revision 1.6  1997/11/06  12:14:38  sasaki
 * *** empty log message ***
 *
 * Revision 1.5  1997/10/23  09:51:04  sasaki
 * *** empty log message ***
 *
 * Revision 1.4  1997/10/22  14:45:46  iwawaki
 * *** empty log message ***
 *
 * Revision 1.3  1997/10/08  06:36:20  sasaki
 * *** empty log message ***
 *
 * Revision 1.2  1997/10/01  12:54:48  sasaki
 * *** empty log message ***
 *
 * Revision 1.1  1997/08/29  04:40:54  iwawaki
 * Initial revision
 * */

#ifndef INCLUDE_Z_DEMO_H
#define INCLUDE_Z_DEMO_H
#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/************************************************************************
 *
 *	�ǥ�
 *
 ************************************************************************/
#include "z_play_h.h"
#include "camdemo.h"


/************************************************************************
 *
 *	�ǥ� �ǡ�����¤��
 *
 ************************************************************************/
typedef struct {
    unsigned short	dousa;		/* ư��			*/
    unsigned short	start_flame;	/* �������ȤΥե졼��	*/
    unsigned short	goal_flame;	/* ������Υե졼��	*/

    unsigned short	x_angle;	/* �ؤγ���		*/
    unsigned short	y_angle;	/* �٤γ���		*/
    unsigned short	z_angle;	/* �ڤγ���		*/

    unsigned long	x_pos_start;	/* �ؤΥ������Ȱ���	*/
    unsigned long	y_pos_start;	/* �٤Υ������Ȱ���	*/
    unsigned long	z_pos_start;	/* �ڤΥ������Ȱ���	*/

    unsigned long	x_pos_goal;	/* �ؤΥ��������	*/
    unsigned long	y_pos_goal;	/* �٤Υ��������	*/
    unsigned long	z_pos_goal;	/* �ڤΥ��������	*/

    unsigned long	x_speed;	/* �ؤΥ��ԡ���		*/
    unsigned long	y_speed;	/* �٤Υ��ԡ���		*/
    unsigned long	z_speed;	/* �ڤΥ��ԡ���		*/
}DEMO_SEQ_TBL;

typedef struct {
    unsigned short	dousa;		/* ư��			*/
    unsigned short	start_flame;	/* �������ȤΥե졼��	*/
    unsigned short	goal_flame;	/* ������Υե졼��	*/
}CAMERA_DEMO_TBL;

typedef struct {
    unsigned short	dousa;		/* ư��			*/
    unsigned short	start_flame;	/* �������ȤΥե졼��	*/
    unsigned short	goal_flame;	/* ������Υե졼��	*/
}DEMO_KANKYO_TBL;

typedef struct {
    unsigned short	dousa;		/* ư��				*/
    unsigned short	start_flame;	/* �������ȤΥե졼��		*/
    unsigned short	goal_flame;	/* ������Υե졼��		*/
    unsigned short	code;		/* ������			*/
    unsigned short	mes_no1;	/* �����å������ʾ�¦��	*/
    unsigned short	mes_no2;	/* ������			*/
}DEMO_MESSAGE_TBL;

typedef struct {
    unsigned short	dousa;		/* ư��				*/
    unsigned short	start_flame;	/* �������ȤΥե졼��		*/
    unsigned short	goal_flame;	/* ������Υե졼��		*/
    unsigned char	data01;		/*				*/
    unsigned char	data02;		/*				*/
    unsigned char	data03;		/* 				*/
    unsigned char	data04;		/* 				*/
    unsigned char	data05;		/* 				*/
    unsigned char	data06;		/* 				*/
}DEMO_INPUT_TBL;

/************************************************************************
 *
 *	�ǥ⥯�饹
 *
 ************************************************************************/
enum {
    DEMO_PLAY_MODE_NON,
    DEMO_PLAY_MODE_START,
    DEMO_PLAY_MODE_PROC,
    DEMO_PLAY_MODE_END,
    DEMO_PLAY_MODE_WAIT
};

#define NPCDEMPMAX	10

typedef struct {
    unsigned char	num;
    char		*data;

    unsigned char	mode;
    float		counter;
    unsigned short	flamecnt;
    unsigned short	demo_no;
    int			camera_ID;
    unsigned short	start_flame_bak;
    unsigned char	lookat_sw;		/* ���ꤷ�����ʡ��ե饰	 �ߤƤ����	*/
    unsigned char	camera_sw;		/*		   	 ����		*/
    SplinedatZ		*lookat_pos;		/* ���ץ饤�󥫥��	 �ߤƤ����	*/
    SplinedatZ		*camera_pos;		/*		   	 ����		*/

    DEMO_SEQ_TBL	*linkdemopnt;		/* �����	 �ǥ�ǡ����ݥ���	*/
    DEMO_SEQ_TBL	*npcdemopnt[NPCDEMPMAX];/* �ǥ⥭��飰�ѥǥ�ǡ����ݥ���	*/
} Demo_play;

/*-----------------------------------------------------------------------
 *
 *	�ǥ⥯�饹 ���󥹥ȥ饯��
 *
 *----------------------------------------------------------------------*/
extern void Demo_play_ct(Game_play *game_play, Demo_play *this);

/*-----------------------------------------------------------------------
 *
 *	�ǥⳫ�ϥ��å�
 *
 *----------------------------------------------------------------------*/
extern void Demo_play_start(Game_play *game_play, Demo_play *this);

/*-----------------------------------------------------------------------
 *
 *	�ǥ⽪λ���å�
 *
 *----------------------------------------------------------------------*/
extern void Demo_play_end(Game_play *game_play, Demo_play *this);

/*-----------------------------------------------------------------------
 *
 *	�ǥ����
 *
 *----------------------------------------------------------------------*/
extern void Demo_play_move(Game_play *game_play, Demo_play *this);
extern void Tool_Demo_play_move(Game_play *game_play, Demo_play *this);

/*
 * �ǥ�ǡ����ݥ��󥿥��å�
 */
extern void set_showdata(Game_play *game_play, char *romdata);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_demo.h ***/



