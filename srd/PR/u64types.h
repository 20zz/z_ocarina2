/*
 * $Id: u64types.h,v 1.1 2003/03/14 03:27:05 tong Exp $
 *
 * �����ǡ��褯�Ȥ������ʷ������
 *
 * $Log: u64types.h,v $
 * Revision 1.1  2003/03/14 03:27:05  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:07:07  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.6  2001-05-07 11:33:25+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.5  2000-03-23 09:54:04+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.4  1999-05-19 17:24:25+09  hayakawa
 * Vtx_v Vtx_n �ɲ�
 *
 * Revision 2.3  1999-05-19 17:21:16+09  hayakawa
 * Vtx_nonbrace_v Vtx_nonbrace_n�ɲ�
 *
 * Revision 2.2  1999-05-13 10:22:44+09  hayakawa
 * Vtx_nonbrace_t, Vtx_nonbrace_tn���ɲ�
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.10  1998-07-09 15:22:40+09  hayakawa
 * rgba8888�����Ф��륢�������ޥ�����ɲä��Ƥߤ�
 *
 * Revision 1.9  1998-04-01 11:40:35+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.8  1998/01/19  02:00:49  hayakawa
 * GNUC�ѽ���
 *
 * Revision 1.7  1997/02/07  10:55:55  hayakawa
 * BATCH
 *
 * Revision 1.6  1996/12/18  01:03:13  hayakawa
 * #pragma pack�����褵������c++�Ǥ�ľ�ܥ��������Ǥ��ʤ�����
 *
 * Revision 1.5  1996/11/07  02:40:43  hayakawa
 * �������Ϣ��macro.h�����ư����
 *
 * Revision 1.4  1996/10/01  05:33:57  hayakawa
 * ɬ�פʥإå��μ�����
 *
 */

#ifndef __U64TYPES_H_
#define __U64TYPES_H_

#include "ultra64.h"

typedef u32 segptr_t;		/* �������ȥ��ɥ쥹����ʪ�����ɥ쥹���� */

typedef struct rgba_s {
    unsigned char r, g, b, a;	/* �֡��С��ġ��� */
} rgba_t;

/*
 * !!!���!!!
 * SGI��C++�Ǥ� #pragma pack() ���Ȥ��ʤ����ᡢ
 * �����η���������뤳�Ȥ��Ǥ��ޤ���
 */
#if !defined(_LANGUAGE_C_PLUS_PLUS) && !defined(__GNUC__)

#pragma pack(4)
typedef struct rgba8888_s {
    /*
     * ��ȥ������Υ���ѥ���Ǥ�
     * �ʤ��� unsigned int :8 ��
     * unsigned char �ˤʤäƤ��ޤ���
     */
//    unsigned int r:8, g:8, b:8, a:8;	/* �֡��С��ġ��� */
    u8 r, g, b, a;	/* �֡��С��ġ��� */
} rgba8888_t;
typedef union rgba8888_u {
    u32 	rgba8888;
    rgba8888_t  c;
} rgba8888_u_t;
typedef rgba8888_u_t rgba8888;
/* �ңǣ£��ͤ򤽤줾������ */
#define rgba8888_setColorRGBA(p1, r1, g1, b1, a1) \
((p1)->rgba8888 = (u32)(((u8)(r1) << 24) | \
			((u8)(g1) << 16) | \
			((u8)(b1) << 8) | \
			((u8)(a1) << 0)))
    /* ���ͤ����� */
#define rgba8888_setColorR(p1, r1) \
    ((p1)->c.r = (r1))
    /* ���ͤ����� */
#define rgba8888_setColorG(p1, g1) \
    ((p1)->c.g = (g1))
    /* ���ͤ����� */
#define rgba8888_setColorB(p1, b1) \
    ((p1)->c.b = (b1))
    /* ���ͤ����� */
#define rgba8888_setColorA(p1, a1) \
    ((p1)->c.a = (a1))
    /* RGBA8888�������ͤ����� */
#define rgba8888_setColor32(p1, c1) \
    ((p1)->rgba8888 = (c1))

    /* ���ͤ���� */
#define rgba8888_getColorR(p1) \
    ((p1)->c.r)
    /* ���ͤ���� */
#define rgba8888_getColorG(p1) \
    ((p1)->c.g)
    /* ���ͤ���� */
#define rgba8888_getColorB(p1) \
    ((p1)->c.b)
    /* ���ͤ���� */
#define rgba8888_getColorA(p1) \
    ((p1)->c.a)
    /* RGBA8888�������ͤ���� */
#define rgba8888_getColor32(p1) \
    ((p1)->rgba8888)

#pragma pack(2)
typedef struct rgba5551_s {
    unsigned int r:5, g:5, b:5, a:1;	/* �֡��С��ġ��� */
} rgba5551_t;
typedef union rgba5551_u {
    u16 	rgba5551;
    rgba5551_t  c;
} rgba5551_u_t;

#pragma pack(2)
typedef struct ia88_s {
    unsigned int i:8, a:8;	/* ���١��� */
} ia88_t;
typedef union ia88_u {
    u16 		ia88;
    ia88_t  	c;
} ia88_u_t;

#pragma pack(1)
typedef struct ia44_s {
    unsigned int i:4, a:4;	/* ���١��� */
} ia44_t;
typedef union ia44_u {
    u8 		ia44;
    ia44_t  	c;
} ia44_u_t;
#pragma pack(0)

#else

#if 0
typedef u32 rgba8888_u_t;
typedef u16 rgba5551_u_t;
typedef u16 ia88_u_t;
typedef u8 ia44_u_t;
#else
typedef struct rgba8888_s {
    u32 r:8, g:8, b:8, a:8;	/* �֡��С��ġ��� */
} rgba8888_t;
typedef union rgba8888_u {
    u32 	rgba8888;
    rgba8888_t  c;
} rgba8888_u_t;
typedef rgba8888_u_t rgba8888;

typedef struct rgba5551_s {
    u16 r:5, g:5, b:5, a:1;	/* �֡��С��ġ��� */
} rgba5551_t;
typedef union rgba5551_u {
    u16 	rgba5551;
    rgba5551_t  c;
} rgba5551_u_t;

typedef struct ia88_s {
    u16 i:8, a:8;	/* ���١��� */
} ia88_t;
typedef union ia88_u {
    u16 		ia88;
    ia88_t  	c;
} ia88_u_t;

typedef struct ia44_s {
    u8 i:4, a:4;	/* ���١��� */
} ia44_t;
typedef union ia44_u {
    u8 		ia44;
    ia44_t  	c;
} ia44_u_t;
#endif

#endif /* _LANGUAGE_C_PLUS_PLUS */

/*
 * ����(float)
 */
typedef struct Mtx_s {
    float mf[4][4];
} Mtxf;

/*
 * ���ĥ٥��ȥ뷿
 */
typedef struct xyz_s {
    float x, y, z;
} xyz_t;

/*
 * ���ĥ٥��ȥ뷿
 */
typedef struct xy_s {
    float x, y;
} xy_t;

/*
 * ����
 */
typedef   signed short Mtx_ss_t[4][4];
typedef unsigned short Mtx_us_t[4][4];
typedef struct {
    Mtx_ss_t		i;
    Mtx_us_t		f;
} Mtx2_t;
typedef struct {
    Mtx_us_t		i;
    Mtx_us_t		f;
} Mtx2u_t;

typedef union {
    Mtx2_t		m2;
    Mtx2u_t		m2u;
    Mtx_t		m;
    long long int	force_structure_alignment;
} Mtx2;

/*
 * size_t ��
 */
#if !defined(_SIZE_T) && !defined(_SIZE_T_)
#define _SIZE_T
#if (_MIPS_SZLONG == 32)
typedef unsigned int 	size_t;
#endif
#if (_MIPS_SZLONG == 64)
typedef unsigned long 	size_t;
#endif
#endif

/*
 * ����դ� size_t ��
 */
#ifndef _SSIZE_T
#define _SSIZE_T
#if (_MIPS_SZLONG == 32)
typedef int	ssize_t;
#endif
#if (_MIPS_SZLONG == 64)
typedef long	ssize_t;
#endif
#endif

#ifndef _WCHAR_T
#define _WCHAR_T
#if (_MIPS_SZLONG == 32)
typedef long wchar_t;
#endif
#if (_MIPS_SZLONG == 64)
typedef __int32_t wchar_t;
#endif
#endif

typedef struct {
    short		ob0;	/* x */
    short		ob1;	/* y */
    short		ob2;	/* z */
    unsigned short	flag;
    short		tc0;	/* texture coord s */
    short		tc1;	/* texture coord t */
    unsigned char	cn0;	/* color red */
    unsigned char	cn1;	/* color green */
    unsigned char	cn2;	/* color blue */
    unsigned char	cn3;	/* alpha */
} Vtx_nonbrace_t;

typedef struct {
    short		ob0;	/* x */
    short		ob1;	/* y */
    short		ob2;	/* z */
    unsigned short	flag;
    short		tc0;	/* texture coord s */
    short		tc1;	/* texture coord t */
    signed char		n0;	/* normal x */
    signed char		n1;	/* normal y */
    signed char		n2;	/* normal z */
    unsigned char	a;	/* alpha */
} Vtx_nonbrace_tn;

typedef union {
    Vtx_nonbrace_t	v;  /* Use this one for colors  */
    Vtx_nonbrace_tn	n;  /* Use this one for normals */
    long long int	force_structure_alignment;
} Vtx_nonbrace_v;

typedef union {
    Vtx_nonbrace_tn	n;  /* Use this one for normals */
    Vtx_nonbrace_t	v;  /* Use this one for colors  */
    long long int	force_structure_alignment;
} Vtx_nonbrace_n;

typedef union {
    Vtx_t		v;  /* Use this one for colors  */
    Vtx_tn              n;  /* Use this one for normals */
    long long int	force_structure_alignment;
} Vtx_v;

typedef union {
    Vtx_tn              n;  /* Use this one for normals */
    Vtx_t		v;  /* Use this one for colors  */
    long long int	force_structure_alignment;
} Vtx_n;

#endif /* __U64TYPES_H_ */
