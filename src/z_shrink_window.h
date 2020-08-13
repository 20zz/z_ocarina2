/*
 * $Id: z_shrink_window.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $
 *
 * ��ѽ̾�
 *
 * $Log: z_shrink_window.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.5  1998/03/19 13:03:00  komatu
 * *** empty log message ***
 *
 * Revision 1.4  1997/11/12  07:57:36  hayakawa
 * �ʲ��Υե������Ʊ���˥����å������Ȥ��Ƥ��������ʺ��������
 * z_play.c
 * z_player.h
 * z_shrink_window.c
 * z_shrink_window.h
 *
 * shrink_window_move�ѹ�
 *
 * Revision 1.3  1997/11/12  05:16:33  hayakawa
 * shrink_window_setnowval�ɲ�
 * shrink_window_getnowval�ɲ�
 *
 * Revision 1.2  1997/11/12  04:51:12  hayakawa
 * shrink_window_init�ɲ�
 * shrink_window_cleanup�ɲ�
 * shrink_window_getval�ɲ�
 *
 * Revision 1.1  1997/11/11  12:22:09  hayakawa
 * Initial revision
 *
 */

#ifndef __Z_SHRINK_WINDOW_H_
#define __Z_SHRINK_WINDOW_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

				/* ����� */
void shrink_window_init(void);
				/* ����� */
void shrink_window_cleanup(void);
				/* ������ե졼��ư�� */
void shrink_window_move(int frame);
				/* ��ɸ�ν̾��̤����� */
void shrink_window_setval(int val);
				/* ��ɸ�ν̾��̤μ��� */
int  shrink_window_getval(void);
				/* ���ߤν̾��̤����� */
void shrink_window_setnowval(int val);
				/* ���ߤν̾��̤μ��� */
int  shrink_window_getnowval(void);
				/* �����Ĥ餹���� */
void shrink_window_ring(int val);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __Z_SHRINK_WINDOW_H_ */
