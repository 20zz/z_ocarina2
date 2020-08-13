/*
 * $Id: z_displib.h,v 2.1 1998/10/22 11:45:49 zelda Exp $
 *	
 * ���ͽ��
 *
 * $Log: z_displib.h,v $
 * Revision 2.1  1998/10/22  11:45:49  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.9  1998/08/26 05:52:13  zelda
 * �ȤäƤ��ʤ��ؿ���Хå���������
 *
 * Revision 1.8  1998-03-25 22:12:58+09  hayakawa
 * ���פʤ�Τ�ä���ɬ�פʤ�Τ��ɲä�����
 *
 * Revision 1.7  1998/03/18  03:10:24  ogawa
 * *** empty log message ***
 *
 * Revision 1.6  1997/03/21  09:19:14  hayakawa
 * sPrintf vsPrintf�ʤɡ����פʤ�Τ�������
 *
 * Revision 1.5  1996/10/18  08:16:53  iwawaki
 * *** empty log message ***
 *
 * Revision 1.4  1996/09/28  10:56:10  iwawaki
 * si_***�򥳥��Ȥ�
 *
 * Revision 1.3  1996/09/18  09:15:56  iwawaki
 * $Log�ɲ�
 */
   
#ifndef INCLUDE_Z_DISPLIB_H
#define INCLUDE_Z_DISPLIB_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/*======================================================================*
 *                                                                      *
 *	memcpy�ؿ�                                                      *
 *                                                                      *
 *======================================================================*/
extern void *Memcpy(
    void *,
    const void *,
    int
);

/*======================================================================*
 *                                                                      *
 *	memset�ؿ�                                                      *
 *                                                                      *
 *======================================================================*/
extern void *Memset(
    void *,
    int,
    int
);

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_displib.h end ***/
