/* $Id: z_message_h.h,v 2.2 1998-10-27 21:26:19+09 soejima Exp $
 * $Log: z_message_h.h,v $
 * Revision 2.2  1998-10-27 21:26:19+09  soejima
 * �У��̻���
 *
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.85  1998/10/07 04:23:41  soejima
 * *** empty log message ***
 *
 * Revision 1.84  1998-10-03 23:03:45+09  soejima
 * *** empty log message ***
 *
 * Revision 1.83  1998-10-01 22:43:12+09  soejima
 * *** empty log message ***
 *
 * Revision 1.82  1998-09-19 22:02:41+09  soejima
 * *** empty log message ***
 *
 * Revision 1.81  1998-09-16 17:00:28+09  soejima
 * *** empty log message ***
 *
 * Revision 1.80  1998-09-15 23:05:20+09  soejima
 * *** empty log message ***
 *
 * Revision 1.79  1998-09-09 22:58:10+09  soejima
 * *** empty log message ***
 *
 * Revision 1.78  1998-09-07 23:04:30+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1996/10/02  06:17:41  soejima
 * Initial revision
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_MESSAGE_H
#define INCLUDE_Z_MESSAGE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif


/************************************************************************
 *									*
 *	�ͣţӣӣ��ǣ�							*
 *				1996ǯ11��05��(������) 10��30ʬ00�� JST *
 ************************************************************************/
/* ��å����� ���åȡʴ��ܡ� */
extern void
message_set( Game_play *game_play, unshort message_no, Actor *talk_actor );
/* ��å����� ���åȡ��ɲô��ܡ� */
extern void
message_set2( Game_play *game_play, unshort message_no );

/* ��å����� ��λ�����å� */
extern char
message_check( Message *this );

/* ��å������ạ̃ϣӣ�	*/
extern void
message_close( Game_play *game_play );

/* �ˣţ����ϥ����å� */
extern char
pad_on_check( Game_play *game_play );

/* �ؾ��Σţأ� */
extern void
ocarina_round_next( Game_play *game_play );

/* ���ǥ��ԣ��£̣� */
extern short ocarina_number[];



typedef struct {
    unshort 	msg_num;			/* ��å������Σ*/
    unchar 	msg_tp;				/* ɽ���ԣ���� */
    unshort 	*msg_add;			/* ��å����� ���ɥ쥹 */
} MSG_T;
typedef struct {
    unshort 	msg_num;			/* ��å������Σ*/
    unchar 	msg_tp;				/* ɽ���ԣ���� */
    unchar 	*msg_add;			/* ��å����� ���ɥ쥹 */
} MSG_NT;
typedef struct {
    unchar 	*msg_add;			/* ��å����� ���ɥ쥹 */
} MSG_PT;


/* ��å����� �ң��������� */
enum {
    Mes_Null,		/*  ������å������Σ���� */
    Mes_Next,		/*  �������Υ�å�����ͭ�� */
    Mes_End,		/*  ������å�������λ */
    Mes_Draw,		/*  ������å����������� */
    Mes_Select,		/*  �������� */
    Mes_Enemy,		/*  ����Ũ¦���� */
    Mes_DpEnd,		/*  ������å��������Ͻ�λ */
    Mes_Oca00,		/*  ����������ʼ�ư���ս�λ */
    Mes_Oca10,		/*  ����������ʱ������� */
    Mes_Oca20,		/*  ����������ʱ��ո�� */
    Mes_Keywait,	/*�����������Ԥ� */
    Mes_Point
};




/* ������ʱ��� */
extern void
ocarina_set( Game_play *game_play, unshort ocarina_no );
extern void
ocarina_set_111( Game_play *game_play, unshort ocarina_no );
/* ������ʾ��ּ��� */
#define	OCARINA_MODE( game_play )	(game_play)->message.ocarina_mode
enum {
    Oca_Null,		/* �������̵�� */
    Oca_Play,		/* ������ʱ����� */
    Oca_Warp,		/* ������ʣף��ң����� */
    Oca_Hit,		/* ����������� */
    Oca_Stop,		/* ���������� */
    Oca_Salia,		/* �Ȥꤢ�����ϣˡԥ��ꥢ�βΡ�*/
    Oca_Epona,		/* �Ȥꤢ�����ϣˡԥ��ݥʤβΡ�*/
    Oca_Zelda,		/* �Ȥꤢ�����ϣˡԥ�����λҼ�Ρ�*/
    Oca_Sun,		/* �Ȥꤢ�����ϣˡ����ۤβΡ�*/
    Oca_Time,		/* �Ȥꤢ�����ϣˡԻ��βΡ�*/
    Oca_Storm,		/* �Ȥꤢ�����ϣˡ���βΡ�*/
    Oca_Kakasi,		/* �Ȥꤢ�����ϣˡ԰ƻ��ҤβΡ�*/
    Oca_Round,		/* �ؾ����� */
    Oca_Scarecrow,	/* �ƻ��ңϣ� */
    Oca_Flog,		/* ������ϣ� */
    Oca_PlayE,		/* ������λ */
    Oca_Pt
};
/* ������ʱ����ֹ� */
#define OCARINA_BASE	0x86E
enum {
    Ocarina_0,		/* 00:���ܥ�����ʱ��աʣף��ңС�*/
    Ocarina_Free,	/* 01:���ܥ�����ʱ��աʣƣңţű��ա�: ������ʤ� */
    Ocarina_Wind,	/* 02:���Υ�̥��å� */
    Ocarina_Flame,	/* 03:��Υܥ�� */
    Ocarina_Water,	/* 04:��Υ���ʡ��� */
    Ocarina_Soul,	/* 05:���Υ쥯������ */
    Ocarina_Darkness,	/* 06:�ǤΥΥ������� */
    Ocarina_Light,	/* 07:���Υץ��塼�� */
    Ocarina_Salia,	/* 08:���ꥢ�β� */
    Ocarina_Epona,	/* 09:���ݥʤβ� */
    Ocarina_Zelda,	/* 10:������λҼ�� */
    Ocarina_Sun,	/* 11:���ۤβ� */
    Ocarina_Time,	/* 12:���β� */
    Ocarina_Storm,	/* 13:��β� */
    Ocarina_Kakasi,	/* 14:�ƻ��Ҥβ� */
    Ocarina_C_Wind,	/* 15:���Υ�̥��åȱ��ճؽ� */
    Ocarina_C_Flame,	/* 16:��Υܥ����ճؽ� */
    Ocarina_C_Water,	/* 17:��Υ���ʡ��Ǳ��ճؽ� */
    Ocarina_C_Soul,	/* 17:���Υ쥯��������ճؽ� */
    Ocarina_C_Darkness,	/* 18:�ǤΥΥ���������ճؽ� */
    Ocarina_C_Light,	/* 20:���Υץ��塼�ɱ��ճؽ� */
    Ocarina_C_Salia,	/* 21:���ꥢ�βα��ճؽ� */
    Ocarina_C_Epona,	/* 22:���ݥʤβα��ճؽ� */
    Ocarina_C_Zelda,	/* 23:������λҼ�α��ճؽ� */
    Ocarina_C_Sun,	/* 24:���ۤβα��ճؽ� */
    Ocarina_C_Time,	/* 25:���βα��ճؽ� */
    Ocarina_C_Storm,	/* 26:��βα��ճؽ� */
    Ocarina_C_Kakasi,	/* 27:�ƻ��Ҥβα��ճؽ� */
    Ocarina_PC_Wind,	/* 28:���Υ�̥��åȱ��ե����å� */
    Ocarina_PC_Flame,	/* 29:��Υܥ����ե����å� */
    Ocarina_PC_Water,	/* 30:��Υ���ʡ��Ǳ��ե����å� */
    Ocarina_PC_Soul,	/* 31:���Υ쥯��������ե����å� */
    Ocarina_PC_Darkness,/* 32:�ǤΥΥ���������ե����å� */
    Ocarina_PC_Light,	/* 33:���Υץ��塼�ɱ��ե����å� */
    Ocarina_PC_Salia,	/* 34:���ꥢ�βα��ե����å� */
    Ocarina_PC_Epona,	/* 35:���ݥʤβα��ե����å� */
    Ocarina_PC_Zelda,	/* 36:������λҼ�α��ե����å� */
    Ocarina_PC_Sun,	/* 37:���ۤβα��ե����å� */
    Ocarina_PC_Time,	/* 38:���βα��ե����å� */
    Ocarina_PC_Storm,	/* 39:��βα��ե����å� */
    Ocarina_PC_Kakasi,	/* 40:�ƻ��Ҥβα��ե����å� */
    Ocarina_FreeFree,	/* 41:���ܥ�����ʱ��աʣƣңţű��ա�: �����䤢�� */
    Ocarina_Record,	/* 42:Ͽ�� */
    Ocarina_PlayBack,	/* 43:Ͽ������ */
    Ocarina_Scarecrow,	/* 44:����Ͽ�� */
    Ocarina_ScarecrowP,	/* 45:����Ͽ������ */
    Ocarina_Round,	/* 46:�ؾ� */
    Ocarina_Chorus,	/* 47:������ι羧 */
    Ocarina_Flog,	/* 48:������ : ������ʤ� */
    Ocarina_FrogFrog,	/* 49:������ : �����䤢�� */
    Ocarina_No
};





/*=======================================================================
  =	������彸							=
  =======================================================================*/
#define		MJSZ		16		/* ʸ�������� */
#define		MXSZ		11		/* ʸ���� �� */
#define		MYSZ		16		/* ʸ���� �⤵ */
#define		MSPC		 6		/* ���ڡ����� */
#define		ITEMSIZE	32		/* �����ƥ�إ����� */
#define		BALSZ		((128*64)/2)	/* �᤭�Ф������� */

enum {
    M_NULL,		// 
    M_MOVE,		// ������ư
    M_OPEN,		// �᤭�Ф��ϣУţ�
    M_WAIT,		// �ף���
    M_READ,		// �Хåե��ɤ߹���
    M_REST,		// ������
    M_DISPLAY,		// ����
    M_PAUSE,		// �У��գӣ�
    M_TIMER,		// �����ޡ�����
    M_OCARINA0,		// ������ʡʽ������
    M_OCARINA10_S,	// ������ʡʽ������
    M_OCARINA20_S,	// ������ʡʽ������
    M_OCARINA1,		// ������ʡ����ϡ�
    M_OCARINA2,		// ������ʡ������
    M_OCARINA3,		// ������ʡ��������
    M_OCARINA4,		// ������ʡʥ���󥻥��
    M_OCARINA5,		// ������ʡʲ������
    M_OCARINA6,		// ������ʡ��������ϱ��ա�
    M_OCARINA7,		// ������ʡʡ�
    M_OCARINA8,		// ������ʡʡ�
    M_OCARINA9,		// ������ʡʡ�
    M_OCARINAA,		// ������ʡʡ�
    M_OCARINAB,		// ������ʡʡ�
    M_OCARINAC,		// ������ʡʡ�
    M_OCARINA10,	// ������ʡ����ϱ��գף�����
    M_OCARINA11,	// ������ʡ����ϱ��ա�
    M_OCARINA12,	// ������ʡ����ϱ��ս�λ��
    M_OCARINA20,	// ������ʡʱ��ե����å���
    M_OCARINA21,	// ������ʡʱ��ե����å��������
    M_OCARINA22,	// ������ʡʱ��ե����å�������
    M_OCARINA23,	// ������ʡʱ��ե����å����������
    M_OCARINA24,	// ������ʡʱ��ե����å������ף�����
    M_OCARINA_FREE,	// ������ʡʣƣңţű��ե����å���
    M_OCARINA40,	// ������ʡ�Ͽ�����ϡ�
    M_OCARINA41,	// ������ʡ�Ͽ�����
    M_OCARINA42,	// ������ʡ�Ͽ��������
    M_OCARINA50,	// ������ʡʣ���Ͽ�����ϡ�
    M_OCARINA51,	// ������ʡʣ���Ͽ�����
    M_OCARINA52,	// ������ʡʣ���Ͽ���ְ㤤��
    M_OCARINA53,	// ������ʡʣ���Ͽ���ϣˡ���
    M_OCARINA54,	// ������ʡʣ���Ͽ��������
    M_OCARINA60,	// ������ʡ��ؾ����ϡ�
    M_OCARINA61,	// ������ʡ��ؾ���init��
    M_OCARINA62,	// ������ʡ��ؾ���play��
    M_OCARINA63,	// ������ʡ��ؾ���init��
    M_OCARINA64,	// ������ʡ��ؾ���play��
    M_OCARINA65,	// ������ʡ��ؾ��ץ쥤�䡼play��
    M_OCARINA66,	// ������ʡ��ؾ��ץ쥤�䡼wait��
    M_OCARINA67,	// ������ʡ��ؾ��ץ쥤�䡼��λ�����å���
    M_OCARINA80,	// ������ʡʥ�����ι羧���ϡ�
    M_OCARINA81,	// ������ʡʥ�����ι羧���
    M_OCARINA82,	// ������ʡʥ�����ι羧�����å���
    M_NEXT,		// ���ڡ���
    M_END,		// ��λ�����å�
    M_CLOSE,		// �᤭�Ф��ạ̃ϣӣ�
    M_KOMATSU,		// �������ڥ����
    M_POINT
};



#define __2_SELECT	0x10
#define __3_SELECT	0x20
#define __Next_Message	0x30
#define __DISPSTOP	0x40
#define __ENEMY		0x50
#define __TIMER		0x60


#define	SceneID(no)	(game_play->scene_data_ID == no)



#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_message.h end ***/
