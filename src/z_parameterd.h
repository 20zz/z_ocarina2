/* $Id: z_parameterd.h,v 1.1.1.1 2003/03/10 22:42:55 tong Exp $ */	
/* $Log: z_parameterd.h,v $
 * Revision 1.1.1.1  2003/03/10 22:42:55  tong
 * new OBJ tree for ocarina from Nintendo
 *
 * Revision 2.2  1998-10-27 21:26:59+09  soejima
 * �У��̻���
 *
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.127  1998/10/07 13:39:54  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1996/10/14  02:17:36  soejima
 * Initial revision
 * $Log�ɲ�
 * */


/************************************************************************
 *									*
 *	��������� �ѥ�᡼����						*
 *				1996ǯ10��14��(������) 10��00ʬ00�� JST *
 *									*
 ************************************************************************/
#include "z_basic.h"

#if defined(PAL_VERSION)
/*=======================================================================
  =	���쥤�ɡ���������						=
  =======================================================================*/
/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/select_item : �ڣӣţ̣ţã� �ɣԣţͲ��̡� */
extern unsigned char h_32_bomb_1_txt[];
extern unsigned char h_32_deku_nuts_txt[];
extern unsigned char h_32_bomb_2_txt[];
extern unsigned char h_32_bow_txt[];
extern unsigned char h_32_pachinko_txt[];
extern unsigned char h_32_boomerang_txt[];
extern unsigned char h_32_stick_txt[];
extern unsigned char h_32_hookshot_1_txt[];
extern unsigned char h_32_hookshot_2_txt[];
extern unsigned char h_32_magicglass_txt[];
extern unsigned char h_32_ocarina_1_txt[];
extern unsigned char h_32_ocarina_2_txt[];
extern unsigned char h_32_hammer_txt[];
extern unsigned char h_32_bean_txt[];
extern unsigned char h_32_arrow_1_txt[];
extern unsigned char h_32_arrow_2_txt[];
extern unsigned char h_32_arrow_3_txt[];
extern unsigned char h_32_goddess_1_txt[];
extern unsigned char h_32_goddess_2_txt[];
extern unsigned char h_32_goddess_3_txt[];
extern unsigned char h_32_bottle_0_txt[];
extern unsigned char h_32_bottle_1_txt[];
extern unsigned char h_32_bottle_2_txt[];
extern unsigned char h_32_bottle_3_txt[];
extern unsigned char h_32_bottle_4_txt[];
extern unsigned char h_32_bottle_5_txt[];
extern unsigned char h_32_bottle_6_txt[];
extern unsigned char h_32_bottle_7_txt[];
extern unsigned char h_32_bottle_8_txt[];
extern unsigned char h_32_bottle_9_txt[];
extern unsigned char h_32_bottle_10_txt[];
extern unsigned char h_32_bottle_11_txt[];
extern unsigned char h_32_bottle_12_txt[];
extern unsigned char h_32_reserve_00_txt[];
extern unsigned char h_32_reserve_01_txt[];
extern unsigned char h_32_reserve_02_txt[];
extern unsigned char h_32_reserve_03_txt[];
extern unsigned char h_32_reserve_04_txt[];
extern unsigned char h_32_reserve_05_txt[];
extern unsigned char h_32_reserve_06_txt[];
extern unsigned char h_32_reserve_07_txt[];
extern unsigned char h_32_reserve_08_txt[];
extern unsigned char h_32_reserve_09_txt[];
extern unsigned char h_32_reserve_10_txt[];
extern unsigned char h_32_reserve_11_txt[];
extern unsigned char h_32_reserve_20_txt[];
extern unsigned char h_32_reserve_21_txt[];
extern unsigned char h_32_reserve_22_txt[];
extern unsigned char h_32_reserve_23_txt[];
extern unsigned char h_32_reserve_24_txt[];
extern unsigned char h_32_reserve_25_txt[];
extern unsigned char h_32_reserve_26_txt[];
extern unsigned char h_32_reserve_27_txt[];
extern unsigned char h_32_reserve_28_txt[];
extern unsigned char h_32_reserve_29_txt[];
extern unsigned char h_32_reserve_30_txt[];
extern unsigned char h_32_m_bow_1_txt[];
extern unsigned char h_32_m_bow_2_txt[];
extern unsigned char h_32_m_bow_3_txt[];

/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/equipment : �ڣţѣգɣУͣţΣԲ��̡� */
extern unsigned char h_32_sword_1_txt[];
extern unsigned char h_32_sword_2_txt[];
extern unsigned char h_32_sword_3_txt[];
extern unsigned char h_32_sword_4_txt[];
extern unsigned char h_32_shield_1_txt[];
extern unsigned char h_32_shield_2_txt[];
extern unsigned char h_32_shield_3_txt[];
extern unsigned char h_32_clothes_1_txt[];
extern unsigned char h_32_clothes_2_txt[];
extern unsigned char h_32_clothes_3_txt[];
extern unsigned char h_32_boots_1_txt[];
extern unsigned char h_32_boots_2_txt[];
extern unsigned char h_32_boots_3_txt[];
extern unsigned char h_32_dekupouch_1_txt[];
extern unsigned char h_32_dekupouch_2_txt[];
extern unsigned char h_32_dekupouch_3_txt[];
extern unsigned char h_32_arrowcase_1_txt[];
extern unsigned char h_32_arrowcase_2_txt[];
extern unsigned char h_32_arrowcase_3_txt[];
extern unsigned char h_32_bombpouch_1_txt[];
extern unsigned char h_32_bombpouch_2_txt[];
extern unsigned char h_32_bombpouch_3_txt[];
extern unsigned char h_32_bracelet_txt[];
extern unsigned char h_32_gloves_1_txt[];
extern unsigned char h_32_gloves_2_txt[];
extern unsigned char h_32_scale_1_txt[];
extern unsigned char h_32_scale_2_txt[];


/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/map/rgba32 : �ڣͣ��в��̡� */
extern unsigned char h_24_boss_key_txt[];
extern unsigned char h_24_map_txt[];
extern unsigned char h_24_compass_txt[];


/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/collect_item/rgb : �ڣãϣ̣̣ţã� �ɣԣţͲ��̡� */
extern unsigned char h_16_melody_txt[];
extern unsigned char h_24_seal_1_txt[];
extern unsigned char h_24_seal_2_txt[];
extern unsigned char h_24_seal_3_txt[];
extern unsigned char h_24_seal_4_txt[];
extern unsigned char h_24_seal_5_txt[];
extern unsigned char h_24_seal_6_txt[];
extern unsigned char h_24_jewel_1_txt[];
extern unsigned char h_24_jewel_2_txt[];
extern unsigned char h_24_jewel_3_txt[];
extern unsigned char h_24_item_1_txt[];
extern unsigned char h_24_item_2_txt[];
extern unsigned char h_24_item_3_txt[];
/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/collect_item/ia : �ڣãϣ̣̣ţã� �ɣԣţͲ��̡� */
extern unsigned char h_heart_01_txt[];
extern unsigned char h_heart_02_txt[];
extern unsigned char h_heart_03_txt[];
extern unsigned char h_button_onpu_txt[];

/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/save/ia : �ڣӣ��֣Ų��̡� */
extern unsigned char h_mes_save_nes_txt[];
extern unsigned char h_mes_save2_nes_txt[];
extern unsigned char h_mes_save3_nes_txt[];
extern unsigned char h_save_yes_nes_txt[];
extern unsigned char h_save_no_nes_txt[];
extern unsigned char h_mes_save_g_txt[];
extern unsigned char h_mes_save2_g_txt[];
extern unsigned char h_mes_save3_g_txt[];
extern unsigned char h_save_yes_g_txt[];
extern unsigned char h_save_no_g_txt[];
extern unsigned char h_mes_save_f_txt[];
extern unsigned char h_mes_save2_f_txt[];
extern unsigned char h_mes_save3_f_txt[];
extern unsigned char h_save_yes_f_txt[];
extern unsigned char h_save_no_f_txt[];
/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/save/i : �ڣӣ��֣Ų��̡� */
extern unsigned char h_save_cursor_txt[];


/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/help/rgb :  */
extern unsigned char h_24_heart_1_txt[];
extern unsigned char h_24_heart_2_txt[];
extern unsigned char h_24_magic_pot_1_txt[];
extern unsigned char h_24_magic_pot_2_txt[];
extern unsigned char h_32_seed_txt[];
extern unsigned char h_32_rod_txt[];
extern unsigned char h_32_purse_1_txt[];
extern unsigned char h_32_purse_2_txt[];
extern unsigned char h_32_purse_3_txt[];


/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/others/ia : ���쥤�ɡ�����������°�� */
extern unsigned char h_cursor0_txt[];
extern unsigned char h_cursor1_txt[];
extern unsigned char h_cursor2_txt[];
extern unsigned char h_cursor3_txt[];
/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/others/rgb : ���쥤�ɡ�����������°�� */
extern unsigned short h_mb_00_txt[];
extern unsigned short h_mb_10_txt[];
extern unsigned short h_mb_20_txt[];
extern unsigned short h_ep_00_txt[];
extern unsigned short h_ep_01_txt[];
extern unsigned short h_ep_10_txt[];
extern unsigned short h_ep_11_txt[];
extern unsigned short h_ep_20_txt[];
extern unsigned short h_ep_21_txt[];
extern unsigned short h_ep_30_txt[];
extern unsigned short h_ep_31_txt[];

/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/select_item/ia : �����Уϣףţ� */
extern unsigned char h_32_power_0_txt[];



/* shape/TEXTURE/PARAMETER/others/ia :  ����¾ */
extern unsigned char item_back_txt[];		/* �����ƥ��ط� */
extern unsigned char item_back1_txt[];		/* �����ƥ��طʡʥ��쥤�ɡ����������ѡ� */
extern unsigned char h_empty_l_txt[];		/* ���ܥ���ú� */
extern unsigned char h_empty_u_txt[];		/* ���ܥ���ò� */
extern unsigned char h_empty_r_txt[];		/* ���ܥ���ñ� */
extern unsigned char g_key_txt[];		/* ���󥸥�� */
extern unsigned char rupy_txt[];		/* ��ԡ� */
extern unsigned char h_timer_txt[];		/* ���� */
extern unsigned char g_go_font1_txt[];		/* �ǣ��ͣţϣ֣ţ� */
extern unsigned char g_go_font2_txt[];		/* �ǣ��ͣţϣ֣ţ� */
extern unsigned char g_go_font3_txt[];		/* �ǣ��ͣţϣ֣ţ� */
extern unsigned char g_go_mable_txt[];		/* �ǣ��ͣţϣ֣ţ� */
extern unsigned char h_s_a_txt[];		/* ���� �� */
extern unsigned char h_s_und_txt[];		/* ���� �ú��� */
extern unsigned char h_s_r_txt[];		/* ���� �ú��� */
extern unsigned char h_s_l_txt[];		/* ���� �ú��� */
extern unsigned char h_s_up_txt[];		/* ���� �ú��� */
extern unsigned char h_to_txt[];		/* �Ȳ����� */
extern unsigned char h_navi_txt[];		/* �ʥ��� */
extern unsigned char h_navi_nes_txt[];		/* �ʥ��� */

/* shape/TEXTURE/PARAMETER/others/rgb :  ����¾ */
extern unsigned char g_muti_txt[];		/* �ܥ᡼���� */
extern unsigned char h_fm_ent_txt[];		/* �Ͼ�:���󥸥������ */
extern unsigned char h_dm_boss_txt[];		/* �ܥ� */
extern unsigned char h_dm_box_txt[];		/* ��Ȣ */

/* shape/TEXTURE/PARAMETER/rupy_num : ��ԡ��ѿ��� */
extern unsigned char rupy_num0_txt[];
extern unsigned char rupy_num1_txt[];
extern unsigned char rupy_num2_txt[];
extern unsigned char rupy_num3_txt[];
extern unsigned char rupy_num4_txt[];
extern unsigned char rupy_num5_txt[];
extern unsigned char rupy_num6_txt[];
extern unsigned char rupy_num7_txt[];
extern unsigned char rupy_num8_txt[];
extern unsigned char rupy_num9_txt[];
extern unsigned char rupy_num_colon_txt[];

/* shape/TEXTURE/PARAMETER/num_s : �����ƥ��ѿ��� */
extern unsigned char num_s0_txt[];
extern unsigned char num_s1_txt[];
extern unsigned char num_s2_txt[];
extern unsigned char num_s3_txt[];
extern unsigned char num_s4_txt[];
extern unsigned char num_s5_txt[];
extern unsigned char num_s6_txt[];
extern unsigned char num_s7_txt[];
extern unsigned char num_s8_txt[];
extern unsigned char num_s9_txt[];
extern unsigned char num_ss_txt[];	// 1/2




# if 0
/* shape/TEXTURE/PARAMETER/dokidoki : �쥯���󥰥� */
extern unsigned char heart0_txt[];
extern unsigned char heart4_txt[];
/* shape/TEXTURE/DMA_MAKE/DOKIDOKI/dokidoki_heart_idx.o : �饤�ե����� */
# endif
/* shape/TEXTURE/PARAMETER/heart : �쥯���󥰥� */
extern unsigned char heart20_txt[];
extern unsigned char heart21_txt[];
extern unsigned char heart22_txt[];
extern unsigned char heart23_txt[];
extern unsigned char heart24_txt[];




/* shape/TEXTURE/PARAMETER/m_meter : ��ˡ�᡼���� */
extern unsigned char g_m_meter1_txt[];
extern unsigned char g_m_meter2_txt[];
extern unsigned char g_m_meter3_txt[];
#else
/*=======================================================================
  =	���쥤�ɡ���������						=
  =======================================================================*/
/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/select_item : �ڣӣţ̣ţã� �ɣԣţͲ��̡� */
extern unsigned char h_32_bomb_1_txt[];
extern unsigned char h_32_deku_nuts_txt[];
extern unsigned char h_32_bomb_2_txt[];
extern unsigned char h_32_bow_txt[];
extern unsigned char h_32_pachinko_txt[];
extern unsigned char h_32_boomerang_txt[];
extern unsigned char h_32_stick_txt[];
extern unsigned char h_32_hookshot_1_txt[];
extern unsigned char h_32_hookshot_2_txt[];
extern unsigned char h_32_magicglass_txt[];
extern unsigned char h_32_ocarina_1_txt[];
extern unsigned char h_32_ocarina_2_txt[];
extern unsigned char h_32_hammer_txt[];
extern unsigned char h_32_bean_txt[];
extern unsigned char h_32_arrow_1_txt[];
extern unsigned char h_32_arrow_2_txt[];
extern unsigned char h_32_arrow_3_txt[];
extern unsigned char h_32_goddess_1_txt[];
extern unsigned char h_32_goddess_2_txt[];
extern unsigned char h_32_goddess_3_txt[];
extern unsigned char h_32_bottle_0_txt[];
extern unsigned char h_32_bottle_1_txt[];
extern unsigned char h_32_bottle_2_txt[];
extern unsigned char h_32_bottle_3_txt[];
extern unsigned char h_32_bottle_4_txt[];
extern unsigned char h_32_bottle_5_txt[];
extern unsigned char h_32_bottle_6_txt[];
extern unsigned char h_32_bottle_7_txt[];
extern unsigned char h_32_bottle_8_txt[];
extern unsigned char h_32_bottle_9_txt[];
extern unsigned char h_32_bottle_10_txt[];
extern unsigned char h_32_bottle_11_txt[];
extern unsigned char h_32_bottle_12_txt[];
extern unsigned char h_32_reserve_00_txt[];
extern unsigned char h_32_reserve_01_txt[];
extern unsigned char h_32_reserve_02_txt[];
extern unsigned char h_32_reserve_03_txt[];
extern unsigned char h_32_reserve_04_txt[];
extern unsigned char h_32_reserve_05_txt[];
extern unsigned char h_32_reserve_06_txt[];
extern unsigned char h_32_reserve_07_txt[];
extern unsigned char h_32_reserve_08_txt[];
extern unsigned char h_32_reserve_09_txt[];
extern unsigned char h_32_reserve_10_txt[];
extern unsigned char h_32_reserve_11_txt[];
extern unsigned char h_32_reserve_20_txt[];
extern unsigned char h_32_reserve_21_txt[];
extern unsigned char h_32_reserve_22_txt[];
extern unsigned char h_32_reserve_23_txt[];
extern unsigned char h_32_reserve_24_txt[];
extern unsigned char h_32_reserve_25_txt[];
extern unsigned char h_32_reserve_26_txt[];
extern unsigned char h_32_reserve_27_txt[];
extern unsigned char h_32_reserve_28_txt[];
extern unsigned char h_32_reserve_29_txt[];
extern unsigned char h_32_reserve_30_txt[];
extern unsigned char h_32_m_bow_1_txt[];
extern unsigned char h_32_m_bow_2_txt[];
extern unsigned char h_32_m_bow_3_txt[];

/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/equipment : �ڣţѣգɣУͣţΣԲ��̡� */
extern unsigned char h_32_sword_1_txt[];
extern unsigned char h_32_sword_2_txt[];
extern unsigned char h_32_sword_3_txt[];
extern unsigned char h_32_sword_4_txt[];
extern unsigned char h_32_shield_1_txt[];
extern unsigned char h_32_shield_2_txt[];
extern unsigned char h_32_shield_3_txt[];
extern unsigned char h_32_clothes_1_txt[];
extern unsigned char h_32_clothes_2_txt[];
extern unsigned char h_32_clothes_3_txt[];
extern unsigned char h_32_boots_1_txt[];
extern unsigned char h_32_boots_2_txt[];
extern unsigned char h_32_boots_3_txt[];
extern unsigned char h_32_dekupouch_1_txt[];
extern unsigned char h_32_dekupouch_2_txt[];
extern unsigned char h_32_dekupouch_3_txt[];
extern unsigned char h_32_arrowcase_1_txt[];
extern unsigned char h_32_arrowcase_2_txt[];
extern unsigned char h_32_arrowcase_3_txt[];
extern unsigned char h_32_bombpouch_1_txt[];
extern unsigned char h_32_bombpouch_2_txt[];
extern unsigned char h_32_bombpouch_3_txt[];
extern unsigned char h_32_bracelet_txt[];
extern unsigned char h_32_gloves_1_txt[];
extern unsigned char h_32_gloves_2_txt[];
extern unsigned char h_32_scale_1_txt[];
extern unsigned char h_32_scale_2_txt[];


/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/map/rgba32 : �ڣͣ��в��̡� */
extern unsigned char h_24_boss_key_txt[];
extern unsigned char h_24_map_txt[];
extern unsigned char h_24_compass_txt[];


/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/collect_item/rgb : �ڣãϣ̣̣ţã� �ɣԣţͲ��̡� */
extern unsigned char h_16_melody_txt[];
extern unsigned char h_24_seal_1_txt[];
extern unsigned char h_24_seal_2_txt[];
extern unsigned char h_24_seal_3_txt[];
extern unsigned char h_24_seal_4_txt[];
extern unsigned char h_24_seal_5_txt[];
extern unsigned char h_24_seal_6_txt[];
extern unsigned char h_24_jewel_1_txt[];
extern unsigned char h_24_jewel_2_txt[];
extern unsigned char h_24_jewel_3_txt[];
extern unsigned char h_24_item_1_txt[];
extern unsigned char h_24_item_2_txt[];
extern unsigned char h_24_item_3_txt[];
/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/collect_item/ia : �ڣãϣ̣̣ţã� �ɣԣţͲ��̡� */
extern unsigned char h_heart_01_txt[];
extern unsigned char h_heart_02_txt[];
extern unsigned char h_heart_03_txt[];
extern unsigned char h_button_onpu_txt[];

/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/save/ia : �ڣӣ��֣Ų��̡� */
extern unsigned char h_mes_save_txt[];
extern unsigned char h_mes_save2_txt[];
extern unsigned char h_mes_save3_txt[];
/*extern unsigned char h_save_comment_1_txt[];
  extern unsigned char h_save_comment_2_txt[];*/
extern unsigned char h_save_yes_txt[];
extern unsigned char h_save_no_txt[];
extern unsigned char h_mes_save_nes_txt[];
extern unsigned char h_mes_save2_nes_txt[];
extern unsigned char h_mes_save3_nes_txt[];
/*extern unsigned char h_save_comment_1_nes_txt[];
  extern unsigned char h_save_comment_2_nes_txt[];*/
extern unsigned char h_save_yes_nes_txt[];
extern unsigned char h_save_no_nes_txt[];
/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/save/i : �ڣӣ��֣Ų��̡� */
extern unsigned char h_save_cursor_txt[];


/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/help/rgb :  */
extern unsigned char h_24_heart_1_txt[];
extern unsigned char h_24_heart_2_txt[];
extern unsigned char h_24_magic_pot_1_txt[];
extern unsigned char h_24_magic_pot_2_txt[];
extern unsigned char h_32_seed_txt[];
extern unsigned char h_32_rod_txt[];
extern unsigned char h_32_purse_1_txt[];
extern unsigned char h_32_purse_2_txt[];
extern unsigned char h_32_purse_3_txt[];


/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/others/ia : ���쥤�ɡ�����������°�� */
extern unsigned char h_cursor0_txt[];
extern unsigned char h_cursor1_txt[];
extern unsigned char h_cursor2_txt[];
extern unsigned char h_cursor3_txt[];
/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/others/rgb : ���쥤�ɡ�����������°�� */
extern unsigned short h_mb_00_txt[];
extern unsigned short h_mb_10_txt[];
extern unsigned short h_mb_20_txt[];
extern unsigned short h_ep_00_txt[];
extern unsigned short h_ep_01_txt[];
extern unsigned short h_ep_10_txt[];
extern unsigned short h_ep_11_txt[];
extern unsigned short h_ep_20_txt[];
extern unsigned short h_ep_21_txt[];
extern unsigned short h_ep_30_txt[];
extern unsigned short h_ep_31_txt[];

/* shape/TEXTURE/DMA_MAKE/ICON_ITEM/select_item/ia : �����Уϣףţ� */
extern unsigned char h_32_power_0_txt[];



/* shape/TEXTURE/PARAMETER/others/ia :  ����¾ */
extern unsigned char item_back_txt[];		/* �����ƥ��ط� */
extern unsigned char item_back1_txt[];		/* �����ƥ��طʡʥ��쥤�ɡ����������ѡ� */
extern unsigned char h_empty_l_txt[];		/* ���ܥ���ú� */
extern unsigned char h_empty_u_txt[];		/* ���ܥ���ò� */
extern unsigned char h_empty_r_txt[];		/* ���ܥ���ñ� */
extern unsigned char g_key_txt[];		/* ���󥸥�� */
extern unsigned char rupy_txt[];		/* ��ԡ� */
extern unsigned char h_timer_txt[];		/* ���� */
extern unsigned char g_go_font1_txt[];		/* �ǣ��ͣţϣ֣ţ� */
extern unsigned char g_go_font2_txt[];		/* �ǣ��ͣţϣ֣ţ� */
extern unsigned char g_go_font3_txt[];		/* �ǣ��ͣţϣ֣ţ� */
extern unsigned char g_go_mable_txt[];		/* �ǣ��ͣţϣ֣ţ� */
extern unsigned char h_s_a_txt[];		/* ���� �� */
extern unsigned char h_s_und_txt[];		/* ���� �ú��� */
extern unsigned char h_s_r_txt[];		/* ���� �ú��� */
extern unsigned char h_s_l_txt[];		/* ���� �ú��� */
extern unsigned char h_s_up_txt[];		/* ���� �ú��� */
extern unsigned char h_to_txt[];		/* �Ȳ����� */
extern unsigned char h_navi_txt[];		/* �ʥ��� */
extern unsigned char h_navi_nes_txt[];		/* �ʥ��� */

/* shape/TEXTURE/PARAMETER/others/rgb :  ����¾ */
extern unsigned char g_muti_txt[];		/* �ܥ᡼���� */
extern unsigned char h_fm_ent_txt[];		/* �Ͼ�:���󥸥������ */
extern unsigned char h_dm_boss_txt[];		/* �ܥ� */
extern unsigned char h_dm_box_txt[];		/* ��Ȣ */

/* shape/TEXTURE/PARAMETER/rupy_num : ��ԡ��ѿ��� */
extern unsigned char rupy_num0_txt[];
extern unsigned char rupy_num1_txt[];
extern unsigned char rupy_num2_txt[];
extern unsigned char rupy_num3_txt[];
extern unsigned char rupy_num4_txt[];
extern unsigned char rupy_num5_txt[];
extern unsigned char rupy_num6_txt[];
extern unsigned char rupy_num7_txt[];
extern unsigned char rupy_num8_txt[];
extern unsigned char rupy_num9_txt[];
extern unsigned char rupy_num_colon_txt[];

/* shape/TEXTURE/PARAMETER/num_s : �����ƥ��ѿ��� */
extern unsigned char num_s0_txt[];
extern unsigned char num_s1_txt[];
extern unsigned char num_s2_txt[];
extern unsigned char num_s3_txt[];
extern unsigned char num_s4_txt[];
extern unsigned char num_s5_txt[];
extern unsigned char num_s6_txt[];
extern unsigned char num_s7_txt[];
extern unsigned char num_s8_txt[];
extern unsigned char num_s9_txt[];
extern unsigned char num_ss_txt[];	// 1/2




# if 0
/* shape/TEXTURE/PARAMETER/dokidoki : �쥯���󥰥� */
extern unsigned char heart0_txt[];
extern unsigned char heart4_txt[];
/* shape/TEXTURE/DMA_MAKE/DOKIDOKI/dokidoki_heart_idx.o : �饤�ե����� */
# endif
/* shape/TEXTURE/PARAMETER/heart : �쥯���󥰥� */
extern unsigned char heart20_txt[];
extern unsigned char heart21_txt[];
extern unsigned char heart22_txt[];
extern unsigned char heart23_txt[];
extern unsigned char heart24_txt[];




/* shape/TEXTURE/PARAMETER/m_meter : ��ˡ�᡼���� */
extern unsigned char g_m_meter1_txt[];
extern unsigned char g_m_meter2_txt[];
extern unsigned char g_m_meter3_txt[];
#endif



