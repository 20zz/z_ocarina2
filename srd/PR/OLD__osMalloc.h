/*
 * $Id: OLD__osMalloc.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * �ҡ��״������饹(malloc)
 *
 * $Log: OLD__osMalloc.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.6  2000-12-19 16:16:32+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.5  2000-07-18 09:43:10+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.4  2000-07-14 18:32:24+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.3  1999-07-15 16:54:16+09  hayakawa
 * ��å��������塼�����Ѥ����ޥ������å��б��Τ��ᡢ��¤�Τ�����ѹ�
 *
 * Revision 2.2  1999-05-14 16:13:12+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.1  1998-10-22 20:18:25+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.14  1998-10-18 01:17:43+09  hayakawa
 * �Фä���Ǥ��礦 by ����ͺ��
 *
 * Revision 1.13  1998-06-18 13:18:19+09  hayakawa
 * __osMallocCleanup
 * __osMallocIsInitalized
 * �ɲ�
 *
 * Revision 1.12  1998-06-12 11:58:12+09  hayakawa
 * GetFreeArena��ǥХå����֤˴ط��ʤ��Ȥ���褦�ˤ���
 *
 * Revision 1.11  1998-06-10 21:33:01+09  hayakawa
 * ��malloc�ɲ�
 *
 * Revision 1.10  1998-06-09 16:24:30+09  hayakawa
 * OSArena��¤�Τ�failcnt,__dummy���ɲ�
 *
 * Revision 1.9  1998-04-27 11:28:22+09  hayakawa
 * arena�����å��Ѥ˥��п���
 * ���饤���ȥ������ѥ��н���
 * ��¤�Υ��������Ѥ�餺
 *
 * Revision 1.8  1997-08-28 20:07:21+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.7  1997/03/05  05:01:15  hayakawa
 * gcc�Υ�˥󥰤��б�
 *
 * Revision 1.6  1996/12/18  02:52:15  hayakawa
 * FINALROM �� DEBUG�������ؤ���
 *
 * Revision 1.5  1996/12/18  02:35:50  hayakawa
 * ����ѥ��륨�顼�н�
 * OSArena�����ɲ�
 *
 * Revision 1.4  1996/12/18  01:31:30  hayakawa
 * realloc�ɲ�
 * realloc,free��DEBUG�С��������ɲ�
 *
 * Revision 1.3  1996/11/01  09:21:43  hayakawa
 * �ǥХå������malloc������ɲ�
 *
 * Revision 1.2  1996/10/25  14:03:23  hayakawa
 * __os�ǻϤޤ�ؿ���malloc����__osMalloc�˰ܤ���
 *
 * Revision 1.1  1996/10/24  07:52:47  hayakawa
 * Initial revision
 *
 */

#ifndef __OSMALLOC_H_
#define __OSMALLOC_H_

#include <ultra64.h>
#include <stddef.h>

#if !defined(_SIZE_T) && !defined(_SIZE_T_)
#define _SIZE_T
#if (_MIPS_SZLONG == 32)
typedef unsigned int size_t;
#endif
#if (_MIPS_SZLONG == 64)
typedef unsigned long size_t;
#endif
#endif /* !_SIZE_T */

/*
 * ���꡼�֥�å���¤�����
 * FINAL_ROM���������Ƥ���Ȥ���   sizeof(__OSMemBlock) == 16bytes
 * FINAL_ROM���������Ƥ��ʤ��Ȥ��� sizeof(__OSMemBlock) == 48bytes
 * �Ȥʤ�ޤ���
 * �����Ѱդ˳������饢����������ȥ����ƥब��þ���붲�줬����Τ���դ��Ƥ���������
 */
typedef struct __OSMemBlock_s {
    /*private:*/
    s16         mark;		/* magic cookie */
    s16         free;		/* !0:���Υ���֥�å��϶����֥�å��Ǥ��� */
    s32         size;		/* �إå����������֥�å������� */
    struct      __OSMemBlock_s *next; /* ���Υ���֥�å��إå��ؤΥݥ��� */
    struct      __OSMemBlock_s *prev; /* ���Υ���֥�å��إå��ؤΥݥ��� */
#if !defined(FINAL_ROM)
    const char 	*file;		/* __FILE__ */
    s32 	line;		/* __LINE__ */
    OSId/*s32*/	osid;		/* osGetThreadId() */
    struct OSArena_t *arena;	/* ��°����arena�Υݥ��� */
    OSTime/*u64*/ time;		/* osGetTime() */
    u32 	__dummy[2];
#endif
} __OSMemBlock;

/*
 * Arena
 * 32byte
 */
typedef struct OSArena_t {
    /*private:*/
    __OSMemBlock *start;		/* list of allocated blocks     */
    u8 *base;			/* �ҡ����ΰ���Ƭ�ݥ��� */
    OSMesgQueue lockQ;		/* ��å��ѥ��塼 */
    u8 failcnt;			/* malloc��NULL���֤������ */
    u8 initialzed;		/* !0:��������� */
    u8 flags;
    u8 __dummy;
} OSArena;

#if defined(_LANGUAGE_C_PLUS_PLUS)
extern "C" {
#endif
#if 0
}
#endif

extern void __osMallocInit(OSArena *arena, u8 *base, s32 len);
extern void __osMallocCleanup(OSArena *arena);
extern void __osMallocAddBlock(OSArena *arena, u8 *base, s32 len);
extern int  __osMallocIsInitalized(OSArena *arena);
#if DEBUG
extern void *__osMalloc_DEBUG(OSArena *arena, size_t size, const char *file, int line);
extern void *__osMallocR_DEBUG(OSArena *arena, size_t size, const char *file, int line);
extern void *__osRealloc_DEBUG(OSArena *arena, void *ptr, size_t size, const char *file, int line);
extern void __osFree_DEBUG(OSArena *arena, void *ptr, const char *file, int line);
#endif /* DEBUG */
extern void *__osMalloc(OSArena *arena, size_t size);
extern void *__osMallocR(OSArena *arena, size_t size);
extern void *__osRealloc(OSArena *arena, void *ptr, size_t size);
extern void __osFree(OSArena *, void *ptr);
extern void __osGetFreeArena(OSArena *arena, size_t *max_size, size_t *free_size, size_t *alloc_size);
extern int __osCheckArena(OSArena *arena);
#if DEBUG
extern void __osDisplayArena(OSArena *arena);
#endif /* DEBUG */
extern void __osDisplayArena_OnFault(OSArena *arena);

#if !defined(FINAL_ROM)
extern int __osMallocGetFailCount(OSArena *arena);
#endif
extern int __osMalloc_FreeBlockTest_Enable;
#if !defined(FINAL_ROM)
extern int __osMalloc_IsDebugFillMallocF(OSArena *arena);
extern int __osMalloc_IsDebugFillFreeF(OSArena *arena);
extern int __osMalloc_IsDebugFillTestF(OSArena *arena);
extern void __osMalloc_SetDebugFillMallocF(OSArena *arena);
extern void __osMalloc_SetDebugFillFreeF(OSArena *arena);
extern void __osMalloc_SetDebugFillTestF(OSArena *arena);
extern void __osMalloc_ClearDebugFillMallocF(OSArena *arena);
extern void __osMalloc_ClearDebugFillFreeF(OSArena *arena);
extern void __osMalloc_ClearDebugFillTestF(OSArena *arena);
#define __osMalloc_IsDebugFillMalloc(arena)	__osMalloc_IsDebugFillMallocF(arena)
#define __osMalloc_IsDebugFillFree(arena)	__osMalloc_IsDebugFillFreeF(arena)
#define __osMalloc_IsDebugFillTest(arena)	__osMalloc_IsDebugFillTestF(arena)
#define __osMalloc_SetDebugFillMalloc(arena)	__osMalloc_SetDebugFillMallocF(arena)
#define __osMalloc_SetDebugFillFree(arena)	__osMalloc_SetDebugFillFreeF(arena)
#define __osMalloc_SetDebugFillTest(arena)	__osMalloc_SetDebugFillTestF(arena)
#define __osMalloc_ClearDebugFillMalloc(arena)	__osMalloc_ClearDebugFillMallocF(arena)
#define __osMalloc_ClearDebugFillFree(arena)	__osMalloc_ClearDebugFillFreeF(arena)
#define __osMalloc_ClearDebugFillTest(arena)	__osMalloc_ClearDebugFillTestF(arena)
#endif /* defined(FINAL_ROM) */

#if 0
{
#endif
#if defined(_LANGUAGE_C_PLUS_PLUS)
} /* extern "C" */
#endif

#endif /* __OSMALLOC_H_ */
