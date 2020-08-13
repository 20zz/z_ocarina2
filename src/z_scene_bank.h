/*
 * $Id: z_scene_bank.h,v 2.1 1998/10/22 11:51:48 zelda Exp $
 *
 *   �Х󥯥ǡ������
 *
 * $Log: z_scene_bank.h,v $
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.154  1998/08/20 02:51:48  hayakawa
 * object_exchange_bank_max �� Object_Bank_MAX ���ͤ�����褦�ˤ���
 *
 * Revision 1.153  1998-06-04 22:05:14+09  hayakawa
 * �⤦�����Ǥ��礦
 * enum �����ɲ�
 *
 * Revision 1.152  1998-06-02 09:52:52+09  zelda
 * *** empty log message ***
 *
 * Revision 1.151  1998-06-02 09:47:13+09  zelda
 * decl00�˥��ߡ��������Ƥ�Τ�˺��Ƥ���
 *
 * Revision 1.1  1997/05/31  06:32:39  iwawaki
 * Initial revision
 *
 */

#ifndef INCLUDE_Z_SCENE_BANK_H
#define INCLUDE_Z_SCENE_BANK_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "z_scene_h.h"		/* Object_Bank */
#include "z_play_h.h"		/* Rom_Address */

/************************************************************************
 *
 *	�����ؤ����֥������ȥ������ץХ�
 *
 ************************************************************************/
enum Object_Bank_e {
    Object_Bank_Non,	 	/* ̵�� */
    
#define decl(ename, sname) 	Object_Bank_##ename,
#define decl0(ename, sname)	__dummy__##Object_Bank_##ename,
#include "z_scene_bank.decl"
#undef decl
#undef decl0
    
    Object_Bank_MAX		/* �Ǹ���֤��Ʋ����� */
};

/************************************************************************
 *
 *	�ץ쥤�䡼�Х󥯥ǡ���
 *
 ************************************************************************/
extern Object_Bank object_exchange_player_bank[2];

/************************************************************************
 *
 *	���֥������������ؤ��Х󥯥ǡ����ơ��֥�
 *
 ************************************************************************/
extern unsigned int object_exchange_bank_max;
extern Rom_Address object_exchange_rom_address[];

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif
/*** z_scene_bank.h end ***/
