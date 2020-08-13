/* $Id: z_parameter.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $ */	
/* $Log: z_parameter.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.80  1998/10/10 13:56:30  soejima
 * *** empty log message ***
 *
 * Revision 1.79  1998-10-09 16:37:39+09  soejima
 * *** empty log message ***
 *
 * Revision 1.78  1998-10-08 23:08:35+09  soejima
 * *** empty log message ***
 *
 * Revision 1.77  1998-09-24 21:36:18+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1996/10/08  12:36:08  soejima
 * Initial revision
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_PARAMETER_H
#define INCLUDE_Z_PARAMETER_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif





/************************************************************************
 *									*
 *	��������� �ѥ�᡼����						*
 *				1996ǯ10�� 8��(������) 17��00ʬ00�� JST *
 *									*
 ************************************************************************/
typedef struct zelda_parameter_struct {
    View	view;			/* ����� �ӥ塼 */
    
    Vtx_t	*parameter_frame_vtx;
    Vtx_t	*heartVtx;		/* �ϡ��� */

    char	*parameterSegment;	/* ����У��ң��ͣţԣţҥ������� */
    char	*do_actionSegment;	/* �ģϥ�������󥻥����� */
    char	*icon_itemSegment;	/* �������󥢥��ƥॻ������ */
    char	*mapSegment;		/* �ͣ��Х������� */
    char	map_palete[16*2];	/* �ͣ��Хѥ�å� */

    dma_t	dma;			/* ����ž���ط� */
    dma_t	dma1;			/* ����ž���ط� */
    dma_t	dma2;			/* ����ž���ط� */
    OSMesgQueue	mq;			/*		  */
    OSMesg	m;			/*	  	  */

    irect	vw;			/* �������͡�Top,Bottom,Left,Right) */

    short	do_action_flg;		/* �ģϥ�������� ���إե饰 */
    unsigned short	do_action;		/* �ģϥ�������� �ݥ��� */
    unsigned short	do_action_old;		/* �ģϥ�������� �ݥ��󥿣ϣ̣� */
    float	do_action_rotate;	/* �ģϥ�������� ��ž������ */
    short	navi_flag;		/* �ʥ����ե饰 */
    short	sp_action_flag;		/* ���̡ʣ¡˥�������� ���إե饰 */
    short	sp_action;		/* ���̡ʣ¡˥�������� �ݥ��� */


/*�������������� ��Ȫ���� ��������������*/
    short	dokidoki_meter;		/*  */
    short	now_mode;		/*  */
    short	dokidoki_prim[3];	/* �ɥ��ɥ��Уңɣͥ��顼 */
    short	dokidoki_env[3];	/* �ɥ��ɥ��ţΣ֥��顼 */
    short	doki_prim_r[2];		/* �ɥ��ɥ��Уңɣ͡��� */
    short	doki_prim_g[2];		/* �ɥ��ɥ��Уңɣ͡��� */
    short	doki_prim_b[2];		/* �ɥ��ɥ��Уңɣ͡��� */
    short	doki_env_r[2];		/* �ɥ��ɥ��ţΣ֨��� */
    short	doki_env_g[2];		/* �ɥ��ɥ��ţΣ֨��� */
    short	doki_env_b[2];		/* �ɥ��ɥ��ţΣ֨��� */
    short	dokidoki_max;		/*  */
    short	active_heart_timer;	/*  */
    short	dokidoki_wait;		/*  */
    short	dokidoki_flag;		/*  */
/*�������������� ��Ȫ���� ��������������*/

    short	magic_mp;		/*             ������ˡ�� */
    short	magic_frame;		/*             �����ե졼�� */

    short	rpc[4];			/* ��ԡ��� */

    unsigned char	lash_ct;		/* �ܥ����� */

    unsigned short	yabusame_score;		/* ήŭ������ */
    unsigned short	yabusame_arrow;		/* ήŭ�����ܿ� */
    unsigned short	yabu_mode;		/* ήŭ���������� */
    unsigned short	yabu_score;		/* ήŭ���������� */

    unsigned short	fill_alpha;		/* �ƣ���ң��������� ��������� */
    unsigned short	a_alpha;		/* ���ܥ��� ��������� */
    unsigned short	b_alpha;		/* �¥ܥ��� ��������� */
    unsigned short	c_alpha;		/* �åܥ��� ��������͡ʺ���*/
    unsigned short	c_alpha1;		/* �åܥ��� ��������͡ʲ���*/
    unsigned short	c_alpha2;		/* �åܥ��� ��������͡ʱ���*/
    unsigned short	heart_alpha;		/* �ϡ��� ��������� */
    unsigned short	meter_alpha;		/* �᡼���� ��������� */
    unsigned short	map_alpha;		/* �ͣ��� ��������� */
    short	start_alpha;		/* �ӣԣ��ң� ��������� */


    short	spot_map_no;		/* �ӣУϣԣͣ��� �Σ�. */
    short	dungeon_map_no;		/* ���󥸥��ͣ��� �Σ�. */
    short	room_no;		/* ���������Σ*/
    short	map_palete_no;		/* ���������У��̣ţԣ� �Σ*/

    unsigned char	hold_rod;		/* ��ꤶ�����äƤ���ե饰 */

    unsigned char	marathon_fg;	/* �ޥ饽��ե饰 */


    /* �ܥ������楳���� */
    unchar	h_gage;		/* �ϡ���,��ˡ������,��ԡ�,���� */
    unchar	b_button;	/* �¥ܥ��� */
    unchar	a_button;	/* ���ܥ��� */
    unchar	c_bottle;	/* �� */
    unchar	c_warasibe;	/* ��餷�� */
    unchar	c_hook;		/* �եå�����å� */
    unchar	c_ocarina;	/* ������� */
    unchar	c_warp;		/* ������ʡʥ�ס�*/
    unchar	c_sunmoon;	/* ������ʡ����ۤβΡ�*/
    unchar	m_wind;		/* ��ˡ������*/
    unchar	m_magic;	/* ��ˡ�ʱꡦ����*/
    unchar	another;	/* ����¾�åܥ��� */
    /*
     *		0 = ɽ�� (�Ȥ���)
     *		1 = ȾƩ��ɽ�� (�Ȥ��ʤ�)
     *		2 = ��ɽ�� (�Ȥ��ʤ�)
     *		3 = �Ȥ��뤬����ץ��ǥ�������դ��ʤ�
     *
     *    1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
     *	 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
     *	 |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     *   +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
     *			   ��  ��  ��  ��  ��  ��  ��  ��  ��  ��  ��  ��
     *			   ��  ��  ��      ��  ��  ��  ��  ��  ˡ  ˡ  ��
     *			   ��  ��  ��      ��  ��  ��  ��  ��  ��  ��  ¾
     *			   ��  ��  ��      ��  ��  ��  ��  ��      ��
     *			   ��                  ��  ��  ��  ��      ��
     *			   ˡ                  ��  ��  ��  �� 
     *			   ��                  ��  ��  ��  �� 
     *			   ��                      ��      ��
     *			   ��                  
     *			   ��                  
     *			   ��             
     *			   ��             
     *			   ��             
     */

} Parameter;



/* ���󥹥ȥ饯�� */
extern void
parameter_ct( Game_play *game_play );

/* �ǥ��ȥ饯�� */
extern void
parameter_dt( Game_play *game_play );

/* �ѥ�᡼�����ģң��� */
extern void
parameter_draw( Game_play *game_play );

/* �ѥ�᡼�����ͣϣ֣� */
extern void
parameter_move( Game_play *game_play );


#define ON_HOLD_ROD( game_play )	((game_play)->parameter.hold_rod = 1)
#define OFF_HOLD_ROD( game_play )	((game_play)->parameter.hold_rod = 0)
#define CHK_HOLD_ROD( game_play )	((game_play)->parameter.hold_rod)

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_parameter.h end ***/
