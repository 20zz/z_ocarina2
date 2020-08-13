/*
 * $Id: OLDmalloc.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * ������ malloc ��
 *
 * $Log: OLDmalloc.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.3  2000-09-28 17:48:32+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.2  1999-05-14 16:12:33+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.1  1998-10-22 20:18:25+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.14  1998-07-03 10:51:47+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.13  1998-06-18 13:19:49+09  hayakawa
 * MallocIsInitalized
 * MallocCleanup
 * �ɲ�
 *
 * Revision 1.12  1998-06-10 21:33:25+09  hayakawa
 * ��malloc�ɲ�
 *
 * Revision 1.11  1998-04-01 11:40:15+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.10  1997/10/04  08:40:38  hayakawa
 * verbose�ե饰����
 *
 * Revision 1.9  1997/08/28  11:03:43  hayakawa
 * *** empty log message ***
 *
 * Revision 1.8  1997/03/05  05:04:58  hayakawa
 * gcc�Υ�˥󥰤��б�
 *
 * Revision 1.7  1997/02/07  10:27:34  hayakawa
 * �áܡ��б���󥱡���
 *
 * Revision 1.6  1996/12/18  02:38:12  hayakawa
 * DisplayArena,CheckArena,MallocInit�ɲ�
 *
 * Revision 1.5  1996/12/18  02:03:35  hayakawa
 * realloc�ɲ�
 * realloc,free��DEBUG�С��������ɲ�
 *
 * Revision 1.4  1996/11/01  09:22:57  hayakawa
 * ���פ� #include ����
 *
 * Revision 1.3  1996/10/25  14:03:30  hayakawa
 * __os�ǻϤޤ�ؿ���malloc����__osMalloc�˰ܤ���
 *
 * Revision 1.2  1996/10/24  00:46:53  hayakawa
 * malloc �ΥǥХå����󥿡��ե���������
 * �إå��ɲ�
 *
 */

#ifndef __MALLOC_H_
#define __MALLOC_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

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
#endif /* if !defined(_SIZE_T) && !defined(_SIZE_T_) */

#if defined(LIB_FOR_YOSHI)

#if defined(_LANGUAGE_C_PLUS_PLUS)
extern "C" {
#endif
#include "/project/YOSHI/SRC/Malloc.h"
#if defined(_LANGUAGE_C_PLUS_PLUS)
}
#endif

#define malloc_r 	rMalloc
#define malloc 		Malloc
#define realloc 	Realloc
#define free 		Free
extern void *calloc(size_t nelem, size_t elsize);

#else  /* LIB_FOR_YOSHI */

extern void MallocInit(void *base, size_t len);
extern void MallocCleanup(void);
extern int  MallocIsInitalized(void);
extern void GetFreeArena(size_t *max_size, size_t *free_size, size_t *alloc_size);
extern int  CheckArena(void);

#if defined(__MALLOC_C_) || !DEBUG
extern void *malloc(size_t size);
extern void *malloc_r(size_t size);
extern void *realloc(void *ptr, size_t size);
extern void free(void *ptr);
#endif
#if defined(__MALLOC_C_) || DEBUG
extern void *malloc_DEBUG(size_t size, const char *file, int line);
extern void *malloc_r_DEBUG(size_t size, const char *file, int line);
extern void *realloc_DEBUG(void *ptr, size_t size, const char *file, int line);
extern void free_DEBUG(void *ptr, const char *file, int line);
#endif
extern void *calloc(size_t nelem, size_t elsize);

#if !defined(__MALLOC_C_)
#if !DEBUG
#define malloc_DEBUG(size, file, line) \
	malloc(size)
#define malloc_r_DEBUG(size, file, line) \
	malloc_r(size)
#define realloc_DEBUG(ptr, size, file, line) \
	realloc(ptr, size)
#define free_DEBUG(ptr, file, line) \
	free(ptr)
#else
#define malloc(size) \
	malloc_DEBUG(size, __FILE__, __LINE__)
#define malloc_r(size) \
	malloc_r_DEBUG(size, __FILE__, __LINE__)
#define realloc(ptr, size) \
	realloc_DEBUG(ptr, size, __FILE__, __LINE__)
#define free(ptr) \
	free_DEBUG(ptr, __FILE__, __LINE__)
#endif
#endif /* !defined(__MALLOC_C_) */

#endif /* LIB_FOR_YOSHI */

#if DEBUG
extern void DisplayArena(void);
extern int malloc_verbose;	/* 0:�ʤ� 1:���顼 2:�ٹ� 3:���� */
#endif /* DEBUG */

#if defined(_LANGUAGE_C_PLUS_PLUS)
} /* extern "C" */
#endif

#endif /* __MALLOC_H_ */
