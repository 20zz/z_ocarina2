/*
 * $Id: loadfragment.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * �ץ�����ưŪ���ɡ����
 *
 * $Log: loadfragment.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:07:07  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.3  2000-09-29 19:59:56+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.2  2000-09-28 18:38:29+09  hayakawa
 * �����ѹ�
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.4  1998-04-01 11:41:15+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.3  1997/09/20  04:46:32  hayakawa
 * LoadFragmentFix3�ɲ�
 * LoadFragment3�ɲ�
 *
 * Revision 1.2  1997/02/07  10:44:59  hayakawa
 * �������ѹ�
 *
 * Revision 1.1  1996/12/18  01:09:23  hayakawa
 * Initial revision
 *
 *
 */

#ifndef __LOADFRAGMENT_H_
#define __LOADFRAGMENT_H_

#ifndef __TYPEDEF_CHAR_MEMPTR__
#define __TYPEDEF_CHAR_MEMPTR__
typedef char	*MemPtr;
#endif

#ifndef __TYPEDEF_UNSIGNEDLONG_ULONG_
#define __TYPEDEF_UNSIGNEDLONG_ULONG_
typedef unsigned long	    ulong;
#endif

#ifdef __cplusplus
extern "C" {
#endif
#if 0
}
#endif

extern ulong  LoadFragmentFix (ulong romStart, ulong romEnd, MemPtr fakebase, MemPtr ramAddr, ulong ramSize);
extern MemPtr LoadFragment    (ulong romStart, ulong romEnd, MemPtr fakebase);
extern ulong  LoadFragmentFix2(ulong romStart, ulong romEnd, MemPtr segStart, MemPtr segEnd, MemPtr ramAddr);
extern MemPtr LoadFragment2   (ulong romStart, ulong romEnd, MemPtr segStart, MemPtr segEnd);
extern ulong  LoadFragmentFix3(ulong romStart, ulong romEnd, MemPtr segStart, MemPtr segEnd, MemPtr ramAddr);
extern MemPtr LoadFragment3   (ulong romStart, ulong romEnd, MemPtr segStart, MemPtr segEnd);
extern ulong  LoadFragmentFix4(ulong romStart, ulong romEnd, ulong relromStart, ulong relromEnd, MemPtr segStart, MemPtr segEnd, MemPtr ramAddr, MemPtr relramAddr);
extern MemPtr LoadFragment4   (ulong romStart, ulong romEnd, ulong relromStart, ulong relromEnd, MemPtr segStart, MemPtr segEnd);

extern int loadfragment_verbose; /* 0:�ʤ� 1:��̿Ū 2:���顼 3:���� */

#if 0
{
#endif
#ifdef __cplusplus
} /* extern "C" */
#endif

#if 0
/* ��������̾�ǥ��ɤ��뤿��Υޥ��� */
#define LOADFRAGMENTFIX(name, ramAddr) 	LoadFragmentFix2((u32)_##name##SegmentRomStart, (u32)_##name##SegmentRomEnd, _##name##SegmentStart, _##name##SegmentEnd, ramAddr)
#define LOADFRAGMENT(name) 		LoadFragment2((u32)_##name##SegmentRomStart, (u32)_##name##SegmentRomEnd, _##name##SegmentStart, _##name##SegmentEnd)
#endif
    
#endif /* __LOADFRAGMENT_H_ */
