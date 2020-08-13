/*
 * $Id: listalloc.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 * $Log: listalloc.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.2  1998/04/01 02:47:09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.1  1997/04/03  13:03:49  hayakawa
 * Initial revision
 *
 */

#ifndef __LISTALLOC_H_
#define __LISTALLOC_H_

#include "malloc.h"		/* size_t */

/*
 * �����
 */
typedef struct listallocx_s {
/*private:*/
    struct listallocx_s *prev;
    struct listallocx_s *next;
} listallocx_t;
typedef struct listalloc_s {
/*private:*/
    struct listallocx_s *head;
    struct listallocx_s *tail;
} listalloc_t;

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
    
    /*
     * �ؿ��ץ�ȥ�����
     */
/*public:*/
void *listalloc_init(listalloc_t *this);
void *listalloc_malloc(listalloc_t *this, size_t siz);
void listalloc_free(listalloc_t *this, void *ptr);
void listalloc_cleanup(listalloc_t *this);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __LISTALLOC_H_ */
