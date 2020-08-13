/*
 * $Id: z_common_data.h,v 2.2 2000-06-19 10:09:52+09 hayakawa Exp $
 *
 * ��������̥ǡ������
 *
 * $Log: z_common_data.h,v $
 * Revision 2.2  2000-06-19 10:09:52+09  hayakawa
 * �ѥå�������
 *
 * Revision 2.1  1998-10-22 20:45:49+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.106  1998/10/09 07:37:02  soejima
 * *** empty log message ***
 *
 * Revision 1.105  1998-10-08 23:05:44+09  soejima
 * *** empty log message ***
 *
 * Revision 1.104  1998-10-07 23:03:37+09  soejima
 * *** empty log message ***
 *
 * Revision 1.103  1998-10-06 23:07:39+09  soejima
 * *** empty log message ***
 *
 * Revision 1.102  1998-10-06 20:20:33+09  nisiwaki
 * shield_magic_timer �� Game_Info �� �ɲ�
 *
 * Revision 1.101  1998-10-03 09:44:27+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.100  1998-10-01 22:38:13+09  soejima
 * *** empty log message ***
 *
 * Revision 1.99  1998-09-30 23:05:48+09  soejima
 * *** empty log message ***
 *
 * Revision 1.98  1998-09-29 10:42:27+09  soejima
 * *** empty log message ***
 *
 * Revision 1.97  1998-09-28 17:15:18+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.96  1998-09-26 01:13:30+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.95  1998-09-25 01:49:09+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.94  1998-09-24 00:51:53+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.93  1998-09-22 17:52:01+09  soejima
 * *** empty log message ***
 *
 * Revision 1.92  1998-09-21 19:11:58+09  sasaki
 * GAME_INFO_ENDING_DEMO add
 *
 * Revision 1.91  1998/09/19 17:23:49  iwawaki
 * *** empty log message ***
 *
 * Revision 1.90  1998-09-19 22:55:15+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.89  1998-09-19 18:26:37+09  soejima
 * *** empty log message ***
 *
 * Revision 1.88  1998-09-18 23:37:44+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.87  1998/09/16 16:03:29  iwawaki
 * *** empty log message ***
 *
 * Revision 1.86  1998-09-15 23:02:34+09  soejima
 * *** empty log message ***
 *
 * Revision 1.85  1998-09-15 13:59:40+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.84  1998/09/12 14:47:46  iwawaki
 * *** empty log message ***
 *
 * Revision 1.83  1998-09-12 21:49:34+09  sasaki
 * next_zelda_time add
 *
 * Revision 1.82  1998/09/11 15:18:51  iwawaki
 * *** empty log message ***
 *
 * Revision 1.81  1998-09-10 22:57:14+09  soejima
 * *** empty log message ***
 *
 * Revision 1.80  1998-09-08 16:34:24+09  soejima
 * *** empty log message ***
 *
 * Revision 1.79  1998-09-07 18:21:17+09  soejima
 * *** empty log message ***
 *
 * Revision 1.78  1998-09-05 18:42:13+09  soejima
 * *** empty log message ***
 *
 * Revision 1.77  1998-08-22 14:18:47+09  zelda
 * *** empty log message ***
 *
 * Revision 1.76  1998-08-22 14:17:14+09  soejima
 * *** empty log message ***
 *
 * Revision 1.75  1998-08-22 14:10:39+09  soejima
 * *** empty log message ***
 *
 * Revision 1.74  1998-08-21 19:10:06+09  sasaki
 * DOUKIDEMO �ѹ�
 *
 * Revision 1.73  1998/08/20 15:13:35  iwawaki
 * *** empty log message ***
 *
 * Revision 1.72  1998-08-18 22:47:06+09  soejima
 * *** empty log message ***
 *
 * Revision 1.71  1998-08-12 22:49:38+09  soejima
 * *** empty log message ***
 *
 * Revision 1.70  1998-08-12 14:44:18+09  soejima
 * *** empty log message ***
 *
 * Revision 1.69  1998-08-03 21:44:52+09  nisiwaki
 * *** empty log message ***
 *
 * Revision 1.68  1998-07-29 22:50:42+09  soejima
 * *** empty log message ***
 *
 * Revision 1.67  1998-07-23 23:13:44+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.66  1998-07-14 22:45:32+09  soejima
 * *** empty log message ***
 *
 * Revision 1.1  1997/10/20  03:02:31  hayakawa
 * Initial revision
 *
 */

#ifndef __Z_COMMON_DATA_H_
#define __Z_COMMON_DATA_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_scene.h"
#include "audio.h"
#include "z_scene_table.h"


enum {
    GAME_INFO_GAME,			/* �̾沈����		*/
    GAME_INFO_OPENING_DEMO,		/* �����ץ˥󥰥ǥ�	*/
    GAME_INFO_OPENING_SELECT,		/* �����ץ˥󥰥��쥯�� */
    GAME_INFO_ENDING_DEMO		/* ����ǥ��󥰥ǥ�	*/
};



typedef struct {
    unchar	newf[6];		/* �Σ���ե����롦�ե饰 */

    unshort	savect;			/* �����֥������ */

    unchar	player_name[8];		/* �ץ쥤�䡼��Ͽ̾�� */

    short	f_64dd;			/* �����ģĥե饰 */

    short	max_life;		/* ����̣���� */
    short	now_life;		/* ���ߣ̣���� */
    
    signed char	magic_max;		/* ��ˡ�᡼�����ͣ������̥ݥ��� */
    signed char	magic_now;		/*             ������ */

    short	lupy_count;		/* ��ԡ��� */

    unshort	long_sword_hp;		/* ��ͤΥʥ��գȣ� */

    unshort	navi_timer;		/* �ʥ����ԣɣͣţ� */

    unchar	magic_mode;		/* ��ˡ���� */
    
    unchar	sword_ability;		/* ������ǽ�ʥ����ڤ����û�̡�*/
    unchar	magic_ability;		/* ��ˡ����ǽ����ˡ���Ѳ�ǽ���ܡ�*/
    unchar	life_ability;		/* �̣ɣƣŤ���ǽ�ʣ̣ɣƣŸ���Ⱦʬ��*/

    unchar	last_sword;		/* �Ǹ�η��ե饰���ޤ�ʤ���ͤΥʥ��ա�*/

    unchar	ocarina_round;		/* �ؾ��ݥ��� */
    
    /* �Ҷ������� */
    unchar	child_register_item[4];		/* ��Ͽ�����ƥ� */
    unchar	child_register_item_pt[3];	/* ��Ͽ�����ƥ�ݥ��󥿡� */
    unshort	child_equip_item;		/* �ݥ��󥿡�����Ͽ */
    /* ��ͻ����� */
    unchar	adult_register_item[4];		/* ��Ͽ�����ƥ� */
    unchar	adult_register_item_pt[3];	/* ��Ͽ�����ƥ�ݥ��󥿡� */
    unshort	adult_equip_item;		/* �ݥ��󥿡�����Ͽ */

    /* �ף��ң� */
    xyz_t		position;	/* ��ץݥ���ȥץ쥤�䡼��ɸ */
    short		angle_y;	/*       ��      �ץ쥤�䡼���� */
    Scene_No		scene;		/*       ��      ������Σ� */
    unchar		room_ID;	/*       ��      �����Σ� */
    unchar		flag;		/*	 ��      ���åȥե饰 */


    short		scene_data_ID;	/* ������ǡ����Σ� */
} Privatef_t;

typedef struct {
    unchar	register_item[4];	/* ��Ͽ�����ƥ� */
    unchar	register_item_pt[3];	/* ��Ͽ�����ƥ�ݥ��󥿡� */

    /* ���� */
    unshort	equip_item;		/* �ݥ��󥿡�����Ͽ */
/*    5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
     | �֡���|  ��   |  ��   |  ��   |
     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+	*/
} Used_t;

typedef struct {
    /*---------- �ɣԣţ� ----------*/
    unchar	item_register[6*4];	/* �ɣԣţ���Ͽ */
    signed char	item_count[16];		/* �ɣԣţͿ� : 0 : �ǥ�����
					                1 : �ǥ��μ�
					                2 : ����
					                3 : �����ε�
							4 :
							5 :
							6 : �ѥ���
							7 : �������
							8 : �ܥ���奦
					                9 : �եå�����å�
					               10 : 
					               11 :
					               12 : �֡�����
					               13 : �ޤ��Ȥ���ᥬ��
					               14 : ��ˡ�Υޥ�
					               15 : �ᥬ�ȥ�ϥ�ޡ�  */

    /*---------- �ţѣգɣУͣţΣ� ----------*/
    /* ���������ƥ� */
    unshort	equip_register;		/* �£����on/off����Ͽ */
/*    5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
     | �֡���|  ��   |  ��   |  ��   |
     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+	*/

    /* �����������ƥ� */
    long	non_equip_register;	/* �ݥ��󥿡�����Ͽ */
/*    1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
     |                 |���� |���� |���� |������| ���ێ� |���� |���� |��Ω |
     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+	*/


    /*---------- �ãϣ̣̣ţã� ----------*/
#define C_SEAL		6		/* �����ͣ��ؿ� */
#define C_MELODY	12		/* ����ͣ��ؿ� */
#define C_HOLY		3		/* �����Уͣ��ؿ� */
#define C_ITEM		3		/* �����ƥ�ͣ��ؿ� */
#define C_HEART		1		/* �ϡ��Ȥη��ңͣ��ؿ� */
#define COLLECT_MAX	(C_SEAL+C_MELODY+C_HOLY+C_ITEM+C_HEART)	/* �ãϣ̣̣ţã� �ͣ��ؿ� */
    long	collect_register;	/* �£����on/off����Ͽâ��,�ϡ��ȷ��ҤΤߥݥ��󥿡� */
/*    1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
     | | �ʎ��� | | | | ��[4] |����3|        ����[12]       |  ����[6]  |
     +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+	*/

    /*---------- �ͣ��� ----------*/
    unchar	key_compass_map[20];	/* �ܥ�������,����ѥ�,�ޥå� */
    signed char	key_register[20];	/* ����Ͽ */
    /* key_register[19]	������ �ϡ������� */



    short	n_coin_total;		/* �Ρݣãϣɣ���� */
} Table_t;

#define ri_idx0	128
#define ri_idx1	7
typedef struct {
    long	room_inf[ri_idx0][ri_idx1];	/*  ������Ȣ
						 *  ���������å�
						 *  ����Ũ����
						 *  ���������ƥࣰ
						 *  ���������ƥࣱ
						 *  ������������(MAP-ON/off)
						 *  ����������
						 */
    /* �⥹��������ʣ�������*/
    /* �ϥ�������    �ʣ�������*/


    unshort	event_chk_inf[14];		/* �ţ֣ţΣԥ����å��£������ */
    unshort	item_get_inf[4];		/* �����ƥ�������� */
    unshort	inf_table[30];			/* ��å����������å��£������ */
////////    unchar	hold_sword;		/* inf_table[29] : ������äƤ���ե饰 ����HOLD ����NON	*/

    int		scene_no_dungeon;	/* ���󥸥�󥷡����ֹ� */

    long	area_arrival;		/* ���ңţ�����ơ��֥� */
    int		dungeon_information;	/* ���󥸥��Ҳ���� */

    unchar	oca_rec_flag;		/* Ͽ���ƻ��ҥե饰 */
    unchar	oca_rec_buff[900];	/* Ͽ���ƻ��ң£գƣ� */
    unchar	oca_rec_flag8;		/* ����Ͽ���ƻ��ҥե饰 */
    unchar	oca_rec_buff8[128];	/* ����Ͽ���ƻ��ң£գƣ� */
} Information_t;

typedef struct {
    short		spot_no;		/* �ӣУϣ��ֹ� */
    short		horse_x;		/* �ϣغ�ɸ */
    short		horse_y;		/* �ϣٺ�ɸ */
    short		horse_z;		/* �ϣں�ɸ */
    short		horse_a;		/* �ϣ��Σǣ̣� */
} Horse_t;

typedef struct {
    unshort	check_sum;		/* �����å������� */
} Save_t;



typedef struct {
    Privatef_t		privatef;		/* �ץ饤�١��ȡ��ǡ��� */

    Used_t 		used;			/* �����桦�ǡ��� */

    Table_t		table;			/* �ơ��֥롦�ǡ��� */

    Information_t	information;		/* ���󥸥���Ͼ�ƾ��� */

    Horse_t		horse;			/* �Ͼ��� */

    Save_t		save;			/* �ӣ��֣ť����å����� */
} Memory;

/*----------------------------------------------------------------------*
 *
 *	�����ॹ��������
 *
 *----------------------------------------------------------------------*/
enum {
    RESTART_MODE_DOWN,		/* �����Ǥ���ƺƥ������� */
    RESTART_MODE_RETURN,	/* ��פ��Ƥ��Ƶ���ƥ������� */
    RESTART_MODE_WARP		/* ������ˡ�����ݥ���� */
};

typedef struct {
    xyz_t		player_pos;	/* ����ƥ������ȥץ쥤�䡼��ɸ */
    short		player_angle_y;	/*       ��      �ץ쥤�䡼���� */
    short		player_mode;	/*       ��      �ץ쥤�䡼�и��⡼�� */
    Scene_No		scene;		/*       ��      ������Σ� */
    unsigned char	room_ID;	/*       ��      �����Σ� */
    signed char		work;		/*       ��      ���ѥǡ��� */
    unsigned long	sw2;		/*       ��      ���󥸥�󥻡��֥����å��ե饰�ʣ����ӥåȡ� */
    unsigned long	item2;		/*       ��      ���󥸥�󥻡��֥����ƥ�ե饰�ʣ����ӥåȡ� */
} Game_Restart_Data;

#define	GUIDE_STATUS_HEAT_AREA	(1)		/* �ⲹ���᡼�����ꥢ��å����� */
#define	GUIDE_STATUS_DIVE_AREA	(1<<1)		/* ������᡼�����ꥢ��å����� */

typedef struct {
    int			mode;
    int			counter;
    
    int			restart_flag;		/* ����ƥ������ȥե饰 */
    Game_Restart_Data	restart_data[3];	/* ����ƥ������ȥǡ��� */

    float		player_wipe_speedF;	/* �ץ쥤�䡼�磻�׻�®�� */
    u16			player_wipe_door_SE;	/* �ץ쥤�䡼�ɥ��磻�ףӣť��åȥե饰 */
    unsigned char	player_wipe_item;	/* �ץ쥤�䡼�磻�׻������ƥ����� */

    unsigned char	next_walk;		/* �������ɤˤ�륷�����ڤ��ؤ��ե饰 */
    short		dog_flag;		/* ��Ϣ��ե饰 */

    unsigned char	guide_status;		/* �����ɥ�å���������ե饰 */
    unsigned char	name_display;		/* ������̾ɽ���ե饰 */

    short		shield_magic_timer;
} Game_Info;


/*
 *  ��ա�����ա�����ա�����ա�����ա�����ա�������ա�����ա�����ա�������ա���
 *  ��ա�����ա�����ա�����ա�����ա�����ա�������ա�����ա�����ա�������ա���
 *  ��ա�����ա�����ա�����ա�����ա�����ա�������ա�����ա�����ա�������ա���
 *  ��ա�����ա�����ա�����ա�����ա�����ա�������ա�����ա�����ա�������ա���
 *  ��ա���                                                                    ��ա���
 *  ��ա���    ��z_common_data_t����֣ӣ��֣šפ��ѿ����ɲä������ˤ�,        ��ա���
 *  ��ա���    ���Ρ�SAVE_BASE�ۤˤ��Save_Size +\�٤��ɲä��Ƥ����Ʋ�������   ��ա���
 *  ��ա���                                                      by����        ��ա���
 *  ��ա���                                                                    ��ա���
 *  ��ա�����ա�����ա�����ա�����ա�����ա�������ա�����ա�����ա�������ա���
 *  ��ա�����ա�����ա�����ա�����ա�����ա�������ա�����ա�����ա�������ա���
 *  ��ա�����ա�����ա�����ա�����ա�����ա�������ա�����ա�����ա�������ա���
 *  ��ա�����ա�����ա�����ա�����ա�����ա�������ա�����ա�����ա�������ա���
 */
#define Save_Size	(sizeof(int)/sizeof(unchar))
#define SAVE_BASE	( Save_Size +\
                          Save_Size +\
                          Save_Size +\
                          Save_Size +\
                          Save_Size +\
                          Save_Size +\
			  Save_Size )


typedef struct z_common_data_s {
    /* �ӣ��֣� */
    int 		scene_no;		/* �������ֹ� */

    int			link_age;		/* ��󥯤�ǯ��ե饰�ʣ�����ǯ ������ǯ�� */

    int			day_time;		/* ����°��	*/
    unsigned short	zelda_time;		/* ���߻���	*/
    int			asahiru_fg;		/* ī��ե饰	*/

    int			totalday;		/* ������	8/21 sasa add */
    int			eventday;		/* ���٥������	8/21 sasa add */

    Memory		memory;			/* �ץ쥤�䡼�ĿͿ������� */
    /* �嵭�Ρ���ա����ۤ򸫤Ƥ������������������������� */



    /* �ΣϨ��ӣ��֣� */
    int 		file_no;		/* ����ƣ����ֹ� */

    int			next_link_age;		/* ���Υ�󥯤�ǯ��ե饰�ʣ�����ǯ ������ǯ�� */

    Game_Info		game_info;		/* ���������		*/

    short		lupy_udct;		/* ��ԡ�������		*/

    short		event_fg;		/* ���٥�ȥե饰 */
    short		event_tm;		/* ���٥�ȥ����ޡ� */
    short		total_event_fg;		/* �ԣϣԣ��̥��٥�ȥե饰 */
    short		total_event_tm;		/* �ԣϣԣ��̥��٥�ȥ����ޡ� */
    short		event_xp[2];		/* �ţ֣ţΣԥ����ޡ�ɽ���ذ��� */
    short		event_yp[2];		/*                   ɽ���ٰ��� */

    short		aaaaaaaa; 	/* �����Ƥ�� */

    unsigned char	old_bgm;		/* ����BGM */
    unsigned char	old_env;		/* ����Ķ��� */

    unchar	button_item[5];		/* ��¸�£��������ɣԣţ͡ʣ¡ˡʺ��ˡʲ��ˡʱ��ˡʣ���*/
    unchar	ck_fg;			/* �����ɣԣţ����إե饰 */

    unshort	alpha_type;		/* �᡼�������̣Уȣ����ԣ٣У� */
    unshort	prev_alpha_type;	/* ���ߥ᡼�������̣Уȣ����ԣ٣У� */
    unshort	alpha_count;		/* �᡼�������̣Уȣ������� */
    unshort	last_time_type;		/* ������̣Уȣ����ԣ٣У� */

    short	magic_flag;		/* ��ˡ�᡼�������֥ե饰 */
    short	keep_magic_flag;	/* ��¸��ˡ�᡼�������֥ե饰 */
    short	magic_now_max;		/* ��ˡ�᡼�����ͣ����� */
    short	magic_now_now;		/* ��ˡ�᡼���������̸����� */
    short	magic_used;		/* ��ˡ�᡼���������� */

    unshort	event_inf[4];		/* ����ѣţ֣ţΣ� */

    unshort	scene_ID;		/* scene_data_ID */

    unshort	yabusame_mode;		/* ήŭ�Ͼ��� */
    unshort	yabusame_total;		/* ήŭ�������� */

    unchar	no_save;		/* �ӣ��֣Ŷػߥե饰 */


    unchar	j_n;			/* �����ʣ��У��� �� �����Σţ� */
    unchar	s_sound;		/* �ӣϣգΣ� ���ƥ쥪����Υ�롿�إåɥۥ󡿣��� */
    unchar	language;		/* ���� */
    unchar	z_attention;		/* ��������ˡ ���������å��������ۡ���� */


    unshort	NottoriBgm;		/* �������󲻳�����	    8/21 sasa add	*/
    unchar	fade_go;		/* �ǥ�ե����ɼ����Ϥ�				*/
    unshort	next_daytime;		/* ����ǥ⥷�����ֹ�				*/
    unchar	doukidemo;		/* �̾亮����ǥⳫ�ϥȥꥬ			*/
    unchar	Kenjya_no;		/* ���Ԥδ��� ���Է���ե饰			*/

    unshort	next_zelda_time;	/* ��������ǤΥ��������			*/
    unchar	fade_speed;		/* �ե����ɥ��ԡ���				*/
    unchar	wipe_speed;		/* �磻��  ���ԡ���				*/
    unshort	kankyo_time;		/* �֣ҡ��£ϣ� �� �Ķ����顼���ѥ��������	*/
    uchar	dog_event_flag;		/* �� �����Ф����� ��ȯ���ե饰  ��ī�ӥå�Ω��	*/
    uchar	next_wipe;		/* �����������磻�ץ����ֹ�			*/

    short	room_type;		/* ���� �ԣ٣У� */
    short	area_type;		/* ���ңţ� �ԣ٣У� */

    short	sunmoon_flag;		/* ���ۤβΥե饰 */

    short	life_mode;		/* �̣ɣƣť⡼�� */
} z_common_data_t;

/*
 * ��������̥ǡ������
 * ɬ�����������ޥ�����ͳ���Ƥ�������
 */
extern z_common_data_t z_common_data;

#ifdef __cplusplus
extern "C" {
#endif
    
    /*
     * ��������̥ǡ��������
     */
    extern void z_common_data_init(void);

#ifdef __cplusplus
} /* extern "C" */
#endif

/*
 * ���������ޥ���
 */

#ifndef DISK_VERSION
/* ���Ф��ͤ���� */
#define ZCommonGet(member) (0, z_common_data.member)
/* ���ФΥݥ��󥿤�����ʹ�¤�ΤΥ��������Ϥ����侩����� */
#define ZCommonGetP(member) (0, &z_common_data.member)
/* ���Ф��ͤ����� */
#define ZCommonSet(member, value) (z_common_data.member = (value))
/* ������������ */
#define ZCommonGetA(member, a1) (0, z_common_data.member[a1])
#define ZCommonSetA(member, a1, value) (0, z_common_data.member[a1] = (value))
/* ������������ */
#define ZCommonGetA2(member, a1, a2) (0, z_common_data.member[a1][a2])
#define ZCommonSetA2(member, a1, a2, value) (0, z_common_data.member[a1][a2] = (value))
#else  /* DISK_VERSION */
#define ZCommonGet(member) (0, disk_keeptable1.z_common_data->member)
#define ZCommonGetP(member) (0, &disk_keeptable1.z_common_data->member)
#define ZCommonSet(member, value) (disk_keeptable1.z_common_data->member = (value))
#endif /* DISK_VERSION */

/*
 * ���̥��������ޥ���
 */
#define ZCommon_LinkAgeGet()		(ZCommonGet(link_age) ? 5 : 17)
#define ZCommon_LinkAgeSet(year)	ZCommonSet(link_age, ((year) == 5))
#define ZCommon_LinkAgeIsAdult()	(ZCommon_LinkAgeGet() == 17)
#define ZCommon_LinkAgeBeAdult()	ZCommon_LinkAgeSet(17)
#define ZCommon_LinkAgeIsChild()	(ZCommon_LinkAgeGet() == 5)
#define ZCommon_LinkAgeBeChild()	ZCommon_LinkAgeSet(5)
#define ZCommon_SceneNoGet()		ZCommonGet(scene_no)		/* �������ֹ���� */
#define ZCommon_SceneNoSet(no)		ZCommonSet(scene_no, no)	/* �������ֹ楻�å� */
#define ZCommon_FileNoGet()		ZCommonGet(file_no)		/* ����ƣ����ֹ���� */
#define ZCommon_FileNoSet(no)		ZCommonSet(file_no, no)		/* ����ƣ����ֹ楻�å� */
#define	SceneNo_Check(no) 		(ZCommonGet(scene_no) == no) /* �ӣ����Σ�����å� */

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __Z_COMMON_DATA_H_ */
