/*  $Id: z_skin_type_base.h,v 2.1 1998/10/22 11:51:48 zelda Exp $ */
/*----------------------------------------------------------------------------
 *
 * �������������������
 *
 * Program:Kenji Matsutani
 *
 * $Log: z_skin_type_base.h,v $
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.7  1998/05/09 11:43:33  matutani
 * Quaternion�ɲ�
 *
 * Revision 1.6  1998-03-19 22:03:47+09  komatu
 * *** empty log message ***
 *
 * Revision 1.5  1997/07/03  04:39:13  matutani
 * *** empty log message ***
 *
 * Revision 1.4  1997/04/22  02:28:52  matutani
 * ��ǥ���祤��ǥå��� MAX_SKIN_MDL_NUM = 255���ѹ�
 *
 * Revision 1.3  1997/04/21  12:18:45  matutani
 * �����������������
 *
 * Revision 1.2  1997/03/27  02:18:19  matutani
 * *** empty log message ***
 *
 * Revision 1.1  1997/03/25  07:45:10  matutani
 * Initial revision
 *
 *
 *---------------------------------------------------------------------------*/

#ifndef INCLUDE_Z_SKIN_TYPE_BASE_H
#define INCLUDE_Z_SKIN_TYPE_BASE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#define MAX_SKIN_MDL_NUM (255)

/*
 * ����������κ����ǥ��
 */
#define MAX_SKIN_PROC_MDL_NUM (60)

/*
 * Math Utility
 */

#define SKIN_ROUNDf(a) ((a) > 0.0f ? (int)(a + 0.5f) : -(int)(0.5f - a))
#define SKIN_ROUNDf2i(a) SKIN_ROUNDf(a)
#define SKIN_ROUNDf2s(a) ((short)((a) > 0.0f ? (short)(a + 0.5f) : -(short)(0.5f - a)))

/*
 * ĺ������/����٥��ץ��ե��åȥǡ����ؤΥ���������
 * transform matrix�ǡ�����translation�ǡ���(short)�Υ���������
 * ���ǡ����ؤ�Ÿ����
 * sisk_type.h:SKIN_BASE_POS_SCALE (�ġ���)
 */
#define SKIN_BASE_POS_SCALE (0.01f)

#if 0
/*
 * ĺ������/����٥��ץ��ե��åȥǡ����ؤΥ��������ͤεտ�
 */
#define SKIN_BASE_SCALE_RECIPROCAL (1.0f/SKIN_BASE_SCALE)
#endif

/*
 * transform scale scale
 * �Ѵ��ޥȥ�å����Υ��������ͤΥ�������
 * saaphire_info.c (�ġ���Υ�����)����
 */
#define TRANSFORM_SCALE_SCALE_F (1.0f/1024.0f)
/*----------------------------------------------------------------------------
 *
 * ���ܷ�
 *
 *--------------------------------------------------------------------------*/

/*
 * �ݥ��󥿡���
 */
typedef void * Skin_Pointer;

/*
 * �ޥȥ�å�����
 * ���ʤ�,MtxF�Ȥϥ��㥹�Ȥ��Ѵ���ǽ����
 */
typedef struct skin_matrix {
    float e[4][4];
} Skin_Matrix;

/*
 * Quaternion
 */
typedef struct quaternion {
    float x, y, z, w;
} Quaternion;
 
/*
 * ���顼
 */
typedef Color Skin_Color32;

/*---------------------------------------------------------------------------
 *
 * ���֤�٥��ȥ�ι�¤��
 *
 *-------------------------------------------------------------------------*/

/*
 * float�٥��ȥ�
 */
typedef xyz_t Skin_Vector;

/*
 *  float����
 */
typedef Skin_Vector Skin_Point;

/*
 * short �٥��ȥ�
 */
typedef s_xyz Skin_SVector;

/*
 * short ����
 */
typedef Skin_SVector Skin_SPoint;

/*
 * SRT(scale,rotate,translate) ��¤�� (short)
 */
typedef struct skin_srt {
    Skin_SVector scale;
    Skin_SVector rotate;
    Skin_SVector translate;
} Skin_Srt;

/*
 * RT(rotate, trans) ��¤��(short)
 */
typedef struct skin_rt {
    Skin_SVector rotate;
    Skin_SVector translate;
} Skin_Rt;

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_skin_type_base.h ***/


 
