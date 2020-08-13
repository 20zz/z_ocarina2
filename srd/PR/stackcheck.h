/*
 * $Id: stackcheck.h,v 1.1 2003/03/14 03:27:05 tong Exp $
 * $Log: stackcheck.h,v $
 * Revision 1.1  2003/03/14 03:27:05  tong
 * copied SRD dir from old tree to new tree.
 *
 * Revision 1.1.1.1  2003/01/17 21:07:07  tong
 * ZELDA-OCARINA OF TIME (20L) build from Nintendo
 *
 * Revision 2.4  2001-02-07 11:55:49+09  hayakawa
 * *** empty log message ***
 *
 * Revision 2.3  2001-01-29 09:24:42+09  hayakawa
 * StackCheckCheckStack�ɲ�
 *
 * Revision 2.2  2000-01-13 15:34:17+09  hayakawa
 * StackCheckCleanup�ɲ�
 *
 * Revision 2.1  1998-10-22 20:19:27+09  hayakawa
 * �ңϣͽФ��С������
 *
 * Revision 1.6  1998-04-01 11:40:38+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.5  1997/11/25  02:46:19  hayakawa
 * StackCheckInitBoot�ɲ�
 *
 * Revision 1.4  1997/11/17  10:03:52  hayakawa
 * StackCheckInit�Υޡ������256�ˤ���
 *
 * Revision 1.3  1997/11/17  10:02:54  hayakawa
 * StackCheckInitN�ɲ�
 *
 * Revision 1.2  1997/11/16  13:21:13  hayakawa
 * StackCheckDecl��StackCheckInit�ɲ�
 *
 * Revision 1.1  1997/03/21  00:45:41  hayakawa
 * Initial revision
 *
 */

#ifndef __STACKCHECK_H_
#define __STACKCHECK_H_

#include "ultra64.h"
#include "macro.h"		/* number */

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

typedef struct stackcheck_s {
    struct stackcheck_s *next;
    struct stackcheck_s *prev;
    u32 *head;			/* �����å������� */
    u32 *tail;			/* �����å������ */
    u32 magic;			/* �����å��ΰ����� */
    u32 margin;			/* ��; */
    char *name;			/* ���� */
} stackcheck_t;
typedef stackcheck_t StackCheck;

extern void stackcheck_init(
    stackcheck_t *this,
    u32 *head,			/* �����å������� */
    u32 *tail,			/* �����å������ */
    u32 magic,			/* �����å��ΰ����� */
    u32 margin,			/* ��; */
    char *name			/* ���� */
);
extern void stackcheck_cleanup(stackcheck_t *this);
extern int stackcheck_check_stack(stackcheck_t *this);

#define StackCheckDecl(name) \
    static stackcheck_t name##_stackcheck
#define StackCheckCheckStack(name) \
    stackcheck_check_stack(&name##_stackcheck)
#define StackCheckCleanup(name) \
    stackcheck_cleanup(&name##_stackcheck)
#define StackCheckInit(name) \
    stackcheck_init(&name##_stackcheck, (u32 *)name##Stack, (u32 *)(name##Stack + number(name##Stack)), 0, 256, #name)
#define StackCheckInitN(name, n) \
    stackcheck_init(&name##_stackcheck, (u32 *)name##Stack, (u32 *)(name##Stack + number(name##Stack)), 0, n, #name)
#define StackCheckInitBoot(name) \
    stackcheck_init(&name##_stackcheck, (u32 *)name##Stack, (u32 *)(name##Stack + number(name##Stack)), 0, 0xfffffffflu, #name)

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __STACKCHECK_H_ */
