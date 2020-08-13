/* $Id: z_bgcheck_param.h,v 2.1 1998/10/22 11:45:49 zelda Exp $ */
/*===========================================================================
 *
 * z_bgcheck_param.h
 *
 * Program:Kenji Matsutnai
 * Date:1997ǯ 7��25��(������) 11��44ʬ55�� JST
 *
 *$Log: z_bgcheck_param.h,v $
 * Revision 2.1  1998/10/22  11:45:49  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 *Revision 1.13  1998/10/01 05:03:41  matutani
 *�饤��ε�������ʤ������å�
 *
 *Revision 1.12  1998-09-30 14:07:44+09  matutani
 **** empty log message ***
 *
 *Revision 1.11  1998-07-09 19:26:47+09  matutani
 *�������å���b>0�Τߥ����å�����ѥ������ɲ�
 *
 *Revision 1.10  1998-06-24 22:19:52+09  matutani
 **** empty log message ***
 *
 *Revision 1.9  1998-06-19 18:46:52+09  matutani
 **** empty log message ***
 *
 *Revision 1.8  1998-04-23 22:35:32+09  matutani
 *�������å������ޥ���
 *
 *Revision 1.7  1998-03-27 21:04:16+09  matutani
 *moveBG����̵������
 *
 * Revision 1.6  1998/03/18  01:32:17  takahata
 * *** empty log message ***
 *
 * Revision 1.5  1998/03/06  11:29:38  matutani
 * �ѹ�����
 * ��Ź���֣Ҩ��£ϣءܣУҡ��֣Ҩ��£ϣؤλ���BG�����å��ΥХåե�����
 * �����ˣ¤������ʤ����ޤ�����
 *
 * �ѹ�����
 * �ޥåפ˥ݥꥴ�󤬾��ʤ��Ȥ��˥����å��ǻȤ���å���θĿ���x��x����
 * ���롢�����ɲá��ʾ��ˤ�äƽ����������Ƥ���Ȥ������뤫���Τ�ޤ�
 * ����դ��Ƥ���������
 *
 * Revision 1.4  1997/12/26  02:38:51  umemiya
 * �����ʥߥå�ĺ���Хåե����Ŀ�(DYNA_VERT_NUM)����
 *
 * Revision 1.3  1997/11/06  07:02:53  matutani
 * *** empty log message ***
 *
 * Revision 1.2  1997/11/06  07:02:19  matutani
 * *** empty log message ***
 *
 * Revision 1.1  1997/07/25  06:23:11  matutani
 * Initial revision
 *
 *
 *===========================================================================*/
#ifndef INCLUDE_Z_BGCHECK_PARAM_H
#define INCLUDE_Z_BGCHECK_PARAM_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/*
 * �����ʥߥå��ݥꥴ��
 */
#if 0
#define DP_NULL 65535
#endif


/*============================================================================
 *
 * �����
 *
 *===========================================================================*/
/* ����ŷ�桢�ɤζ����ѥѥ�᡼���� */
#define BG_GROUND_B_PARAM (0.5f)
#define BG_ROOF_B_PARAM (-0.8f)
#undef BG_WALL_B_PARAM

/* �ɥѥ�᡼���� */
#define BGCHECK_WALL_CHECK_PARAM (4.0f)
/*----------------------------------------------------------------------------
 *
 * BG�����å���Polygon��¤����
 *
 *---------------------------------------------------------------------------*/

/* ������BG�����å� */
#define BG_CAMERA_MASK (1<<0)
/* OBJ��BG�����å� */
#define BG_OBJ_MASK (1<<1)
/* ARROW��BG�����å� */
#define BG_ARROW_MASK (1<<2)    

/*
 * v[0]��check�Υޥ�����Ϳ����,���ʳ��ʤ�������ʤ�
 */
#define V0_CHECK(v0, check) (((0x7 & (check)) << 13) & (v0))

/*
/*
 * �����å��ޥ��������
 */
#define V_INDEX(x) (0x1fff & (x))
/*
 * ��̣��ӥåȤΤ���Ͽ
 */
#define V_UP3BIT(x) (0xe000 & (x))
/*
 * ���᡼���ݥꥴ������å��ѽ����ޥ���
 */
#define BG_DAMAGE_POLY_CHECK(x) (((x)&(0x1<<27)) != 0 ? TRUE : FALSE)

/*--------------------------------------------------------------------------
 *
 * �����ʥߥå��ݥꥴ�������¤��
 *
 *-------------------------------------------------------------------------*/
/*
 * �����å��ޥ�������
 */
#define DYNA_PA_TBL_NO_MASK 0
/* �ΰ������ */
#define DYNA_PA_TBL_USE (1<<0)
/* ���ͽ�� */
#define DYNA_PA_TBL_DEL_RESERVE (1<<1)
/* ����̵�� */
#define DYNA_PA_TBL_THROUGH (1<<2)
/* ŷ�� off */
#define DYNA_PA_TBL_ROOF_OFF (1<<3)
/* �� off */
#define DYNA_PA_TBL_WALL_OFF (1<<4)
/* �� off */
#define DYNA_PA_TBL_GROUND_OFF (1<<5)

/*---------------------------------------------------------------------------
 *
 * BG�����å���BGCheckInfo
 *
 *--------------------------------------------------------------------------*/

/* �����Х�åץ����� */
#define MESH_OVERRAP 50

/*============================================================================
 *
 * �������å������ޥ���
 *
 *===========================================================================*/
/* �ǥե���� */
#define BG_GRCH_DEFAULT (BG_GRCH_GROUND_CHECK|BG_GRCH_WALL_CHECK_NFG|BG_GRCH_CHECK_B_PLUSE)
    
/* ŷ������å� */
#define BG_GRCH_ROOF_CHECK (1<<0) 
/* �ɥ����å� */
#define BG_GRCH_WALL_CHECK (1<<1)
/* �������å� */
#define BG_GRCH_GROUND_CHECK (1<<2)
/*
 * �������å��ǥݥꥴ�󤬸��Ĥ��äƤ��ʤ�����ɥ����å��򤹤�
 * NFG = Not Found Ground
 */
#define BG_GRCH_WALL_CHECK_NFG (1<<3)
/* b > 0���̤Τߤ�����å����� */
#define BG_GRCH_CHECK_B_PLUSE (1<<4)

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_bgcheck_param.h EOF ***/

