/*
 * $Id: z_play.h,v 2.2 1999-04-28 10:30:04+09 komatu Exp $
 *
 *
 *
 * $Log: z_play.h,v $
 * Revision 2.2  1999-04-28 10:30:04+09  komatu
 * *** empty log message ***
 *
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.119  1998/10/16 02:32:26  ogawa
 * *** empty log message ***
 *
 * Revision 1.118  1998-10-14 17:47:46+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.117  1998-10-09 22:19:59+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.116  1998-10-03 20:50:55+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.115  1998-10-02 23:30:52+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.114  1998-09-30 10:42:42+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.113  1998-09-30 10:37:02+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.112  1998-09-30 00:15:16+09  ogawa
 * ���֥������󤴤��
 *
 * Revision 1.111  1998-09-30 00:01:34+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.110  1998-09-24 00:57:26+09  ogawa
 * ����curr_camera�ɲ�
 *
 * Revision 1.109  1998-09-19 20:02:04+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.108  1998-09-17 23:06:22+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.107  1998-09-17 10:52:01+09  hayakawa
 * ������ѹ���
 * touch 08220000 z_play.h
 * (cd rom_d; rm -f z_play.o z_player.o z_camera.o z_parameter.o z_en_okarina_effect.o)
 * ��ɬ�פǤ�
 *
 * Revision 1.106  1998-08-22 18:38:10+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.105  1998-08-21 11:58:08+09  hayakawa
 * Game_play_isPause�ɲ�
 *
 * Revision 1.104  1998-08-20 14:33:15+09  hayakawa
 * Gama_play_shift2main_camera�Ϥ褯�ƤФ��褦�ʤΤ�void�ˤ��ޤ�����
 *
 * Revision 1.103  1998-08-08 17:42:12+09  ogawa
 * *** empty log message ***
 *
 * Revision 1.102  1998-08-06 11:13:46+09  matutani
 * *** empty log message ***
 *
 * Revision 1.101  1998-08-06 00:57:59+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.100  1998-08-04 21:33:51+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.99  1998-08-04 17:07:56+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.98  1998-07-29 13:51:01+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.97  1998-07-15 22:58:11+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.96  1998-06-30 19:51:31+09  hayakawa
 * Game_play_pr_vr_switch_pr_set
 * Game_play_pr_vr_switch_pr_check
 * Game_play_shop_pr_vr_switch_set
 * �ץ�ȥ��������
 *
 * Revision 1.95  1998-06-23 22:59:42+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.94  1998-06-23 09:18:59+09  hayakawa
 * ���ޤ�
 *
 * Revision 1.93  1998-06-22 22:17:51+09  hayakawa
 * ddcache�����ɲ�
 *
 * Revision 1.92  1998-06-19 21:19:11+09  hayakawa
 * �ޤ����Ȥ�
 *
 * Revision 1.91  1998-06-18 16:18:48+09  soejima
 * *** empty log message ***
 *
 * Revision 1.90  1998-06-18 16:06:39+09  soejima
 * *** empty log message ***
 *
 * Revision 1.89  1998-06-10 13:20:35+09  ogawa
 * ����ɲ�
 *
 * Revision 1.88  1998-06-04 17:52:57+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.87  1998-06-03 23:01:10+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.86  1998-06-01 22:34:52+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.85  1998-05-01 20:05:29+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.84  1998/04/24 09:03:27  ogawa
 * *** empty log message ***
 *
 * Revision 1.83  1998-04-22 19:46:15+09  hayakawa
 * play���ĥ���䤹���������
 *
 * Revision 1.82  1998-04-20 23:20:55+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.81  1998/04/03 14:06:43  iwawaki
 * *** empty log message ***
 *
 * Revision 1.80  1998/04/02  11:36:55  morita
 * ���ơ��������Ѹ��̤Τݤ��󤿡��ɲ� �ʤ�Ф��ä���ä��ޤ��ˡ�
 *
 * Revision 1.79  1998/03/25  12:54:17  hayakawa
 * �áܡ��б��إå�
 *
 * Revision 1.78  1998/03/05  14:17:49  iwawaki
 * *** empty log message ***
 *
 * Revision 1.77  1998/02/27  13:20:29  iwawaki
 * *** empty log message ***
 *
 * Revision 1.76  1998/02/14  13:43:49  iwawaki
 * *** empty log message ***
 *
 * Revision 1.75  1998/01/30  12:27:38  soejima
 * *** empty log message ***
 *
 * Revision 1.74  1998/01/09  08:21:24  hayakawa
 * game_play_set_fog�ɲ�
 *
 * Revision 1.73  1998/01/06  10:13:20  soejima
 * z_save_area.h���
 *
 * Revision 1.72  1997/12/16  14:06:24  iwawaki
 * *** empty log message ***
 *
 * Revision 1.71  1997/12/11  01:43:35  iwawaki
 * *** empty log message ***
 *
 * Revision 1.70  1997/12/01  09:40:42  iwawaki
 * *** empty log message ***
 *
 * Revision 1.69  1997/12/01  07:37:32  sasaki
 * *** empty log message ***
 *
 * Revision 1.68  1997/11/18  16:14:57  ogawa
 * *** empty log message ***
 *
 * Revision 1.67  1997/11/01  12:17:12  ogawa
 * *** empty log message ***
 *
 * Revision 1.66  1997/10/22  14:45:46  iwawaki
 * *** empty log message ***
 *
 * Revision 1.65  1997/10/13  04:19:58  matutani
 * collision_check�����ץߥ�
 *
 * Revision 1.64  1997/10/08  03:07:54  ogawa
 * Gama_play_camera*()�ɲ�
 *
 * Revision 1.63  1997/10/08  02:12:27  matutani
 * ���ꥸ�������å��ɲ�
 *
 * Revision 1.62  1997/10/08  02:12:05  matutani
 * *** empty log message ***
 *
 * Revision 1.61  1997/10/08  01:03:01  ogawa
 * *** empty log message ***
 *
 * Revision 1.60  1997/09/20  12:00:20  ogawa
 * *** empty log message ***
 *
 * Revision 1.59  1997/09/10  02:53:40  ogawa
 * active_camera�����ƥ��ɲ�
 *
 * Revision 1.58  1997/08/29  04:38:50  iwawaki
 * *** empty log message ***
 *
 * Revision 1.57  1997/08/26  01:45:01  ogawa
 * *** empty log message ***
 *
 * Revision 1.56  1997/08/25  04:36:55  ogawa
 * ���֥���饷���ƥ��Ƴ��
 *
 * Revision 1.55  1997/08/09  04:58:00  hayakawa
 * z_vr_business
 *
 * Revision 1.54  1997/08/07  01:36:17  soejima
 * vr_bussiness�ɲ�
 *
 * Revision 1.53  1997/07/28  01:49:14  matutani
 * EFFECT_SS_TABLE_SIZE=75�˸��餷�����ʥ�����Թ��
 *
 * Revision 1.52  1997/07/26  02:42:06  iwawaki
 * *** empty log message ***
 *
 * Revision 1.51  1997/07/11  07:52:11  iwawaki
 * *** empty log message ***
 *
 * Revision 1.50  1997/07/09  04:39:22  iwawaki
 * *** empty log message ***
 *
 * Revision 1.49  1997/07/08  12:05:07  tarukado
 * *** empty log message ***
 *
 * Revision 1.48  1997/06/27  03:19:16  iwawaki
 * *** empty log message ***
 *
 * Revision 1.47  1997/06/26  12:41:36  iwawaki
 * *** empty log message ***
 *
 * Revision 1.46  1997/06/12  00:27:51  iwawaki
 * *** empty log message ***
 *
 * Revision 1.45  1997/06/04  12:52:50  iwawaki
 * *** empty log message ***
 *
 * Revision 1.44  1997/06/03  09:56:29  iwawaki
 * *** empty log message ***
 *
 * Revision 1.43  1997/05/29  13:57:20  hayakawa
 * play_cleanup�ץ�ȥ������ɲ�
 *
 * Revision 1.42  1997/05/28  02:21:19  matutani
 * �ޥ���get_player_actor(game_play)�γ���ɲ�
 *
 * Revision 1.41  1997/05/26  07:00:39  iwawaki
 * *** empty log message ***
 *
 * Revision 1.40  1997/05/24  07:17:59  iwawaki
 * *** empty log message ***
 *
 * Revision 1.39  1997/05/20  12:12:12  iwawaki
 * *** empty log message ***
 *
 * Revision 1.38  1997/05/06  07:42:39  iwawaki
 * new
 *
 * Revision 1.37  1997/04/19  05:23:15  iwawaki
 * *** empty log message ***
 *
 * Revision 1.36  1997/03/27  02:16:14  matutani
 * ���եȥ��ץ饤�ȥ��ե������ɲ�
 *
 * Revision 1.35  1997/03/25  05:52:36  soejima
 * z_gameover ����
 *
 * Revision 1.34  1997/03/18  13:27:01  iwawaki
 * *** empty log message ***
 *
 * Revision 1.33  1997/03/14  00:36:00  hayakawa
 * �إå��ɲ�
 *
 * Revision 1.32  1997/02/26  11:21:57  soejima
 * z_message_h.h �� z_message.h ���ѹ�
 *
 * Revision 1.31  1997/02/14  09:04:34  soejima
 * �ӣ��֣ť��饹����
 *
 * Revision 1.30  1997/02/13  08:23:46  soejima
 * *** empty log message ***
 *
 * Revision 1.29  1997/02/06  04:44:29  soejima
 * z_kscope.h��z_kaleido_scope.h���ѹ���
 *
 * Revision 1.28  1997/01/20  02:35:23  iwawaki
 * *** empty log message ***
 *
 * Revision 1.27  1997/01/16  12:33:54  iwawaki
 * *** empty log message ***
 *
 * Revision 1.26  1997/01/14  09:05:20  iwawaki
 * *** empty log message ***
 *
 * Revision 1.25  1997/01/07  07:32:16  iwawaki
 * ���˥᡼�����ǡ�����������ɲ�
 *
 * Revision 1.24  1996/12/17  06:01:33  iwawaki
 * �ңϣ��ɤ߽Ф��ɲäȥץ�����ƥ����ɲ�
 *
 * Revision 1.23  1996/12/16  08:46:21  iwawaki
 * *** empty log message ***
 *
 * Revision 1.22  1996/12/09  12:57:07  iwawaki
 * map change !!
 *
 * Revision 1.21  1996/12/05  12:35:13  iwawaki
 * *** empty log message ***
 *
 * Revision 1.20  1996/11/22  08:37:30  iwawaki
 * *** empty log message ***
 *
 * Revision 1.19  1996/11/18  01:08:40  iwawaki
 * �Х�ץޥåԥ��ɲ�
 *
 * Revision 1.18  1996/11/06  11:34:21  soejima
 * *** empty log message ***
 *
 * Revision 1.17  1996/10/30  04:31:59  iwawaki
 * commonSegment�ɲ�
 *
 * Revision 1.16  1996/10/28  06:26:29  iwawaki
 * *** empty log message ***
 *
 * Revision 1.15  1996/10/21  04:38:08  iwawaki
 * *** empty log message ***
 *
 * Revision 1.14  1996/10/21  00:18:08  iwawaki
 * view_matrix�ɲ�
 *
 * Revision 1.13  1996/10/18  08:33:16  sasaki
 * *** empty log message ***
 *
 * Revision 1.12  1996/10/17  06:48:49  sasaki
 * �Ķ��饤�� �������б�
 *
 * Revision 1.11  1996/10/10  12:56:49  soejima
 * ���쥤�ɡ�������������
 *
 * Revision 1.10  1996/10/08  12:39:32  soejima
 * parameter����
 *
 * Revision 1.9  1996/10/02  06:13:16  soejima
 * message����
 *
 * Revision 1.8  1996/09/27  04:58:00  soejima
 * vr_box����
 *
 * Revision 1.7  1996/09/24  11:34:45  matutani
 * *** empty log message ***
 *
 * Revision 1.6  1996/09/24  02:36:17  iwawaki
 * ����饻�å�
 *
 * Revision 1.5  1996/09/20  10:43:36  iwawaki
 * *** empty log message ***
 *
 * Revision 1.4  1996/09/20  10:30:08  iwawaki
 * ���Ф�view�ɲ�
 *
 * Revision 1.3  1996/09/18  09:21:47  iwawaki
 * $Log�ɲ�
 * */

/************************************************************************
 *
 *	�����������ץ쥤
 *
 ************************************************************************/

#ifndef INCLUDE_Z_PLAY_H
#define INCLUDE_Z_PLAY_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_play_h.h"
#include "z_demo.h"
#include "z_scene.h"
#include "z_bgcheck_type.h"
//#include "z_map.h"
#include "z_actor.h"
#include "z_room.h"
#include "z_camera.h"
#include "z_sram.h"
#include "z_vr_box.h"
//#include "z_item.h"
#include "z_message.h"
#include "z_parameter.h"
#include "z_kaleido_scope.h"
#include "z_kankyo.h"
#include "z_gameover.h"
#include "z_lights.h"		/* Global_light */
#include "camera.h"		/* Camera */
#include "z_player_h.h"
//#include "z_vr_business.h"
#include"z_collision_type.h"
#include"PreRender.h"		/* PreRender_t */
#include"z_effect_SE.h"		/* PreRender_t */
#ifdef PLAY_ADJUST
#include "z_fbdemo_wipe.h"	/* fbdemo */
#endif
#include "sys_ddcache.h"	/* DDCache */

#define	GAME_PLAY_FRAME		(2)
#define	SCALE_RATIO		(68.0f/170.0f)
#define EFFECT_SS_TABLE_SIZE    (85)

#define GAME_PALY_CAMERA_MAX    (4)
#define MAIN_CAMERA(this)     ((this)->cameras[0])
#define ACTIVE_CAMERA(this)     ((this)->cameras[(this)->active_camera])

/************************************************************************
 *
 *	�����С��쥤�ץ����ƤӽФ��ݥ��󥿥ơ��֥� ���饹
 *
 ************************************************************************/
#define	Ovl_Proc_Info_Set(game_play, name, proc)	(game_play)->ovl_proc_info.name = proc
#define	Ovl_Proc_Info_Call(game_play, name)		(game_play)->ovl_proc_info.name
       
typedef struct {
    void (*Player_init)(Player_actor *, Game_play *, Rigid_Mdl_Info *);	/* �ץ쥤�䡼���饹 ������� */
    void (*Player_proc)(Player_actor *, Game_play *, pad_t *);		/* �ץ쥤�䡼ư����� */
    int (*Player_fish_out_check)(Game_play *);				/* �ץ쥤�䡼��ƨ���������å��ݥ��� */
    int (*Player_to_fishing_set)(Game_play *);				/* �ץ쥤�䡼�ե��å��󥰥⡼�ɽ������ */
    int (*Player_to_re_dead_attack_set)(Game_play *, Player_actor *);	/* �ץ쥤�䡼�꡼�ǥå���ޤ������� */
    int (*Player_demo_set)(Game_play *, Actor *, int);			/* �ץ쥤�䡼�ǥ⥻�å� */
    void (*Player_to_wait_set)(Player_actor *, Game_play *);		/* �ץ쥤�䡼��������������� */
    int (*Player_to_damage_set)(Game_play *, int);		/* �ץ쥤�䡼���᡼�����å�(bakabon ����) */
    void (*Player_to_talk_set)(Game_play *, Actor *);			/* �ץ쥤�䡼���å⡼�ɤ� */
} Ovl_Proc_Info;

/************************************************************************
 *
 *	������ץ쥤 ���饹
 *
 ************************************************************************/
#define	GAME_PLAY_FADE_IN	-20
#define	GAME_PLAY_FADE_OUT	20

struct GAME_PLAY {
    Game		g;				/* ���쥯�饹 			          */

    short		scene_data_ID;			/* ������ǡ����Σ�			  */
    unsigned char	scene_data_proc_type;		/* ������ǡ����̽��������ףΣ�		  */
    
    char		*keepSegment;			/* ����Х󥯥������ȥݥ���           */
    char		*exchange_keepSegment;		/* �����ؤ�����Х󥯥������ȥݥ���   */
    char		*sceneSegment;			/* ������ǡ����������ȥݥ���     	  */

    View		view;				/* �ӥ����饹 		  */
    Camera		camera;				/* ����饯�饹 		  */
    Camera              subcamera[3];
    Camera              *cameras[GAME_PALY_CAMERA_MAX]; /* �ᥤ�󥫥��ʣ��֡ˡܥ��֥���� */
    short               active_camera, curr_camera;     /* ������Υ���� */

    Sound_Info		sound_info;			/* ������ɥ��饹 */

    Global_light	global_light;			/* �Ķ��饤�ȥ��饹 		  */
////////    Save		save;				/* ������ ���饹 */
    Pause		pause;				/* �ݡ������饹 		  */

    T_BGCheck   	BGCheck;			/* �£ǥ����å����饹 		*/
    Actor_info		actor_info;			/* ����������� 		*/
    Demo_play		demo_play;			/* �ǥ⥯�饹			*/
    Effect_SE_Info	effect_SE_info;			/* �ӣť��ե����ȥ��饹		*/
    
    Sram		sram;				/* �ӣң��� ���饹 */
    Vr_box		vr_box;				/* �֣ҡ��£ϣ� ���饹 		*/
    Message		message;			/* ��å����� ���饹 		*/
    Parameter		parameter;			/* �ѥ�᡼���� ���饹 		*/
    Kscope		kscope;				/* ���쥤�ɡ��������� ���饹 	*/
    Gover		gover;				/* �ǣ��ͣţϣ֣ţ� ���饹	*/

    Kankyo		kankyo;				/* �Ķ� ���饹 			*/
    Skeleton_Proc	skeleton_proc;			/* ���˥᡼�����ǡ������楯�饹 */

    Object_Exchange	object_exchange;		/* ���֥������������ؤ��Х󥯾��� */
    Room_Info		room_info;			/* �������饹			*/
    Door_Info		door_info;			/* �ɥ��ǡ����ݥ���		*/

    Ovl_Proc_Info	ovl_proc_info;			/* �����С��쥤�ץ����ƤӽФ��ݥ��󥿥ơ��֥� */
    
    MtxF		projection_matrix;		/* ��ƹ���			*/
    MtxF		softsprite_matrix;		/* ���եȥ��ץ饤���Ѳ�ž�չ���	*/
    Mtx			*softsprite_mtx;		/* �ңã��ѥ��եȥ��ץ饤���Ѳ�ž�չ���ݥ��� */

//    void		*bump_pallet;			/* �Х�ץޥåԥ󥰥ѥ�å�	*/
    unsigned long	game_frame_counter;		/* ������ե졼�५���󥿡�
							   (�ݡ�����˻ߤ��) */

    unsigned char	next_link_age;			/* ����������ǯ�� */
    unsigned char	actor_stop_flag;		/* ����������ߥե饰 */
    
    unsigned char	start_room_status;		/* ������������Σ�		 	  */
    unsigned char	actor_set_num;			/* �������򥻥åȿ�			  */
    Room_Rom_Address	room_rom_address;		/* �����ǡ����ңϣͥ��ɥ쥹�ǡ����ݥ��� */
    Actor_data		*player_data;			/* �ץ쥤�䡼�ǡ����ݥ���		  */
    Actor_data		*actor_data;			/* ��������ǡ����ݥ���		  */
    Camera_data		*camera_data;			/* �����ǡ����ݥ���			  */
    Room_Status		*room_status;			/* ��������ǡ����ݥ���	 	  */
    Scene_No		*next_scene_data;		/* ���Υ�����ǡ����ݥ���		  */
    Path_Info		*path_data;			/* �ѥ��ǡ����ݥ��� 			  */
    void		*elf_message;			/* ������å������ǡ����ݥ��� 	  */

    void                *special_effect;                /* ���ơ��������Ѹ��̤Τݤ��󤿡�         */

    unsigned char	vr_box_flag;		

    signed char		fade_direction;			/* �ե����ɥե饰		*/
    short		fade_counter;			/* �ե����ɥ����󥿡�		*/
    short		BG_fade_counter;		/* �£ǥե����ɥ����󥿡�	*/
    Scene_No		next_scene;			/* �ڤ��ؤ�������Σ�		*/

    MtxF		dynamic_check_matrix;		/* �����ʥߥå��Ϸ������å�����ʥƥ��ȡ� */
//    float		dynamic_check_y_scale;		/*                 �٥��������͡ʥƥ��ȡ� */
    signed char		bow_game_flag;			/* Ū���Ʋ��⡼�ɥե饰 */
    signed char		bomchu_game_flag;		/* �ܥ���塼�ܥ���󥰥⡼�ɥե饰 */
    u8			wipe_type; 			/* �磻�ץ����� 7bit */
    unsigned char	pad0;				/*  */
    
    CollisionCheck	collision_check;		/* ���ꥸ�������å�������¤�� */ 

    unsigned short	eventbit[20];			/* ���٥�ȳ���			*/

#ifdef PLAY_ADJUST		/* �ꥳ��ѥ���ʤ����ɲò�ǽ */
#define PLAY_ADJUST_SIZE 1024
    /*
     * �ɲ���
     */
    PreRender_t 	prerender_kareidoscope;
    PreRender_t 	prerender_7000polygon;
    u8	         	pad10[3]; /* ���� */
    u8	         	zbuf_using;	/* 0:̤����  */
				/* 1:�ڥХåե��Ȥ��ƻ���  */
				/* 2:�ץ�����Хåե��˻��� */
    fbdemo_wipe_t 	fbdemo_wipe;
    u8	         	pad11[3]; /* ���� */
    u8	 		fbdemo_wipe_mode;	/* 0:�ʤ�  */
				/* 1:����� */
				/* 3:�ᥤ�� */
    fbdemo_fade_t 	ColorFilter;	/* ���̥ե�å��� */
    u8	         	pad12[3];
    u8 			pr_vr_switch;	/* Ļ�ץץ�������֣ҥܥå��������̤����� */
				/* 1:Ļ�ץץ���� 2:�֣ҥܥå��� */
    /*Scene_Data_Status*/void *scene_data_statusp;
    DDCache ddcache;
    char filler[PLAY_ADJUST_SIZE - sizeof(PreRender_t) - sizeof(PreRender_t) - sizeof(int) - sizeof(fbdemo_wipe_t) - sizeof(int) - sizeof(fbdemo_fade_t) - sizeof(fbdemo_fade_t) - sizeof(int) - sizeof(/*Scene_Data_Status*/void *) - sizeof(DDCache)];/* ���ߡ����ꥢ */
#endif
};

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼��������ݥ��󥿥��å�
 *
 *----------------------------------------------------------------------*/
#define	get_player_actor(game_play)	((game_play)->actor_info.actor_list[ACTOR_PART_PLAYER].actor)

/*-----------------------------------------------------------------------
 *
 *	������ץ쥤�������
 *
 *----------------------------------------------------------------------*/
extern void play_init(Game *thisx);
extern void play_cleanup(Game *thisx);
/*-----------------------------------------------------------------------
 *
 *	������ץ쥤
 *
 *----------------------------------------------------------------------*/
extern void play_main(Game *thisx);

/*-----------------------------------------------------------------------
 *
 *	�����⡼��ɽ��
 *
 *----------------------------------------------------------------------*/
extern void camera_mode_output(Graph *graph, Camera *camera);

/*-----------------------------------------------------------------------
 *
 *	�ǥ���֥����å�
 *
 *----------------------------------------------------------------------*/
extern int Game_play_demo_mode_check(
    Game_play *this
);

/*-----------------------------------------------------------------------
 *
 *	���ι������
 *
 *----------------------------------------------------------------------*/
extern float Game_play_ground_matrix(
    Game_play *this,
    MtxF      ground_matrix,
    xyz_t     *position
);

/*-----------------------------------------------------------------------
 *
 *	�ңϣͥǡ����ɤ߹���
 *
 *----------------------------------------------------------------------*/
extern char *ROM_read(
    Game   *game,
    Rom_Address *rom_address
);

/*-----------------------------------------------------------------------
 *
 *	�������ɲá������ᤵ�󣳥��ᤵ��
 *
 *----------------------------------------------------------------------*/
extern short  Gama_play_make_camera(Game_play *);
extern int  Gama_play_set_camera_status(Game_play *, short, short);
extern int Gama_play_active_camera(Game_play *);
extern Camera  *Gama_play_get_camera(Game_play *, short);
extern void  Gama_play_clear_camera(Game_play *, short);
extern void  Gama_play_clear_camera_all(Game_play *);
extern int  Gama_play_camera_setting(Game_play *, short, xyz_t *, xyz_t *);
extern int  Gama_play_camera_lookat(Game_play *, short, xyz_t *, xyz_t *, xyz_t *);
extern int  Gama_play_set_camera_fovy(Game_play *, short, float);
extern int  Gama_play_set_camera_sz(Game_play *, short, short);
extern int  Gama_play_copy_camera_position(Game_play *, short, short);
extern int  Gama_play_set_camera_owner(Game_play *, short, Actor *, short);
extern int  Gama_play_change_camera_set(Game_play *, short, short);
extern void Gama_play_shift2main_camera(Game_play *, short, short);
extern int  Gama_play_getUID_camera(Game_play *, short);
extern int  Gama_play_checkUID_camera(Game_play *, short, short);

/************************************************************************
 *
 *	����ӥåȥ��å�
 *			
 ************************************************************************/
extern void Game_play_room_inf_set(
    Game_play *game_play
);
    
/************************************************************************
 *
 *	����ƥ������ȥǡ�������ʾܺ������
 *			
 ************************************************************************/
extern void Game_play_restart_set2(
    Game_play *game_play,
    int	      restart_mode,
    Scene_No  scene_no,
    int	      room_ID,
    int	      player_mode,
    xyz_t     *player_pos,
    short     player_angle_y
);

/************************************************************************
 *
 *	����ƥ������ȥǡ�������
 *			
 ************************************************************************/
extern void Game_play_restart_set(
    Game_play *game_play,
    int	      restart_mode,
    int	      player_mode
);

/************************************************************************
 *
 *	������ƥ���������������������
 *			
 ************************************************************************/
extern void Game_play_down_restart(
    Game_play *game_play
);

/************************************************************************
 *
 *	������ƥ�����������ʺǽ餫���
 *			
 ************************************************************************/
extern void Game_play_down_restart_top_set(
    Game_play *game_play
);

/************************************************************************
 *
 *	������ƥ�����������ʥǡ�����¸���ƺǽ餫���
 *			
 ************************************************************************/
extern void Game_play_down_restart_top(
    Game_play *game_play
);
    
/************************************************************************
 *
 *	������ѹ������å�
 *			
 ************************************************************************/
extern int Game_play_change_camera_check(
    Game_play *game_play
);

extern int Game_play_getDoorAngle(Game_play *,  Actor *, short *);
extern int Gama_play_position_in_water(Game_play *, xyz_t *);

/*
 * �ץ��������
 */
extern void Game_play_pr_vr_switch_pr_set( Game_play *this, short point );
extern int  Game_play_pr_vr_switch_pr_check( Game_play *this, short point );
extern void Game_play_shop_pr_vr_switch_set( Game_play *this );

/*
 * �ݡ����椫�ɤ�����Ĵ�٤�
 */
#if 0
#define Game_play_isPause(this) \
       ((this)->pause.flag != 0)
#else
#define Game_play_isPause(this) \
       _Game_play_isPause(this) 
extern int _Game_play_isPause( Game_play *this );
#endif

/*--------------------------------------------------------------*
 * ɸ��ե���������						*
 *--------------------------------------------------------------*/
extern Gfx *
game_play_set_fog(Game_play *this, Gfx *gp);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_play.h ***/
