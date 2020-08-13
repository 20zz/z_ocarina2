/* $Id: z_message.h,v 2.1 1998/10/22 12:17:25 zelda Exp $ */	
/* $Log: z_message.h,v $
 * Revision 2.1  1998/10/22  12:17:25  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.73  1998/10/05 01:02:09  zelda
 * *** empty log message ***
 *
 * Revision 1.72  1998-10-03 23:07:09+09  hayakawa
 * ��å������ơ��֥�ݥ��󥿽����
 *
 * Revision 1.71  1998-10-03 23:00:27+09  soejima
 * *** empty log message ***
 *
 * Revision 1.70  1998-10-03 18:00:57+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.69  1998-09-19 18:29:13+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1996/11/07  00:10:43  soejima
 * Initial revision
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_MESSAGE_H_H
#define INCLUDE_Z_MESSAGE_H_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_actor_h.h"
#include "z_kanfont.h"


/************************************************************************
 *									*
 *	�ͣţӣӣ��ǣ�							*
 *				1996ǯ11��05��(������) 10��30ʬ00�� 	*
 ************************************************************************/
typedef struct zelda_message_struct {
    View	view;			/* ����� �ӥ塼 */

    Kanfont	kanfont;		/* ʸ�� ���饹 			*/

    char	*fukidashiSegment;	/* �᤭�Ф��������� */
    char	*textuteSegment;	/* �ƥ������㥻������ */


    NA_OCARINA_PLAY_INFO	*info;	/* ������� */
    
    
    dma_t	dma;			/* ����ž���ط� */
    OSMesgQueue	mq;			/*		  */
    OSMesg	m;			/*	  	  */


    unsigned short	msgno;			/* ����ɽ����å������Σϡ� */
    unsigned short	sel_msgno;		/* �����å������Σϡ� */
    unsigned char 	msg_disp_type;		/* ɽ���ԣ���� */
    unsigned char 	msg_disp_type0;		/* ɽ���᤭�Ф��ԣ���� */
    unsigned char 	msg_disp_type1;		/* ɽ�����֣ԣ���� */
    unsigned char  	*msg_data;		/* ��å����� ���ɥ쥹 */

    unsigned char	msg_mode;		/* ɽ�� */
    union {
	unsigned short	msg_buff[100];		/* ɽ�����ɤ߹��ߥХåե� */
	unsigned char	nes_msg_b[200];		/* ɽ�����ɤ߹��ߥХåե� */
    } msg_b;
    unsigned short  	rdp;			/* �Хåե��ңţ��ĥݥ��� */
    unsigned short  	ldp;			/* �Хåե��̣ϣ��ĥݥ��� */
    unsigned short  	end;			/* �Хåե��̣ϣ���-�ţΣĥݥ��� */
    unsigned short  	rd_end;			/* �Хåե��̣ϣ���-�ţΣĥݥ��� */
    unsigned short	nonono_fg;		/* ������ػߥե饰 */

    short	mxp, myp;		/* ��å�����ɽ������ */
    short	color_r;
    short	color_g;
    short	color_b;
    short	color_a;		/* ɽ��ʸ�����顼 */


    unsigned char	select;			/* ����⡼�� */
    unsigned char	sel_pnt;		/* ���� */

    unsigned char	item_dp;		/* �����ƥ�ɽ����ե饰 */


    char	wct;			/* ������ɥ� �����󥿡� */

    unsigned short	mspd;			// ��å�����ɽ�����ԡ���
    unsigned short	tspd;			//                       ����

    unsigned short	ocarina;		// ������ʱ����ֹ�
    unsigned short	ocarina_mode;		// ������ʥ⡼��
    unsigned short	ocarina_no;		// ������ʼ�ư�����ֹ�
    unsigned short	chk_ocarina_no;		// �����å�������ʱ����ֹ�
    unsigned short	sun_song;		// �����ۤβΡɥե饰

    unsigned short	mes_board;		/* ��å������ܡ��ɣΣϡ�*/
    unsigned char	mes_board_prim;		/*                 �Уңɣͥ��顼 */
    unsigned char	mes_board_shadow;	/*                 �ƥ��顼 */
    unsigned char	mes_board_shift;	/*                 ���ե��� */
    unsigned char	mes_board_anime;	/*                 ���˥᡼����� */
    

    short	fukidashi_no;		// �᤭�Ф��ݥ��󥿡ʣ����̾�
                                        //		     ����Ω�ƻ�
    					//                   �����ʥ졼�����
    					//		     �����������
    short	fc_r, fc_g, fc_b, fc_a;	// �᤭�Ф����顼�ʣңǣ£���
    short	fc_alpha;		/* �᤭�Ф������� */
    
    Actor	*talk_actor;		/* �������Σ�������ݥ��� */

    short	warp_flg;		/* �ף��ңе��ĥե饰�ʣ���ϣ�, ��������*/
    short	sunmoon_flg;		/* ���ۤβε��ĥե饰�ʣ���ϣ�, ��������*/

    unsigned char	frame_cfg;	/*  */
} Message;



/* ���󥹥ȥ饯�� */
extern void
message_ct( Game_play *game_play );

/* ��å������ģң��� */
extern void
message_draw( Game_play *game_play );

/* ��å������ͣϣ֣� */
extern void
message_move( Game_play *game_play );

/* ��å������ơ��֥�ݥ��󥿽���� */
extern void message_tbl_p_init(void);




#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_message_h.h end ***/
