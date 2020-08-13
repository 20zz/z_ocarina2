/*
 * $Id: z_actor_dlftbls.h,v 2.1 1998-10-22 20:45:49+09 zelda Exp $
 *
 * $Log: z_actor_dlftbls.h,v $
 * Revision 2.1  1998-10-22 20:45:49+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.16  1998/08/28 09:59:14  hayakawa
 * warning�к�
 *
 * Revision 1.15  1998-08-20 17:51:51+09  hayakawa
 * actor_dlftbls_show_info
 * actor_dlftbls_init
 * actor_dlftbls_cleanup
 * actor_dlftbls_num
 *
 * Revision 1.14  1998-06-26 21:53:39+09  hayakawa
 * HAYAKAWA_TESTdecl�������Ѥˤ����
 *
 * Revision 1.13  1998-06-15 19:23:48+09  hayakawa
 * HAYAKAWA_TESTdecl�ν��������ˤ��ƥƥ���
 *
 * Revision 1.12  1998-06-11 16:10:46+09  hayakawa
 * decl5�ɲ�
 *
 * Revision 1.11  1998-05-28 11:02:13+09  hayakawa
 * ��¤�Υ����ѹ�
 * �ޥ����ɲ�
 *
 * Revision 1.10  1998-05-14 10:29:02+09  zelda
 * �ޥ����顼�к�
 *
 * Revision 1.9  1998-04-22 13:30:37+09  hayakawa
 * ��拾��ѥ���ˤ�äƥ�˥󥰤䥨�顼���ФƤ����Τ���
 *
 * Revision 1.8  1998-04-21 18:51:29+09  hayakawa
 * z_actor_dlftbls.decl��z_actor_list.h���������
 *
 * Revision 1.7  1998-04-14 17:29:15+09  hayakawa
 * Actor_profile_dlftbl�Υ��Ф��ɲä��ޤ���
 * actor_dlftbl_GetSegName�ޥ�����ɲ�
 * ��ˡ�����ؤ��ƥ���
 *
 * Revision 1.6  1998-03-27 15:27:16+09  hayakawa
 * Actor_profile_dlftbl�Υ��Ф�const��Ϥ�����
 *
 * Revision 1.5  1998/03/19  10:32:18  sakakibara
 * *** empty log message ***
 *
 * Revision 1.4  1998/03/10  04:42:07  hayakawa
 * ��拾��ѥ���ǹ�¤�ΤΥ��������Ѥ��ʤ��褦�ˤ���
 *
 * Revision 1.3  1998/03/06  04:51:50  hayakawa
 * ��������Τ���˥�������̾�ơ��֥��Ȥ�ʤ��褦�ˤ���
 *
 * Revision 1.2  1997/08/25  13:53:06  hayakawa
 * ��������̾�ʥǥХå��ѡ��ɲ�
 * player�б�
 *
 * Revision 1.1  1997/08/25  07:02:46  hayakawa
 * Initial revision
 *
 */

#ifndef Z_ACTOR_DLFTBLS_H
#define Z_ACTOR_DLFTBLS_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_actor.h"		/* Actor_profile */

/*
 * ���������ץ�ե����륯�饹���
 */
typedef struct {
    u32 SegmentRomStart;	/* _nameSegmentRomStart */
    u32 SegmentRomEnd;		/* _nameSegmentRomEnd */
    char *SegmentStart;		/* _nameSegmentStart */
    char *SegmentEnd;		/* _nameSegmentEnd */
    char *allocp;		/* �������Ȥ����֤����ºݤΥ��ɥ쥹 */
    Actor_profile *profile;	/* profile�β��ۥ��ɥ쥹 */
#ifdef USE_ACTOR_NAME_TABLE
    char *segname;		/* ��������̾�ʥǥХå��ѡ� */
#else
    char *__segname;		/* ��¤�ΤΥ��������Ѥ��ʤ��褦�� */
#endif /* USE_ACTOR_NAME_TABLE */
    u16 flags;			/* bit0:������ǽ */
    s8  clients;		/* ���饤����ȿ� */
    u8  status;			/* bit0:������ bit1:���� */
} Actor_profile_dlftbl;
typedef Actor_profile_dlftbl DLFTBL_ACTOR;

/*
 * ��������̾����
 */
#ifdef USE_ACTOR_NAME_TABLE
#define actor_dlftbl_GetSegName(t) ((t)->segname ? (t)->segname : "")
#else
#define actor_dlftbl_GetSegName(t) ((void)(t), "")
#endif

typedef enum {
#define decl(name) ACTOR_DLF_##name,
#define decl0(name1, name2) _filler_ACTOR_DLF_ ## name1 ## _filler_,
#define decl1(name1, name2) decl(name1)
#define decl2(name1, name2) decl(name1)
#define decl3(name1, name2) decl(name1)
#define decl4(name1, name2) decl(name1)
#define decl5(name1, name2) decl(name1)
#include "z_actor_dlftbls.decl"
#undef decl
#undef decl0
#undef decl1
#undef decl2
#undef decl3
#undef decl4
#undef decl5
    ACTOR_DLF_MAX
} actor_dlftbls_e;

/*
 * ���������ץ�ե�����Υݥ��󥿤����
 */
#define actor_dlftbl_profile(actor_dlftbl) \
(((actor_dlftbl)->allocp == NULL) ? ((actor_dlftbl)->profile) : \
 ((actor_dlftbl)->profile) - ((actor_dlftbl)->SegmentStart) + ((actor_dlftbl)->allocp))

/*
 * �����Х��ѿ����
 */
extern unsigned int actor_dlftbls_num; /* actor_dlftbls�����ǿ� */
extern DLFTBL_ACTOR actor_dlftbls[];

/*
 * �����Х�ؿ����
 */
/*
 * �ơ��֥����ɽ��
 * �ʥǥХå��ѡ�
 */
extern void
actor_dlftbls_show_info(void);
/*
 * �����
 */
extern void
actor_dlftbls_init(void);
/*
 * �����
 */
extern void
actor_dlftbls_cleanup(void);


#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* Z_ACTOR_DLFTBLS_H */
