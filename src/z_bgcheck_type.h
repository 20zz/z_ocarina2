/* $Id: z_bgcheck_type.h,v 2.1 1998/10/22 11:45:49 zelda Exp $ */
/* $Log: z_bgcheck_type.h,v $
 * Revision 2.1  1998/10/22  11:45:49  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.55  1998/06/29 13:31:55  matutani
 * Dyna_Poly_Actor��min_y, max_y�ɲ�
 *
 * Revision 1.54  1998-06-25 21:45:24+09  matutani
 * Bounding Box��¤�Τ�����
 *
 * Revision 1.53  1998-06-24 22:27:31+09  matutani
 * BoundingBox XYZ
 *
 * Revision 1.52  1998-06-23 22:04:29+09  matutani
 * *** empty log message ***
 *
 * Revision 1.51  1998-06-16 17:46:18+09  matutani
 * *** empty log message ***
 *
 * Revision 1.50  1998-05-30 16:52:54+09  matutani
 * �����ȡ�Water_Info��
 *
 * Revision 1.49  1998-05-14 13:56:16+09  matutani
 * DYNA_ACTOR_NUM�򣵣��ˤ�����
 *
 * Revision 1.48  1998-05-14 12:16:09+09  matutani
 * DYNA_ACTOR_NUM�򣵣��ˤ�����
 *
 * Revision 1.47  1998-05-13 22:33:20+09  matutani
 * DYNA_ACTOR_NUM�򣴣������䤷�ޤ�����
 *
 * Revision 1.46  1998-04-15 15:20:01+09  matutani
 * *** empty log message ***
 *
 * Revision 1.45  1998-03-18 10:32:04+09  takahata
 * *** empty log message ***
 *
 * Revision 1.44  1998/03/06  11:29:06  matutani
 * �ѹ�����
 * ��Ź���֣Ҩ��£ϣءܣУҡ��֣Ҩ��£ϣؤλ���BG�����å��ΥХåե�����
 * �����ˣ¤������ʤ����ޤ�����
 *
 * �ѹ�����
 * �ޥåפ˥ݥꥴ�󤬾��ʤ��Ȥ��˥����å��ǻȤ���å���θĿ���x��x����
 * ���롢�����ɲá��ʾ��ˤ�äƽ����������Ƥ���Ȥ������뤫���Τ�ޤ�
 * ����դ��Ƥ���������
 *
 * Revision 1.43  1998/02/24  02:57:21  matutani
 * *** empty log message ***
 *
 * Revision 1.42  1998/02/13  12:00:40  matutani
 * *** empty log message ***
 *
 * Revision 1.41  1998/02/13  06:06:22  matutani
 * ����
 *
 * Revision 1.40  1998/01/29  12:00:03  matutani
 * �������ʤ��ե饰
 *
 * Revision 1.39  1998/01/21  01:31:51  matutani
 * ����������
 *
 * Revision 1.38  1998/01/12  11:42:46  matutani
 *  �եå�����åȻɤ��륳����
 *
 * Revision 1.37  1997/12/25  09:39:43  matutani
 * *** empty log message ***
 *
 * Revision 1.36  1997/12/24  09:59:30  matutani
 * ����
 *
 * Revision 1.35  1997/12/03  08:29:54  matutani
 * ����󡿥ӥå����䤷��
 *
 * Revision 1.34  1997/11/16  14:09:02  matutani
 * moveBG�������餷
 *
 * Revision 1.33  1997/11/13  06:05:57  matutani
 * �Ͽ����ػ��ɲ�
 *
 * Revision 1.32  1997/11/07  00:33:49  matutani
 * *** empty log message ***
 *
 * Revision 1.31  1997/11/06  07:02:26  matutani
 * *** empty log message ***
 *
 * Revision 1.30  1997/11/04  05:45:12  matutani
 * *** empty log message ***
 *
 * Revision 1.29  1997/10/18  14:26:02  matutani
 * *** empty log message ***
 *
 * Revision 1.28  1997/10/11  06:54:38  matutani
 * Water_Info:bit[ 5]: 8-12 �Ķ�
 *
 * Revision 1.27  1997/10/11  06:47:58  matutani
 * Water_Info: bit[ 4]: 8-11 �Ķ�
 *
 * Revision 1.26  1997/09/30  07:48:47  matutani
 * *** empty log message ***
 *
 * Revision 1.25  1997/09/26  06:37:52  matutani
 * Water_Info����
 *
 * Revision 1.24  1997/09/03  04:13:53  matutani
 * ������ɥ�����
 *
 * Revision 1.23  1997/08/18  00:51:56  matutani
 * ˡ������
 *
 * Revision 1.22  1997/08/04  08:34:37  matutani
 * �Ķ��ɲø�
 *
 * Revision 1.21  1997/07/29  09:53:50  matutani
 * �����ʥߥå��ݥꥴ��ƥ���
 *
 * Revision 1.20  1997/07/25  06:23:02  matutani
 * ����
 *
 * Revision 1.19  1997/07/23  12:39:01  matutani
 * *** empty log message ***
 *
 * Revision 1.18  1997/07/23  05:57:39  matutani
 * *** empty log message ***
 *
 * Revision 1.17  1997/07/19  10:42:19  matutani
 * �����ʥߥå�����
 *
 * Revision 1.16  1997/07/07  06:02:22  matutani
 * ���顼
 *
 * Revision 1.15  1997/07/03  04:41:47  matutani
 * *** empty log message ***
 *
 * Revision 1.14  1997/07/03  04:39:58  matutani
 * *** empty log message ***
 *
 * Revision 1.13  1997/07/01  12:12:11  matutani
 * ŷ������å��ǥݥꥴ���֤�褦�ˤ������
 *
 * Revision 1.12  1997/06/30  13:26:42  matutani
 * ����UP�ɲ�
 *
 * Revision 1.11  1997/06/27  05:21:41  matutani
 * �����ʥߥå��ݥꥴ�󡿥��������ؿ�index��
 *
 * Revision 1.10  1997/06/26  00:37:16  matutani
 * �����ݥꥴ��ǡ���
 *
 * Revision 1.9  1997/06/19  08:21:13  matutani
 * �ޤ�̤������ʬ��Ϥ�����
 *
 * Revision 1.8  1997/06/18  13:09:35  matutani
 * *** empty log message ***
 *
 * Revision 1.7  1997/05/30  07:10:15  matutani
 * *** empty log message ***
 *
 * Revision 1.6  1997/05/30  02:49:01  matutani
 * *** empty log message ***
 *
 * Revision 1.5  1997/05/30  00:40:48  matutani
 * *** empty log message ***
 *
 * Revision 1.4  1997/05/26  04:28:43  matutani
 * �ݥꥴ�󥫥��󥿡�
 *
 * Revision 1.3  1997/05/19  09:45:58  matutani
 * ��ȴ���ػ�
 *
 * Revision 1.2  1996/11/11  08:33:24  matutani
 * BG�����å�Ĵ��
 *
 * Revision 1.1  1996/10/28  10:25:16  matutani
 * Initial revision
 * */


/*----------------------------------------------------------------------------
 *
 * z_bgcheck_types.h
 *
 * Program:Kenji Matsutani
 * 1996/10/28
 *--------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_BGCHECK_TYPE_H
#define INCLUDE_Z_BGCHECK_TYPE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include"z_basic.h"

#include"z_bgcheck_short_slist.h"
#include"z_bgcheck_param.h"

/* �����ʥߥå��ݥꥴ��ƥ��� */
#define DYNA_POLY_TEST

/* �ǥХå�BSP */
#undef DEBUG_BSP_BGCHECK


/*==========================================================================
 *
 * BSP����
 *
 *=========================================================================*/

/*----------------------------------------------------------------------------
 *
 * BG�����å���Vertex��¤��
 *
 *---------------------------------------------------------------------------*/

typedef struct t_vertex {
    s_xyz pos; /* ���־��� */
} T_Vertex;

/*----------------------------------------------------------------------------
 *
 * BG�����å���Polygon��¤�� 
 *
 *---------------------------------------------------------------------------*/

/* �����å��о� */
typedef unsigned short Check_Mask;

typedef struct t_polygon {
    
    unsigned short info; /* �ݥꥴ�����ؤΥ���ǥå��� */
    
    unsigned short v[3]; /* ĺ���ơ��֥�ؤΥ���ǥå��� */
    /*
     * ĺ������ǥå����ξ��3�ӥåȤ�����å���ON/OFF�ե饰�ˤ��롣
     * v[0]
     *  ������:�ΰ�
     * bit[13]: 0-12 ĺ������ǥå���
     * bit[ 1]:13    �����������ʤ�
     * bit[ 1]:14    Obj������ʤ�
     * bit[ 1]:15    Arrow������ʤ�
     *
     * v[1]
     *  ������:�ΰ�
     * bit[13]: 0-12 ĺ������ǥå���
     * bit[ 1]:13    �٥�ȥ���٥������ʤ��줬Ω�äƤ���ȿ�ή�Ǥʤ��ơ�
     *               �٥�Ȥ�Ƚ�Ǥ��롣 **new!!**
     * bit[2]:14-15  ̤��
     * 
     * v[2] ̤��
     */
    
    /* ʿ���������Υѥ�᡼���� */
    /* (a,b,c:-�����飱��-32767����32767��Ÿ�� ���:-32768�ϻȤ�ʤ�) */
    /* ax+by+cz+d = 0 */
    short a;
    short b;
    short c;

    short d; /* a, b, c�Ȥϰۤʤ�¨�� */
  
} T_Polygon;


/*-------------------------------------------------------------------------
 *
 * �ݥꥴ�����ơ��֥�
 *
 *------------------------------------------------------------------------*/
typedef struct polygon_info {
    unsigned int info[2];
    /*
     * ����
     * info[0]
     *  ������: �ΰ�
     * bit[ 8]: 0- 7 ����� ���å�
     * bit[ 5]: 8-12 �������ڤ��ؤ�������
     * bit[ 5]:13-17 °��
     * bit[ 3]:18-20 ŷ��
     * bit[ 5]:21-25 ��
     * bit[ 4]:26-29 ��
     *         26-29:�����ȥ�����(��:0-4) *** ��ĥ ***
     * bit[ 1]:30    ��夲
     * bit[ 1]:31    �Ͽ����ػ�
     *
     * info[1]
     * bit[ 4]: 0- 3 �������
     * bit[ 2]: 4- 5 �໤ **����**
     * bit[ 5]: 6-10 �Ķ�
     * bit[ 6]:11-16 ������
     * bit[ 1]:17    �եå�����åȻɤ��륳����
     * bit[ 3]:18-20 ��ή/�٥�� �ѥ����ǥå��� 
     *               ����ǥå��������λ���,��ή/�٥�ȤǤʤ���
     *               ����ǥå��������Ǥʤ��Ȥ���,��ή���٥�Ȥ����ǧ����,
     *               �������롣
     * bit[ 6]:21-26 ���١ʾ�ΥӥåȤ����λ��϶�������
     * bit[ 1]:27    ���᡼���ݥꥴ�� *** new!! ***
     */
} Polygon_Info;




/*---------------------------------------------------------------------------
 *
 * BG�����å���Mesh��¤��
 *
 *--------------------------------------------------------------------------*/
typedef struct t_mesh {
    short_SLIST ground;
    short_SLIST wall;
    short_SLIST roof;
} T_Mesh;

/*----------------------------------------------------------------------------
 *
 * �����ǡ����ơ��֥�
 *
 *--------------------------------------------------------------------------*/
typedef struct camera_data {
    unsigned short type; /* ������ */
    unsigned short num; /* �ǡ����� */
    s_xyz *tbl; /* �ơ��֥�ؤΥݥ��󥿡� */
} Camera_Data;

/*---------------------------------------------------------------------------
 *
 * �����
 *
 *--------------------------------------------------------------------------*/
typedef struct water_info {
    /* �Ǿ����� */
    s_xyz min_pos;
    /* xz������ */
    short size_x;
    short size_z;
    unsigned int info; /* ����ӥå� */
    /*
     * info
     * bit[ 8]: 0- 7 ����饻�å�
     * bit[ 5]: 8-12 �Ķ�
     * bit[ 6]:13-18 �����ֹ�
     * bit[ 1]:19    �Ķ��ӥåȤ���
     * bit[  ]:20-31 ;��
     */
} Water_Info; 


/*----------------------------------------------------------------------------
 *
 *  BG�����å���BGDataInfo��¤��
 * DynaPolyUty_inBgdi_SG2KSG()�Ȥ��б���ȤäƤ���
 *
 *---------------------------------------------------------------------------*/
typedef struct t_bgdatainfo {
    
    /* ĺ���κ���Ǿ� */
    short vtx_min[3]; 
    short vtx_max[3]; 
    
    /* ĺ���θĿ� */
    unsigned short vtx_num;
    
    /* ĺ���ơ��֥�ؤΥݥ��󥿡� */
    T_Vertex *vtx_tbl;

    /* �̤θĿ� */
    unsigned short poly_num;
    
    /* �ݥꥴ��ơ��֥�ؤΥݥ��󥿡� */
    T_Polygon *poly_tbl;

    /* �ݥꥴ�����ơ��֥� */
    Polygon_Info *poly_info_tbl;

    /* �����ǡ����ơ��֥� */
    Camera_Data *camera_data_tbl;

    /* �����ݥꥴ��� */
    unsigned short water_info_num;
    
    /* �����ơ��֥� */
    Water_Info *water_info_tbl;

} T_BGDataInfo;

/*--------------------------------------------------------------------------
 *
 * BG �����å��Хåե���
 *
 *------------------------------------------------------------------------*/

typedef struct bgcheck_alloc {
    
    unsigned short short_slist_node_size;
    unsigned short short_slist_node_last_index; /* �����ʥߥå������� */
    short_SLIST_NODE *short_slist_node_tbl;
    
    /* �����å��Хåե���:����Υݥꥴ��ˤĤ��ƣ��ĤΥơ��֥� */
    char *polygon_check;
    
} BGCheckAlloc;

/*============================================================================
 *
 * �����ʥߥå��ݥꥴ�����
 *
 *==========================================================================*/

/*---------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ��:��������/�ǡ�����Ͽ�ơ��֥�
 *
 *-------------------------------------------------------------------------*/
/*
 * vertex index ����
 */
typedef struct dyna_vert_index_info {
    unsigned short start_index;
} Dyna_Vert_Index_Info;

/*
 * polygon index����
 */
typedef struct dyna_poly_index_info {
    unsigned short start_index;
    short_SLIST roof;
    short_SLIST wall;
    short_SLIST ground;
} Dyna_Poly_Index_Info;

/*
 * shape����
 */
typedef struct t_shape_srt {
    xyz_t scale;
    s_xyz rot;
    xyz_t trs;
} T_Shape_SRT;


typedef struct dyna_poly_actor {
    
    Actor *pactor; /* �������� */
    T_BGDataInfo *pbgdata; /* �����å����� */

    /*
     * �ơ��֥�ˤʤ�Τ�,�ݥꥴ��ơ��֥�ξ��,���������ơ��֥��
     * index=0�λ�,������dyna_poly_index�ޤǻ���,
     * index=1�λ�,dyna_poly_inde(index = 0) - 1����dyna_poly_index(index = 1)
     * �ޤǻ���
     */
    Dyna_Poly_Index_Info poly; /* �ݥꥴ�󥤥�ǥå��� */
    Dyna_Vert_Index_Info vert; /* ĺ������ǥå��� */
    T_Shape_SRT old_srt; /* ���ξ��� */
    T_Shape_SRT now_srt;

    Math3D_sphere bounding_sph; /* ���� */
    float min_y, max_y; /* �⤵����Ǿ� */
} Dyna_Poly_Actor; 

/*----------------------------------------------------------------------------
 *
 * �ݥꥴ��ơ��֥������¤��
 *
 *--------------------------------------------------------------------------*/
typedef struct dyna_poly_tbl {
    T_Polygon *pbuf; /* �ݥꥴ��Хåե���:game_alloc����� */ 
} Dyna_Poly_Tbl;

/*--------------------------------------------------------------------------
 *
 * ĺ���ơ��֥������¤��
 *
 *-------------------------------------------------------------------------*/
typedef struct dyna_vert_tbl {
    T_Vertex *pbuf; /* ĺ���Хåե���:game_alloc����� */
} Dyna_Vert_Tbl;

/*--------------------------------------------------------------------------
 *
 * bit_info ��ȥӥåȾ�������
 *
 *------------------------------------------------------------------------*/
/*
 * �ǥե������
 */
#define BG_DPI_BIT_INFO_DEFAULT (BG_DPI_BIT_INFO_DATA_RECONSTRUCT)

/*
 * ���������κ���ʤɤˤ��ĺ�����ݥꥴ��ơ��֥�κƥ��åȤ�ɬ�פˤʤä���
 * ����Ω�Ƥ롣
 * expand��Ǥ��ΥӥåȤ�Ω�äƤ����Ÿ���������ά���ʤ���
 * expnad��ˤ��ΥӥåȤϥ��ꥢ����롣
 */
#define BG_DPI_BIT_INFO_DATA_RECONSTRUCT (1<<0)
/*--------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ�������¤��
 *
 *-------------------------------------------------------------------------*/
    
/* �����ʥߥå��ݥꥴ�󥢥�����:�Ŀ� ���䤹��clobber�������������Ǥ��礦�� */
#define DYNA_ACTOR_NUM (50)
    
/*
 * ��¤��
 */
typedef struct dyna_poly_info {
    unsigned char bit_info; /* ��ȥӥåȾ��� */
    Dyna_Poly_Actor tbl[DYNA_ACTOR_NUM]; /* ���������ơ��֥� */
    unsigned short mask_tbl[DYNA_ACTOR_NUM]; /* �����å��ѥޥ��� */

    Dyna_Poly_Tbl poly_tbl; /* �ݥꥴ��ơ��֥� */
    Dyna_Vert_Tbl vert_tbl; /* ĺ���ơ��֥� */
    
    short_SLIST_TBL short_slist; /* short slist �ơ��֥� */

    /* ������ݥ����� */
    int sst_size;
    int poly_num;
    int vert_num;
    
} Dyna_Poly_Info;

/*--------------------------------------------------------------------------
 *
 * �ݥꥴ��ǡ����֥�å���¤��
 *
 *--------------------------------------------------------------------------*/
typedef struct poly_data_block {
    int actor_index;
    T_Polygon *poly;
} PolyDataBlock;

/*---------------------------------------------------------------------------
 *
 * ����å���ǡ����֥�å���¤��
 *
 * ��⡧
 * count�ˤϥǡ��������äƤ��ʤ��Ȥ�-1�����äƤ��롣
 *
 *--------------------------------------------------------------------------*/
typedef struct cache_data_block {
    PolyDataBlock pdb;
    int count;
} CacheDataBlock;

#define LINE_CACHE_SIZE 10
/*---------------------------------------------------------------------------
 *
 * BG�����å��ƥ��ȥ���å���
 *
 *--------------------------------------------------------------------------*/
typedef struct t_bgcheck_cache {
    CacheDataBlock line[LINE_CACHE_SIZE]; /* �饤�󥭥�å��� */
} T_BGCheck_Cache;

/*---------------------------------------------------------------------------
 *
 * BG�����å���BGCheckInfo
 *
 *--------------------------------------------------------------------------*/

typedef struct t_bgcheck {
    T_BGDataInfo *pbgdata; /* BG�Υǡ������� */

    /* ��å��奨�ꥢ����Ǿ����� */
    xyz_t mesh_min_pos;
    xyz_t mesh_max_pos;

    /* ��å���� */
    int mesh_x_num;
    int mesh_y_num;
    int mesh_z_num;
    
    /* ��å��奵���� */
    float mesh_size_x;
    float mesh_size_y;
    float mesh_size_z;

    /* ��å��奵�����տ� */
    float mesh_size_x_reciprocal;
    float mesh_size_y_reciprocal;
    float mesh_size_z_reciprocal;

    /* ��å���Υơ��֥�ؤΥݥ��󥿡�:ʬ������� */
    T_Mesh *mesh_tbl;
    
    /* BG�����å�����Хåե��� */
    BGCheckAlloc bgcheck_alloc;

    /* �����ʥߥå��ݥꥴ��ǡ������� */
    Dyna_Poly_Info dyna_poly_info;


    /* For BGCheck Memory Size */
    unsigned long max_memory_size;
    
} T_BGCheck;  

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_bgcheck_type.h end ***/
