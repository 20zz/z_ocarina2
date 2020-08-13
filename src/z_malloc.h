/*
 * $Id: z_malloc.h,v 2.1 1998-10-22 21:17:25+09 zelda Exp $
 *
 * ������ѥҡ��״ؿ���
 * ��������˥ҡ��פ��������ʤ�����Ѥ���
 * 
 * �����Ѥ�������ɬ�� zelda_InitArena �ǽ�������Ƥ�������
 * ��zelda_malloc �����ΰ� zelda_free �ǲ������Ƥ���������
 * ���ҡ����ΰ�����(�ƽ����)�����Ȥ���,��������� zelda_malloc �����ΰ��
 *   ���Ѥ��ƤϤ����ޤ���
 *
 * $Log: z_malloc.h,v $
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.10  1998/07/03 05:06:02  hayakawa
 * ����������
 *
 * Revision 1.9  1998-06-25 20:11:00+09  hayakawa
 * DEBUG�С��������DEBUG�С������ˤʤ�褦�˥ޥ�����ɲ�
 *
 * Revision 1.8  1998-06-18 13:39:49+09  hayakawa
 * zelda_CheckArena
 * ��ǥХå��ʳ��Ǥ�Ȥ���褦�ˤ���
 * zelda_MallocIsInitalized
 * zelda_CleanupArena
 * �ɲ�
 *
 * Revision 1.7  1998-06-12 11:58:37+09  hayakawa
 * GetFreeArena��ǥХå����֤˴ط��ʤ��Ȥ���褦�ˤ���
 *
 * Revision 1.6  1998-06-10 21:42:38+09  hayakawa
 * ��malloc�ɲ�
 *
 * Revision 1.5  1998-06-08 22:00:28+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.4  1998-04-01 11:46:28+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.3  1998/03/25  11:53:27  yoshida
 * �áܡܤ���Υ��󥯥롼�ɤ��б�
 *
 * Revision 1.2  1998/02/11  06:41:28  hayakawa
 * ����ե��Ǵ���
 *
 * Revision 1.1  1998/02/11  05:52:52  hayakawa
 * Initial revision
 *
 */

#ifndef __Z_MALLOC_H_
#define __Z_MALLOC_H_

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
#endif

/*
 * �ҡ��׽�����ؿ�
 * zelda_malloc�ʤɤδؿ���Ȥ�����ɬ���������ɬ�פȤ��ޤ�
 *
 * base �ҡ����ΰ���Ƭ�ݥ���
 * len  �ҡ����ΰ�Х��ȥ�����
 * base, len �Ȥ��16���ܿ��ˤ��Ƥ�������
 */
extern void zelda_InitArena(void *base, size_t len);
extern void zelda_CleanupArena(void);

/*
 * zelda_MallocIsInitalized �ҡ��פ����������Ƥ��뤫��
 * zelda_GetFreeArena �ҡ��פζ�����������Ĵ��
 * zelda_CheckArena   �ҡ��פ�������Ĵ��
 */
extern int  zelda_MallocIsInitalized(void);
extern void zelda_GetFreeArena(size_t *max_size, size_t *free_size, size_t *alloc_size);
extern int  zelda_CheckArena(void);

/*
 * zelda_malloc
 * zelda_malloc_r (��malloc)
 * zelda_realloc
 * zelda_free
 * zelda_calloc
 *
 * ���줾�졢ɸ��ؿ��� malloc, malloc_r, realloc, free, calloc ���������ޤ���
 */
#if !DEBUG
extern void *zelda_malloc(size_t size);
extern void *zelda_malloc_r(size_t size);
extern void *zelda_realloc(void *ptr, size_t size);
extern void zelda_free(void *ptr);
extern void *zelda_calloc(size_t nelem, size_t elsize);
#else
extern void *zelda_malloc_DEBUG(size_t size, const char *file, int line);
extern void *zelda_malloc_r_DEBUG(size_t size, const char *file, int line);
extern void *zelda_realloc_DEBUG(void *ptr, size_t size, const char *file, int line);
extern void zelda_free_DEBUG(void *ptr, const char *file, int line);
#endif

#ifndef __Z_MALLOC_C_
#if !DEBUG
#define zelda_malloc_DEBUG(size, file, line) \
	zelda_malloc(size)
#define zelda_malloc_r_DEBUG(size, file, line) \
	zelda_malloc_r(size)
#define zelda_realloc_DEBUG(ptr, size, file, line) \
	zelda_realloc(ptr, size)
#define zelda_free_DEBUG(ptr, file, line) \
	zelda_free(ptr)
#else
#define zelda_malloc(size) \
	zelda_malloc_DEBUG(size, __FILE__, __LINE__)
#define zelda_malloc_r(size) \
	zelda_malloc_r_DEBUG(size, __FILE__, __LINE__)
#define zelda_realloc(ptr, size) \
	zelda_realloc_DEBUG(ptr, size, __FILE__, __LINE__)
#define zelda_free(ptr) \
	zelda_free_DEBUG(ptr, __FILE__, __LINE__)
#endif
#endif /* __Z_MALLOC_C_ */

#if DEBUG
/*
 * zelda_DisplayArena �ҡ������Ƥ�ɽ��
 */
extern void zelda_DisplayArena(void);

extern int zelda_malloc_verbose;	/* 0:�ʤ� 1:���顼 2:�ٹ� 3:���� */

#endif /* DEBUG */

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __Z_MALLOC_H_ */
