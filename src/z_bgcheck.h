/*
 * $Id: z_bgcheck.h,v 2.1 1998-10-22 20:45:49+09 zelda Exp $
 *
 * $Log: z_bgcheck.h,v $
 * Revision 2.1  1998-10-22 20:45:49+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.100  1998/10/06 06:16:45  matutani
 * *** empty log message ***
 *
 * Revision 1.99  1998-10-02 14:10:38+09  matutani
 * Spot07����б�
 *
 * Revision 1.98  1998-10-01 14:03:19+09  matutani
 * �饤��ε�������ʤ������å�
 *
 * Revision 1.97  1998-09-30 14:07:09+09  matutani
 * *** empty log message ***
 *
 * Revision 1.96  1998-09-22 13:23:42+09  matutani
 * *** empty log message ***
 *
 * Revision 1.95  1998-09-14 19:01:21+09  matutani
 * *** empty log message ***
 *
 * Revision 1.94  1998-09-07 11:43:04+09  matutani
 * Obj������ʤ������ɤ�����å�
 *
 * Revision 1.93  1998-09-04 00:01:49+09  matutani
 * *** empty log message ***
 *
 * Revision 1.92  1998-09-02 17:35:47+09  matutani
 * DynaPolygonInfo_setExpand()���å�
 *
 * Revision 1.91  1998-08-25 20:51:29+09  matutani
 * *** empty log message ***
 *
 * Revision 1.90  1998-08-19 16:31:30+09  matutani
 * T_BGCheck_ObjWallCheck*()�������
 * T_BGCheck_ObjWAllCheck2*()�����Ȥ��ޤ��礦
 *                       ~~
 *
 * Revision 1.89  1998-08-17 15:33:44+09  matutani
 * *** empty log message ***
 *
 * Revision 1.88  1998-07-14 14:39:50+09  matutani
 * ŷ������å����С������
 *
 * Revision 1.87  1998-06-23 22:04:02+09  matutani
 * *** empty log message ***
 *
 * Revision 1.86  1998-06-19 18:46:29+09  matutani
 * *** empty log message ***
 *
 * Revision 1.85  1998-06-16 17:46:35+09  matutani
 * *** empty log message ***
 *
 * Revision 1.84  1998-06-15 22:27:08+09  matutani
 * *** empty log message ***
 *
 * Revision 1.83  1998-06-12 19:31:36+09  matutani
 * ���룲���̵��ʿ�̤θ����Ȥ���ľ���Ȥΰ��ֶᤤ��
 *
 * Revision 1.82  1998-06-09 13:43:27+09  matutani
 * ��֥ѥ�᡼���饤������å����������å��ɲ�
 *
 * Revision 1.81  1998-06-06 17:01:13+09  matutani
 * ���룲���̵��ʿ�̤θ����Ȥ�������������򲼤������˸򺹤�������
 * ����
 *
 * Revision 1.80  1998-05-26 15:22:10+09  matutani
 * T_BGCheck_ObjGroundCheck_grpWG_aiac()�ɲ�
 *
 * Revision 1.79  1998-05-25 21:59:47+09  matutani
 * T_BGCheck_ObjGroundCheck_grpW_aiac()�ɲ�
 *
 * Revision 1.78  1998-05-14 20:29:26+09  matutani
 * ����
 *
 * Revision 1.77  1998-05-11 13:40:21+09  matutani
 * T_BGCheck_CameraGroundCheck_grpWG_ai()����
 *
 * Revision 1.76  1998-05-07 16:01:53+09  matutani
 * *** empty log message ***
 *
 * Revision 1.75  1998-05-05 14:50:26+09  matutani
 *  T_Polygon -> float a, b, c�Ѵ�
 *
 * Revision 1.74  1998-04-27 14:02:30+09  matutani
 * *** empty log message ***
 *
 * Revision 1.73  1998-04-23 22:36:01+09  matutani
 * �������å��ü�������ɡ��������å���
 *
 * Revision 1.72  1998-04-21 18:31:04+09  matutani
 * *** empty log message ***
 *
 * Revision 1.71  1998-04-15 15:19:39+09  matutani
 * *** empty log message ***
 *
 * Revision 1.70  1998-04-09 23:26:12+10  matutani
 * *** empty log message ***
 *
 * Revision 1.69  1998/03/27  12:03:51  matutani
 * moveBG����̵������
 *
 * Revision 1.68  1998/03/18  01:33:04  takahata
 * *** empty log message ***
 *
 * Revision 1.67  1998/03/11  02:22:10  matutani
 * *** empty log message ***
 *
 * Revision 1.66  1998/03/06  11:30:45  matutani
 * �ѹ�����
 * ��Ź���֣Ҩ��£ϣءܣУҡ��֣Ҩ��£ϣؤλ���BG�����å��ΥХåե�����
 * �����ˣ¤������ʤ����ޤ�����
 *
 * �ѹ�����
 * �ޥåפ˥ݥꥴ�󤬾��ʤ��Ȥ��˥����å��ǻȤ���å���θĿ���x��x����
 * ���롢�����ɲá��ʾ��ˤ�äƽ����������Ƥ���Ȥ������뤫���Τ�ޤ�
 * ����դ��Ƥ���������
 *
 * Revision 1.65  1998/02/25  03:09:45  matutani
 * *** empty log message ***
 *
 * Revision 1.64  1998/02/24  05:09:10  matutani
 * �ؿ��ɲ�
 *
 * Revision 1.63  1998/02/18  13:19:16  matutani
 * �ޥ���®�٥ƥ���
 *
 * Revision 1.62  1998/02/12  11:21:04  matutani
 * *** empty log message ***
 *
 * Revision 1.61  1998/02/10  05:07:58  matutani
 * *** empty log message ***
 *
 * Revision 1.60  1998/02/04  13:12:35  matutani
 * ����ץ�£ǥ����å�
 *
 * Revision 1.59  1998/01/29  12:01:48  matutani
 * �������ʤ��ե饰
 *
 * Revision 1.58  1998/01/12  12:02:15  matutani
 * �եå�����åȻɤ��륳����
 *
 * Revision 1.57  1997/12/25  09:39:59  matutani
 * *** empty log message ***
 *
 * Revision 1.56  1997/12/24  09:58:31  matutani
 * ����
 *
 * Revision 1.55  1997/12/12  02:13:41  matutani
 * *** empty log message ***
 *
 * Revision 1.54  1997/12/11  02:50:28  matutani
 * T_BGCheck_getWallCode_ai��extern�ˤ�����
 *
 * Revision 1.53  1997/12/03  08:40:23  matutani
 * *** empty log message ***
 *
 * Revision 1.52  1997/12/03  08:31:28  matutani
 * ������ѹ��Τ���δؿ��ɲ�
 *
 * Revision 1.51  1997/11/14  01:02:29  matutani
 * *** empty log message ***
 *
 * Revision 1.50  1997/11/10  06:42:53  matutani
 * bsp��Ϣ���������
 *
 * Revision 1.49  1997/11/05  11:48:24  matutani
 * �ѹ����
 *
 * Revision 1.48  1997/11/04  06:27:16  matutani
 * ���夲�ӥå��ɲ�
 *
 * Revision 1.47  1997/10/11  12:26:15  matutani
 * extern void DynaPolyInfo_resetBGDataInfo()�ΰ����ѹ�
 *
 * Revision 1.46  1997/10/11  06:43:15  matutani
 * T_BGCheck_WaterGetCameraType()�ؿ�̾����
 *
 * Revision 1.45  1997/10/11  05:59:27  matutani
 * T_BGCheck_WaterGetCameraSet():�����ǡ�����NULL�ξ���-1���֤���
 *
 * Revision 1.44  1997/10/10  12:06:38  matutani
 * *** empty log message ***
 *
 * Revision 1.43  1997/10/10  11:59:35  matutani
 * *** empty log message ***
 *
 * Revision 1.42  1997/10/07  13:53:08  matutani
 * �Ķ�����
 *
 * Revision 1.41  1997/10/07  11:54:25  matutani
 * ���̹⤵�����å�
 *
 * Revision 1.40  1997/09/11  03:09:19  matutani
 * *** empty log message ***
 *
 * Revision 1.39  1997/09/11  02:49:00  matutani
 * *** empty log message ***
 *
 * Revision 1.38  1997/09/01  03:06:44  matutani
 * *** empty log message ***
 *
 * Revision 1.37  1997/08/27  11:21:41  matutani
 * *** empty log message ***
 *
 * Revision 1.36  1997/08/09  06:56:36  matutani
 * ���ߺ��
 *
 * Revision 1.35  1997/08/04  08:32:06  matutani
 * T_BGCheck_getKankyo_ai()�ɲ�
 *
 * Revision 1.34  1997/07/29  09:54:46  matutani
 * �����ʥߥå��ݥꥴ��ƥ���
 *
 * Revision 1.33  1997/07/25  06:22:37  matutani
 * T_BGCheck_CameraLineCheck_polyThrough_chgrp_ai�ɲ�
 *
 * Revision 1.32  1997/07/23  10:57:32  matutani
 * aiac���롼���ɲ�
 *
 * Revision 1.31  1997/07/22  23:44:50  matutani
 * ��ʬ���ȤΥ����ʥߥå��ݥꥴ����������Ϥ�������
 *
 * Revision 1.30  1997/07/19  10:43:18  matutani
 * �����ʥߥå�����
 *
 * Revision 1.29  1997/07/07  06:02:52  matutani
 * *** empty log message ***
 *
 * Revision 1.28  1997/07/03  04:37:43  matutani
 * *** empty log message ***
 *
 * Revision 1.27  1997/06/30  13:26:32  matutani
 * ����UP�ɲ�
 *
 * Revision 1.26  1997/06/27  12:52:20  matutani
 * �����ҥ����å�
 *
 * Revision 1.25  1997/06/27  12:15:39  matutani
 * �ɥӥåȥ����ɼ����ؿ��ɲä�����
 *
 * Revision 1.24  1997/06/27  05:20:46  matutani
 * index��
 *
 * Revision 1.23  1997/06/26  10:56:40  matutani
 * �ѥ���ߥ�Cange��Change��
 *
 * Revision 1.22  1997/06/26  00:37:31  matutani
 * �����ݥꥴ��ǡ���
 *
 * Revision 1.21  1997/06/20  10:56:03  iwawaki
 * *** empty log message ***
 *
 * Revision 1.20  1997/06/18  13:10:31  matutani
 * ��®�����ǡ�������
 *
 * Revision 1.19  1997/05/26  04:29:03  matutani
 * ������������¾��®��
 *
 * Revision 1.18  1996/11/20  01:17:26  hayakawa
 * SHORT_MAX ���� SHRT_MAX���ѹ�
 *
 * Revision 1.17  1996/11/14  07:26:55  matutani
 * �̤�ĺ���ǡ������Ϥ��ؿ��ɲ�
 *
 * Revision 1.16  1996/11/11  08:33:37  matutani
 * BG�����å�Ĵ��
 *
 * Revision 1.15  1996/10/28  10:25:34  matutani
 * z_bgcheck_type.h���ɲ�
 *
 * Revision 1.14  1996/10/28  09:08:34  matutani
 * *** empty log message ***
 *
 * Revision 1.13  1996/10/23  01:07:35  matutani
 * �ɥ����å��Х����
 *
 * Revision 1.12  1996/10/22  05:14:36  matutani
 * �饤������å������ѹ�
 *
 * Revision 1.11  1996/10/15  05:35:58  matutani
 * ����Ǿ��ѹ�
 *
 * Revision 1.10  1996/10/15  04:52:44  iwawaki
 * �����ͤ򣸣��������飱����������
 *
 * Revision 1.9  1996/10/03  13:29:07  matutani
 * �ɥ����å������ѹ�
 *
 * Revision 1.8  1996/09/27  05:02:04  matutani
 * SHORT_MAX/SHORT_MIN��Ϥ�����
 *
 * Revision 1.7  1996/09/24  06:54:52  matutani
 * *** empty log message ***
 *
 * Revision 1.6  1996/09/24  03:57:18  matutani
 * �ɥ����å������ɤ�ȴ���Ƥ��뤫�ɤ����Υ����å����Υѥ�᡼�����ͤ�0.0f
 * ����BGCHECK_WALL_CHECK_PARAM(=10.0f)���ѹ�
 *
 * Revision 1.5  1996/09/21  12:07:26  matutani
 * ������ʸ�����ѹ���ŷ������å��ɲ�
 *
 * Revision 1.4  1996/09/20  08:03:15  matutani
 * MESH_OVERRAP�򣱣����ˤ�����
 *
 * Revision 1.3  1996/09/18  09:07:42  iwawaki
 * $Log�ɲ�
 */

/*----------------------------------------------------------------------------
 *
 * �£ǥ����å�
 *
 * 1996/08/22
 * Program:Kenji Matsutani
 *---------------------------------------------------------------------------*/

#ifndef INCLUDE_BGCHECK_H
#define INCLUDE_BGCHECK_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include"game.h"
#include"z_bgcheck_type.h"


#define BG_INFINITY 30000
#define BG_FP_INFINITY 1.0e38f
#define	BGCHECK_OVER_Y	32000.0f

#define POS_MAX 16384.0f
#define POS_MIN -16384.0f

/*=========================================================================
 *
 * �ݥꥴ�����
 *
 *=========================================================================*/
/*--------------------------------------------------------------------------
 *
 * T_Polygon->Math3D_triangle
 *
 *-----------------------------------------------------------------------*/
extern void T_Polygon2Math3D_trinale(
    T_Polygon *ppoly,
    T_Vertex *vtx_tbl,
    Math3D_triangle *ptri);

/*----------------------------------------------------------------------------
 *
 * BG�����å���Polygon��¤�� 
 *
 *---------------------------------------------------------------------------*/

/* a,b,c���ͤ��Ѵ��׻� */
#define T_POLYGON_ABC_CONV(x) ((float)(x)* (1.0f/(float)SHRT_MAX))

/*----------------------------------------------------------------------------
 *
 * T_Polygon -> float a, b, c
 *
 *---------------------------------------------------------------------------*/
extern void T_Polygon_getABC(
    T_Polygon *ppoly,
    float *a, float *b, float *c);

/*-----------------------------------------------------------------------
 *
 *	�Ϸ��ݥꥴ��������
 *
 *----------------------------------------------------------------------*/
extern void T_Polygon_Ground_Matrix(
    T_Polygon	*polygon_info,
    float	x,
    float	y,
    float	z,
    MtxF	m
);

/*
 * ʿ������������
 * f(x, y, z) = ax + by + cz + d
 */
extern float T_Polygon_PlaneFunc(T_Polygon *this, xyz_t *pp);

/*
 * �̤�ĺ���ǡ������Ϥ���
 * ������������ǥå�����ɬ��
 */
extern void T_Polygon_GetVertex_bg_ai(
    T_Polygon *this, /* ĺ����Ĵ�٤�ݥꥴ�� */
    int bg_actor_index, /* ������������ǥå��� */
    T_BGCheck *pbgcheck, /* BG���� */
    xyz_t *vertex_array); /* vertex �ǡ�����������֤��ΰ� xyz_t
			   * �Υ������������� ����Ƭ�ݥ��󥿡�
			   */
/*---------------------------------------------------------------------------
 *
 * �����
 *
 *---------------------------------------------------------------------------*/
extern void T_BGCheck_ct(
    T_BGCheck *this, /* BG�����å��Ѥξ���¤�� */
    Game *game, /* �����๽¤�� */
    T_BGDataInfo *pbgdata); /* BG�Υǡ�������¤�� */

/*---------------------------------------------------------------------------
 *
 * �ǥ��ȥ饯����
 *
 * T_BGCheck�� �����
 *
 *--------------------------------------------------------------------------*/
extern void T_BGCheck_dt(
    T_BGCheck *this, /* BG�����å��Ѥξ���¤�� */
    Game *game); /* �����๽¤�� */

/*============================================================================
 *
 * �������å�
 *
 *===========================================================================*/

/*----------------------------------------------------------------------------
 *
 * �������
 *
 *--------------------------------------------------------------------------*/
extern float T_BGCheck_CameraGroundCheck(
    T_BGCheck *this, /* BG�����å���¤�� */
    T_Polygon **ret_poly, /* ���ݥꥴ��:�ΰ�ϳ����ǳ��� */
    xyz_t *pos); /* Ƚ����� */

/*--------------------------------------------------------------------------
 *
 * �����������å�:�����å����롼�׾�����
 * �������������
 *
 * ����:
 * T_BGCheck *this : BG�����å���¤��
 * T_Polygon **ret_poly : ���ݥꥴ��ݥ��󥿡�]
 * int *pbg_actor_index : moveBG�ѤΥ���ǥå���
 * xyz_t *pos : �����å�����
 *
 *--------------------------------------------------------------------------*/
extern float T_BGCheck_CameraGroundCheck_grpWG_ai(
    T_BGCheck *this,
    T_Polygon **ret_poly,
    int *pbg_actor_index,
    xyz_t *pos);

/*----------------------------------------------------------------------------
 *
 * �����������å�:�����å����롼����
 * ���֥�����������
 *
 * ����
 * T_BGCheck *this : BG�����å���¤��
 * T_Polygon **ret_poly : �򺹥ݥꥴ��ݥ��󥿡�
 * int *pbg_actor_index : moveBG�ѤΥ���ǥå���
 * Actor *pself_actor : ��ʬ���ȤΥ��������ݥ��󥿡��ʼ�ʬ���Ȥ����Ƥʤ���
 * xyz_t *pos : �����å�����
 *
 *--------------------------------------------------------------------------*/
extern float T_BGCheck_ObjGroundCheck_grpW_aiac(
    T_BGCheck *this,
    T_Polygon **ret_poly,
    int *pbg_actor_index,
    Actor *pself_actor,
    xyz_t *pos);

/*--------------------------------------------------------------------------
 *
 * �����������å�:�����å����롼�׾�����
 * Obj��������
 *
 * ����:
 * T_BGCheck *this : BG�����å���¤��
 * T_Polygon **ret_poly : ���ݥꥴ��ݥ��󥿡�]
 * int *pbg_actor_index : moveBG�ѤΥ���ǥå���
 * xyz_t *pos : �����å�����
 *
 *--------------------------------------------------------------------------*/
extern float T_BGCheck_ObjGroundCheck_grpWG_ai(
    T_BGCheck *this,
    T_Polygon **ret_poly,
    int *pbg_actor_index,
    xyz_t *pos);

/*----------------------------------------------------------------------------
 *
 * OBJ��
 *
 *---------------------------------------------------------------------------*/
extern float T_BGCheck_ObjGroundCheck(
    T_BGCheck *this, /* BG�����å���¤�� */
    T_Polygon **ret_poly,  /* �ΰ�ϳ����ǳ��� */
    xyz_t *pos); /* Ƚ����� */

/*----------------------------------------------------------------------------
 *
 * OBJ��
 *
 *---------------------------------------------------------------------------*/
extern float T_BGCheck_ObjGroundCheck2(
    Game_play *game_play,
    T_BGCheck *this, /* BG�����å���¤�Υݥ��󥿡��ΰ�ؤΥݥ��󥿡� */
    T_Polygon **ret_poly,
    xyz_t *pos); /* Ƚ����� */
    
/*----------------------------------------------------------------------------
 *
 * OBJ��:������������ǥå���������
 *
 *---------------------------------------------------------------------------*/
extern float T_BGCheck_ObjGroundCheck_ai(
    T_BGCheck *this, /* BG�����å���¤�Υݥ��󥿡��ΰ�ؤΥݥ��󥿡� */
    T_Polygon **ret_poly,
    int *pbg_actor_index, /* ���������ơ��֥���Υ���ǥå��� */
    xyz_t *pos); /* Ƚ����� */

/*----------------------------------------------------------------------------
 *
 * OBJ��:������������ǥå�������
 * ��ʬ�Υ��������ݥ��󥿡�����
 *
 *--------------------------------------------------------------------------*/
extern float T_BGCheck_ObjGroundCheck_aiac(
    T_BGCheck *this, /* BG�����å���¤�Υݥ��󥿡��ΰ�ؤΥݥ��󥿡� */
    T_Polygon **ret_poly,
    int *pbg_actor_index, /* �� �������ơ��֥���Υ���ǥå��� */
    Actor *pself_actor, /* ��ʬ���ȤΥ������� */
    xyz_t *ppos); /* Ƚ����� */


/*----------------------------------------------------------------------------
 *
 * OBJ��:������������ǥå�������
 * ��ʬ�Υ��������ݥ��󥿡�����
 * game_play�Υݥ��󥿡��Ĥ�
 *
 *--------------------------------------------------------------------------*/
extern float T_BGCheck_ObjGroundCheck_aiac2(
    Game_play *game_play, 
    T_BGCheck *this, /* BG�����å���¤�Υݥ��󥿡��ΰ�ؤΥݥ��󥿡� */
    T_Polygon **ret_poly,
    int *pbg_actor_index, /* �� �������ơ��֥���Υ���ǥå��� */
    Actor *pself_actor, /* ��ʬ���ȤΥ������� */
    xyz_t *ppos); /* Ƚ����� */
    
/*----------------------------------------------------------------------------
 *
 * OBJ��:������������ǥå�������
 * ��֥ѥ�᡼������
 *
 * �֤���:���⤵
 * ����:
 * T_BGCheck *this: BG�����å���¤�Υݥ��󥿡��ΰ�ؤΥݥ��󥿡�
 * T_Polygon **ret_poly:���򺹥ݥꥴ��
 * int *pbg_actor_index:������������ǥå���
 * Actor *pself_actor:���������ݥ��󥿡�
 * xyz_t *ppos: Ƚ�����
 * float sukima_r:��֥ѥ�᡼��
 *
 *---------------------------------------------------------------------------*/
extern float T_BGCheck_ObjGroundCheck_aiac_skp(
    T_BGCheck *this,
    T_Polygon **ret_poly,
    int *pbg_actor_index,
    Actor *pself_actor,
    xyz_t *ppos,
    float sukima_r);

/*-----------------------------------------------------------------------------
 *
 * OBJ��:������������ǥå�������
 * ��ʬ�Υ��������ݥ��󥿡�����
 *
 * �оݥ��롼��:�ɡ���
 *
 * �֤���:���⤵
 *
 * T_BGCheck *this:�������å�����
 * T_Polygon **ret_poly:�򺹥ݥꥴ��
 * int *pbg_actor_index:������������ǥå���
 * Actor *pself_actor:�����å��оݥ�������
 * xyz_t *pos:�����å�����
 *
 *---------------------------------------------------------------------------*/
extern float T_BGCheck_ObjGroundCheck_grpWG_aiac(
    T_BGCheck *this,
    T_Polygon **ret_poly,
    int *pbg_actor_index,
    Actor *pself_actor, 
    xyz_t *pos);

/*---------------------------------------------------------------------------
 *
 * �������å�:OBJ/�����������ʤ������å�̵�ط�
 *
 *---------------------------------------------------------------------------*/
extern float T_BGCheck_GroundCheck(
    T_BGCheck* this,
    T_Polygon *ret_poly, /* �ΰ�ϳ����ǳ��� */
    xyz_t *pos);

/*---------------------------------------------------------------------------
 *
 * �������å�:OBJ/�����������ʤ������å�̵�ط�
 *           :������������ǥå���������
 *
 *---------------------------------------------------------------------------*/
extern float T_BGCheck_GroundCheck_ai(
    T_BGCheck *this,
    T_Polygon *ret_poly, /* �ΰ�ϳ����ǳ��� */
    int *pbg_actor_index, /* BG������������ǥå��� */
    xyz_t *pos);


/*============================================================================
 *
 * �ɥ����å���
 *
 *==========================================================================*/
/*---------------------------------------------------------------------------
 *
 *  Obj���ɥ����å�
 *
 *-------------------------------------------------------------------------*/
extern int T_BGCheck_ObjWallCheck2(
    T_BGCheck *this,
    xyz_t *cl_pos,
    xyz_t *pos,
    xyz_t *old_pos,
    float radius,
    T_Polygon **ppoly,
    float check_h);

/*---------------------------------------------------------------------------
 *
 *  Obj���ɥ����å�:
 *  ��⡧������������ǥå���������
 *  actor_index:DYNA_ACTOR_NUM�λ���BG�Υݥꥴ��Ǥ��롣
 *
 *-------------------------------------------------------------------------*/
extern int T_BGCheck_ObjWallCheck2_ai(
    T_BGCheck *this,
    xyz_t *cl_pos,
    xyz_t *pos,
    xyz_t *old_pos,
    float radius,
    T_Polygon **ppoly,
    int *pbg_actor_index,
    float check_h);

/*---------------------------------------------------------------------------
 *
 *  Obj���ɥ����å�:
 *  ��⡧������������ǥå���������
 *  ��ʬ���Ȥ�����ʤ��С������
 *  actor_index:DYNA_ACTOR_NUM�λ���BG�Υݥꥴ��Ǥ��롣
 *
 *-------------------------------------------------------------------------*/
extern int T_BGCheck_ObjWallCheck2_aiac(
    T_BGCheck *this,
    xyz_t *cl_pos,
    xyz_t *pos,
    xyz_t *old_pos,
    float radius,
    T_Polygon **ppoly,
    int *pbg_actor_index,
    Actor *pself_actor,
    float check_h);

/*---------------------------------------------------------------------------
 *
 *  Obj���ɥ����å�:
 *  ��⡧������������ǥå���������
 *  ��ʬ���Ȥ�����ʤ��С������
 *  actor_index:DYNA_ACTOR_NUM�λ���BG�Υݥꥴ��Ǥ��롣
 *  �饤������å��ʤ���
 *
 *-------------------------------------------------------------------------*/
extern int T_BGCheck_ObjWallCheck2_aiac_nl(
    T_BGCheck *this,
    xyz_t *cl_pos,
    xyz_t *pos,
    xyz_t *old_pos,
    float radius,
    T_Polygon **ppoly,
    int *pbg_actor_index,
    Actor *pself_actor,
    float check_h);

/*============================================================================
 *
 * ������֤�ŷ������å�
 *
 *===========================================================================*/

/*---------------------------------------------------------------------------
 *
 * ŷ������å�:OBJ,�����������ʤ������å�̵�ط�
 *
 *-------------------------------------------------------------------------*/
extern int T_BGCheck_RoofCheck(
    T_BGCheck *this,
    float *ry, 
    xyz_t *pos,
    float radius_y);

/*---------------------------------------------------------------------------
 *
 * ŷ������å�:
 * OBJ��:�ݥꥴ��,������������ǥå���������
 * ��ʬ�Υ��������ݥ��󥿡�������
 *
 * ����:
 * T_BGCheck *this:
 * float *ry:�֤��⤵
 * xyz_t *pos:�����å�����
 * float radius:�����å���Υ
 * T_Polygon **ret_poly:�ݥꥴ����󳨤Υݥ��󥿡��Υݥ��󥿡�
 * int *pbg_actor_index:actor index���֤��ѿ��ؤΥݥ��󥿡�
 * Actor *pself_actor:��ʬ���ȤΥ��������ݥ��󥿡�
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_ObjRoofCheck_aiac(
    T_BGCheck *this,
    float *ry,
    xyz_t *pos,
    float radius, 
    T_Polygon **ret_poly,
    int *pbg_actor_index,
    Actor *pself_actor);

/*===========================================================================
 *
 * �饤������å�
 *
 *=========================================================================*/

/*
 * �饤������å�
 * �����Ѳ���
 */
extern int T_BGCheck_LineCheck_poly(
    T_BGCheck* this,
    xyz_t* psp, /* �������� */
    xyz_t* pep, /* ����� */
    xyz_t* p_near_cross, /* �������Ȥ˶ᤤ�� */
    /* �������Ȥ˶ᤤ�򺹥ݥꥴ��Υݥ��󥿡��ؤΥݥ��󥿡� */
    T_Polygon **ppret_poly, 
    int front_flag); /* ɽ�̤Τ� (!= 0�λ���*/

/*
 * �饤������å�
 * �����å����륰�롼�׻���
 */
extern int T_BGCheck_LineCheck_poly_chgrp(
    T_BGCheck* this,
    xyz_t* psp, /* �������� */
    xyz_t* pep, /* ����� */
    xyz_t* p_near_cross, /* �������Ȥ˶ᤤ�� */
    /* �������Ȥ˶ᤤ�򺹥ݥꥴ��Υݥ��󥿡��ؤΥݥ��󥿡� */
    T_Polygon **ppret_poly,
    int wall_flag, /* �ɥե�å� */
    int ground_flag, /* ���ե�å� */
    int roof_flag, /* ŷ��ե�å� */
    int front_flag); /* ɽ�̤Τ� (!= 0�λ���*/

/*
 * �饤������å�
 * �����å����륰�롼�׻���
 * ������������ǥå����б���
 */
extern int T_BGCheck_LineCheck_poly_chgrp_ai(
    T_BGCheck* this,
    xyz_t* psp, /* �������� */
    xyz_t* pep, /* ����� */
    xyz_t* p_near_cross, /* �������Ȥ˶ᤤ�� */
    /* �������Ȥ˶ᤤ�򺹥ݥꥴ��Υݥ��󥿡��ؤΥݥ��󥿡� */
    T_Polygon **ppret_poly,
    int wall_flag, /* �ɥե�å� */
    int ground_flag, /* ���ե�å� */
    int roof_flag, /* ŷ��ե�å� */
    int front_flag, /* ɽ�̤Τ� (!= 0�λ���*/
    int *pbg_actor_index); /* ������������ǥå������֤� */

/*---------------------------------------------------------------------------
 *
 * Camera�ѥ����å�:�����������ʤ��ե饰���ƶ�����
 *                 :������������ǥå����б���
 * ��⡧*pbg_actor_index == DYNA_ACTOR_NUM�λ�BG�����äƤ��롣
 *
 *--------------------------------------------------------------------------*/
/*
 * �饤������å�
 * �����å����륰�롼�׻���
 */
extern int T_BGCheck_CameraLineCheck_poly_chgrp_ai(
    T_BGCheck* this,
    xyz_t* psp, /* �������� */
    xyz_t* pep, /* ����� */
    xyz_t* p_near_cross, /* �������Ȥ˶ᤤ�� */
    /* �������Ȥ˶ᤤ�򺹥ݥꥴ��Υݥ��󥿡��ؤΥݥ��󥿡� */
    T_Polygon **ppret_poly,
    int wall_flag, /* �ɥե�å� */
    int ground_flag, /* ���ե�å� */
    int roof_flag, /* ŷ��ե�å� */
    int front_flag, /* ɽ�̤Τ� (!= 0�λ���*/
    int *pbg_actor_index); /* ������������ǥå������֤� */

/*---------------------------------------------------------------------------
 *
 * Camera�ѥ����å�:�����������ʤ��ե饰���ƶ�����
 *                 :������������ǥå����б���
 * ��⡧*pbg_actor_index == DYNA_ACTOR_NUM�λ�BG�����äƤ��롣
 * ���������ʤ������å��Υݥꥴ��Τߥ����å����롣
 *                                 ^^^^
 *--------------------------------------------------------------------------*/
/*
 * �饤������å�
 * �����å����륰�롼�׻���
 */
extern int T_BGCheck_CameraLineCheck_polyThrough_chgrp_ai(
    T_BGCheck* this,
    xyz_t* psp, /* �������� */
    xyz_t* pep, /* ����� */
    xyz_t* p_near_cross, /* �������Ȥ˶ᤤ�� */
    /* �������Ȥ˶ᤤ�򺹥ݥꥴ��Υݥ��󥿡��ؤΥݥ��󥿡� */
    T_Polygon **ppret_poly,
    int wall_flag, /* �ɥե�å� */
    int ground_flag, /* ���ե�å� */
    int roof_flag, /* ŷ��ե�å� */
    int front_flag, /* ɽ�̤Τ� (!= 0�λ���*/
    int *pbg_actor_index); /* ������������ǥå������֤� */

/*---------------------------------------------------------------------------
 *
 * Obj�ѥ����å�:Obj������ʤ��ե饰���ƶ�����
 *              :������������ǥå����б���
 * ��⡧*pbg_actor_index == DYNA_ACTOR_NUM�λ�,BG�����äƤ��롣
 *
 *--------------------------------------------------------------------------*/
/*
 * �饤������å�
 * �����å����륰�롼�׻���
 */
extern int T_BGCheck_ObjLineCheck_poly_chgrp_ai(
    T_BGCheck* this,
    xyz_t* psp, /* �������� */
    xyz_t* pep, /* ����� */
    xyz_t* p_near_cross, /* �������Ȥ˶ᤤ�� */
    /* �������Ȥ˶ᤤ�򺹥ݥꥴ��Υݥ��󥿡��ؤΥݥ��󥿡� */
    T_Polygon **ppret_poly,
    int wall_flag, /* �ɥե�å� */
    int ground_flag, /* ���ե�å� */
    int roof_flag, /* ŷ��ե�å� */
    int front_flag, /* ɽ�̤Τ� (!= 0�λ���*/
    int *pbg_actor_index); /* ���������ơ��֥�ؤΥ���ǥå������֤� */

/*---------------------------------------------------------------------------
 *
 * Obj�ѥ����å�:Obj������ʤ��ե饰���ƶ�����
 *              :������������ǥå����б���
 * ��⡧*pbg_actor_index == DYNA_ACTOR_NUM�λ�,BG�����äƤ��롣
 *
 *--------------------------------------------------------------------------*/
/*
 * �饤������å�
 * �����å����륰�롼�׻���
 */
extern int T_BGCheck_ObjLineCheck_poly_chgrp_aiac(
    T_BGCheck* this,
    xyz_t* psp, /* �������� */
    xyz_t* pep, /* ����� */
    xyz_t* p_near_cross, /* �������Ȥ˶ᤤ�� */
    /* �������Ȥ˶ᤤ�򺹥ݥꥴ��Υݥ��󥿡��ؤΥݥ��󥿡� */
    T_Polygon **ppret_poly,
    int wall_flag, /* �ɥե�å� */
    int ground_flag, /* ���ե�å� */
    int roof_flag, /* ŷ��ե�å� */
    int front_flag, /* ɽ�̤Τ� (!= 0�λ���*/
    int *pbg_actor_index, /* ���������ơ��֥�ؤΥ���ǥå������֤� */
    Actor *pself_actor); /* ��ʬ���ȤΥ��������ݥ��󥿡� */

/*---------------------------------------------------------------------------
 *
 * Obj�ѥ����å�:Obj������ʤ��ե饰���ƶ�����
 *              :������������ǥå����б���
 *              :��֥ѥ�᡼��
 * ��⡧*pbg_actor_index == DYNA_ACTOR_NUM�λ�,BG�����äƤ��롣
 * �֤���:�򺹤�̵ͭ
 * ����:
 * T_BGCheck* this:BG�����å���¤��
 * xyz_t* psp: ��������
 * xyz_t* pep: �����
 * xyz_t* p_near_cross:�������Ȥ˶ᤤ��
 * T_Polygon **ppret_poly:�������Ȥ˶ᤤ�򺹥ݥꥴ��Υݥ��󥿡��ؤΥݥ��󥿡�
 * int wall_flag:�ɥե�å�
 * int ground_flag:���ե�å�
 * int roof_flag:ŷ��ե�å�
 * int front_flag: ɽ�̤Τ� (!= 0�λ���
 * int *pbg_actor_index: ���������ơ��֥�ؤΥ���ǥå������֤�
 * Actor *pself_actor: ��ʬ���ȤΥ��������ݥ��󥿡�
 * float sukima_r: ��֥ѥ�᡼��
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_ObjLineCheck_poly_chgrp_aiac_skp(
    T_BGCheck* this,
    xyz_t* psp, /* �������� */
    xyz_t* pep, /* ����� */
    xyz_t* p_near_cross, /* �������Ȥ˶ᤤ�� */
    /* �������Ȥ˶ᤤ�򺹥ݥꥴ��Υݥ��󥿡��ؤΥݥ��󥿡� */
    T_Polygon **ppret_poly,
    int wall_flag, /* �ɥե�å� */
    int ground_flag, /* ���ե�å� */
    int roof_flag, /* ŷ��ե�å� */
    int front_flag, /* ɽ�̤Τ� (!= 0�λ���*/
    int *pbg_actor_index, /* ���������ơ��֥�ؤΥ���ǥå������֤� */
    Actor *pself_actor, /* ��ʬ���ȤΥ��������ݥ��󥿡� */
    float sukima_r);

/*---------------------------------------------------------------------------
 *
 * Arrow�ѥ����å�:Arrow������ʤ��ե饰���ƶ�����
 *                :������������ǥå����б���
 * ��⡧*pbg_actor_index == DYNA_ACTOR_NUM�λ�,BG�����äƤ��롣
 *
 *--------------------------------------------------------------------------*/
/*
 * �饤������å�
 * �����å����륰�롼�׻���
 */
extern int T_BGCheck_ArrowLineCheck_poly_chgrp_ai(
    T_BGCheck* this,
    xyz_t* psp, /* �������� */
    xyz_t* pep, /* ����� */
    xyz_t* p_near_cross, /* �������Ȥ˶ᤤ�� */
    /* �������Ȥ˶ᤤ�򺹥ݥꥴ��Υݥ��󥿡��ؤΥݥ��󥿡� */
    T_Polygon **ppret_poly,
    int wall_flag, /* �ɥե�å� */
    int ground_flag, /* ���ե�å� */
    int roof_flag, /* ŷ��ե�å� */
    int front_flag, /* ɽ�̤Τ� (!= 0�λ���*/
    int *pbg_actor_index); /* ���������ơ��֥�ؤΥ���ǥå������֤� */

/*---------------------------------------------------------------------------
 *
 * ����ץ�£ǥ����å�
 *
 * �ʰװ�����
 *
 * ������
 * T_BGCheck *this: �£ǥ����å���¤��
 * xyz_t *pos : �����å����濴
 * float r: �����å���Ⱦ��r
 *
 * ��⡧
 * �����å�����ܿ�/��ޤ����BG�Υݥꥴ�󤬤����TRUE��̵�����FALSE���֤���
 * ����,r��������ۤ��Ƥ���ȡ����ޤ��ݥꥴ�󤬤Ȥ�ʤ���礬�����뤬���б�
 * ����ͽ�ꡣ
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_SimpleCheck(
    T_BGCheck *this,
    xyz_t *pos,
    float r);

/*----------------------------------------------------------------------------
 *
 * ����ץ�£ǥ����å�
 * �ɥ����å��Τ���
 *
 *  ������
 * T_BGCheck *this: �£ǥ����å���¤��
 * xyz_t *pos : �����å����濴
 * float r: �����å���Ⱦ��r
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_SimpleCheck_Wall(
    T_BGCheck *this,
    xyz_t *pos,
    float r);

/*----------------------------------------------------------------------------
 *
 * short_SLIST_NODE ����
 *
 *--------------------------------------------------------------------------*/
extern short_SLIST_NODE *T_BGCheckAlloc_getShortSlistNode(
    BGCheckAlloc *this);

/*----------------------------------------------------------------------------
 *
 * short_SLIST_NODE ����ǥå�������
 *
 *--------------------------------------------------------------------------*/
extern unsigned short T_BGCheckAlloc_getShortSlistNode_index(
    BGCheckAlloc *this);

/*============================================================================
 *
 * �����ʥߥå��ݥꥴ��
 *
 *==========================================================================*/

/*---------------------------------------------------------------------------
 *
 * short_SLIST_NODE ���꡼�󥢥å�
 *
 *-------------------------------------------------------------------------*/
extern void T_BGCheckAlloc_cleanUp(BGCheckAlloc *this);


/*----------------------------------------------------------------------------
 *
 * short_SLIST_NODE �����ʥߥå��ݥꥴ��:����ǥå�������
 *
 *--------------------------------------------------------------------------*/
extern unsigned short T_BGCheckAlloc_getShortSlistNode_indexDynamic(
    BGCheckAlloc *this);
/*============================================================================
 *
 * �����ʥߥå��ݥꥴ��ƽ�����ʬ
 *
 *==========================================================================*/
/*---------------------------------------------------------------------------
 *
 * moveBG����
 *
 *-------------------------------------------------------------------------*/
extern int DynaPolyInfo_checkMoveBG(int bg_actor_index);

/*---------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ��:����������Ͽ    
 *   
 * pbgdata��,ROM�ǡ����ξ��,SEGMENT_TO_KSEG0���Ƥ����Ƥ�����������Ȥ�ޤࡣ
 * ����Υݥꥴ��ǡ����ξ��⤢�뤿�ᡣ
 *
 *-------------------------------------------------------------------------*/
extern int DynaPolyInfo_setActor(
    Game *game,
    Dyna_Poly_Info *pdyna_poly_info, 
    Actor *actor, /* MoveBG���������ؤΥݥ��� */
    T_BGDataInfo *pbgdata); /* �����ǡ��� */

/*---------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ��:������������ǥå�������ݥ��󥿡����Ѵ�
 *
 *--------------------------------------------------------------------------*/
extern Actor *DynaPolyInfo_actor_index2pointer(
    T_BGCheck *pbgcheck,
    int bg_actor_index);

/*---------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ��:�̲�ӥåȥ��å�
 * ���ΥӥåȤ򥻥åȤ���ȥǡ����ϻĤäƤ��ޤ���,���꤫��ϳ�����ޤ���
 *
 *--------------------------------------------------------------------------*/
extern void DynaPolygonInfo_setThrough(
    Game *game,
    Dyna_Poly_Info *pdyna_poly_info,
    int bg_actor_index);

/*---------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ��:�̲�ӥåȥ��ꥢ
 * ���ΥӥåȤ򥻥åȤ���ȥǡ����ϻĤäƤ��ޤ���,���꤫��ϳ�����ޤ���
 *
 *--------------------------------------------------------------------------*/
extern void DynaPolygonInfo_clearThrough(
    Game *game,
    Dyna_Poly_Info *pdyna_poly_info,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ��:ŷ�� off
 * �ݥꥴ�����������Ͽ����ޤ���
 *
 *---------------------------------------------------------------------------*/
extern void DynaPolygonInfo_setRoofOff(
    Game *game,
    Dyna_Poly_Info *pdyna_poly_info,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ��:ŷ�� off
 * �ݥꥴ�����������Ͽ��Ƴ����ޤ���
 *
 *---------------------------------------------------------------------------*/
extern void DynaPolygonInfo_clearRoofOff(
    Game *game,
    Dyna_Poly_Info *pdyna_poly_info,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ��:��Ͽ���ͽ��
 *
 *--------------------------------------------------------------------------*/
extern void DynaPolyInfo_delReserve(
    Game *game,
    Dyna_Poly_Info *pdyna_poly_info,
    int del_index); /* ������륢����������ǥå��� */

/*----------------------------------------------------------------------------
 *
 * �����ʥߥå� �ݥꥴ��Ÿ�����å�
 * SRT�򤤤���ʤ��Ƥ�moveBG��Ÿ�����ޤ���
 * pdyna_poly_info => &game_play->BGCheck.dyna_poly_info
 *
 *---------------------------------------------------------------------------*/
extern void DynaPolygonInfo_setExpand(
    Game *game,
    Dyna_Poly_Info *pdyna_poly_info);

/*--------------------------------------------------------------------------
 *
 * ���ơ��������󥯥ꥢ
 *
 *------------------------------------------------------------------------*/
extern void DynaPolyInfo_statusClear(
    Game *game,
    Dyna_Poly_Info *pdyna_poly_info,
    Actor *actor);

/*-----------------------------------------------------------------------------
 *
 * �ǡ������åȥ��å�
 *
 *---------------------------------------------------------------------------*/
extern void DynaPolyInfo_setup(
    Game *game,
    Dyna_Poly_Info *pdyna_poly_info);
    
/*--------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ��ư�λ����
 *
 *------------------------------------------------------------------------*/
extern void DynaPolyInfo_cleanUp(  
    Game *game,
    Dyna_Poly_Info *pdyna_poly_info);
/*============================================================================
 *
 * �����ʥߥå��ݥꥴ��桼�ƥ���ƥ���
 *
 *==========================================================================*/
/*----------------------------------------------------------------------------
 *
 * T_BGDataInfo���Ƥ�SEGMENT_TO_KSEG0���롣
 * ��⡧���֤�ǡ�����������ѤäƤ��롣
 *
 *---------------------------------------------------------------------------*/
extern void DynaPolyUty_bgdi_SG2KSG(
    T_BGDataInfo *pbgdata_from, /* �ǡ����� */
    /* ���㥹�Ȥ��줿����:�����ϥݥ��󥿡����ΰ�̵���� */
    T_BGDataInfo **ppbgdata_to);

/*----------------------------------------------------------------------------
 *
 * BG�ǡ����ݥ��󥿺�����
 *
 * ���쥯�Ȳ��̸�ʤɥǡ����������ꤵ���Ȥ���,T_BGDataInfo�����Ƥ����Ѥ�
 * ����,�Ƥӽ�ľ����
 * ��Ƥ�T_BGDataInfo���Ƥ�SEGMENT_TO_KSEG0���롣
 * ��⡧���֤�ǡ�����������ѤäƤ��롣
 *
 *---------------------------------------------------------------------------*/
extern void DynaPolyInfo_resetBGDataInfo(
    T_BGCheck *pbgcheck,
    Game_play *game_play);

/*============================================================================
 *
 * �ݥꥴ������Ϣ
 *
 *==========================================================================*/


/*----------------------------------------------------------------------------
 *
 * ����饻�åȤ����
 * ������������ǥå�����
 * ��⡧�ݥꥴ�����ơ��֥뤬NULL�λ��ϣ����֤���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_getCameraSet_ai(
    T_BGCheck *this,
    T_Polygon *ppoly, /* ����� ���åȤ�����ݥꥴ��ؤΥݥ��󥿡� */
    int bg_actor_index); /* ���Υݥꥴ�����äƤ��륢����������ǥå��� */
/*----------------------------------------------------------------------------
 *
 * Index���饫��饿���פ����
 * ������������ǥå�����
 * ��⡧�����ǡ�����NULL�ξ��,0���֤���
 *
 *-------------------------------------------------------------------------*/
extern unsigned short T_BGCheck_getCameraType_index_ai(
    T_BGCheck *this,
    int index,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * �����Υ����פ����
 * ������������ǥå�����
 * ��⡧�����ǡ������ݥꥴ����󤬤ɤ��餬��NULL�ξ��,0���֤���
 *
 *---------------------------------------------------------------------------*/
extern unsigned short T_BGCheck_getCameraType_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*--------------------------------------------------------------------------
 *
 * index���饫����s_xyz�ǡ����θĿ�������
 * ������������ǥå�����
 * ��⡨�����ǡ����ơ��֥뤬NULL�ξ��,�����֤���
 *
 *-------------------------------------------------------------------------*/
extern unsigned short T_BGCheck_getCameraDataNum_index_ai(
    T_BGCheck *this,
    int index,
    int bg_actor_index);


/*---------------------------------------------------------------------------
 *
 * ������s_xyz�Υǡ����θĿ�������
 * ������������ǥå�����
 * ��⡧�����ǡ������ݥꥴ����󤬤ɤ��餬��NULL�ξ��,0���֤���
 *
 *--------------------------------------------------------------------------*/
extern unsigned short T_BGCheck_getCameraDataNum_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);


/*----------------------------------------------------------------------------
 *
 * index���饫����s_xyz�Υǡ����ؤΥݥ��󥿡����֤���
 * ������������ǥå�����
 * �⤷�������ǡ����ơ��֥뤬NULL�ξ��,NULL���֤���
 *
 *---------------------------------------------------------------------------*/
extern s_xyz *T_BGCheck_getCameraPos_index_ai(
    T_BGCheck *this,
    int index,
    int bg_actor_index);

/*---------------------------------------------------------------------------
 *
 * ������s_xyz�Υǡ����ؤΥݥ��󥿡����֤���
 * ������������ǥå�����
 * ��⡧�����ǡ���/�ݥꥴ��ơ��֥����NULL�ξ��,NULL���֤���
 *
 *--------------------------------------------------------------------------*/
extern s_xyz *T_BGCheck_getCameraPos_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * �������ڤ��ؤ�������
 * ������������ǥå�����
 * ��⡧�⤷��poly_info_tbl��NULL�ΤФ����������֤���
 *
 *---------------------------------------------------------------------------*/
extern int T_BGCheck_getSceneChangeCode_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);



/*----------------------------------------------------------------------------
 *
 * °��
 * ������������ǥå�����
 * �⤷���ݥꥴ�����ơ��֥뤬NULL�ΤФ����������֤���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_getAttributeCode_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);


/*----------------------------------------------------------------------------
 *
 * ���夲�ӥå�
 *
 * ��⡧�ݥꥴ�����NULL�ʤ�,�����֤�
 *
 *-------------------------------------------------------------------------*/
extern int T_BGCheck_getGroundUpBit_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);
 
/*----------------------------------------------------------------------------
 *
 * �Ͽ����ػ�
 *
 *---------------------------------------------------------------------------*/
extern int T_BGCheck_getHorseKeepOutBit_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*-----------------------------------------------------------------------------
 *
 * ���̻����٥�
 * �ݥꥴ���°�����饵��������̻����٥�����롣
 *
 *---------------------------------------------------------------------------*/
extern u16 T_BGCheck_getSoundGroundLabel(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);



/*-----------------------------------------------------------------------------
 *
 * ŷ�楳���ɤ�����
 * ������������ǥå�����
 * ��⡧�ݥꥴ�����ơ��֥뤬NULL�ΤФ���,�����֤���
 *
 *---------------------------------------------------------------------------*/
extern int T_BGCheck_getRoofCode_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*===========================================================================
 *
 * �ɥ�����
 *
 *===========================================================================*/



/* �ʲ��ݥꥴ�����NULL�ξ��,�ޤȤ�˾�����֤��ʤ� */
/*--------------------------------------------------------------------------
 *
 * �ɥ����ɤ�����
 * ������������ǥå�����
 * �⤷���ݥꥴ�����NULL�ξ��,�����֤���
 *
 *---------------------------------------------------------------------------*/
extern int T_BGCheck_getWallCode_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*--------------------------------------------------------------------------
 *
 * �ɥ����ɥӥåȤ�����
 * ������������ǥå�����
 *
 *-------------------------------------------------------------------------*/
extern unsigned int T_BGCheck_getWallCodeBit_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*--------------------------------------------------------------------------
 *
 * �Ф�ʤ��ɤ���
 * ������������ǥå�����
 *
 *-------------------------------------------------------------------------*/
extern int T_BGCheck_WallNotClib_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);


/*-----------------------------------------------------------------------------
 *
 * ���Ҥ���
 * ������������ǥå�����
 *
 *---------------------------------------------------------------------------*/
extern int T_BGCheck_WallLadder_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);


/*--------------------------------------------------------------------------
 *
 * ����UP����
 * ������������ǥå�����
 *
 *-------------------------------------------------------------------------*/
extern int T_BGCheck_WallLadderUp_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*==========================================================================
 *
 * ��������
 *
 *=========================================================================*/

/*---------------------------------------------------------------------------
 *
 * �������ɤ�����
 * ������������ǥå�����
 * ��⡧�ݥꥴ�����NULL�ξ�硢�����֤���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_getGroundCode_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);


/*----------------------------------------------------------------------------
 *
 * �����ȥ����ץ�����
 * ������������ǥå�����
 * ��⡧polygon_info_tbl��NULL�ξ�硢�����֤���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_GroundAutoJumpType_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * �������
 * ������������ǥå�����
 * ��⡧�ݥꥴ�����NULL�ʤ顢�����֤���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_getTypeSoundCode_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * �໤
 * ������������ǥå�����
 * ��⡧�ݥꥴ�����NULL�ξ��,�����֤���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_getFriction_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * �Ķ�
 * ������������ǥå�����
 * ��⡧�ݥꥴ�����NULL�ξ��,�����֤���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_getKankyo_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);
/*----------------------------------------------------------------------------
 *
 * ���̤ǽ���������ľ���Ȥΰ��ִط�
 *
 *---------------------------------------------------------------------------*/
#ifdef DEBUG_BG_2PLANELINE_LINENEARPOS
extern void T_BGCheckUty_2PlaneLine_LineNearPos(Game *game);
#endif

/*----------------------------------------------------------------------------
 *
 * BG�����å��桼�ƥ���ƥ���
 *
 *---------------------------------------------------------------------------*/
extern void T_BGCheckUty_line_check(Game *game);
   
/*--------------------------------------------------------------------------
 *
 * Obj������ʤ������ɤ�����å�
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_CheckObjNoHit(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*--------------------------------------------------------------------------
 *
 * Arrow������ʤ�������
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_CheckArrowNoHit(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index); /* �Ȥ�ʤ� */

/*----------------------------------------------------------------------------
 *
 * ��������٥�
 * ������������ǥå�����
 * ��⡧�ݥꥴ�����NULL�ξ��,�����֤���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_getEcho_ai(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*----------------------------------------------------------------------------
 *
 * �եå�����åȻɤ��륳����
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_checkHookShotStick(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);


/*--------------------------------------------------------------------------
 *
 * �٥�ȥ���٥����ɤ�����
 * ���:��ή/�٥�� �ѥ����ǥå��� �����λ�̵��
 *      �֤��� TRUE �٥�ȥ���٥�
 *             FALSE �� ��or ����ʤ�)
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_checkBelt(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*---------------------------------------------------------------------------
 *
 * ��ή/�٥�� �ѥ����ǥå���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_getSlidePowerIndex(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*---------------------------------------------------------------------------
 *
 * ���٥���ǥå���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_getSlideAngle(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);
/*---------------------------------------------------------------------------
 *
 * ���᡼���ӥå�
 *
 * T_BGCheck *this:BG�����å�����
 * T_Polygon *ppoly:�ݥꥴ�����
 * int bg_actor_index:������������ǥå���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_CheckDamagePoly(
    T_BGCheck *this,
    T_Polygon *ppoly,
    int bg_actor_index);

/*============================================================================
 *
 * �������WaterInfo��)
 *
 *===========================================================================*/

/*----------------------------------------------------------------------------
 *
 * ���̹⤵�����å�
 *
 * �֤���:����xz���֤ˤ�������̤�̵ͭ
 * 
 *
 *---------------------------------------------------------------------------*/
extern int T_BGCheck_WaterSurfaceCheck(
    T_BGCheck *this, float x, float z,
    float *pheight, /* �⤵ */
    Water_Info **pwater); /* �ݥ��󥿡��Υݥ��󥿡� */

/*----------------------------------------------------------------------------
 *
 * ���̹⤵�����å�2
 *
 * �����ֹ�����å��С������
 *
 * �֤���:����xz���֤ˤ�������̾����̵ͭ(TRUE�λ����ξ��Τ����˿夢���
 * 
 *
 *---------------------------------------------------------------------------*/
extern int T_BGCheck_WaterSurfaceCheck2(
    Game_play *game_play, /* ������ݥ��󥿡�:�ɲ� */
    T_BGCheck *this, float x, float z,
    float *pheight, /* �⤵:������㤤�Ȥ���̵�롩 */
    Water_Info **pwater); /* �ݥ��󥿡��Υݥ��󥿡� */

/*----------------------------------------------------------------------------
 *
 * ���̹⤵�����å���:��ݥꥴ���������(Spot07�к���
 *
 * Spot07��ݥꥴ��Τ�����ü������
 *
 * Spot07�λ��Τ���ξ�ο�Υݥꥴ��Τ����y������å����ޤ�������ʳ���
 * ����T_BGCheck_WaterSurfaceCheck2()��Ʊ���ˤ��ޤ���
 * y�Υ����å����֤�*pheight�˽���ͤȤ�������Ƥ���������
 * �ʿ�ݥꥴ�󤬤�����Ѳ����ޤ�����
 *
 * ����:
 * float *pheight:�����å�����⤵�����ͤȤ��Ƥ���Ƥ��������������Ȥΰ㤤)
 * �ʤ�������Spot07�Ǥ����Ȥ��ޤ����
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_WaterSurfaceCheck3(
    Game_play * game_play,
    T_BGCheck *this,
    float x,
    float z,
    float *pheight,
    Water_Info **pwater);

/*-----------------------------------------------------------------------------
 *
 * ����饻�åȤ����
 * Water_Info��
 * ��⡧�����ǡ�����NULL�ξ���-1���֤���
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_WaterGetCameraSet(
    T_BGCheck *this,
    Water_Info *pwater);

/*-----------------------------------------------------------------------------
 *
 * ����饿���פ����
 * WaterInfo��
 *
 *---------------------------------------------------------------------------*/
extern unsigned short T_BGCheck_WaterGetCameraType(
    T_BGCheck *this,
    Water_Info *pwater);

/*-----------------------------------------------------------------------------
 *
 * �Ķ������ɤ�����
 * Water_Info��
 *
 *---------------------------------------------------------------------------*/
extern int T_BGCheck_WaterGetKankyo(
    T_BGCheck *this,
    Water_Info *pwater);

/*-----------------------------------------------------------------------------
 *
 * ���̥ݥꥴ������å�
 * ��������:������֤ζ᤯��y��ܨ�y_range)�ο�ݥꥴ�󥤥�ǥ�
 * ������������롣
 * �⤷���ϰ���˿��̤�¸�ߤ��ʤ����,-1���֤���
 *
 * �֤���:��ݥꥴ�󥤥�ǥå���
 * ����:Game_play *game_play:������ץ쥤
 *      T_BGCheck *this:bg�����å���¤��
 *      xyz_t *pos:�����å�����
 *      float y_range:�����å����ϰ�
 *      Water_Info **pwater:���Ĥ��ä���ݥꥴ��ؤΥݥ��󥿡��ʤ⤷��
 *      ���Ĥ���ʤ��ä����NULL������ˤ����롢�ݥ��󥿡��ؤΥݥ��󥿡�
 *
 *---------------------------------------------------------------------------*/
extern int T_BGCheck_WaterGetIndex(
    Game_play *game_play,
    T_BGCheck *this,
    xyz_t *pos,
    float y_range,
    Water_Info **pwater);

/*===========================================================================
 *
 * �Ķ��ݥꥴ���WaterInfo��)
 *
 *==========================================================================*/
/*---------------------------------------------------------------------------
 *
 * �����ǴĶ��ݥꥴ�󤫤ɤ�����
 * ��⡧����ʳ��ǿ����Ķ��ݥꥴ��
 * ����:�����ݥꥴ��ؤΥݥ��󥿡�
 *
 *--------------------------------------------------------------------------*/
#define BG_WI_checkKankyo(pwi) ((pwi)->info & (1<<19))

/*----------------------------------------------------------------------------
 *
 * �����Ķ��ݥꥴ��⤵�����å�2:�Ķ��ݥꥴ���������
 *
 * �����ֹ�����å��С������
 *
 * �֤���:����xz���֤ˤ�����Water_Info�Ķ��ݥꥴ���̵ͭ
 * (TRUE�λ����ξ��Τ����˥ݥꥴ�󤢤��
 *
 *---------------------------------------------------------------------------*/
extern int T_BGCheck_WaterKankyoSurfaceCheck2(
    Game_play *game_play,
    T_BGCheck *this, float x, float z,
    float *pheight, /* �⤵:������㤤�Ȥ���̵�롩 */
    Water_Info **pwater); /* �ݥ��󥿡��Υݥ��󥿡� */
    
/*============================================================================
 *
 * moveBG�ǥХå�ɽ��
 *
 *==========================================================================*/
extern void T_BGCheck_DebugMoveBGDisp(
    Game *game,
    T_BGCheck *pbgcheck); /* BG�����å����� */
/*=============================================================================
 *
 * �طʥ����å�ɽ��
 *
 *===========================================================================*/
extern void T_BGCheck_DebugBGDisp(
    Game *game,
    T_BGCheck *pbgcheck); /* BG�����å����� */

/*============================================================================
 *
 * Utility
 *
 *==========================================================================*/

/*--------------------------------------------------------------------------
 *
 * ���룲���̵��ʿ�̤θ����Ȥ�������������򲼤������˸򺹤�������
 * ���롣
 *
 * �֤���:����������ʣ��Ĥ��̤θ��������
 * ����:
 * T_Polygon *pp1, *pp2 : ���Ĥ��̤ؤΥݥ��󥿡�
 * xyz_t *pcheck_pos : �����å�����
 * xyz_t *pcross_pos : �������
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_2PlaneLinePosNearPos(
    T_Polygon *pp1,
    T_Polygon *pp2,
    xyz_t *pcheck_pos,
    xyz_t *pcross_pos);


/*--------------------------------------------------------------------------
 *
 * ���룲���̵��ʿ�̤θ����Ȥ���ľ���Ȥΰ��ֶᤤ��
 *
 * �֤���:����������ʣ��Ĥ��̤θ��������
 * ����:
 * T_Polygon *pp1, *pp2 : ���Ĥ��̤ؤΥݥ��󥿡�
 * xyz_t *pl1p1, xyz_t *pl1p2: ����ľ����Σ���
 * xyz_t *pcross_pos : �������
 *
 *--------------------------------------------------------------------------*/
extern int T_BGCheck_2PlaneLine_LineNearPos(
    T_Polygon *pp1, T_Polygon *pp2,
    xyz_t *pl2p1, xyz_t *pl2p2,
    xyz_t *pnear_pos);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** bgcheck.h ***/
