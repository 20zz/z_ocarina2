/*
 * $Id: math64.h,v 1.1 2003/03/14 03:27:05 tong Exp $
 *
 * ANSI-C �൭ math �롼����
 *
 * $Log: math64.h,v $
 * Revision 1.1  2003/03/14 03:27:05  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:07:07  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.4  2000-07-14 18:27:09+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.3  1999-12-09 11:22:38+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.2  1999-05-14 16:10:49+09  hayakawa
 * ???2SHT�Υޥ��� float ���֤��Ƥ����Τ� int �˽���
 *
 * Revision 2.1  1998-10-22 20:18:25+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.13  1998-04-01 11:39:50+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.12  1997/11/19  10:25:01  hayakawa
 * �����Ѵ��ޥ�������
 *
 * Revision 1.11  1997/03/26  06:26:02  hayakawa
 * ����
 *
 * Revision 1.10  1997/03/05  05:21:00  hayakawa
 * �Ѵ����ְ�äƤ�����
 * ftrunc,fround���ɲ�
 * intrinsics�С��������Ȥ߹����
 *
 * Revision 1.9  1996/11/26  10:17:33  hayakawa
 * �� ���� �饸�����Ѵ����ɲ�
 *
 * Revision 1.8  1996/11/21  06:32:56  hayakawa
 * �ޥ����ɲ�
 *
 * Revision 1.7  1996/10/20  09:13:46  hayakawa
 * _LANGUAGE_C_PLUS_PLUS �� __cplusplus ���ѹ�
 *
 * Revision 1.6  1996/10/01  05:30:52  hayakawa
 * �ؿ�̾��ANSI-C�൭���ѹ�
 * ��ë���ڥ���� �٥С������λ��Ѵؿ����ɲ�
 *
 */

#ifndef __MATH64_H_
#define __MATH64_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include <gu.h> /* sinf,cosf,sqrtf */

/* ��ë���ڥ���� �٥С������λ��Ѵؿ� */
#define DEG_fsin(x) fsin(DEG2RAD(x))
#define DEG_fcos(x) fcos(DEG2RAD(x))
#define DEG_ftan(x) ftan(DEG2RAD(x))
#define DEG_fasin(x) RAD2DEG(fasin(x))
#define DEG_facos(x) RAD2DEG(facos(x))
#define DEG_fatan(x) RAD2DEG(fatan(x))
#define DEG_fatan2(y, x) RAD2DEG(fatan2(y, x))
   
/* ��������Ѵ����� �饸����float short�� */
#define DEG2RAD(deg) ((float)((deg) * (F_PI     / 180.0f)))   /* ��(-180~180) �� �饸����(-PI~PI) */
#define DEG2FLT(deg) ((float)((deg) * (1.0f     / 180.0f)))   /* ��(-180~180) �� float(-1.0~1.0) */
#define DEG2SHT(deg) ((int  )((deg) * (32768.0f / 180.0f)))   /* ��(-180~180) �� short(-32768~32768) */
#define RAD2DEG(rad) ((float)((rad) * (180.0f   / F_PI)))     /* �饸����(-PI~PI) �� */
#define RAD2FLT(rad) ((float)((rad) * (1.0f     / F_PI)))     /* �饸����(-PI~PI) �� */
#define RAD2SHT(rad) ((int  )((rad) * (32768.0f / F_PI)))     /* �饸����(-PI~PI) �� */
#define FLT2RAD(flt) ((float)((flt) * (F_PI     / 1.0f)))     /* float(-1.0~1.0) �� �饸����(-PI~PI) */
#define FLT2DEG(flt) ((float)((flt) * (180.0f   / 1.0f)))     /* float(-1.0~1.0) �� ��(-180~180) */
#define FLT2SHT(flt) ((int  )((flt) * (32768.0f / 1.0f)))     /* float(-1.0~1.0) �� short(-32768~32768) */
#define SHT2RAD(sht) ((float) (sht) * (F_PI     / 32768.0f))  /* short(-32768~32768) �� �饸����(-PI~PI) */
#define SHT2DEG(sht) ((float) (sht) * (180.0f   / 32768.0f))  /* short(-32768~32768) �� ��(-180~180) */
#define SHT2FLT(sht) ((float) (sht) * (1.0f     / 32768.0f))  /* short(-32768~32768) �� float(-1.0~1.0) */


#if defined(__GNUC__)
    
#include "math64_gcc.h"

#define Ffabs(x)   ___ffabs(x)
#define Fabs(x)    ___fabs(x)
#define Fsqrt(x)   ___fsqrt(x)
#define Sqrt(x)    ___sqrt(x)

#define Ffloor(x)  ___ffloor(x)
#define Fceil(x)   ___fceil(x)
#define Ftrunc(x)  ___ftrunc(x)
#define Fround(x)  ___fround(x)
#define Floor(x)   ___floor(x)
#define Ceil(x)    ___ceil(x)
#define Trunc(x)   ___trunc(x)
#define Round(x)   ___round(x)
#define Iffloor(x) ___iffloor(x)
#define Ifceil(x)  ___ifceil(x)
#define Iftrunc(x) ___iftrunc(x)
#define Ifround(x) ___ifround(x)
#define Ifloor(x)  ___ifloor(x)
#define Iceil(x)   ___iceil(x)
#define Itrunc(x)  ___itrunc(x)
#define Iround(x)  ___iround(x)

#define Fdecimal(x) ___fdecimal(x)
#define Decimal(x) ___decimal(x)

#define Nor(x1, x2) ___nor(x1, x2) /* int */

#define Frint(x)  Ffloor((x)+0.5f)
#define Rint(x)   Floor((x)+0.5)
#define Ifrint(x) Iffloor((x)+0.5f)
#define Irint(x)  Ifloor((x)+0.5)

#define Ftan(x) ({float __rad = x; fsin(__rad) / fcos(__rad);})
#define fsqrt(x) Fsqrt(x)
#define fabs(x) Fabs(x)

#else  /* defined(__GNUC__) */
    
#include "math64_intrinsics.h"

#define Ffabs(x)   (float)fabs((double)(x))
#define Fabs(x)    fabs(x)

#define Ffloor(x)  __ffloor(x)
#define Fceil(x)   __fceil(x)
#define Frint(x)   __frint(x)
#define Ftrunc(x)  __ftrunc(x)
#define Fround(x)  __fround(x)
#define Floor(x)   __floor(x)
#define Ceil(x)    __ceil(x)
#define Rint(x)    __rint(x)
#define Trunc(x)   __trunc(x)
#define Round(x)   __round(x)
#define Iffloor(x) __iffloor(x)
#define Ifceil(x)  __ifceil(x)
#define Ifrint(x)  __ifrint(x)
#define Iftrunc(x) __iftrunc(x)
#define Ifround(x) __ifround(x)
#define Ifloor(x)  __ifloor(x)
#define Iceil(x)   __iceil(x)
#define Irint(x)   __irint(x)
#define Itrunc(x)  __itrunc(x)
#define Iround(x)  __iround(x)

#define fsqrt(x) sqrtf(x)
#define Ftan(rad) (fsin(rad) / fcos(rad))

#endif /* defined(__GNUC__) */
    
float ftan(float rad);
float ffloor(float x);
float fceil(float x);
float ftrunc(float x);
float fround(float x);
#define ffabs(x) fabsf(x)
float frint(float x);
float fatan( float x );
float fatan2( float y, float x );
float fasin( float x );
float facos( float x );
#define fsin(x) sinf(x)
#define fcos(x) cosf(x)

/* from </usr/include/math.h> */
/* Some useful constants */
#define M_E		2.7182818284590452354 /* �����п�e */
#define M_LOG2E		1.4426950408889634074 /* Log2e */
#define M_LOG10E	0.43429448190325182765 /* Log10e */
#define M_LN2		0.69314718055994530942
#define M_LN10		2.30258509299404568402
#define M_PI		3.14159265358979323846 /* �߼�Ψ�� */
#define M_PI_2		1.57079632679489661923 /* �С��� */
#define M_PI_4		0.78539816339744830962 /* �С��� */
#define M_1_PI		0.31830988618379067154 /* ������ */
#define M_2_PI		0.63661977236758134308 /* ������ */
#define M_2_SQRTPI	1.12837916709551257390 /* ������� */
#define M_SQRT2		1.41421356237309504880 /* �売 */
#define M_SQRT1_2	0.70710678118654752440 /* �壱���� */

#define F_E		((float)M_E)
#define F_LOG2E		((float)M_LOG2E)
#define F_LOG10E	((float)M_LOG10E)
#define F_LN2		((float)M_LN2)
#define F_LN10		((float)M_LN10)
#define F_PI		((float)M_PI)
#define F_PI_2		((float)M_PI_2)
#define F_PI_4		((float)M_PI_4)
#define F_1_PI		((float)M_1_PI)
#define F_2_PI		((float)M_2_PI)
#define F_2_SQRTPI	((float)M_2_SQRTPI)
#define F_SQRT2		((float)M_SQRT2)
#define F_SQRT1_2	((float)M_SQRT1_2)

/*
 * �ʲ��� /usr/include/math.h ����Υ��ԡ��Ǥ�
 */
extern double	sqrt(double);
#pragma no side effects (sqrt)
#ifndef fabs
extern double	fabs(double);
#pragma no side effects (fabs)
#endif
/* version of fabsf implemented for completeness only */
extern float	fabsf(float);
#pragma no side effects (fabsf)

#ifdef __INLINE_INTRINSICS
/* The functions made intrinsic here can be activated by the driver
** passing -D__INLINE_INTRINSICS to cfe, but cfe should ensure that
** this has no effect unless the hardware architecture directly
** supports these basic operations.
*/
#if _MIPS_ISA != _MIPS_ISA_MIPS1
#pragma intrinsic (sqrt)
//#pragma intrinsic (sqrtf)
#if (defined(_COMPILER_VERSION) && (_COMPILER_VERSION >= 400))
#pragma intrinsic (pow)
#pragma intrinsic (powf)
#endif
#endif
#pragma intrinsic (fabs)
#pragma intrinsic (fabsf)
#endif

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __MATH64_H_ */
