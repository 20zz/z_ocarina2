/*
 * ����HAYAKAWA_TESTdecl ��ͭ���ˤʤäƤ��ޤ�������Ⱦ��ʬ��
 * z_actor_dlftbls.decl ����Ͽ���Ƥ�������
 */
/*
 * $Id: z_actor_list.h,v 2.1 1998/10/22 11:45:49 zelda Exp $
 *
 * ACTOR_NAME_XXXXX �����
 *
 * z_actor_dlftbls.decl ����Ͽ���Ƥ�������
 *
 * $Log: z_actor_list.h,v $
 * Revision 2.1  1998/10/22  11:45:49  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.220  1998/06/26 12:54:02  hayakawa
 * HAYAKAWA_TESTdecl�������Ѥˤ����
 *
 * Revision 1.219  1998-06-25 16:08:41+09  hayakawa
 * �����Ⱦä��ƥ���ץ�ˤ���
 * actor_name_e
 *
 * Revision 1.218  1998-06-15 19:23:41+09  hayakawa
 * HAYAKAWA_TESTdecl�ν��������ˤ��ƥƥ���
 *
 */

/************************************************************************
 *
 *	��������ꥹ��
 *
 ************************************************************************/

#ifndef INCLUDE_Z_ACTOR_LIST_H
#define INCLUDE_Z_ACTOR_LIST_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

enum actor_name_e {

#define decl(name) ACTOR_NAME_##name,
#define decl0(name1, name2) _filler_ACTOR_NAME_ ## name2 ## _filler_,
#define decl1(name1, name2) decl(name2)
#define decl2(name1, name2) decl(name2)
#define decl3(name1, name2) decl(name2)
#define decl4(name1, name2) decl(name2)
#define decl5(name1, name2) decl(name2)
    
#include "z_actor_dlftbls.decl"

#undef decl
#undef decl0
#undef decl1
#undef decl2
#undef decl3
#undef decl4
#undef decl5
    
    ACTOR_NAME_END
};

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif
