/* $Id: z_bgcheck_poly_param.h,v 2.1 1998-10-22 20:45:49+09 zelda Exp $ */
/*-------------------------------------------------------------------------
 *
 * z_bgcheck_poly_param.h
 *
 * Progaram:Kenji Matsutnai
 *
 * date:1997ǯ 6��25��(������) 10��27ʬ17�� JST
 *
 *-------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------
 *
 * $Log: z_bgcheck_poly_param.h,v $
 * Revision 2.1  1998-10-22 20:45:49+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.39  1998/09/23 13:51:05  matutani
 * *** empty log message ***
 *
 * Revision 1.38  1998-08-26 23:33:40+09  matutani
 * ������ɶ�°�ɲ�
 *
 * Revision 1.37  1998-08-04 16:58:02+09  matutani
 * ���ڥ�ߥ�
 *
 * Revision 1.36  1998-08-04 16:48:15+09  matutani
 * ���󥸥����ڤ��ؤ�
 *
 * Revision 1.35  1998-07-31 22:05:45+09  matutani
 * BG_POLY_AJ_DROP2�ɲ�
 *
 * Revision 1.34  1998-07-04 20:31:17+09  matutani
 * �����ȥ����ץ����ɤ����ӹ����ɲ�
 *
 * Revision 1.33  1998-06-09 16:27:05+09  matutani
 * ����ڤ��ؤ����ɲ�
 *
 * Revision 1.32  1998-05-16 22:31:13+09  matutani
 * �������°�������ɡ�Obj������ʤ��ѡˤ�����(������ɲ�
 *
 * Revision 1.31  1998-05-16 20:37:39+09  matutani
 * ����ڤ��ؤ�
 *
 * Revision 1.30  1998-04-28 15:33:26+09  matutani
 * ¨��ޥ���
 *
 * Revision 1.29  1998-04-21 18:31:26+09  matutani
 * *** empty log message ***
 *
 * Revision 1.28  1998-03-31 11:20:59+09  matutani
 * BG_POLY_AJ_DEMO0�ɲ�
 *
 * Revision 1.27  1998/03/18  01:32:12  takahata
 * *** empty log message ***
 *
 * Revision 1.26  1998/03/13  11:20:28  matutani
 * *** empty log message ***
 *
 * Revision 1.25  1998/03/11  02:22:49  matutani
 * ������ɴط��ɲ�
 *
 * Revision 1.24  1998/03/09  05:22:54  matutani
 * �ݥꥴ��°���ɵ�����ɤ��ɲ�
 *
 * Revision 1.23  1998/02/25  06:40:06  matutani
 * *** empty log message ***
 *
 * Revision 1.22  1998/02/25  06:37:57  matutani
 * *** empty log message ***
 *
 * Revision 1.21  1998/02/21  10:42:11  matutani
 * °�������ɡῼ�������ɲ�
 *
 * Revision 1.20  1998/02/13  12:00:13  matutani
 * Ʃ����
 *
 * Revision 1.19  1998/02/13  06:05:30  matutani
 * ����
 *
 * Revision 1.18  1998/02/13  06:05:00  matutani
 * *** empty log message ***
 *
 * Revision 1.17  1998/01/29  12:01:06  matutani
 * ���Ф��������ꡢ���餫�������äȤä�
 *
 * Revision 1.16  1998/01/29  11:59:21  matutani
 * *** empty log message ***
 *
 * Revision 1.15  1998/01/12  11:36:34  matutani
 * *** empty log message ***
 *
 * Revision 1.14  1998/01/08  05:14:51  matutani
 * ���ꥷ�����ڤ��ؤ�������
 *
 * Revision 1.13  1997/12/25  09:39:50  matutani
 * *** empty log message ***
 *
 * Revision 1.12  1997/12/09  08:33:50  matutani
 * �����褸�Ф�
 *
 * Revision 1.11  1997/12/03  08:31:05  matutani
 * ������ѥ�٥�
 *
 * Revision 1.10  1997/11/16  09:03:24  matutani
 * �����ȥ����ץ�����
 *
 * Revision 1.9  1997/11/06  07:31:38  matutani
 * °��������
 *
 * Revision 1.8  1997/11/06  07:31:16  matutani
 * *** empty log message ***
 *
 * Revision 1.7  1997/09/03  04:14:05  matutani
 * ������ɥ�����
 *
 * Revision 1.6  1997/08/27  11:21:25  matutani
 * *** empty log message ***
 *
 * Revision 1.5  1997/06/30  13:27:34  matutani
 * ����UP�ɲ�
 *
 * Revision 1.4  1997/06/28  12:39:06  matutani
 * �ǡ���������Ƥ������ְ㤤
 *
 * Revision 1.3  1997/06/28  12:11:23  matutani
 * �ְ㤤 & -> |
 *
 * Revision 1.2  1997/06/26  07:34:15  matutani
 * z_bgcheck.c��Ф��ΤǤĤ��Ǥˡ������ɲ�
 *
 * Revision 1.1  1997/06/26  00:37:01  matutani
 * Initial revision
 *
 *
 *---------------------------------------------------------------------------*/

#define MAX_WALL_CODE_MAX 32

#ifndef Z_BGCHECK_POLY_PARAM_H
#define Z_BGCHECK_POLY_PARAM_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/*
 *
 * �ɥ����ɥơ��֥�
 *
 */
/* ���Ф�ʤ������� */
#define WALL_NOT_CLIB_BIT (1<<0)
/* ���� */
#define WALL_LADDER_BIT (1<<1)
/* ����UP */
#define WALL_LADDER_UP_BIT (1<<2)
/* �ե꡼���饤�� */
#define WALL_FREE_CLIB_BIT (1<<3)
/* ���� */
#define WALL_SIDE_HOLE (1<<4)
/* ���ꥷ�����ڤ��ؤ������� */
#define WALL_SIDE_HOLE_SCENE_CHANGE (1<<5)
/* �������� */
#define WALL_PUSH_PULL_BIT (1<<6)


/* �ɥ����� */
extern unsigned int Bg_Wall_Code[MAX_WALL_CODE_MAX];
 
/*
 * �������°��
 * z_bgcheck.c���Bg_PolygonAttr2SoundGroundLabel[]���б����Ƥ��롣
 * 4bit
 */
typedef enum {
    BG_POLY_SND_GROUND, /* �� */
    BG_POLY_SND_SAND, /* �� */
    BG_POLY_SND_CONCRETE, /* ���󥯥꡼��/�� */
    BG_POLY_SND_DIRT, /* ť��Ǵ�� */
    BG_POLY_SND_WATER0, /* ���� */
    BG_POLY_SND_WATER1, /* ���� */
    BG_POLY_SND_WATER2, /* ��ή */
    BG_POLY_SND_MAGMA, /* �ϴ� */
    BG_POLY_SND_GRASS, /* �� */
    BG_POLY_SND_GLASS, /* ���饹 */
    
    BG_POLY_SND_WOOD, /* �� */
    BG_POLY_SND_BREAK_WALL, /* ������:����������̻����٥�Ϥʤ� */
    BG_POLY_SND_ICE, /* ɹ */
    BG_POLY_SND_IRON, /* ��° */
#if 0
    BG_POLY_SND_EV_FOUNTAIN, /* ʮ�� */
#endif
    BG_POLY_SND_MAX_INDEX
} BG_POLYGON_SND;

/*
 * °��������(5bit)
 */
typedef enum {
    BG_POLY_ATR_NONE, /* °���ʤ� */
    BG_POLY_ATR_SAND_STORM, /* ����(�����ߡ����ϴ侮�� */
    BG_POLY_ATR_MAGMA_M, /* �ϴ��� */
    BG_POLY_ATR_MAGMA_L, /* �ϴ��� */
    BG_POLY_ATR_DESERT, /* ���� */
    BG_POLY_ATR_ICE, /* ɹ */
    BG_POLY_ATR_SOFT, /* ���餫�� */
    BG_POLY_ATR_DEEP_DESERT, /* �������� */
    BG_POLY_ATR_IN_FISH, /* ������ */
    BG_POLY_ATR_MAGMA_IDEAD, /* ¨��ޥ��� */
    BG_POLY_ATR_STOP_CHANGE, /* ����ڤ��ؤ� */
    BG_POLY_ATR_STOP_CHANGE2, /* ����ڤ��ؤ��� */
    BG_POLY_ATR_DESERT3, /* ������ */
    BG_POLY_ATR_MAX_INDEX
} BG_POLY_ATR;
/*
 * �������°�������ɡ�Obj������ʤ��ѡ�
 */
/* ����(����� */
#define BG_POLY_CATR_BUSH BG_POLY_ATR_SAND_STORM

/*
 * �������ɡʥ����ȥ����ץ�����:4bit��
 * �ؿ���
 * extern int T_BGCheck_GroundAutoJumpType_ai(
 *   T_BGCheck *this,
 *   T_Polygon *ppoly,
 *   int bg_actor_index);
 */
typedef enum {
    BG_POLY_AJ_A,
    BG_POLY_AJ_B,
    BG_POLY_AJ_C,
    BG_POLY_AJ_D,
    BG_POLY_AJ_E,
    BG_POLY_AJ_DROP_DETH,
    BG_POLY_AJ_FORCE_FC,
    BG_POLY_AJ_OTTOTTO, /* ���äȤä�:3bit�³� */
    BG_POLY_AJ_CLEAR_WALL, /* Ʃ���� */
    BG_POLY_AJ_FORBID, /* �����ȥ����׶ػ� */
    BG_POLY_AJ_DEMO0, /* �ǥ�0�ѳ��ϥ����� */
    BG_POLY_AJ_TOBIKOMI, /* ���ӹ��� */
    BG_POLY_AJ_DROP2, 
    BG_POLY_AJ_LAST_INDEX
} BG_POLY_AJ_TYPE;

/*
 *
 * �����
 *
 */
/* �������� */
#define WI_CONST_INDEX 0x3f

/*
 * ��ή/�٥�� �ѥ���������
 * T_BGCheck_getSlidePowerIndex()���֤���
 * �Ĥ�Σ����飷��̤��
 */
typedef enum {
    BG_SPI_NONE, /* ̵��:0 */
    BG_SPI_LOW, /* ��:1 */
    BG_SPI_MID, /* ��:2 */
    BG_SPI_HIGH /* ��:3 */
} BG_SPI_TYPE;


/*
 * �ޤ���
 */
typedef enum {
    BG_FRC_NONE, /* ̵�� */
    BG_FRC_SLIP_SLOPE, /* ���� */
    BG_FRC_DUNGEON_CHANGE, /* ���󥸥����ڤ��ؤ� */
    BG_FRC_LAST_INDEX
} BG_FRC_TYPE;

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */ 
#endif

#endif

/*** z_bgcheck_poly_param.h EOF ***/

