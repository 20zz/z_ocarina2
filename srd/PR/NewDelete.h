/*
 * $Id: NewDelete.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * �ø����ѣáܡ��������������ޥ���
 *
 * NEW/New:���󥹥ȥ饯����ƤӽФ��ʤ� new
 * DELETE/Delete:�ǥ��ȥ饯����ƤӽФ��ʤ� delete
 * NEWA/NewA:NEW/New �������б��С������
 * DELETEA/DeleteA:DELETE/Delete �������б��С������
 *
 * $Log: NewDelete.h,v $
 * Revision 1.1  2003/03/14 03:27:04  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:06:42  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.2  2000-02-01 22:16:33+09  hayakawa
 * malloc.h��include����褦�ˤ���
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.2  1998-04-01 11:42:22+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.1  1997/04/14  05:02:37  hayakawa
 * Initial revision
 *
 */

#ifndef __NEWDELETE_H_
#define __NEWDELETE_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include <malloc.h>		/* malloc/free */
    
    /*
     * ������:
     *
     * int (*a)[10] = NewA(int, [10]);
     * int *b = New(int);
     * delete(b);
     * deleteA(a);
     */
    
#define NEWA(type, array) ((type(*)array)malloc(sizeof(type array)))
#define DELETEA(ptr) 	free(ptr)
#define NEW(type) 	NEWA(type,)
#define DELETE(ptr) 	DELETEA(ptr)
#define NewA(type, array) NEWA(type)
#define DeleteA(ptr) 	DELETEA(ptr)
#define New(type) 	NEW(type)
#define Delete(ptr) 	DELETE(ptr)

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __NEWDELETE_H_ */
