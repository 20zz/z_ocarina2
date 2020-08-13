/*
 * $Id: OLDu64macro.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * �����ޥ���
 * ���
 * ���Ĥ��Υޥ���Ǥϡ������Х��ѿ��˰�¸���Ƥ��ޤ�
 * SegmentBaseAddress:SetSegment*, GetSegment*, SEGMENT_TO_*, *_TO_SEGMENT
 * SegmentRomStart:SEGMENT_TO_ROM
 * IdentityMtx:g*SPPushMatrix,g*SPLoadIdentity
 *
 * $Log: OLDu64macro.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.2  1999-04-07 15:49:45+09  hayakawa
 * gbi��Ϣ�Υޥ����u64newgbi.h�˰�ư
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.38  1998-08-31 20:07:58+09  hayakawa
 * G_RM_ZB_OPA_SURF_FOG�Υޥ�����
 *
 * Revision 1.37  1998-08-28 13:33:31+09  hayakawa
 * RM_*_ZO_�Υޥ������������
 *
 * Revision 1.36  1998-08-03 22:07:48+09  hayakawa
 * RM_ZU_XLU_SURF�ɲ�
 *
 * Revision 1.35  1998-07-22 22:33:46+09  hayakawa
 * �������⡼�ɤ��ɲ�
 *
 * Revision 1.34  1998-07-09 17:32:40+09  hayakawa
 * ���� INTERR �ϥ��ݡ��Ȥ��ʤ��褦�ˤ��ޤ�
 * �ե����ɥ����ȥޥ���ϥ��ݡ��Ȥ���ߤ��ޤ�
 * g[s]DPSetOtherMode���ӣФ�ȿ�Ǥ��뵡ǽ�����Ѥ���褦�ˤ�����gbi�ο����Ѳ�
 * g[s]SPSetOtherModeHL�Υ��ݡ��Ȥ���ߤ��ޤ�
 * ñ���Ѵ����ɲ�
 * os.h�Υޥ���ΰ����򥤥�饤��ؿ����֤�����
 *
 * Revision 1.33  1998-06-09 16:39:33+09  hayakawa
 * F3DEX_GBI_2���б��ʤΤϤ���
 *
 * Revision 1.32  1998-05-08 15:10:58+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.31  1998-05-08 15:08:41+09  hayakawa
 * RM_AA_ZO_OPA_SURF�ɲ�
 *
 * Revision 1.30  1998-04-02 18:06:03+09  hayakawa
 * �¼��Ѥ�餺
 *
 * Revision 1.29  1998/03/05  08:29:18  hayakawa
 * RM_ZO_CLR_SURF�ɲ�
 * IdentityMtx�ط����ѹ�
 *
 * Revision 1.28  1997/11/10  13:54:15  hayakawa
 * RM_RA_ZB_OPA_SURF_FOG���ְ�äƤ���
 *
 * Revision 1.27  1997/09/27  07:13:23  hayakawa
 * �ޥ����ɲ�
 *
 * Revision 1.26  1997/09/20  04:45:24  hayakawa
 * ����ɲ�
 * RM_AA_ZU_XLU_SURF�ɲ�
 * RM_AA_ZO_XLU_SURF�ɲ�
 * g*SP2Triangles�ɲ�
 * g*SP1Quadrangle�ɲ�
 * makeVtx*����
 *
 * Revision 1.25  1997/08/28  10:35:06  hayakawa
 * ���β���ʾä���
 *
 * Revision 1.24  1997/06/13  10:55:47  hayakawa
 * xGetSegmentK0�Υ��㥹�Ȥ���Ŭ�ڤ��ä�
 *
 * Revision 1.23  1997/06/13  06:30:23  hayakawa
 * ����Х���⡼�ɥ������⡼���佼
 * �����ܥޥ��������ɴط����
 * makeVtxTC��makeVtxOB����ɲ�
 *
 * Revision 1.22  1997/04/09  10:06:23  hayakawa
 * RM_[ZB_]XLU_TEX_EDGE�Υ��Х�å����ְ�äƤ���
 *
 * Revision 1.21  1997/03/05  05:32:52  hayakawa
 * �⡼�ɤ��ɲ�����
 * �ģͣ�ž�����
 *
 * Revision 1.20  1997/02/07  10:40:25  hayakawa
 * �ޥ����ɲ�
 *
 * Revision 1.19  1996/11/26  10:18:37  hayakawa
 * �����Х��ѿ��˰�¸���Ƥ���
 *
 * Revision 1.18  1996/11/21  06:40:41  hayakawa
 * �������ѹ�
 *
 * Revision 1.17  1996/10/29  12:47:18  hayakawa
 * ��®gbi�ޥ�����ɲ�
 *
 * Revision 1.16  1996/10/20  09:18:56  hayakawa
 * DMACOPY�ѹ�
 *
 * Revision 1.15  1996/10/14  10:45:23  hayakawa
 * �إå��ѹ�
 *
 */

#ifndef __U64MACRO_H_
#define __U64MACRO_H_

#include "ultra64.h"

#include "u64newgbi.h"		/* �������Υإå��ˤ��ä���� */

/*
 * ����ȥ飶���˴ط��Τ���ޥ���ʤɤ����
 */

/*
 * �ץ������ȤΥإå��˻��äƤ��ä�������������
 */
#define	L_SCREEN_WD	320		/* ���쥾���̤β��������ʥɥåȡ�  */
#define	L_SCREEN_HT	240		/* ���쥾���̤νĥ������ʥɥåȡ� */
#define	H_SCREEN_WD	640		/* �ϥ��쥾���̤β��������ʥɥåȡ�  */
#define	H_SCREEN_HT	480		/* �ϥ��쥾���̤νĥ������ʥɥåȡ� */
#ifndef SCREEN_WD
#define	SCREEN_WD	L_SCREEN_WD
#endif
#ifndef SCREEN_HT
#define	SCREEN_HT	L_SCREEN_HT
#endif

#define TMEM_SIZE_FULL 4096	/* TMEM�Υ������ʥХ��ȡ� */
#define TMEM_SIZE_HALF 2048	/* �ã���TMEM�Υ�������Ⱦʬ�ʥХ��ȡ� */


/*
 * gbi.h ���ɲä���ޥ���
 */
/* 32bit���顼���� */
#define	GRGBA8888(r, g, b, a)	((r) << 24 | (g) << 16 | (b) << 8 | (a))

/*
 * ��������̾���饻�����ȤΥ��������֤�
 * ͽ�ᡢ�������ȥ���ܥ������򤷤Ƥ���ɬ�פ�����
 */
#define SEGMENT_ROM_SIZE(name) \
    (u32)(_##name##SegmentRomEnd - _##name##SegmentRomStart)
#define SEGMENT_SIZE(name) \
    (u32)(_##name##SegmentEnd - _##name##SegmentStart)

/*
 * spec file ���������륻�����ȥ���ܥ�����
 */
				/* �����ɥ��������� */
#define EXTERN_DEFSEG_CODE(name) \
    extern char \
    _##name##SegmentStart[], \
    _##name##SegmentTextStart[], \
    _##name##SegmentTextEnd[], \
    _##name##SegmentDataStart[], \
    _##name##SegmentDataEnd[], \
    _##name##SegmentBssStart[], \
    _##name##SegmentBssEnd[], \
    _##name##SegmentEnd[], \
    _##name##SegmentRomStart[], \
    _##name##SegmentRomEnd[]
				/* �ǡ������������� */
#define EXTERN_DEFSEG_DATA(name) \
    extern char \
    _##name##SegmentStart[], \
    _##name##SegmentEnd[], \
    _##name##SegmentRomStart[], \
    _##name##SegmentRomEnd[]
				/* �ң��ץǡ����� */
#define EXTERN_DEFSEG_RAW(name) \
    extern char \
    _##name##SegmentRomStart[], \
    _##name##SegmentRomEnd[]
    
#define EXTERN_DEFSEG(name) EXTERN_DEFSEG_CODE(name)

/*
 * �������ȥơ��֥�Хåե�����Ͽ����(gsSegment��Ʊ����)
 */
/* �����ơ��֥�˥���������Ƭ���ɥ쥹�򥻥å� */
#define xSetSegment(segtbl, number, base) \
    	((void)((segtbl)[number] = (u32)(base)))
#define SetSegment(number, base) \
    	xSetSegment(SegmentBaseAddress, number, base)
/* �����ơ��֥�˥���������Ƭ���ɥ쥹�򥻥å�(K0���ɥ쥹) */
#define xSetSegmentK0(segtbl, number, base) \
    	xSetSegment(segtbl, number, OS_K0_TO_PHYSICAL(base))
#define SetSegmentK0(number, base) \
    	SetSegment(number, OS_K0_TO_PHYSICAL(base))
/* �����ơ��֥뤫�饻��������Ƭ���ɥ쥹�򥲥å� */
#define xGetSegment(segtbl, number) \
    	((u32)((segtbl)[number]))
#define GetSegment(number) \
    	xGetSegment(SegmentBaseAddress, number)
/* �����ơ��֥뤫�饻��������Ƭ���ɥ쥹�򥲥å�(K0���ɥ쥹) */
#define xGetSegmentK0(segtbl, number) \
    	((void *)OS_PHYSICAL_TO_K0(xGetSegment(segtbl, number)))
#define GetSegmentK0(number) \
    	xGetSegmentK0(SegmentBaseAddress, number)

#if 0
    inline void *PointerConvert(void *type, void *value) { return (void *)value; }
    inline u8 *PointerConvert(u8 *type, void *value) { return (u8 *)value; }
    inline s8 *PointerConvert(s8 *type, void *value) { return (s8 *)value; }
    inline u16 *PointerConvert(u16 *type, void *value) { return (u16 *)value; }
    inline s16 *PointerConvert(s16 *type, void *value) { return (s16 *)value; }
    inline u32 *PointerConvert(u32 *type, void *value) { return (u32 *)value; }
    inline s32 *PointerConvert(s32 *type, void *value) { return (s32 *)value; }
    inline u64 *PointerConvert(u64 *type, void *value) { return (u64 *)value; }
    inline s64 *PointerConvert(s64 *type, void *value) { return (s64 *)value; }
    inline Gfx *PointerConvert(Gfx *type, void *value) { return (Gfx *)value; }
#endif
    
/*
 * �������ȥ��ɥ쥹��ROM���ɥ쥹���Ѵ�����
 */
#define xSEGMENT_TO_ROM(segtbl, addr) \
    	((segtbl)[SEGMENT_NUMBER(addr)] + (unsigned long)SEGMENT_OFFSET(addr))
#define SEGMENT_TO_ROM(addr) \
    	xSEGMENT_TO_ROM(SegmentRomStart, addr)
    
/*
 * �������ȥ��ɥ쥹��ʪ�����ɥ쥹���Ѵ�����
 */
#define xSEGMENT_TO_PHYSICAL(segtbl, addr) \
    	((segtbl)[SEGMENT_NUMBER(addr)] + (unsigned long)SEGMENT_OFFSET(addr))
#define SEGMENT_TO_PHYSICAL(addr) \
    	xSEGMENT_TO_PHYSICAL(SegmentBaseAddress, addr)
    
/*
 * �������ȥ��ɥ쥹��KSEG0���ɥ쥹���Ѵ�����
 */
#define xSEGMENT_TO_KSEG0(segtbl, addr) \
     	((void *)OS_PHYSICAL_TO_K0(xSEGMENT_TO_PHYSICAL(segtbl, addr)))
#define SEGMENT_TO_KSEG0(addr) \
    	xSEGMENT_TO_KSEG0(SegmentBaseAddress, addr)
    
/*
 * ���������ֹ��ʪ�����ɥ쥹�򥻥����ȥ��ɥ쥹���Ѵ�����
 */
#define xPHYSICAL_TO_SEGMENT(segtbl, num, addr) \
	((void *)SEGMENT_ADDR((num), ((addr) - (segtbl)[num])))
#define PHYSICAL_TO_SEGMENT(num, addr) \
    	xPHYSICAL_TO_SEGMENT(SegmentBaseAddress, num, addr)
    
/*
 * ���������ֹ��KSEG0���ɥ쥹�򥻥����ȥ��ɥ쥹���Ѵ�����
 */
#define xKSEG0_TO_SEGMENT(segtbl, num, addr) \
    	xPHYSICAL_TO_SEGMENT(segtbl, num, OS_K0_TO_PHYSICAL(addr))
#define KSEG0_TO_SEGMENT(num, addr) \
    	xKSEG0_TO_SEGMENT(SegmentBaseAddress, num, addr)

#if 0
/*
 * ���ۥ��ɥ쥹��ʪ�����ɥ쥹���Ѵ�����
 */
#define VIRTUAL_TO_PHYSICAL(addr) \
    	osVirtualToPhysical(addr)
    
/*
 * ʪ�����ɥ쥹���ۥ��ɥ쥹���Ѵ�����
 */
#define PHYSICAL_TO_VIRTUAL(addr) \
    	osPhysicalToVirtual(addr)
    
/*
 * ���ۥ��ɥ쥹��KSEG0���ɥ쥹���Ѵ�����
 */
#define VIRTUAL_TO_KSEG0(addr) \
    	OS_PHYSICAL_TO_K0(OS_K0_TO_PHYSICAL(addr))

#endif

/*
 * KSEG0���ɥ쥹��KSEG1���ɥ쥹���Ѵ�����
 */
#if 0
#define KSEG0_TO_KSEG1(addr) \
    	((void *)((unsigned int)(addr) | 0xa0000000))
#else
#define KSEG0_TO_KSEG1(addr) \
    	(void *)(((u32)(addr) + 0x20000000))
#endif
    
/*
 * KSEG1���ɥ쥹��KSEG0���ɥ쥹���Ѵ�����
 */
#define KSEG1_TO_KSEG0(addr) \
    	(void *)(((u32)(addr) - 0x20000000))

/*
 * KSEG0   void *
 * Segment void *
 * Virtual void *
 * Physical unsigned int
 * ROM     unsigned long
 */
    
/*
 * �������ȥơ��֥�Хåե����
 */
extern unsigned long SegmentBaseAddress[NUM_SEGMENTS];
extern const unsigned long SegmentRomStart[NUM_SEGMENTS]; /* SEGMENT_TO_ROM */


/* ñ���Ѵ����ɲ� */
#define OS_MSEC_TO_CYCLES(n)	(((u64)(n)*(OS_CPU_COUNTER))/1000LL)
#define OS_CYCLES_TO_MSEC(c)	(((u64)(c)*1000LL)/(OS_CPU_COUNTER))
#define OS_SEC_TO_CYCLES(n)	((u64)(n)*(OS_CPU_COUNTER))
#define OS_CYCLES_TO_SEC(c)	((u64)(c)/(OS_CPU_COUNTER))

/* os.h�Υޥ���ΰ����򥤥�饤��ؿ����֤����� */
#ifdef _LANGUAGE_C_PLUS_PLUS

#undef OS_K0_TO_PHYSICAL
inline u32 OS_K0_TO_PHYSICAL(void *x)
{
    return (u32)(((char *)(x)-0x80000000));
}

#undef OS_K1_TO_PHYSICAL
inline u32 OS_K1_TO_PHYSICAL(void *x)
{
    return (u32)(((char *)(x)-0xa0000000));
}

#undef OS_PHYSICAL_TO_K0
inline void *OS_PHYSICAL_TO_K0(u32 x)
{
    return (void *)(((u32)(x)+0x80000000));
}

#undef OS_PHYSICAL_TO_K1
inline void *OS_PHYSICAL_TO_K1(u32 x)
{
    return (void *)(((u32)(x)+0xa0000000));
}

#endif /* _LANGUAGE_C_PLUS_PLUS */


#endif /* __U64MACRO_H_ */
