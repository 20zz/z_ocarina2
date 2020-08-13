/* $Id: z_file_choose_h.h,v 2.3 1999-01-07 17:15:36+09 soejima Exp $ */	
/* $Log: z_file_choose_h.h,v $
 * Revision 2.3  1999-01-07 17:15:36+09  soejima
 * �ǣ��ԣţף��ٻ���
 *
 * Revision 2.2  1999-01-07 13:29:09+09  soejima
 * �ǣ��ԣţף��ٻ���
 *
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.18  1998/07/04 07:06:16  soejima
 * *** empty log message ***
 *
 * Revision 1.17  1998-04-21 22:50:30+09  soejima
 * *** empty log message ***
 *
 * Revision 1.16  1998-04-15 21:47:48+09  soejima
 * *** empty log message ***
 *
 * Revision 1.15  1998-04-10 23:55:30+10  soejima
 * �ʲ���
 *
 * Revision 1.11  1998/01/30  12:27:38  soejima
 * Revision 1.8  1998/01/19  11:54:03  soejima
 * �����ȥ� �ݥ���
 * Revision 1.7  1998/01/16  12:26:57  soejima
 * ��˥塼 �ݥ��� �ѹ�
 * Revision 1.1  1997/05/29  07:52:54  soejima
 * Initial revision
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_FILE_CHOOSE_H_H
#define INCLUDE_Z_FILE_CHOOSE_H_H



/************************************************************************
 *
 *	����������ȥ�
 *
 ************************************************************************/
/* �ͣ��ɣΥݥ��� */
enum {
    File_choose_Title,		/* ���������ȥ�ɽ�� */
    File_choose_Select,		/* �����ᥤ�� ��˥塼 */
    File_choose_Decision,	/* ����������� */
    File_choose_Point
};


/* �����ȥ� �ݥ��� */
enum {
    Title_Fillin,		/* �����ƣɣ̣� �ե����ɥ��� */
    Title_Wait,			/* �����ף��ɣ� */
    Title_Effectin,		/* ���������ȥ�����ե����� �ե����ɥ��� */
    Title_Fadein,		/* ���������ȥ� �ե����ɥ��� */
    Title_Effectout,		/* �������ե����� �ե����ɥ����� */
    Title_Logoin,		/* ����"���������Σ��������" �ե����ɥ��� */
    Title_Timewait,		/* ���������Ԥ� */
    Title_Fillout,		/* �����ƣɣ̣� �ե����ɥ����� */
    Title_Goto,			/* �����ǣϣԣ������� */
    Title_Point
};


/* ��˥塼 �ݥ��� */
enum {
    Menu_Fadein,		/* �����ե����ɥ���ʡ����������*/
    Menu_Fadein1,		/* �����ե����ɥ��� */
    Menu_Select,		/* �����ե��������� */
    Menu_Copy_0,		/* �����ã����ʥ��˥���� �� ��ư�� */
    Menu_Copy_1,		/* ����        �ʤɤ�򥳥ԡ����ޤ�������*/
    Menu_Copy_2,		/* ����        �ʰ�ư���� */
    Menu_Copy_4,		/* ����        �ʥե����ɥ��󣱡� */
    Menu_Copy_5,		/* ����        �ʤɤ��˥��ԡ����ޤ�������*/
    Menu_Copy_6,		/* ����        �ʥե����ɥ����ȣ��� */
    Menu_Copy_7,		/* ����        �ʥ���󥻥룱�� */
    Menu_Copy_8,		/*������       �ʰ�ư���� */
    Menu_Copy_9,		/*������       �ʥե����ɥ��󣲡� */
    Menu_Copy_A,		/*������       �������˥��ԡ����ޤ�������*/
    Menu_Copy_B,		/*������       �ʥե����ɥ����ȣ��� */
    Menu_Copy_D,		/*������       �ʰ�ư���� */
    Menu_Copy_E,		/*������       �ʥե����ɥ��󣳡� */
    Menu_Copy_F,		/*������       �ʥ��ԡ�����λ���ޤ�����*/
    Menu_Copy_G,		/*������       �ʥ��ԡ�����λ���ޤ�����*/
    Menu_Copy_H,		/*������       �ʥ��ԡ�����λ���ޤ�����*/
    Menu_Copy_R,		/*������       �ʣңţԣգңΡ�*/
    Menu_Delt_0,		/*�������ģ��ʥ��˥���� �� ��ư�� */
    Menu_Delt_1,		/*������      �ʤɤ��ä��ޤ������� */
    Menu_Delt_2,		/*������      �ʰ�ư�� */
    Menu_Delt_3,		/*������      �ʥե����ɥ���� */
    Menu_Delt_4,		/*������      �������˾ä��ޤ������� */
    Menu_Delt_5,		/*������      �ʥե����ɥ����ȡ� */
    Menu_Delt_6,		/*������      �ʥ���󥻥�� */
    Menu_Delt_7,		/*������      �ʾõ�ޤ����� */
    Menu_Delt_8,		/*������      �ʾõ�ޤ����� */
    Menu_Delt_9,		/*������      �ʾõ�ޤ����� */
    Menu_Delt_R,		/*������      �ʣңţԣգңΡ� */
    Menu_kettei,		/*�������ե�������� */
    Menu_Go_Nameset,		/*�������ե��������򤫤�̾����Ͽ�� */
    Menu_Nameset,		/*������̾����Ͽ */
    Menu_Nameset_Fdin,		/*������̾����Ͽ�ե����ɥ��� */
    Menu_Go_Select,		/*������̾����Ͽ����ե���������� */
    Menu_Go_Option,		/*�������ե��������򤫤�̾����Ͽ�� */
    Menu_Option,		/*�������ϣУԣɣϣ� */
    Menu_Option_Fdin,		/*�������ϣУԣɣϣΥե����ɥ��� */
    Menu_Option_Select,		/*�������ϣУԣɣϣΤ���ե���������� */
    Menu_Next,			/*���������Υ�˥塼�� */
    Menu_Point
};


/* ������� �ݥ��� */
enum {
    Decision_Init,		/* ����������ꥤ�˥���� �� ��ư */
    Decision_Move,		/* �����������ե����ɥ��� */
    Decision_Fdin,		/* �����������ե����ɥ��� */
    Decision_Decision,		/* ����������� */
    Decision_Fdout,		/* �����������ե����ɥ����� */
    Decision_Back,		/* �����������Хå��� �꥿���� */
    Decision_GotoFdout,		/* �����ǣϣԣϣǣ��ͣ� �ե����ɥ����� */
    Decision_GotoGame,		/* �����ǣϣԣ� �ǣ��� */
    Decision_Point
};


/* ̾����Ͽ���إݥ��� */
enum {
    Hira_hira,			/* �Ҥ餬�� */
    Kata_kata,			/* �������� */
    Eisu_eisu,			/* �ѿ�     */
    Hira_kata,			/* �Ҥ餬�ʢ��������� */
    Kata_hira,			/* �������ʢ��Ҥ餬�� */
    Hira_eisu,			/* �Ҥ餬�ʢ��ѿ� */
    Eisu_hira,			/* �ѿ����Ҥ餬�� */
    Kata_eisu,			/* �������ʢ��ѿ� */
    Eisu_kata,			/* �ѿ����������� */
    Name_Point
};





#define FRAME_CT	8
#define FRAME_ALPHA	255
#define F_A_CT		FRAME_ALPHA/FRAME_CT
#define BASE_ALPHA	200
#define B_A_CT		BASE_ALPHA/FRAME_CT



/* TITLE+(��ĥ�̎ߎڎ��ġ�3)+((FILE�̎ߎڎ���+̾���̎ߎڎ���+���Ȏ���+64DD�̎ߎڎ���+���Ȏ���)��3)+((̾��+�����̎�+�ʎ���+�����Î�)��3)+(���ˎߎ�+�Î�)+���̎ߎ�����+��������+��ս� */
#define F_INDEX1	((1+(5*3)+(5*0))*4)
#define F_INDEX2	((1+(5*3)+(5*1))*4)
#define F_INDEX3	((1+(5*3)+(5*2))*4)
#define N0_INDEX	((1+(5*3)+(5*3)+((8+4+20+10)*0))*4)
#define N1_INDEX	((1+(5*3)+(5*3)+((8+4+20+10)*1))*4)
#define N2_INDEX	((1+(5*3)+(5*3)+((8+4+20+10)*2))*4)
#define CD_INDEX	((1+(5*3)+(5*3)+((8+4+20+10)*3))*4)
#define	SELECTVTX	((1+(5*3)+(5*3)+((8+4+20+10)*3)+(1+1)+1+1+1)*4)
#define SaveVtx		8*4
#define	LifeVtx		(8+4)*4
#define ItemVtx		(8+4+20)*4






#if defined(GATEWAY_VERSION)
extern unsigned char h_file_ab_1_gate_txt[];
extern unsigned char h_file_ab_2_gate_txt[];
extern unsigned char h_mes_file_gate_txt[];
extern unsigned short h_file_start_gate_txt[];
#endif	/* GATEWAY_VERSION */




#endif

/*** z_file_choose_h.h end ***/

