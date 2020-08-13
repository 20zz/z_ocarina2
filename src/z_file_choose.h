/* $Id: z_file_choose.h,v 2.3 1998-11-02 17:59:13+09 soejima Exp $ */	
/* $Log: z_file_choose.h,v $
 * Revision 2.3  1998-11-02 17:59:13+09  soejima
 * �У���
 *
 * Revision 2.2  1998-10-29 21:07:04+09  soejima
 * �У���
 *
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.41  1998/09/23 11:14:56  soejima
 * *** empty log message ***
 *
 * Revision 1.40  1998-09-22 22:24:15+09  soejima
 * *** empty log message ***
 *
 * Revision 1.39  1998-09-21 15:35:02+09  soejima
 * *** empty log message ***
 *
 * Revision 1.38  1998-09-19 18:27:26+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/05/29  07:53:46  soejima
 * Initial revision
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_FILE_CHOOSE_H
#define INCLUDE_Z_FILE_CHOOSE_H


#include "z_kankyo.h"
#include "z_sram.h"
#include "z_vr_box.h"


/************************************************************************
 *
 *	�ƣɣ̣� �ãȣϣϣӣ�
 *
 ************************************************************************/
#define Buf_Ct   	(128/8)

#if defined(PAL_VERSION)
/* �У������� */
typedef struct {
    Game	g;		/* ���쥯�饹 */

    Vtx_t	*frameVtx;	/* �ե졼�� */


    char	*staticSegment;		/* �����ƥ��å��������ȥݥ��� */
    char	*parameterSegment;	/* ����Х󥯥������ȥݥ���   */
    char	*titleSegment;		/* �У����ɲá������ȥ�Х󥯥������ȥݥ���   */


    View	view;			/* �ӥ����饹 */
    Sram	sram;			/* �ӣң��� ���饹 */
    Vr_box	vr_box;			/* �֣ҡ��£ϣ� ���饹 */
    Message	message;		/* ��å����� ���饹 */
    Kanfont	kanfont;		/* ʸ�� ���饹 */
    Kankyo	kankyo;			/* �Ķ� ���饹 */


    Vtx_t	*titleVtx;		/* �����ȥ�֣��� */
    Vtx_t	*selectVtx;		/* �ե�����������̣֣��� */
    Vtx_t	*characterVtx;		/* ̾����Ͽ��ʸ���֣����ʤҤ餬�ʡ��������ʡ��ѿ���*/
    Vtx_t	*cursorVtx;		/* ̾���֣�����̾���ץ졼�ȡ�̾�������������*/
    
    unchar	flag_64dd;	/* �����ģĥ�ǥ����ե饰 */

    unshort	save[3];	/* �ӣ��֣Ų�� */
    unchar	name[3][8];	/* ��Ͽ̾�� */
    unshort	life[3];	/* ����̣���� */
    long	item[3];	/* ���᤿������/���� */
    short	f_64dd[3];	/* �����ģĥե饰 */
    signed char heart_status[3]; /* �ϡ������� */
    unshort	now_life[3];	/* �У����ɲá����ߣ̣���� */


    short	no;		/* ����ν������
				 *�ʣ�����:�ե�����, �������ԡ�, �����ä���
				 */
    short	yes_no;		/* �Ϥ�/������ */

    short	mode;		/* �ͣ��ɣΥݥ���
				 * ���������ȥ�ɽ��
				 * �����ᥤ�� ��˥塼
				 * �����������
				 */

    short	menu_pos;	/* ��˥塼 �ݥ���
				 * �����ե���������
				 * �����ã����ʤɤ�򥳥ԡ����ޤ�������
				 * ����        �ʤɤ��˥��ԡ����ޤ�������
				 * ����        �������˥��ԡ����ޤ�������
				 * ����        �ʥ��ԡ�����λ���ޤ�����
				 * �����ģ��ʤɤ��ä��ޤ�������
				 * ����      �������˾ä��ޤ�������
				 * ����      �ʾõ�ޤ�����
				 * ����̾����Ͽ
				 * ����̾����Ͽ��
				 *�������ե����������
				 */

    short	menu_pos_old;	/* ���ߤΥ�˥塼 �ݥ��� */
    short	menu_pos_next;	/* ���Υ�˥塼 �ݥ��� */
    

    short	decision_mode;	/* �������⡼�� */
    short	decision_no;	/* �������ݥ��� */
    short	decision_no1;	/* �������ݥ��� */
    short	decision_ypd[3]; /* ������� �٣Уϣ� */

    short	cpdl_mct;	/* ���ԡ�/�ä� ��ư������ */
    short	cpdl_yp[6];	/* ���ԡ�/�ä� �٣Уϣ� */
    short	copy_no;	/* ���ԡ���ݥ��� */

    short	caution_no;	/* ��ս񤭣Σ�. */
    short	caution_pt;	/* ��ս񤭥ݥ��� */

    short	title_no0;		/* ɽ�̥����ȥ�Σ�. */
    short	title_no1;		/* ΢�̥����ȥ�Σ�. */
    short	frame_rgb[3];		/* �����̣ңǣ� */

    short	frame_title_alpha[2];	/* �����̥����ȥ륢��ե��� */
    short	base_alpha;		/* ����ե졼�ॢ��ե��� */
    short	file_alpha[3];		/* ����ե�����Σ����ե��� */
    short	plate_alpha[3];		/* ����ե�����̾���ץ졼�ȥ���ե��� */
    short	name_alpha[3];		/* ����ե�����̾������ե��� */
    short	connect_alpha[3];	/* ����ե����륳�ͥ���������ե��� */
    short	decision_alpha[3];	/* �������ѥͥ륢��ե��� */
    short	panel_alpha[4];		/*�ʥ��ԡ�/�ä��ˡʤϤ�/����˥ѥͥ륢��ե��� */
    short	option_alpha;		/*�ʥ��ץ����˥ѥͥ륢��ե��� */
    short	name_plate_alpha;	/* ̾����Ͽ�ѥͥ륢��ե��� */
    short	ab_alpha;		/* ���¥ܥ��������ѥͥ륢��ե��� */
    short	caution_alpha;		/* ��ս񤭥ѥͥ륢��ե��� */

    short	cursor_rgba[4];		/* ��������ңǣ£� */
    short	cursor_pt;		/* ��������ݥ��� */
    short	cursor_ct;		/* �������륫���� */
    short	panel_pt[2];		/* �ѥͥ�ݥ��� */

    short	key_wait_x, key_wait_y;
    short	old_key_x, old_key_y;
    short	wkey_x, wkey_y;
    short	shift_xp;
    short	scroll_xp;


    /* ̾����Ͽ */
    float	goto_angle;		/* ������̡�̾����Ͽ���� ���Σǣ̣��� */
    short	name_contents;		/* ̾����Ͽ�ܼ� */
    short	name_page;		/* ̾����Ͽ���ءʣ����Ҥ餬��,
					                 ������������,
					                 �����ѿ�,
					                 �����Ҥ餬�ʢ���������,
					                 �����������ʢ��Ҥ餬��,
					                 �����Ҥ餬�ʢ��ѿ�,
					                 �����ѿ����Ҥ餬��,
					                 �����������ʢ��ѿ�,
					                 �����ѿ����������ʡ� */
    short	page_alpha;		/* ̾����Ͽ�ڡ������顼 */
    short	mjp;
    short	name_xpos;		/* ̾����Ͽʸ���ݥ��󥿡� */
    short	name_ypos;		/* ̾����Ͽʸ���ݥ��󥿡� */
    short	name_index;		/* ̾����Ͽʸ������ǥå��� */

    short	sub_menu_alpha[5];
} Game_file_choose;
#else
/* �Σԣӣ����� */
typedef struct {
    Game	g;		/* ���쥯�饹 */

    Vtx_t	*frameVtx;	/* �ե졼�� */


    char	*staticSegment;		/* �����ƥ��å��������ȥݥ��� */
    char	*parameterSegment;	/* ����Х󥯥������ȥݥ���   */


    View	view;			/* �ӥ����饹 */
    Sram	sram;			/* �ӣң��� ���饹 */
    Vr_box	vr_box;			/* �֣ҡ��£ϣ� ���饹 */
    Message	message;		/* ��å����� ���饹 */
    Kanfont	kanfont;		/* ʸ�� ���饹 */
    Kankyo	kankyo;			/* �Ķ� ���饹 */


    Vtx_t	*titleVtx;		/* �����ȥ�֣��� */
    Vtx_t	*selectVtx;		/* �ե�����������̣֣��� */
    Vtx_t	*characterVtx;		/* ̾����Ͽ��ʸ���֣����ʤҤ餬�ʡ��������ʡ��ѿ���*/
    Vtx_t	*cursorVtx;		/* ̾���֣�����̾���ץ졼�ȡ�̾�������������*/
    
    unchar	flag_64dd;	/* �����ģĥ�ǥ����ե饰 */

    unshort	save[3];	/* �ӣ��֣Ų�� */
    unchar	name[3][8];	/* ��Ͽ̾�� */
    unshort	life[3];	/* ����̣���� */
    long	item[3];	/* ���᤿������/���� */
    short	f_64dd[3];	/* �����ģĥե饰 */
    signed char heart_status[3]; /* �ϡ������� */


    short	no;		/* ����ν������
				 *�ʣ�����:�ե�����, �������ԡ�, �����ä���
				 */
    short	yes_no;		/* �Ϥ�/������ */

    short	mode;		/* �ͣ��ɣΥݥ���
				 * ���������ȥ�ɽ��
				 * �����ᥤ�� ��˥塼
				 * �����������
				 */

    short	menu_pos;	/* ��˥塼 �ݥ���
				 * �����ե���������
				 * �����ã����ʤɤ�򥳥ԡ����ޤ�������
				 * ����        �ʤɤ��˥��ԡ����ޤ�������
				 * ����        �������˥��ԡ����ޤ�������
				 * ����        �ʥ��ԡ�����λ���ޤ�����
				 * �����ģ��ʤɤ��ä��ޤ�������
				 * ����      �������˾ä��ޤ�������
				 * ����      �ʾõ�ޤ�����
				 * ����̾����Ͽ
				 * ����̾����Ͽ��
				 *�������ե����������
				 */

    short	menu_pos_old;	/* ���ߤΥ�˥塼 �ݥ��� */
    short	menu_pos_next;	/* ���Υ�˥塼 �ݥ��� */
    

    short	decision_mode;	/* �������⡼�� */
    short	decision_no;	/* �������ݥ��� */
    short	decision_no1;	/* �������ݥ��� */
    short	decision_ypd[3]; /* ������� �٣Уϣ� */

    short	cpdl_mct;	/* ���ԡ�/�ä� ��ư������ */
    short	cpdl_yp[6];	/* ���ԡ�/�ä� �٣Уϣ� */
    short	copy_no;	/* ���ԡ���ݥ��� */

    short	caution_no;	/* ��ս񤭣Σ�. */
    short	caution_pt;	/* ��ս񤭥ݥ��� */

    short	title_no0;		/* ɽ�̥����ȥ�Σ�. */
    short	title_no1;		/* ΢�̥����ȥ�Σ�. */
    short	frame_rgb[3];		/* �����̣ңǣ� */

    short	frame_title_alpha[2];	/* �����̥����ȥ륢��ե��� */
    short	base_alpha;		/* ����ե졼�ॢ��ե��� */
    short	file_alpha[3];		/* ����ե�����Σ����ե��� */
    short	plate_alpha[3];		/* ����ե�����̾���ץ졼�ȥ���ե��� */
    short	name_alpha[3];		/* ����ե�����̾������ե��� */
    short	connect_alpha[3];	/* ����ե����륳�ͥ���������ե��� */
    short	decision_alpha[3];	/* �������ѥͥ륢��ե��� */
    short	panel_alpha[4];		/*�ʥ��ԡ�/�ä��ˡʤϤ�/����˥ѥͥ륢��ե��� */
    short	option_alpha;		/*�ʥ��ץ����˥ѥͥ륢��ե��� */
    short	name_plate_alpha;	/* ̾����Ͽ�ѥͥ륢��ե��� */
    short	ab_alpha;		/* ���¥ܥ��������ѥͥ륢��ե��� */
    short	caution_alpha;		/* ��ս񤭥ѥͥ륢��ե��� */

    short	cursor_rgba[4];		/* ��������ңǣ£� */
    short	cursor_pt;		/* ��������ݥ��� */
    short	cursor_ct;		/* �������륫���� */
    short	panel_pt[2];		/* �ѥͥ�ݥ��� */

    short	key_wait_x, key_wait_y;
    short	old_key_x, old_key_y;
    short	wkey_x, wkey_y;
    short	shift_xp;
    short	scroll_xp;


    /* ̾����Ͽ */
    float	goto_angle;		/* ������̡�̾����Ͽ���� ���Σǣ̣��� */
    short	name_contents;		/* ̾����Ͽ�ܼ� */
    short	name_page;		/* ̾����Ͽ���ءʣ����Ҥ餬��,
					                 ������������,
					                 �����ѿ�,
					                 �����Ҥ餬�ʢ���������,
					                 �����������ʢ��Ҥ餬��,
					                 �����Ҥ餬�ʢ��ѿ�,
					                 �����ѿ����Ҥ餬��,
					                 �����������ʢ��ѿ�,
					                 �����ѿ����������ʡ� */
    short	page_alpha;		/* ̾����Ͽ�ڡ������顼 */
    short	mjp;
    short	name_xpos;		/* ̾����Ͽʸ���ݥ��󥿡� */
    short	name_ypos;		/* ̾����Ͽʸ���ݥ��󥿡� */
    short	name_index;		/* ̾����Ͽʸ������ǥå��� */

    short	sub_menu_alpha[5];
    
# if 0
    /** �ţ���˥塼�� **/
    short	sub_menu_alpha[5];
    short	sub_no;
    short	sub_menu_cnt;
# endif
} Game_file_choose;
#endif




/*==============================================================*/
extern void
file_choose_cleanup( Game *thisx );

extern void
file_choose_init( Game *thisx );
/*==============================================================*/



#endif

/*** z_file_choose.h end ***/

