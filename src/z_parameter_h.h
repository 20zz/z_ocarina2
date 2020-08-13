/* $Id: z_parameter_h.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $
 * $Log: z_parameter_h.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.175  1998/10/14 08:20:03  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/05/21  01:12:28  soejima
 * Initial revision
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_PARAMETER_H_H
#define INCLUDE_Z_PARAMETER_H_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_save_area_h.h"




/************************************************************************
 *									*
 *	��������� �ѥ�᡼����						*
 *				1997ǯ05��21��(������) 10��00ʬ00�� JST *
 *									*
 ************************************************************************/
/* �����ƥ��ֹ�ɽ */
enum {
    H_stick,		/* 00�إǥ������٣��� */
    H_deku_nut,		/* 01�إǥ��μ¡٣��� */
    H_bomb_1,		/* 02�����ơ٣��� */
    H_bow,		/* 03�������εݡ٣��� */
    H_arrow_1,		/* 04�ر����� */
    H_goddess_1,	/* 05�إǥ���α�� */
    H_pachinko,		/* 06�إѥ��󥳡٣����� */
    H_ocarina_1,	/* 07�������Υ�����ʡ� */
    H_ocarina_2,	/* 08�ػ��Υ�����ʡ� */
    H_bomb_2,		/* 09�إܥ���奦�٣����� */
    H_S_hookshot,	/* 10�إ��硼�ȡ��եå�����åȡ� */
    H_L_hookshot,	/* 11�إ�󥰡��եå�����åȡ� */
    H_arrow_2,		/* 12��ɹ����� */
    H_goddess_2,	/* 13�إե������� */
    H_boomerang,	/* 14�إ֡������ */
    H_magicglass,	/* 15�ؤޤ��Ȥ���ᥬ�͡� */
    H_bean,		/* 16����ˡ�Υޥ�� */
    H_hammer,		/* 17�إᥬ�ȥ�ϥ�ޡ��� */
    H_arrow_3,		/* 18�ظ������ */
    H_goddess_3,	/* 19�إ͡���ΰ��� */
    H_bottle,		/* 20�ض��ӡ� */
    H_bottle_1,		/* 21���֡ʥ饤�աˡ� */
    H_bottle_2,		/* 22���С���ˡ�ˡ� */
    H_bottle_3,		/* 23���ġʥ饤�ա���ˡ�ˡ� */
    H_bottle_4,		/* 24�������κ��� */
    H_bottle_5,		/* 25�ص��� */
    H_bottle_6,		/* 26�إ��������� */
    H_bottle_7,		/* 27�إ�Ȥμ��� */
    H_bottle_8,		/* 28�ر�� */
    H_bottle_9,		/* 29�إॷ�� */
    H_bottle_10,	/* 30�إӥå����ݥ��� */
    H_bottle_11,	/* 31�إ���������Ⱦʬ�ˡ� */
    H_bottle_12,	/* 32�إݥ��� */
    H_reserve_00,	/* 33��餷�ٻҶ��ؤդ����ʥ��ޥ��� */
    H_reserve_01,	/* 34        �Ҷ��ؤᤶ�ޤ��ȥ�� */
    H_reserve_02,	/* 35        �Ҷ��إ�����μ��� */
    H_reserve_03,	/* 36        �Ҷ��إ�������Τ��̡� */
    H_reserve_04,	/* 37        �Ҷ��إɥ���Τ��̡� */
    H_reserve_05,	/* 38        �Ҷ��ؤ��綠���ʤ��̡� */
    H_reserve_06,	/* 39        �Ҷ��إ������������ */
    H_reserve_07,	/* 40        �Ҷ��إ����Τ��̡� */
    H_reserve_08,	/* 41        �Ҷ��إ�����Τ��̡� */
    H_reserve_09,	/* 42        �Ҷ��إ���ɤΤ��̡� */
    H_reserve_10,	/* 43        �Ҷ��ؤޤ��Ȥβ��̡� */
    H_reserve_11,	/* 44        �Ҷ��أӣϣ̣Ĩ��ϣգԡ� */
    H_reserve_20,	/* 45��餷����͡إݥ��åȥ��ޥ��� */
    H_reserve_21,	/* 46        ��͡ؤƤΤꥳ�å��� */
    H_reserve_22,	/* 47        ��͡إ������� */
    H_reserve_23,	/* 48        ��͡ؤ��䤷�����Υ��� */
    H_reserve_24,	/* 49        ��͡ؤ��䤷������ */
    H_reserve_25,	/* 40        ��͡�̩�ļԤΥΥ������ */
    H_reserve_26,	/* 41        ��͡��ޤ줿�������� */
    H_reserve_27,	/* 52        ��͡ؽ�������� */
    H_reserve_28,	/* 53        ��͡إ���ޥ������ */
    H_reserve_29,	/* 54        ��͡��������������� */
    H_reserve_30,	/* 55        ��͡إ������������� */
    H_m_bow_1,		/* 56�ر�εݡ� */
    H_m_bow_2,		/* 57��ɹ�εݡ� */
    H_m_bow_3,		/* 58�ظ��εݡ� */
    H_sword_0,		/* 59�إʥ��ա� */
    H_sword_1,		/* 60�إޥ����������ɡ� */
    H_sword_2,		/* 61�ص�ͤΥʥ��ա� */
    H_shield_1,		/* 62�إǥ��ν�� */
    H_shield_2,		/* 63�إϥ��ꥢ�ν�� */
    H_shield_3,		/* 64�إߥ顼������ɡ� */
    H_clothes_1,	/* 65�ؤ��Ĥ������ */
    H_clothes_2,	/* 66�إ��������� */
    H_clothes_3,	/* 67�إ���������� */
    H_boots_1,		/* 68�ؤ��Ĥ�Υ֡��ġ� */
    H_boots_2,		/* 69�إإӥ��֡��ġ� */
    H_boots_3,		/* 70�إۥС��֡��ġ� */
    H_dekupouch_1,	/* 71�إǥ��Υ����ޡʣ����ˡ� */
    H_dekupouch_2,	/* 72�إǥ��Υ����ޡʣ����ˡ� */
    H_dekupouch_3,	/* 73�إǥ��Υ����ޡʣ����ˡ� */
    H_arrowcase_1,	/* 74�ؾ�������Ω�ơʣ����ˡ� */
    H_arrowcase_2,	/* 75���礭����Ω�ơʣ����ˡ� */
    H_arrowcase_3,	/* 76�ؤ�ä��礭����Ω�ơʣ����ˡ� */
    H_bombpouch_1,	/* 77�ؾ������ޡʣ����ˡ� */
    H_bombpouch_2,	/* 78���礭���ޡʣ����ˡ� */
    H_bombpouch_3,	/* 79�ؤ�ä��礭���ޡʣ����ˡ� */
    H_bracelet,		/* 80��Ƽ�Υ֥쥹��åȡ� */
    H_gloves_1,		/* 81�ض�Υ����֡� */
    H_gloves_2,		/* 82�ض�Υ����֡� */
    H_scale_1,		/* 83�ض�Υ����� */
    H_scale_2,		/* 84�ض�Υ����� */
    H_sword_3,		/* 85���ޤ줿��ͤΥʥ��ա� */
    H_purse_2,		/* 86����ͤΤ��޸��� */
    H_purse_3,		/* 87�����������޸��� */
    H_deku_seed,	/* 88�إǥ��Υ��͡� */
    H_rod,		/* 89�ؤĤꤶ���� */
    H_melody_1,		/* 90�����Υ�̥��åȡ� */
    H_melody_2,		/* 91�ر�Υܥ��� */
    H_melody_3,		/* 92�ؿ�Υ���ʡ��ǡ� */
    H_melody_4,		/* 93�غ��Υ쥯������� */
    H_melody_5,		/* 94�ذǤΥΥ�������� */
    H_melody_6,		/* 95�ظ��Υץ��塼�ɡ� */
    H_melody_9,		/* 96�إ�����λҼ�Ρ� */
    H_melody_8,		/* 97�إ��ݥʤβΡ� */
    H_melody_7,		/* 98�إ��ꥢ�βΡ� */
    H_melody_10,	/* 99�����ۤβΡ� */
    H_melody_11,	/*100�ػ��βΡ� */
    H_melody_12,	/*101����βΡ� */
    H_seal_medal_1,	/*102�إ��ꥢ�������� */
    H_seal_medal_2,	/*103�إ���˥��������� */
    H_seal_medal_3,	/*104�إ�Ȥ������� */
    H_seal_medal_4,	/*105�إʥܡ���������� */
    H_seal_medal_5,	/*106�إ���Ѥ������� */
    H_seal_medal_6,	/*107�إ饦��������� */
    H_holystone_1,	/*108�إ�����Υҥ����� */
    H_holystone_2,	/*109�إ����Υ�ӡ��� */
    H_holystone_3,	/*110�إ�����Υ��ե������� */
    H_shake_stone,	/*111�ؤ�����С� */
    H_gerudoC,		/*112�إ���ɤβ���ڡ� */
    H_N_coin, 		/*113�أΥ������ */
    H_heart,		/*114�إϡ��Ȥδ�� */
    H_heartpiece,	/*115�إϡ��ȷ��ҡ� */
    H_boss_key,		/*116�إܥ��������� */
    H_compass,		/*117�إ���ѥ��� */
    H_map,		/*118�إޥåס� */
    H_key,		/*119�إ��󥸥��θ���*/
    H_magic_pot_0,	/*120����ˡ���ۡʾ��ˡ�*/
    H_magic_pot_1,	/*121����ˡ���ۡ���ˡ�*/
    H_heart_1,		/*122�إϡ��Ȥη��ҡʣ������ˡ� */
    H_heart_2,		/*123�إϡ��Ȥη��ҡʣ������ˡ� */
    H_heart_3,		/*124�إϡ��Ȥη��ҡʣ������ˡ� */
    H_note_1,		/*125�ز��䡧��� */
    H_note_2,		/*126�ز��䡧���� */
    H_note_3,		/*127�ز��䡧���� */
    H_note_4,		/*128�ز��䡧���� */
    H_note_5,		/*129�ز��䡧���� */
    H_lonron_milk,	/*130�إ�����������̣�ˡ� */
    H_life,		/*131�ز����ϡ��ȡ� */
    H_rupy00,		/*132�إ�ԡ��Сʣ���ԡ��ˡ� */
    H_rupy01,		/*133�إ�ԡ��ġʣ���ԡ��ˡ� */
    H_rupy02,		/*134�إ�ԡ��֡ʣ�����ԡ��ˡ� */
    H_rupy03,		/*135�����ԡ��ʣ�����ԡ��ˡ� */
    H_rupy04,		/*136�������ԡ��ʣ�������ԡ��ˡ� */
    H_rupy05,		/*137�ض�Υ�ԡ��ʣ�����ԡ��ˡ� */
    H0_stick,		/*138�إǥ������٣��� */
    H1_stick,		/*139�إǥ������٣����� */
    H0_deku_nut,	/*140�إǥ��μ¡٣��� */
    H1_deku_nut,	/*141�إǥ��μ¡٣����� */
    H0_bomb_1,		/*142�����ơ٣��� */
    H1_bomb_1,		/*143�����ơ٣����� */
    H2_bomb_1,		/*144�����ơ٣����� */
    H3_bomb_1,		/*145�����ơ٣����� */
    H0_arrow,		/*146����٣����� */
    H1_arrow,		/*147����٣����� */
    H2_arrow,		/*148����٣����� */
    H0_deku_seed,	/*149�إǥ��Υ��͡٣����� */
    H0_bomb_2,		/*150�إܥ���奦�٣��� */
    H1_bomb_2,		/*151�إܥ���奦�٣����� */
    H0_stick_bag,	/*152�إǥ������٣������� */
    H1_stick_bag,	/*153�إǥ������٣������� */
    H0_deku_nut_bag,	/*154�إǥ��μ¡٣������� */
    H1_deku_nut_bag,	/*155�إǥ��μ¡٣������� */
    H_map00,		/* �ظ��Ƥκ����� */
    H_map01,		/* �إ���ɤκ֡� */
    H_map02,		/* �إ���ɤ�ë�� */
    H_map03,		/* �إϥ��ꥢ���ʡ� */
    H_map04,		/* �إ�����Ҿ�� */
    H_map05,		/* �ؾ벼Į�� */
    H_map06,		/* �إϥ����ʿ���� */
    H_map07,		/* �إǥ��ޥ���ƥ�� */
    H_map08,		/* �إ����ꥳ¼�� */
    H_map09,		/* ���¤��ο��� */
    H_map10,		/* �إ�����ο��� */
    H_map11,		/* �إ������Τ�� */
    H_place00,		/* �إϥ����ʿ���� */
    H_place01,		/* �إ����ꥳ¼�� */
    H_place02,		/* �����ϡ� */
    H_place03,		/* �إ�������� */
    H_place04,		/* �إ�����ο��� */
    H_place05,		/* �ؿ�������� */
    H_place06,		/* �إϥ��ꥢ���ʡ� */
    H_place07,		/* �إ������Τ�� */
    H_place08,		/* �إ���������� */
    H_place09,		/* �إ���ɤ�ë�� */
    H_place10,		/* ���¤��ο��� */
    H_place11,		/* �ص���ٿ����� */
    H_place12,		/* �إ���ɤκ֡� */
    H_place13,		/* �ظ��Ƥκ����� */
    H_place14,		/* �ؾ벼Į�� */
    H_place15,		/* �إϥ������ */
    H_place16,		/* �إǥ��ޥ���ƥ��л�ƻ�� */
    H_place17,		/* �إǥ��ޥ���ƥ�и��� */
    H_place18,		/* �إ���󥷥ƥ��� */
    H_place19,		/* �إ�����Ҿ�� */
    H_place20,		/* �ء��� */
    H_place21,		/* �إ��Υ��� */
    H_Botton_Select,	/* �إܥ��������� */
    H_power_1,		/* �ر�Υѥ�� */
    H_power_2,		/* ��ɹ�Υѥ�� */
    H_power_3,		/* �ظ��Υѥ�� */
    H_Icon_Item_Point
};
#define	BEAN_COUNT H_hammer

/* �����ƥ����� */
extern void
item_textuer_dma( Game_play *game_play, unshort item_no );
extern void
item_textuer_dma1( Game_play *game_play, unshort item_no );


# if 0
/* �����ƥ���������å� */
extern unchar
item_get_check( unchar item_no );
# endif
/* �����ƥ�������åƥ��� */
extern unchar
item_get_setting( Game_play *game_play, unchar item_no );
/* �����ƥॻ�åƥ��� */
extern unchar
item_get_non_setting( unchar item_no );
/* �����ƥ����إ��åƥ��� */
extern char
item_change_setting( Game_play *game_play, unshort item0, unshort item1 );
/* �£ϣԣԣ̣š���ȡ��㤨�뤫�ɤ����Υ����å����� */
extern int
findEmptyBottle( void );
/* �£ϣԣԣ̣š���ȡ˥����å� */
extern int
bottle_interior_check( unchar item_no );
/* �£ϣԣԣ̣š���ȡ˼������� */
extern void
bottle_getting( Game_play *game_play, unchar item_no, unchar c_no );
/* �£ϣԣԣ̣š��������ѥ����å���*/
extern char
bottle_fairy_use( Game_play *game_play );
/* �ǡ��������� */
#define	I_IT_PT	(32*32*4)
#define	I_IT_P1	(24*24*4)
#define	I_IT_P2	((24*24)/2)

/* �ţ����𥢥��ƥ��ֹ�ɽ */
enum {
    E_Sword,
    E_Shield,
    E_Clothes,
    E_Boots,
    E_Point
};
enum {
    E_sword_0,		/* �إʥ��ա� */
    E_sword_1,		/* �إޥ����������ɡ� */
    E_sword_2,		/* �ص�ͤΥʥ��ա� */
    E_sword_z,
    E_shield_1,		/* �إǥ��ν�� */
    E_shield_2,		/* �إϥ��ꥢ�ν�� */
    E_shield_3,		/* �إߥ顼������ɡ� */
    E_shield_z,
    E_clothes_1,	/* �ؤ��Ĥ������ */
    E_clothes_2,	/* �إ��������� */
    E_clothes_3,	/* �إ���������� */
    E_clothes_z,
    E_boots_1,		/* �ؤ��Ĥ�Υ֡��ġ� */
    E_boots_2,		/* �إإӥ��֡��ġ� */
    E_boots_3,		/* �إۥС��֡��ġ� */
    E_item
};
/* �Σ��ţ����𥢥��ƥ��ֹ�ɽ */
enum {
    NE_Bow,		/* ���� */
    NE_Bomb,		/* ���� */
    NE_Grove,
    NE_Scale,
    NE_Purse,		/* ���� */
    NE_Pachinko,	/* �ѥ��� */
    NE_Stick,		/* �ǥ����� */
    NE_Deck_Nut,	/* �ǥ��μ� */
    NE_Point
};


/*
 * �ģϥ��������
 */
/* �ݥ���� ���å� */
extern void
do_action_point_set( Game_play *game_play, unshort action );
#define	DO_ACTION_POINT_SET( game_play, action ) do_action_point_set( game_play, action )
extern void
do_action_navi_set( Game_play *game_play, unshort action );
#define	DO_ACTION_NAVI( game_play, action ) do_action_navi_set( game_play, action )
extern void
sp_action_set( Game_play *game_play, unshort action );
#define	DO_ACTION_SPECIAL( game_play, action ) sp_action_set( game_play, action )
/* �ݥ��� */
enum {
    DO_Attack,		/* �إ����å��� */
    DO_Check,		/* �إ����å��� */
    DO_Hairu,		/* �ؤϤ���� */
    DO_Modoru,		/* �ؤ�ɤ�� */
    DO_Hiraku,		/* �ؤҤ餯�� */
    DO_Jump,		/* �إ����ס� */
    DO_Kettei,		/* �ؤ��äƤ��� */
    DO_Moguru,		/* �ؤ⤰��� */
    DO_Lash,		/* �إ���� */
    DO_Nageru,		/* �ؤʤ���� */
    DO_Navi,		/* �إʥӥ��� */
    DO_Noru,		/* �ؤΤ�� */
    DO_Oku,		/* �ؤ����� */
    DO_Oriru,		/* �ؤ����� */
    DO_Save,		/* �إ����֡� */
    DO_Syaberu,		/* �ؤ���٤�� */
    DO_Tsugihe,		/* �ؤĤ��ء� */
    DO_Tukamu,		/* �ؤĤ���� */
    DO_Yameru,		/* �ؤ���� */
    DO_Simau,		/* �ؤ��ޤ��� */
    DO_Maku,		/* �ؤޤ��� */
    DO_Moguru1,		/* �أ��� */
    DO_Moguru2,		/* �أ��� */
    DO_Moguru3,		/* �أ��� */
    DO_Moguru4,		/* �أ��� */
    DO_Moguru5,		/* �أ��� */
    DO_Moguru6,		/* �أ��� */
    DO_Moguru7,		/* �أ��� */
    DO_Moguru8,		/* �أ��� */
    DO_F_Navi,		/* ���ǡإʥӥ��ٳ��� */
    DO_P_Navi,		/* ���ǡإʥӥ��ٳ��ϡʲ��դ���*/
    DO_E_Navi,		/* ���ǡإʥӥ��ٽ�λ */
    DO_S_Yameru,	/* ������ʡؤ���� */
    DO_S_Kettei,	/* ���쥤�ɡؤ��äƤ��� */
    DO_S_Modoru,	/* ���쥤�ɡؤ�ɤ�� */
    DO_Action_Point
};
/* �ǡ��������� */
#define	G_B_PT	(48*16/2)






/*
 * ��ˡ�᡼����
 */
enum {
    Magic_Null,		/* ̵�� */
    Magic_Attack,	/* ���� */
    Magic_Hit,		/* �ƣɣң� */
    Magic_Wait,		/* ��λ�Ԥ� */
    Magic_Save,		/* ��ˡ���� */
    Magic_End,		/* ��λ */
    Magic_Defence,	/* ��� */
    Magic_Glass,	/* �ޤ��Ȥ����� */
    Magic_Start,	/* ��ˡ�᡼�����ϣ� */
    Magic_Charge,	/* ���� */
    Magic_Recovery,	/* �ͣв��� */
    Magic_Point
};
/* ��ˡ�᡼�������Ž��� */
extern short
magic_meter_check( Game_play *game_play, short count, short magic_type );
extern void
/* ��ˡ�᡼�������֥����å� */
magic_mode_check( Game_play *game_play );

#define MAGIC_CHARGE( game_play, mp, magic_type ) magic_meter_check( game_play, mp, magic_type )
/* ��ˡȯư */
#define MAGIC_FIRE( game_play )		(ZCommonSet( magic_flag, Magic_Hit))
/* ��ˡ����󥻥� */
extern void
magic_cancel_check( Game_play *game_play );
#define MAGIC_CANCEL( game_play ) 	magic_cancel_check( game_play )
/* ��ˡ�ɥ�� */
#define MAGIC_DRINK( game_play ) 	magic_mode_check( game_play )
/* ��ˡ�᡼����ɽ�����֥ǡ��� */
#define MAGIC_VALUE	48	/* ��ˡ�᡼���� ���ʾ����̡�ɽ�����֣� */
#define MAGIC_YPD	 3	/* ��ˡ�᡼���� ���ʾ����̡�ɽ�����֣� */
#define MAGIC_YSZ	10	/* ��ˡ�᡼���� ���ʾ����̡�ɽ���٥����� */
/* ��ˡ���� */
#define MAGIC_ATTACK	0	/* ������ˡ */
#define MAGIC_DEFENCE	1	/* �����ˡ */
#define MAGIC_ARROW	2	/* ��ˡ�ε��� */
#define MAGIC_GLASS	3	/* �ޤ��Ȥ���ᥬ�� */
#define MAGIC_SAVE	4	/* ��ˡ���� */
#define MAGIC_RECOVERY	5	/* �ͣв��� */

/* ���������� */
#define LIFE_DRINK( game_play ) 	(ZCommonSet( life_mode, LIFE_CT*20))
/* ���ϡʥϡ��ȣ���ʬ�˲��� */
#define MILK_DRINK( game_play ) 	(ZCommonSet( life_mode, LIFE_CT*5))




/* �饤�ե᡼���� �������� */
extern char
life_meter_play( Game_play *game_play, short count );

/* �饤�ե᡼���� �ͣ������������� */
extern void
life_meter_max( short count );

/* ��ԡ��� �������� */
extern void
lupy_increase( short count );


/* �ƥ����ƥ������ (�ǥ�����,����,�ǥ��μ�,����,�����ε���) */
extern void
item_count_vary( short kind, short count );
#define	ITEM_COUNT_VARY( kind, count )	item_count_vary( kind, count )

#define deku_stick_count( count )	item_count_vary( H_stick, count)



/*
 * �åܥ���
 */
#define BUTTON_SIZE	32
#define AB_BUTTON_SIZE	28
#define C_BUTTON_SIZE	24
#define ITEM_SIZE	32
#define A_ITEM_SIZE	26
#define C_ITEM_SIZE	22



/*
 * ����ե��ͥ��åƥ�
 */
#define ALPHA		32
extern void
alpha_change( unshort type );







/*
 * ���٥�ȥ����ޡ� �ݥ���
 */
enum {
    Event_MD0,		/* ̵�� */
    Event_MD1,		/* ���桦�� �������� */
    Event_MD2,		/* �ף��� */
    Event_MD3,		/* ��ư */
    Event_MD4,		/* ���٥�ȥ����ޡ� */
    Event_MD5,		/* ���꥿���ޡ� */
    Event_MD6,		/* ���꥿���ޡ��ף��� */
    Event_MD7,		/* ���꥿���ޡ���ư */
    Event_MD20,		/* ���ꥤ�٥�ȥ����ޡ� */
    Event_Wait,		/* ��λ�Ԥ� */
    Event_End,		/* ��λ */
    Event_MD30,		/* ���ꥤ�٥�ȥ����ޡ� */
    Event_MD31,		/* ���ꥤ�٥�ȥ����ޡ� */
    Event_MD32,		/* ���ꥤ�٥�ȥ����ޡ� */
    Event_MD33,		/* ���ꥤ�٥�ȥ����ޡ� */
    Event_MD34,		/* ���ꥤ�٥�ȥ����ޡ� */
    Event_Point
};
extern void
event_timer_set( short event_time );
/*
 * �ԣϣԣ��̥��٥�ȥ����ޡ� �ݥ���
 */
enum {
    TEvent_MD0,		/* ̵�� */
    TEvent_MD1,		/* ������������ */
    TEvent_MD2,		/* �ף��� */
    TEvent_MD3,		/* ��ư */
    TEvent_MD4,		/* ���٥�ȥ����ޡ� */
    TEvent_MD5,		/* ���٥�ȥ����ޡ� */
    TEvent_Wait,	/* ��λ�Ԥ� */
    TEvent_MD11,	/* �û��������� */
    TEvent_MD12,	/* �ף��� */
    TEvent_MD13,	/* ��ư */
    TEvent_MD14,	/* ���٥�ȥ����ޡ� */
    TEvent_MD15,	/* ���٥�ȥ����ޡ� */
    TEvent_Point
};
extern void
total_event_timer_set( short event_time );


/*
 * ήŭ��
 */
enum {
    Yabu_NULL,		/* ̵�� */
    Yabu_START,		/* �������� */
    Yabu_WAIT,		/* ��λ�Ԥ� */
    Yabu_END,		/* ��λ */
    Yabu_Point
};
extern void
yabusame_game_start( Game_play *game_play );
#define YABU_START( game_play )		yabusame_game_start( game_play )
#define	YABU_SCORE( game_play, score )	(game_play)->parameter.yabusame_score = score

#define YABU_ARROW( game_play, count )	((game_play)->parameter.yabusame_arrow += count)
#define YABU_ARROW_CT( game_play )	(game_play)->parameter.yabusame_arrow



/* �Ҷ������ �����ǥե����������� */
extern void
equip_default_set( void );



/* ��餷�٥����å��ǡ��� */
extern short 	Warashibe_item[];
extern short 	Warashibe_before_item[];


/* �ܥ���ɽ���ط��ǡ������� */
extern void
button_status_set( Game_play *game_play );
/* �ԣϣԣ��̨��ţ������ԣ��������λ */
extern void
total_event_timer_end( Game_play *game_play );



#define	LIFE_MODE		ZCommonGet( life_mode )
#define	Set_LIFE_MODE( point )	(ZCommonSet( life_mode, point ))
#define	MAGIC_FLAG		ZCommonGet( magic_flag )
#define	Set_MAGIC_FLAG( point )	(ZCommonSet( magic_flag, point ))

#define FULL_ALPHA		255 	/* �����åܥ�����Ʃ������ե��� */
#define CLEAR_ALPHA		70 	/* �����åܥ���ȾƩ������ե��� */



#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_parameter_h.h end ***/
