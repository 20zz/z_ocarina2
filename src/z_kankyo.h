/* $Id: z_kankyo.h,v 2.1 1998-10-22 21:17:25+09 zelda Exp $ */	
/* $Log: z_kankyo.h,v $
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.70  1998/10/14 15:26:11  sasaki
 * *** empty log message ***
 *
 * Revision 1.69  1998-10-14 14:19:24+09  nisiwaki
 * *** empty log message ***
 *
 * Revision 1.68  1998-10-13 23:43:53+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.67  1998-10-13 00:29:50+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.66  1998-10-10 22:46:56+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.65  1998-10-08 11:27:55+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.64  1998-10-01 21:59:22+09  sasaki
 * define	TIME_SPEED
 *
 * Revision 1.63  1998-09-26 00:06:25+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.62  1998-09-17 22:56:31+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.61  1998/09/15 15:23:10  sasaki
 * *** empty log message ***
 *
 * Revision 1.60  1998/09/11 12:45:52  sasaki
 * time define add
 *
 * Revision 1.59  1998/09/05 05:08:15  sasaki
 * define add
 *
 * Revision 1.58  1998/09/03 11:38:38  sasaki
 * *** empty log message ***
 *
 * Revision 1.57  1998/09/01 12:13:15  sasaki
 * *** empty log message ***
 *
 * Revision 1.56  1998/09/01 02:05:23  sasaki
 * define add
 *
 * Revision 1.55  1998/08/27 15:03:56  sasaki
 * add
 *
 * Revision 1.54  1998/08/21 01:59:17  komatu
 * *** empty log message ***
 *
 * Revision 1.53  1998-08-21 10:55:54+09  nisiwaki
 * extern ����򤷤�
 *
 * Revision 1.52  1998-08-20 13:41:32+09  hayakawa
 * vr_kakusi�Υץ�ȥ����פ��ɲ�
 * extern �ؿ����ѿ��ϥإå���������Ƥ���������
 *
 * Revision 1.51  1998-08-18 23:17:51+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.50  1998/08/13 02:08:40  soejima
 * define
 *
 * Revision 1.49  1998-07-24 14:48:31+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.48  1998/07/24 05:03:56  sasaki
 * *** empty log message ***
 *
 * Revision 1.47  1998/07/22 08:27:11  sasaki
 * *** empty log message ***
 *
 * Revision 1.46  1998/07/02 12:04:04  nisiwaki
 * set_add_light_global �� �ɲ�
 *
 * Revision 1.45  1998-05-28 22:31:48+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.44  1998/05/15 06:24:20  hayakawa
 * *** empty log message ***
 *
 * Revision 1.43  1998-05-15 14:38:10+09  hayakawa
 * ���顼���ǥ����ڡ�����ˤĤ������ľ���Ƥ����ޤ�����
 * �ؿ��ץ�ȥ����פ���Ͽ�򤷤ޤ���
 *
 * Revision 1.42  1998-03-23 11:21:01+09  yoshida
 * �áܡܤ���Υ��󥯥롼�ɤ��б�
 *
 * Revision 1.41  1998/02/23  13:29:02  sasaki
 * *** empty log message ***
 *
 * Revision 1.40  1998/02/03  11:04:07  sasaki
 * *** empty log message ***
 *
 * Revision 1.39  1997/12/01  13:59:09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.38  1997/12/01  12:05:31  iwawaki
 * *** empty log message ***
 *
 * Revision 1.37  1997/12/01  07:37:32  sasaki
 * *** empty log message ***
 *
 *
 * Revision 1.13  1997/03/25  12:09:42  soejima
 * ZELDATIME�Σӣԣϣ�
 *
 * Revision 1.12  1997/02/26  11:22:11  soejima
 * z_message_h.h �� z_message.h ���ѹ�
 *
 * Revision 1.11  1997/02/06  04:47:47  soejima
 * z_kscope.h��z_kaleido_scope.h���ѹ���
 *
 * Revision 1.10  1996/12/16  06:48:41  soejima
 * �ݡ����ˤ��ZELDATIME�Σӣԣϣ�
 *
 * Revision 1.7  1996/10/21  12:20:43  sasaki
 * kankyo test
 *
 * $Log�ɲ�
 * */

#ifndef INCLUDE_Z_KANKYO_H
#define INCLUDE_Z_KANKYO_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_kaleido_scope.h"
#include "z_message.h"
#include "z_gameover.h"
#include "z_vr_box.h"

/************************************************************************
 *
 *	�Ķ�
 *
 ************************************************************************/
/*-----------------------------------------------------------------------

  ����	��
  00    0x0000      05    0x3556      10    0x6aab      15    0xa000      20    0xd556
  01	0x0aab      06    0x4000      11    0x7556	16    0xaaab	  21	0xe000
  02	0x1556      07    0x4aab      12    0x8001	17    0xb556	  22	0xeaab
  03	0x2001      08    0x5556      13    0x8aac	18    0xc001	  23	0xf556
  04	0x2aac      09    0x6000      14    0x9556	19    0xcaac	  24	0x0000

*------------------------------------------------------------------------*/

#define	MORNING_TIME		0x4555		/* ī */
#define	NIGHT_TIME		0xc001		/* �� */
#define	TIME_00			0x0000		/* ���㥹��   �����ʿ���� */
#define	TIME_01			0x0aab		/* ���㥹��   ����	   */
#define	TIME_02			0x1556		/* ���㥹��   ����	   */
#define	TIME_03			0x2001		/* ���㥹��   ����	   */
#define	TIME_04			0x2aac		/* ���㥹��   ����	   */
#define	TIME_05			0x3556		/* ���㥹��   ����	   */
#define	TIME_06			0x4000		/* ���㥹��   ����	   */
#define	TIME_07			0x4aab		/* ���㥹��   ����	   */
#define	TIME_08			0x5556		/* ���㥹��   ����	   */
#define	TIME_09			0x6000		/* ���㥹��   ����	   */
#define	TIME_10			0x6aab		/* ���㥹�� ������	   */
#define	TIME_11			0x7556		/* ���㥹�� ������	   */
#define	TIME_12			0x8001		/* ���㥹�� �������ʤ���� */
#define	TIME_13			0x8aac		/* ���㥹�� ������	   */
#define	TIME_14			0x9556		/* ���㥹�� ������	   */
#define	TIME_15			0xa000		/* ���㥹�� ������	   */
#define	TIME_16			0xaaab		/* ���㥹�� ������	   */
#define	TIME_17			0xb556		/* ���㥹�� ������	   */
#define	TIME_18			0xc001		/* ���㥹�� ������	   */
#define	TIME_19			0xcaac		/* ���㥹�� ������	   */
#define	TIME_20			0xd556		/* ���㥹�� ������	   */
#define	TIME_21			0xe000		/* ���㥹�� ������	   */
#define	TIME_22			0xeaab		/* ���㥹�� ������	   */
#define	TIME_23			0xf556		/* ���㥹�� ������	   */

#define	TIME_06_30		0x4555		/* ��������ʬ		   */
#define	TIME_07_15		0x4d55		/* ��������ʬ		   */
#define	TIME_07_30		0x5000		/* ��������ʬ		   */


/************************************************************************
 *
 *	�Ķ����饹
 *
 ************************************************************************/
typedef struct {
    unsigned char	ambient_col[RGB_NUM];	/* ����ӥ���ȥ饤�ȥ��顼   */
    signed   char	parallel_pos[3];	/* diffuse �ݥ������         */
    unsigned char	parallel_col[RGB_NUM];	/*         �饤�ȥ��顼       */
    signed   char	parallel2_pos[3];	/*         �ݥ������         */
    unsigned char	parallel2_col[RGB_NUM];	/*         �饤�ȥ��顼       */
    unsigned char	fog_col[RGB_NUM];	/* �ե������顼 	      */
    short		fog_near;		/* �ե��� �ᤵ		      */
    short		fog_far;		/* �ե��� ���Ԥ�	      */
} Light_info;

/*----------------------------------------------------------------------------*/
#if 0		/* 7/30 cut	*/
typedef struct {
    Light_info		*light_info_asa;	/* �Ķ��饤�Ⱦ���  ��ī��	*/
    Light_info		*light_info_hiru;	/* 		   �����	*/
    Light_info		*light_info_yuu;	/* 		   ��ͼ��	*/
    Light_info		*light_info_yoru;	/* 		   �����	*/
} Kankyo_daylight;
#endif
/*----------------------------------------------------------------------------*/

typedef struct {
    signed short	ambient_col[RGB_NUM];	/* ����ӥ���ȥ饤�ȥ��顼   */
    signed short	diffuse_col[RGB_NUM];	/* �ǥ��ե塼���饤�ȥ��顼   */
    signed short	fog_col[RGB_NUM];	/* �ե������顼 	      */
    short		fog_near;		/*       �ᤵ		      */
    short		fog_far;		/*       ���Ԥ�		      */
} Add_light;

typedef struct
{
    unsigned short	day_time;		/* ������ή��			*/
    unsigned short	day_time_plus;		/*		�û���		*/

    float		sun_pos_x;		/* ���ۤΰ���	��		*/ 
    float		sun_pos_y;		/* ���ۤΰ���	��		*/
    float		sun_pos_z;		/* ���ۤΰ���	��		*/

    unsigned char	vrbox_tenso_0;		/* ž����			*/
    unsigned char	vrbox_tenso_1;		/*				*/
    unsigned char	vrbox_tenso_cnt;	/*				*/

    unsigned char	vr_box_scale;		/*          �Ѳ�Ψ		*/

    unsigned char	vr_box_sw;		/* VR_BOX����			*/
    unsigned char	vr_box_dsp;		/* VR_BOXɽ���ե饰		*/
    unsigned char	sunmoon_dsp;		/* ���ۤȷ�ɽ���ե饰		*/
    unsigned char	vr_box_pat;		/* VR_BOX��������		*/
    unsigned char	vr_eve_pat;		/* ���٥���ѹ��� VR_BOX	*/
    unsigned char	mode;			/* ���٥�ȼ¹�Ƚ�ꥹ���å�	*/
    unsigned short	patchg_time;		/* ŷ���Ѳ���֥����ޡ�		*/
    unsigned short	patchg_time_max;	/* ŷ���Ѳ���֥����ޡ�������	*/

    unsigned char	kcolor_sw;		/* �Ķ�������			*/
    unsigned char	kcolor_pat;		/* �Ķ�����������		*/
    unsigned char	kcolor_eve_pat;		/* ���٥���ѹ��ѴĶ����顼	*/
    unsigned char	mode2;			/* ���٥�ȼ¹�Ƚ�ꥹ���å�2	*/
    unsigned short	patchg_time2;		/* ŷ���Ѳ���֥����ޡ�2	*/
    unsigned short	patchg_time2_max;	/* ŷ���Ѳ���֥����ޡ�2������	*/

    unsigned char	diffuse_pat;		/* �ǥ��ե塼���饤�Ȱ��֥�����	*/
    Light_data		sun_light;		/* ���۸�			*/
    Light_data		sun_light2;		/* ���۸�(ȿ��)			*/

    signed char		read_flag;		/* �����ɤ߹��ߥե饰		*/

    dma_t		dma;			/* ����ž���ط�		*/
    OSMesgQueue		mq;			/*				*/
    OSMesg		m;			/*				*/

    float		all_fade_wk;		/* ��󥺥ե쥢�ե����ɥ��	*/
    float		naiseki_wk;		/* 				*/

    Add_light		add_light;		/* ���̸����ѥ饤�Ȳû���	*/
    float		add_light_pst;		/* ���̸����ѥ饤�ȱƶ�Ψ	*/

    s_xyz		wind_direction;		/* ���ο᤯����			*/
    float		wind_speed;		/* ���ο᤯����			*/

    char		num;			/* ���顼�ǡ�������Ŀ��ʥޥåפ��ȤΡ�	*/
    Light_info		*data;			/* 	           �ΰ�			*/

    unsigned char	colfirst_flg;		/* ���Υ�����ǤΥ��顼���� ���	*/
    unsigned char	polcolor;		/* �ݥꥴ�󤫤�����������顼�ֹ�	*/
    unsigned char	polcolor_bak;		/* �ݥꥴ�󤫤�����������顼�ֹ�BACKUP	*/

    char		custom_flg;		/* ��ͥ�� ���Ѵ��� �����å�		*/
    Light_info		custom_col;		/* ��ͥ�� �Ķ���			*/
    unsigned short	custom_speed;		/* ���ԡ���				*/
    float		custom_parcent;		/* �Ѳ�Ψ				*/
    unsigned char	custom_blend_flg;	/* �Ѳ�Ψ����ե饰			*/

    unsigned char	rain_evt_trg;		/* ��ȯ���ե饰				*/
    unsigned char	rain_evt_mode;		/* ��ȯ��������⡼��			*/

    unsigned char	thunder_evt_trg;	/* ��ȯ���ե饰				*/
    unsigned char	sound_status;		/* �����Ѳ����ơ�����			*/

    unsigned char	rect_pattern;		/* �쥯�ȥ��󥰥��ɽ����������		*/
    unsigned char	rectcol_[4];		/* �쥯�ȥ��󥰥�ο�  RGBA		*/

    unsigned char	sandstorm_mode;		/* ���� 				*/
    unsigned char	sstorm_prima;		/*			  		*/
    unsigned char	sstorm_enva;		/*			  		*/

    unsigned char	vr_rect_pat;		/* �֣����쥯�ȥ��󥰥��ɽ������	*/
    unsigned char	vr_rectcol[4];		/* �֣����쥯�ȥ��󥰥�ο�  RGBA	*/

    unsigned char	wether_work[8];		/* ŷ�������ѥ��			*/
    unsigned char	fade_work[4];		/* �ե������ѥ��			*/
} Kankyo;

/*-----------------------------------------------------------------------
 *
 *	�֤�ΤΤ�ɱ�˽ФƤ�������Τ褦��ʪ��
 *
 *----------------------------------------------------------------------*/
typedef struct
{
    char		mode;		/* �����⡼��	*/
    xyz_t		direction;	/* ������ϰ���	*/
    xyz_t		direction_old;	/* ������ϰ���	*/
    xyz_t		kihon;		/*     ���ܰ���	*/
    float		sin_cnt_x;	/* �������ư��	*/
    float		sin_cnt_y;	/*		*/
    float		sin_cnt_z;	/*		*/
    float		speed;		/*     ��ư®��	*/
    float		speed_target;	/* ��ɸ��ư®��	*/
    unsigned short	timer;		/* �����ޡ�	*/
    unsigned short	kaiten;		/* 		*/
    unsigned char	alpha;
    float		scale;
    unsigned short	kspeed;
    unsigned short	khaba;
    float		sinpuku;
    unsigned short	waittimer;
} MONONOKE;

/*-----------------------------------------------------------------------
 *
 *	�֤��ߤʤꤵ�ޡ�
 *
 *----------------------------------------------------------------------*/
typedef struct
{
    char		mode;		/* �����⡼��	*/
    xyz_t		direction;	/* ���ϰ���	*/
    xyz_t		kihon;		/* ���ܰ���	*/
    signed char		r_x;		/* 		*/
    signed char		r_z;		/* 		*/
    unsigned char	anmcnt;		/* 		*/
    unsigned char	timer;		/* 		*/
} THUNDER;

/*------------------------------------------------------------------------------*
 *										*
 *	���쥯�ȥ�å��������							*
 *										*
 *------------------------------------------------------------------------------*/
typedef struct {
    unsigned char	electric_proc;	/* ����ӥ���ȥ饤�ȥ��顼   */
    unsigned char	rect_red;
    unsigned char	rect_green;
    unsigned char	rect_blue;
    unsigned char	rect_alpha;
    float		timer;
} ELEKI;

/*-----------------------------------------------------------------------
 *
 *	�ֲл��� ���
 *
 *----------------------------------------------------------------------*/
typedef struct
{
    char	mode;		/* �����⡼��	*/
    xyz_t	direction;	/* ���ϰ���	*/
    xyz_t	old_direction;	/* ���ϰ���	*/
    xyz_t	kihon;		/* ���ܰ���	*/
    float	sin_cnt;
    float	speed;
} KAZAN;

/*-----------------------------------------------------------------------
 *
 *	�ִĶ��ǡ����ѡ�
 *
 *----------------------------------------------------------------------*/
typedef struct
{
    unsigned short	start_time;		/* ���ϻ���			*/
    unsigned short	end_time;		/* ��λ����			*/
    unsigned char	kankyo_pat;		/* �Ķ��饤��������		*/
    unsigned char	kankyo_pat2;		/* 				*/
} KLIGHT_CHG;

typedef struct
{
    unsigned short	start_time;		/* ���ϻ���			*/
    unsigned short	end_time;		/* ��λ����			*/
    unsigned char	ovr_sw;			/* �����С���åפ���Τ��ե饰	*/
    unsigned char	vrbox_dsp;		/* VR_BOX  ����			*/
    unsigned char	vrbox_dsp2;		/* VR_BOX2 ����			*/
    unsigned char	tenso_sw;		/* ž���ѥ��			*/
} VRBOX_CHG;

typedef struct
{
						/* �ƥ������㡼�ǡ���		*/
    u32			start_adr;		/* ���ϥ��ɥ쥹			*/
    u32			end_adr;		/* ��λ���ɥ쥹			*/

						/* �ѥ�åȥǡ���		*/
    u32			p_start_adr;		/* ���ϥ��ɥ쥹			*/
    u32			p_end_adr;		/* ��λ���ɥ쥹			*/
} VRBOX_TENSO;

/************************************************************************
 *
 *	�ؿ����
 *
 ************************************************************************/
extern void Global_kankyo_ct( Game *game,
			      Kankyo *this,
			      unsigned short daytime );

extern void Global_kankyo_set( Game_play	*gplay,
			       Kankyo		*this,
			       Global_light	*this3,
			       Kscope		*this4,
			       Message		*this5,
			       Gover		*this6,
			       Graph		*graph );

extern void water_in_kankyo( Game_play *, int );
extern void set_add_light_global(Game_play *,float ,float,float,float );
extern int Get_Eventday( void );
extern int Get_Totalday( void );
extern void Clr_Eventday( void );
extern void Nottori_Bgm( u16 );
extern char Nottori_Bgmoff_check( void );
extern void vr_kakusi( Game_play *game_play );
extern float get_parcent(unsigned short ,unsigned short ,unsigned short );
extern float get_parcent_forAccelBrake(unsigned short end_frame_us,
				       unsigned short start_frame_us,
				       unsigned short now_frame_us,
				       unsigned short accel_between_us,
				       unsigned short brake_between_us);
extern void		stagemusic_play( Game_play *game_play );
extern void Rain_sound_set_on( Game_play *game_play );
extern void Rain_sound_set_off( Game_play *game_play );
extern void OcaWarpJumpProc( Game_play *game_play );
extern void Kankyo_vrbox_change( unsigned char vr_box_flag, Kankyo *this, Vr_box *this2 );

extern VRBOX_CHG	vrbox_chg[4][9];
extern VRBOX_TENSO	vrbox_tenso[];

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

extern unsigned char	DEMOCAM_SW;
extern unsigned char	E_wether_flg;
extern unsigned char    E_water_colbak;
extern unsigned char	E_wether_apl;
extern unsigned char	E_vr_box_ovl;
extern unsigned short	E_day_time_plus;

/* #define	TIME_SPEED	REG(15)		/* ���ַв�®��		   */
#define	TIME_SPEED	E_day_time_plus		/* ���ַв�®��		   */

#endif
/*** z_kankyo.h end ***/
