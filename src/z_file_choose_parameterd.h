/* $Id: z_file_choose_parameterd.h,v 2.3 1998-11-02 17:59:32+09 soejima Exp $ */	
/* $Log: z_file_choose_parameterd.h,v $
 * Revision 2.3  1998-11-02 17:59:32+09  soejima
 * �У���
 *
 * Revision 2.2  1998-10-27 21:25:24+09  soejima
 * �У��̻���
 *
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.21  1998/09/22 13:24:43  soejima
 * *** empty log message ***
 *
 * Revision 1.20  1998-09-22 11:12:00+09  takahata
 * *** empty log message ***
 *
 * Revision 1.19  1998-09-18 23:04:34+09  soejima
 * *** empty log message ***
 *
 * Revision 1.18  1998-07-17 17:51:44+09  soejima
 * *** empty log message ***
 *
 * Revision 1.17  1998-07-10 22:49:49+09  soejima
 * *** empty log message ***
 *
 * Revision 1.16  1998-07-06 22:20:42+09  soejima
 * *** empty log message ***
 *
 * Revision 1.15  1998-07-04 11:16:40+09  soejima
 * *** empty log message ***
 *
 * Revision 1.14  1998-06-17 17:01:47+09  soejima
 * *** empty log message ***
 *
 * Revision 1.13  1998-06-11 15:59:09+09  soejima
 * �¡��£գԣԣϣ�����ѹ�
 *
 * Revision 1.12  1998-03-03 19:40:40+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/09/18  10:50:08  soejima
 * Initial revision
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_FILE_CHOOSE_PARAMETERD_H
#define INCLUDE_Z_FILE_CHOOSE_PARAMETERD_DL_H

/************************************************************************
 *									*
 *	�ƣɣ̣� �ãȣϣϣӣ� �ǥ����ץ쥤�ꥹ��			*
 *				1997ǯ09��18��(������) 18��45ʬ00�� JST *
 ************************************************************************/
#include "z_basic.h"


#if defined(PAL_VERSION)
/*=======================================================================
  =									=
  =======================================================================*/
/* shape/TEXTURE/TITLE/file_name : �ե졼�� */
extern unsigned char ff_00_txt[];
extern unsigned char ff_01_txt[];
extern unsigned char ff_02_txt[];
extern unsigned char ff_03_txt[];
extern unsigned char ff_10_txt[];
extern unsigned char ff_11_txt[];
extern unsigned char ff_12_txt[];
extern unsigned char ff_13_txt[];
extern unsigned char ff_20_txt[];
extern unsigned char ff_21_txt[];
extern unsigned char ff_22_txt[];
extern unsigned char ff_23_txt[];
extern unsigned char ff_30_txt[];
extern unsigned char ff_31_txt[];
extern unsigned char ff_32_txt[];
extern unsigned char ff_33_txt[];
extern unsigned char ff_40_txt[];
extern unsigned char ff_41_txt[];
extern unsigned char ff_42_txt[];
extern unsigned char ff_43_txt[];


extern unsigned char h_op_line_txt[];		// �饤��
extern unsigned char h_con_txt[];		// ���ͥ���
extern unsigned short h_file_64dd_txt[];	// �����ģ� 

extern unsigned char h_file_cursor_txt[];	// �ե�������������ѥ�������
extern unsigned char h_name_cursor1_txt[];	// ̾����Ͽ�ѥ������룱
extern unsigned char h_name_cursor2_txt[];	// ̾����Ͽ�ѥ������룲
extern unsigned char h_name_cursor3_txt[];	// ̾����Ͽ�ѥ������룳
extern unsigned short h_name2_1_txt[];		// ̾���ץ졼�ȡʳ�ĥ����
extern unsigned short h_name2_2_txt[];		// ̾���ץ졼�ȡʳ�ĥ����
extern unsigned short h_name2_3_txt[];		// ̾���ץ졼�ȡʳ�ĥ����
extern unsigned short h_name2_4_txt[];		// ̾���ץ졼�ȡʳ�ĥ����
extern unsigned short h_name2_5_txt[];		// ̾���ץ졼�ȡʳ�ĥ����

extern unsigned short h_n_hira_txt[];		// �ؤҤ餬�ʡ�
extern unsigned short h_n_kata_txt[];		// �إ������ʡ�
extern unsigned short h_n_eisu_txt[];		// �رѿ���
extern unsigned short h_n_modo_txt[];		// ������
extern unsigned short h_name_txt[];		// ̾���ץ졼��

extern unsigned char h_file_jewel_1_txt[];	// �����Сʥ�����Υҥ�����
extern unsigned char h_file_jewel_2_txt[];	// �����Сʥ����Υ�ԡ���
extern unsigned char h_file_jewel_3_txt[];	// �����Сʥ�����Υ��ե�������
extern unsigned char h_fileseal_1_txt[];	// ����������������
extern unsigned char h_fileseal_2_txt[];	// �����ʱ��������
extern unsigned char h_fileseal_3_txt[];	// ������ɹ��������
extern unsigned char h_fileseal_4_txt[];	// �����ʺ���������
extern unsigned char h_fileseal_5_txt[];	// �����ʰǤ�������
extern unsigned char h_fileseal_6_txt[];	// �����ʸ���������

extern unsigned char h_op_english_e_txt[];
extern unsigned char h_op_german_g_txt[];
extern unsigned char h_op_french_f_txt[];
extern unsigned char h_op_sound_e_txt[];
extern unsigned char h_op_sound_f_txt[];
extern unsigned char h_op_z_e_txt[];
extern unsigned char h_op_z_g_txt[];
extern unsigned char h_op_z_f_txt[];
extern unsigned char h_op_sample_e_txt[];
extern unsigned char h_op_sample_g_txt[];
extern unsigned char h_op_sample_f_txt[];
extern unsigned char h_op_language_e_txt[];
extern unsigned char h_op_language_g_txt[];
extern unsigned char h_op_language_f_txt[];
extern unsigned char h_op_stereo_e_txt[];	// �إ��ƥ쥪��
extern unsigned char h_op_stereo_f_txt[];	// �إ��ƥ쥪��
extern unsigned char h_op_mono_e_txt[];		// �إ�Υ���
extern unsigned char h_op_headphones_e_txt[];	// �إإåɥۥ��
extern unsigned char h_op_headphones_g_txt[];	// �إإåɥۥ��
extern unsigned char h_op_headphones_f_txt[];	// �إإåɥۥ��
extern unsigned char h_op_3d_e_txt[];		/* �إ��ƥ쥪�� */
extern unsigned char h_op_switch_e_txt[];	/* �إ����å��� */
extern unsigned char h_op_switch_g_txt[];	/* �إ����å��� */
extern unsigned char h_op_switch_f_txt[];	/* �إ����å��� */
extern unsigned char h_op_hold_e_txt[];		/* �إۡ���ɡ� */
extern unsigned char h_op_hold_g_txt[];		/* �إۡ���ɡ� */
extern unsigned char h_op_hold_f_txt[];		/* �إۡ���ɡ� */

/*
 *
 *  �Σţ���
 *
 */
extern unsigned char h_caution_1_nes_txt[];	// �إ��ԡ�����ե����뤬����ޤ����
extern unsigned char h_caution_2_nes_txt[];	// �ؾä��ե����뤬����ޤ����
extern unsigned char h_caution_3_nes_txt[];	// �إե�����ζ���������ޤ����
extern unsigned char h_caution_4_nes_txt[];	// �ؤ���϶��ե�����Ǥ���
extern unsigned char h_caution_5_nes_txt[];	// �ؤ���ϻ��Ѥ��Ƥ��ޤ���
extern unsigned char h_mes_copy_1_nes_txt[];	// �ؤɤ�򥳥ԡ����ޤ�������
extern unsigned char h_mes_copy_2_nes_txt[];	// �ؤɤ��˥��ԡ����ޤ�������
extern unsigned char h_mes_copy_2_5_nes_txt[];	// �������˥��ԡ����ޤ�������
extern unsigned char h_mes_copy_3_nes_txt[];	// �إ��ԡ�����λ���ޤ�����
extern unsigned char h_mes_file_nes_txt[];	// �إե�����򤨤��Ǥ���������
extern unsigned char h_mes_file2_nes_txt[];	// �إե�����򳫤��ޤ�������
extern unsigned char h_mes_kesu_1_nes_txt[];	// �ؤɤ��ä��ޤ�������
extern unsigned char h_mes_kesu_2_nes_txt[];	// �������˾ä��ޤ�������
extern unsigned char h_mes_kesu_3_nes_txt[];	// �ؾõ�ޤ�����
extern unsigned char h_mes_option_nes_txt[];	// �إ��ץ�����
extern unsigned char h_namae_nes_txt[];		// ��̾�����ϡ�
extern unsigned short h_copy_nes_txt[];		// �إ��ԡ���
extern unsigned short h_file_1_nes_txt[];	// �إե����룱��
extern unsigned short h_file_2_nes_txt[];	// �إե����룲��
extern unsigned short h_file_3_nes_txt[];	// �إե����룳��
extern unsigned short h_hai_nes_txt[];		// �ؤϤ���
extern unsigned short h_kesu_nes_txt[];		// �ؾä���
extern unsigned short h_option_nes_txt[];	// �إ��ץ�����
extern unsigned short h_yameru_nes_txt[];	// �ؤ����
extern unsigned short h_file_ab_nes_txt[];	// ��������
extern unsigned short h_n_kettei_txt[];		// �ط����



/*
 *
 *  �У��̡ʥɥ��ĸ��
 *
 */
extern unsigned char h_mes_option_g_txt[];	// �إ��ץ�����
extern unsigned char h_caution_1_g_txt[];	// �إ��ԡ�����ե����뤬����ޤ����
extern unsigned char h_caution_2_g_txt[];	// �ؾä��ե����뤬����ޤ����
extern unsigned char h_caution_3_g_txt[];	// �إե�����ζ���������ޤ����
extern unsigned char h_caution_4_g_txt[];	// �ؤ���϶��ե�����Ǥ���
extern unsigned char h_caution_5_g_txt[];	// �ؤ���ϻ��Ѥ��Ƥ��ޤ���
extern unsigned char h_mes_copy_1_g_txt[];	// �ؤɤ�򥳥ԡ����ޤ�������
extern unsigned char h_mes_copy_2_g_txt[];	// �ؤɤ��˥��ԡ����ޤ�������
extern unsigned char h_mes_copy_2_5_g_txt[];	// �������˥��ԡ����ޤ�������
extern unsigned char h_mes_copy_3_g_txt[];	// �إ��ԡ�����λ���ޤ�����
extern unsigned char h_mes_file_g_txt[];	// �إե�����򤨤��Ǥ���������
extern unsigned char h_mes_file2_g_txt[];	// �إե�����򳫤��ޤ�������
extern unsigned char h_mes_kesu_1_g_txt[];	// �ؤɤ��ä��ޤ�������
extern unsigned char h_mes_kesu_2_g_txt[];	// �������˾ä��ޤ�������
extern unsigned char h_mes_kesu_3_g_txt[];	// �ؾõ�ޤ�����
extern unsigned short h_copy_g_txt[];		// �إ��ԡ���
extern unsigned short h_file_1_g_txt[];		// �إե����룱��
extern unsigned short h_file_2_g_txt[];		// �إե����룲��
extern unsigned short h_file_3_g_txt[];		// �إե����룳��
extern unsigned short h_hai_g_txt[];		// �ؤϤ���
extern unsigned short h_kesu_g_txt[];		// �ؾä���
extern unsigned short h_yameru_g_txt[];		// �ؤ����
extern unsigned short h_file_ab_g_txt[];	// ��������
extern unsigned short h_n_kettei_g_txt[];	// �ط����
extern unsigned short h_option_g_txt[];		// �إ��ץ�����



/*
 *
 *  �У��̡ʥե�󥹸��
 *
 */
extern unsigned char h_mes_option_f_txt[];	// �إ��ץ�����
extern unsigned char h_caution_1_f_txt[];	// �إ��ԡ�����ե����뤬����ޤ����
extern unsigned char h_caution_2_f_txt[];	// �ؾä��ե����뤬����ޤ����
extern unsigned char h_caution_3_f_txt[];	// �إե�����ζ���������ޤ����
extern unsigned char h_caution_4_f_txt[];	// �ؤ���϶��ե�����Ǥ���
extern unsigned char h_caution_5_f_txt[];	// �ؤ���ϻ��Ѥ��Ƥ��ޤ���
extern unsigned char h_mes_copy_1_f_txt[];	// �ؤɤ�򥳥ԡ����ޤ�������
extern unsigned char h_mes_copy_2_f_txt[];	// �ؤɤ��˥��ԡ����ޤ�������
extern unsigned char h_mes_copy_2_5_f_txt[];	// �������˥��ԡ����ޤ�������
extern unsigned char h_mes_copy_3_f_txt[];	// �إ��ԡ�����λ���ޤ�����
extern unsigned char h_mes_file_f_txt[];	// �إե�����򤨤��Ǥ���������
extern unsigned char h_mes_file2_f_txt[];	// �إե�����򳫤��ޤ�������
extern unsigned char h_mes_kesu_1_f_txt[];	// �ؤɤ��ä��ޤ�������
extern unsigned char h_mes_kesu_2_f_txt[];	// �������˾ä��ޤ�������
extern unsigned char h_mes_kesu_3_f_txt[];	// �ؾõ�ޤ�����
extern unsigned short h_copy_f_txt[];		// �إ��ԡ���
extern unsigned short h_file_1_f_txt[];		// �إե����룱��
extern unsigned short h_file_2_f_txt[];		// �إե����룲��
extern unsigned short h_file_3_f_txt[];		// �إե����룳��
extern unsigned short h_hai_f_txt[];		// �ؤϤ���
extern unsigned short h_kesu_f_txt[];		// �ؾä���
extern unsigned short h_yameru_f_txt[];		// �ؤ����
extern unsigned short h_file_ab_f_txt[];	// ��������
extern unsigned char h_namae_f_txt[];		// ��̾�����ϡ�
extern unsigned short h_n_kettei_f_txt[];	// �ط����
#else
/*=======================================================================
  =									=
  =======================================================================*/
# if 0
/* /project/ZELDA/data/shape/zelda_title : �����ȥ� */
extern unsigned char  g_title_txt[];
extern unsigned char  g_title_sub_1_txt[];
extern unsigned char  g_title_sub_2_txt[];
extern unsigned char  g_title_sub_j_txt[];
extern unsigned char  g_title_efc_1_txt[];
extern unsigned char  g_title_efc_2_txt[];
extern unsigned char  g_title_efc_3_txt[];
extern unsigned char  g_title_efc_4_txt[];
extern unsigned char  g_title_efc_5_txt[];
extern unsigned char  g_title_efc_6_txt[];
extern unsigned char  g_title_efc_7_txt[];
extern unsigned char  g_title_efc_8_txt[];
extern unsigned char  g_title_efc_9_txt[];
extern unsigned char  g_title_cpr_txt[];
extern unsigned char  g_title_mable_txt[];
# endif


/* shape/TEXTURE/TITLE/file_name : �ե졼�� */
extern unsigned char ff_00_txt[];
extern unsigned char ff_01_txt[];
extern unsigned char ff_02_txt[];
extern unsigned char ff_03_txt[];
extern unsigned char ff_10_txt[];
extern unsigned char ff_11_txt[];
extern unsigned char ff_12_txt[];
extern unsigned char ff_13_txt[];
extern unsigned char ff_20_txt[];
extern unsigned char ff_21_txt[];
extern unsigned char ff_22_txt[];
extern unsigned char ff_23_txt[];
extern unsigned char ff_30_txt[];
extern unsigned char ff_31_txt[];
extern unsigned char ff_32_txt[];
extern unsigned char ff_33_txt[];
extern unsigned char ff_40_txt[];
extern unsigned char ff_41_txt[];
extern unsigned char ff_42_txt[];
extern unsigned char ff_43_txt[];




extern unsigned char h_mes_file_txt[];		// �إե�����򤨤��Ǥ���������
extern unsigned char h_mes_file2_txt[];		// �إե�����򳫤��ޤ�������
extern unsigned char h_mes_copy_1_txt[];	// �ؤɤ�򥳥ԡ����ޤ�������
extern unsigned char h_mes_copy_2_txt[];	// �ؤɤ��˥��ԡ����ޤ�������
extern unsigned char h_mes_copy_2_5_txt[];	// �������˥��ԡ����ޤ�������
extern unsigned char h_mes_copy_3_txt[];	// �إ��ԡ�����λ���ޤ�����
extern unsigned char h_mes_kesu_1_txt[];	// �ؤɤ��ä��ޤ�������
extern unsigned char h_mes_kesu_2_txt[];	// �������˾ä��ޤ�������
extern unsigned char h_mes_kesu_3_txt[];	// �ؾõ�ޤ�����
extern unsigned char h_mes_option_txt[];	// �إ��ץ�����
extern unsigned char h_op_sound_txt[];		// �أӣϣգΣġ�
extern unsigned char h_op_headphones_txt[];	// �إإåɥۥ��
extern unsigned char h_op_mono_txt[];		// �إ�Υ���
extern unsigned char h_op_stereo_txt[];		// �أ��ġ�
extern unsigned char h_op_3d_txt[];		// �إ��ƥ쥪��
extern unsigned char h_op_line_txt[];		// �饤��
extern unsigned short h_file_1_txt[];		// �إե����룱��
extern unsigned short h_file_2_txt[];		// �إե����룲��
extern unsigned short h_file_3_txt[];		// �إե����룳��
extern unsigned short h_copy_txt[];		// �إ��ԡ���
extern unsigned short h_kesu_txt[];		// �ؾä���
extern unsigned short h_yameru_txt[];		// �ؤ����
extern unsigned short h_option_txt[];		// �إ��ץ�����
extern unsigned short h_hai_txt[];		// �ؤϤ���
extern unsigned short h_name_txt[];		// ̾���ץ졼��
extern unsigned short h_file_ab_txt[];		// ��������
extern unsigned char h_con_txt[];		// ���ͥ���
extern unsigned short h_file_64dd_txt[];	// �����ģ� 

extern unsigned char h_namae_txt[];		// ��̾�����ϡ�
extern unsigned short h_n_hira_txt[];		// �ؤҤ餬�ʡ�
extern unsigned short h_n_kata_txt[];		// �إ������ʡ�
extern unsigned short h_n_kettei_txt[];		// �ط����
extern unsigned short h_n_eisu_txt[];		// �رѿ���
extern unsigned short h_n_modo_txt[];		// ������

extern unsigned short h_name2_1_txt[];		// ̾���ץ졼�ȡʳ�ĥ����
extern unsigned short h_name2_2_txt[];		// ̾���ץ졼�ȡʳ�ĥ����
extern unsigned short h_name2_3_txt[];		// ̾���ץ졼�ȡʳ�ĥ����
extern unsigned short h_name2_4_txt[];		// ̾���ץ졼�ȡʳ�ĥ����
extern unsigned short h_name2_5_txt[];		// ̾���ץ졼�ȡʳ�ĥ����

extern unsigned char h_file_cursor_txt[];	// �ե�������������ѥ�������
extern unsigned char h_file_save_txt[];		// �����ֲ����
extern unsigned char h_name_cursor1_txt[];	// ̾����Ͽ�ѥ������룱
extern unsigned char h_name_cursor2_txt[];	// ̾����Ͽ�ѥ������룲
extern unsigned char h_name_cursor3_txt[];	// ̾����Ͽ�ѥ������룳

////////extern unsigned char h_ab_txt[];		// �أ��ܥ���Ƿ��ꡦ�¥ܥ��������
extern unsigned char h_caution_1_txt[];		// �إ��ԡ�����ե����뤬����ޤ����
extern unsigned char h_caution_2_txt[];		// �ؾä��ե����뤬����ޤ����
extern unsigned char h_caution_3_txt[];		// �إե�����ζ���������ޤ����
extern unsigned char h_caution_4_txt[];		// �ؤ���϶��ե�����Ǥ���
extern unsigned char h_caution_5_txt[];		// �ؤ���ϻ��Ѥ��Ƥ��ޤ���

extern unsigned char h_file_jewel_1_txt[];	// �����Сʥ�����Υҥ�����
extern unsigned char h_file_jewel_2_txt[];	// �����Сʥ����Υ�ԡ���
extern unsigned char h_file_jewel_3_txt[];	// �����Сʥ�����Υ��ե�������
extern unsigned char h_fileseal_1_txt[];	// ����������������
extern unsigned char h_fileseal_2_txt[];	// �����ʱ��������
extern unsigned char h_fileseal_3_txt[];	// ������ɹ��������
extern unsigned char h_fileseal_4_txt[];	// �����ʺ���������
extern unsigned char h_fileseal_5_txt[];	// �����ʰǤ�������
extern unsigned char h_fileseal_6_txt[];	// �����ʸ���������



/*
 *
 *  �Σţ���
 *
 */
extern unsigned char h_caution_1_nes_txt[];	// �إ��ԡ�����ե����뤬����ޤ����
extern unsigned char h_caution_2_nes_txt[];	// �ؾä��ե����뤬����ޤ����
extern unsigned char h_caution_3_nes_txt[];	// �إե�����ζ���������ޤ����
extern unsigned char h_caution_4_nes_txt[];	// �ؤ���϶��ե�����Ǥ���
extern unsigned char h_caution_5_nes_txt[];	// �ؤ���ϻ��Ѥ��Ƥ��ޤ���
extern unsigned char h_mes_copy_1_nes_txt[];	// �ؤɤ�򥳥ԡ����ޤ�������
extern unsigned char h_mes_copy_2_nes_txt[];	// �ؤɤ��˥��ԡ����ޤ�������
extern unsigned char h_mes_copy_2_5_nes_txt[];	// �������˥��ԡ����ޤ�������
extern unsigned char h_mes_copy_3_nes_txt[];	// �إ��ԡ�����λ���ޤ�����
extern unsigned char h_mes_file_nes_txt[];	// �إե�����򤨤��Ǥ���������
extern unsigned char h_mes_file2_nes_txt[];	// �إե�����򳫤��ޤ�������
extern unsigned char h_mes_kesu_1_nes_txt[];	// �ؤɤ��ä��ޤ�������
extern unsigned char h_mes_kesu_2_nes_txt[];	// �������˾ä��ޤ�������
extern unsigned char h_mes_kesu_3_nes_txt[];	// �ؾõ�ޤ�����
extern unsigned char h_mes_option_nes_txt[];	// �إ��ץ�����
extern unsigned char h_namae_nes_txt[];		// ��̾�����ϡ�
extern unsigned char h_op_headphones_nes_txt[];	// �إإåɥۥ��
extern unsigned char h_op_mono_nes_txt[];	// �إ�Υ���
extern unsigned char h_op_stereo_nes_txt[];	// �إ��ƥ쥪��
extern unsigned short h_copy_nes_txt[];		// �إ��ԡ���
extern unsigned short h_file_1_nes_txt[];	// �إե����룱��
extern unsigned short h_file_2_nes_txt[];	// �إե����룲��
extern unsigned short h_file_3_nes_txt[];	// �إե����룳��
extern unsigned short h_hai_nes_txt[];		// �ؤϤ���
extern unsigned short h_kesu_nes_txt[];		// �ؾä���
extern unsigned short h_option_nes_txt[];	// �إ��ץ�����
extern unsigned short h_yameru_nes_txt[];	// �ؤ����
extern unsigned short h_file_ab_nes_txt[];	// ��������
extern unsigned char h_file_save_nes_txt[];	// �����ֲ����
extern unsigned char h_op_3d_nes_txt[];		/* �إ��ƥ쥪�� */
#endif

#endif

/*** z_file_choose_parameterd.h end ***/
