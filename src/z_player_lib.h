/*
 * $Id: z_player_lib.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $
 * $Log: z_player_lib.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.30  1998/10/14 08:06:02  iwawaki
 * *** empty log message ***
 *
 * Revision 1.29  1998-10-02 01:33:13+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.28  1998-09-30 19:54:30+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.27  1998-09-07 14:03:26+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.26  1998-09-02 00:31:30+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.25  1998-09-01 00:31:46+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.24  1998-08-22 18:38:22+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.23  1998-08-20 18:31:50+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.22  1998-08-01 15:26:08+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.21  1998-07-25 22:56:50+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.20  1998-07-22 23:02:57+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.19  1998-07-13 22:53:33+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.18  1998-07-10 23:08:54+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.17  1998-07-07 22:57:02+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.16  1998-06-16 23:06:18+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.15  1998-06-15 22:57:14+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.14  1998-06-12 23:25:21+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.13  1998-06-10 22:59:00+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.12  1998-06-05 16:50:59+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.11  1998-05-29 20:10:55+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.10  1998-05-13 23:00:52+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.9  1998/05/07 14:20:36  iwawaki
 * *** empty log message ***
 *
 * Revision 1.8  1998/04/25 11:44:32  iwawaki
 * *** empty log message ***
 *
 * Revision 1.7  1998/04/07 14:12:03  iwawaki
 * *** empty log message ***
 *
 * Revision 1.6  1998/04/04  11:55:31  iwawaki
 * *** empty log message ***
 *
 * Revision 1.5  1998/03/18  01:57:25  iwawaki
 * *** empty log message ***
 *
 * Revision 1.4  1998/03/17  13:53:12  iwawaki
 * *** empty log message ***
 *
 * Revision 1.3  1998/03/16  04:43:54  iwawaki
 * *** empty log message ***
 *
 * Revision 1.2  1998/03/10  11:24:59  iwawaki
 * *** empty log message ***
 *
 * Revision 1.1  1998/03/10  07:37:34  iwawaki
 * Initial revision
 *
 *
 * */


#ifndef INCLUDE_Z_PLAYER_LIB_H
#define INCLUDE_Z_PLAYER_LIB_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/************************************************************************
 *
 *	�ץ쥤�䡼�饤�֥�꡼��
 *
 ************************************************************************/
#include "z_player.h"
#include "z_player_shape.h"

/*-----------------------------------------------------------------------
 *
 *	�ޥ���
 *
 *----------------------------------------------------------------------*/
/*
 * ���˥᡼��������
 */
#define	P_MAX_JOINT		(21+1)
#define	P_GLOBAL_JOINT		(0+1)
#define P_HEAD_JOINT     	(10+1)
#define	P_NECK_JOINT		P_HEAD_JOINT
#define	P_BODY_JOINT		(9+1)
#define	P_L_HAND_JOINT		(15+1)
#define	P_SWORD_JOINT		(15+1)
#define	P_R_HAND_JOINT		(18+1)
#define	P_CARRY_JOINT		(19+1)
#define	P_WAIST_JOINT		(1+1)
#define P_L_FOOT_JOINT          (8+1)
#define P_R_FOOT_JOINT          (5+1)
#define P_L_LEG_A_JOINT		(6+1)
#define P_L_LEG_B_JOINT		(7+1)
#define P_R_LEG_A_JOINT         (3+1)
#define P_R_LEG_B_JOINT         (4+1)
#define P_HAT_JOINT     	(11+1)
#define P_CHEST_JOINT     	(20+1)
#define P_L_ARM_A_JOINT     	(13+1)
#define P_L_ARM_B_JOINT     	(14+1)
#define P_R_ARM_A_JOINT     	(16+1)
#define P_R_ARM_B_JOINT     	(17+1)

#define	P_SKELETON_OFFSET_X		-57.400002f	
#define	P_CHILD_SKELETON_OFFSET_X	0.000000f	
#define	P_SKELETON_OFFSET_Y		3377.100098f	
#define	P_CHILD_SKELETON_OFFSET_Y	2376.000000f	
#define	P_SKELETON_OFFSET_Z		0.000000f	
#define	P_CHILD_SKELETON_OFFSET_Z	0.000000f	

#define	P_LEG_A_LENGTH			1304.0f	
#define	P_LEG_A_LENGTH_CHILD		695.0f
#define	P_LEG_B_LENGTH			1265.0f
#define	P_LEG_B_LENGTH_CHILD		826.0f
#define	P_LEG_A_SCALE_LENGTH		(P_LEG_A_LENGTH * P_SCALE)
#define	P_LEG_A_SCALE_LENGTH_CHILD	(P_LEG_A_LENGTH_CHILD * P_SCALE)
#define	P_LEG_B_SCALE_LENGTH		(P_LEG_B_LENGTH * P_SCALE)
#define	P_LEG_B_SCALE_LENGTH_CHILD	(P_LEG_B_LENGTH_CHILD * P_SCALE)
    
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼ǯ���̥ǡ���
 *
 *----------------------------------------------------------------------*/
/*
 * �����ѥǡ���
 */
extern Rigid_Mdl_Info	*skeleton_list[];

/*
 * �������ץꥹ��
 */
enum {
    L_LHAND_MODEL,		/* ���� */
    L_LHANDG_MODEL,
    L_MIDDLE_SWORD_MODEL,
    L_LSWORDHAND_MODEL,
    L_LONGSWORD_MODEL,
    L_HAMMERHAND_MODEL,
    L_BOOMHAND_MODEL,
    L_BOTTLE_HAND_MODEL,
    L_RHAND_MODEL,		/* ���� */
    L_RHANDG_MODEL,
    L_RSHIELDHAND_MODEL,
    L_BOW_RHAND_MODEL,
    L_PACHIHAND_MODEL,
    L_ELF_OKARIHAND_MODEL,
    L_OKARIHAND_MODEL,
    L_HOOK_HAND_MODEL,
    L_CARRYSWORD_MODEL,		/* ���餤ʪ */
    L_SWORDCASE_MODEL,
    CARRY_ALL_MODEL,
    CARRY_ALLB_MODEL,
    L_WAIST_MODEL,		/* �� */
    L_BAG_WAIST_MODEL
};

/*
 * ɽ�𥿥���
 */
enum {
    P_FACE_NORMAL,
    P_FACE_CLOSE_1,
    P_FACE_CLOSE_2,
    P_FACE_NORMAL_2,
    P_FACE_CLOSE_1_2,
    P_FACE_CLOSE_2_2,
    P_FACE_UPPER,
    P_FACE_DOWN,
    P_FACE_DAMAGE,
    P_FACE_SURPRISE,
    P_FACE_RIGHT,
    P_FACE_LEFT,
    P_FACE_REGRET,
    P_FACE_SLEEPY,
    P_FACE_FINSH,
    P_FACE_MAX
};
/*
 * �ܥ��˥᡼�����ѥ�����
 */
enum {
    P_EYE_1,
    P_EYE_2,
    P_EYE_3,
    P_EYE_4,
    P_EYE_5,
    P_EYE_6,
    P_EYE_7,
    P_EYE_8
};
/*
 * �����˥᡼�����ѥ�����
 */
enum {
    P_MOUTH_1,
    P_MOUTH_2,
    P_MOUTH_3,
    P_MOUTH_4
};

/*-----------------------------------------------------------------------
 *
 *	ɽ�𥯥饹
 *
 *----------------------------------------------------------------------*/
typedef struct {
    unsigned char	eye;
    unsigned char	mouth;
} Face_Pattern;


/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼��ǽ�ǡ�������
 *
 *----------------------------------------------------------------------*/
extern void player_performance_init(
    Game_play    *game_play,
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	���ܥ⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int anchor_mode_check(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼���֥����å�
 *
 *----------------------------------------------------------------------*/
extern int player_action_check(
    Game_play    *game_play,
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼���֥����å�
 *
 *----------------------------------------------------------------------*/
extern int player_demo_check(
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	��ǯ�Υϥ�����⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int child_hyral_shield_check(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�����ƥ��̥������ץǡ���
 *
 *----------------------------------------------------------------------*/
extern int item_shape_type_set(
    Player_actor *this,
    int 	 A_item
);

/*-----------------------------------------------------------------------
 *
 *	�⹽���������ץ��å�
 *
 *----------------------------------------------------------------------*/
extern void defense_shape_type_set(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�������ץ��å�
 *
 *----------------------------------------------------------------------*/
extern void shape_set(
    Player_actor *this,
    int 	 type
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�������ץ����ץ��å�
 *
 *----------------------------------------------------------------------*/
extern void shape_type_set(
    Player_actor *this,
    int 	 type
);

/*-----------------------------------------------------------------------
 *
 *	��������ƥ७��󥻥�
 *
 *----------------------------------------------------------------------*/
extern void now_item_cancel(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�����ƥ��ѹ������å�
 *
 *----------------------------------------------------------------------*/
extern void player_ability_set(
    Game_play    *game_play,
    Player_actor *this
);

#define	player_ability_init(game_play, this)	player_ability_set((game_play), (this))

/*-----------------------------------------------------------------------
 *
 *	���ӥ�ؤ��ѹ�
 *
 *----------------------------------------------------------------------*/
extern void bottle_item_change(
    Game_play    *game_play,
    Player_actor *this,
    int		 next_H_item,
    int		 next_item_no
);

/*-----------------------------------------------------------------------
 *
 *	���ܥ���󥻥�
 *
 *----------------------------------------------------------------------*/
extern void anchor_cancel(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	���ܲ������
 *
 *----------------------------------------------------------------------*/
#define	NOW_CAMERA	Gama_play_get_camera(game_play, 0)

extern void anchor_reset(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�������ܥ��å�
 *
 *----------------------------------------------------------------------*/
extern void to_anchor_set(
    Game_play *game_play,
    Actor     *anchor_actor
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼���ϥ⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int player_ride_horse_check(
    Game_play    *game_play
);

/*-----------------------------------------------------------------------
 *
 *	Ū���Ʋ��⡼�ɽ������
 *
 *----------------------------------------------------------------------*/
extern int to_bow_game_set(
    Game_play *game_play,
    int	      num
);

/*-----------------------------------------------------------------------
 *
 *	���夭�ǥ������ҥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int player_fire_stick_hit_check(
    Game_play *game_play,
    xyz_t     *pos,
    float     r,
    float     h
);

/*-----------------------------------------------------------------------
 *
 *	�����֥����å�
 *
 *----------------------------------------------------------------------*/
enum {
    P_GROVE_TYPE_CHILD,
    P_GROVE_TYPE_BOY,		/* BURONZ */
    P_GROVE_TYPE_SILVER,
    P_GROVE_TYPE_GOLD
};
    
extern int player_grove_check(void);

/*-----------------------------------------------------------------------
 *
 *	���̥����å�
 *
 *----------------------------------------------------------------------*/
extern int mask_check(
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	���̲��
 *
 *----------------------------------------------------------------------*/
extern int mask_cancel(
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	�ߥ顼������ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int mirror_shield_check(
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	�ߥ顼����������������å�
 *
 *----------------------------------------------------------------------*/
extern int mirror_shield_set_check(
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	��ˡ�⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int magic_item_check(
    Player_actor *this,
    int		 A_item
);

/*-----------------------------------------------------------------------
 *
 *	�եå�����åȥ⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int hook_check(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�եå��å���å�ȯ��������å�
 *
 *----------------------------------------------------------------------*/
extern int hook_shoot_check(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	���⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int sword_item_check(
    int A_item
);
extern int sword_check(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	Ĺ���⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int longsword_check(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�ޤ줿��󥰥����ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int break_longsword_check(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�ӥ�⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int bottle_item_check(
    Player_actor *this,
    int 	 A_item
);
extern int bottle_check(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	���ƥ⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int bom_item_check(
    Player_actor *this,
    int 	 A_item
);
extern int bom_check(
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�Ρ��ޥ롤��Ʈ�⡼���ڤ��ؤ���ǽ�����å�
 *
 *----------------------------------------------------------------------*/
extern int nom2figh_check(
    Player_actor *this,
    int		 A_item
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼����ǥ����������å�
 *
 *----------------------------------------------------------------------*/
extern int player_condition_check(
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�������ץ����ץǡ���
 *
 *----------------------------------------------------------------------*/
typedef struct {
    unsigned char	anime_type;
    unsigned char	L_hand;
    unsigned char	R_hand;
    unsigned char	carry;
    unsigned char	waist;
} Player_Shape_Type;

extern Player_Shape_Type	player_shape_type[];

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�������ץǡ���
 *
 *----------------------------------------------------------------------*/
extern Gfx	**player_shape_list[];

extern Gfx	*l_Lhand_model_data[];
extern Gfx	*l_boomhand_model_data[];
extern Gfx	*l_longsword_model_data[];
extern Gfx	*l_LhandG_model_data[];
extern Gfx	*l_RhandG_model_data[];
    
/************************************************************************
 *
 *	�ץ쥤�䡼��������ɽ��
 *
 ************************************************************************/
extern Gfx	set_cull_back_model[];
extern Gfx	set_cull_front_model[];

extern void Player_shape_draw(
    Game 	       *game,
    Rigid_ModelPointer *skeleton_list,
    s_xyz	       *joint,
    int		       model_num,
    int		       LOD,
    int		       suit,
    int		       boots,
    int  	       face_pattern,
    int 	       (*before_draw_proc)(Game *, int, Gfx **, xyz_t *, s_xyz *, void *),
    void 	       (*after_draw_proc)(Game *, int, Gfx **, s_xyz *, void *),
    void	       *p
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼ɽ���Ѵ���������
 *
 *----------------------------------------------------------------------*/
extern int player_before_draw_joint_move(
    Game  *game,
    int   jyoint_no,
    Gfx   **shape,
    xyz_t *t,
    s_xyz *r,
    void  *p
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼ɽ���Ѵؿ�
 *
 *----------------------------------------------------------------------*/
extern int player_before_draw(
    Game  *game,
    int   jyoint_no,
    Gfx   **shape,
    xyz_t *t,
    s_xyz *r,
    void  *p
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼ɽ���Ѵؿ��ʥϥ����졼�ɥ�ǥ��
 *
 *----------------------------------------------------------------------*/
extern int before_high_draw(
    Game  *game,
    int   jyoint_no,
    Gfx   **shape,
    xyz_t *t,
    s_xyz *r,
    void  *p
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼ɽ���Ѵؿ���ɽ��̵����
 *
 *----------------------------------------------------------------------*/
extern int before_no_draw(
    Game  *game,
    int   jyoint_no,
    Gfx   **shape,
    xyz_t *t,
    s_xyz *r,
    void  *p
);

/*----------------------------------------------------------------------------
 *
 *	�����⥳�ꥸ��󥻥å�
 *
 *---------------------------------------------------------------------------*/
extern int sword_attack_collision_set(
    Game_play   *game_play,
    ClObjSwrd	*at_info,
    SWORD_POS_S *prev_pos,
    xyz_t       *new_top_pos,
    xyz_t       *new_root_pos
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼���åȥ����ƥ�ɽ���Ѵؿ�
 *
 *----------------------------------------------------------------------*/
extern void get_item_draw(
    Game_play    *game_play,
    Player_actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼ɽ���Ѵؿ�
 *
 *----------------------------------------------------------------------*/
extern void player_after_draw(
    Game  *game,
    int   jyoint_no,
    Gfx   **shape,
    s_xyz *r,
    void  *p
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼��������ž��
 *
 *----------------------------------------------------------------------*/
extern void Player_shape_read(
    Game_play *game_play,
    char      *segment
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼��������ɽ��
 *
 *----------------------------------------------------------------------*/
extern void Player_Shape_Draw(
    Game_play     *game_play,
    char          *segment,
    Skeleton_Info *skeleton,
    xyz_t	  *position,
    s_xyz	  *angle,
    float	  scale,
    int		  item,
    int		  suit,
    int		  shield,
    int		  boots
);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_player_lib.h end ***/
