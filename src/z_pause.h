/* $Id: z_pause.h,v 1.1.1.1 2003/03/10 22:42:45 tong Exp $ */	
/* $Log: z_pause.h,v $
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.12  1998/03/25 11:49:25  yoshida
 * �áܡܤ���Υ��󥯥롼�ɤ��б�
 *
 * Revision 1.11  1997/05/22  07:10:27  iwawaki
 * *** empty log message ***
 *
 * Revision 1.10  1996/12/16  06:48:55  soejima
 * *** empty log message ***
 *
 * Revision 1.9  1996/12/13  01:42:16  soejima
 * �ݡ��������å�����
 *
 * Revision 1.8  1996/12/11  09:32:38  soejima
 * ���쥤�ɡ��������׽���
 *
 * Revision 1.7  1996/10/18  08:32:20  iwawaki
 * *** empty log message ***
 *
 * Revision 1.6  1996/10/17  04:04:11  iwawaki
 * �ݡ��������å��ɲ�
 *
 * Revision 1.5  1996/10/17  03:04:01  iwawaki
 * *** empty log message ***
 *
 * Revision 1.4  1996/09/18  10:57:22  iwawaki
 * ��̩
 *
 * Revision 1.3  1996/09/18  09:20:39  iwawaki
 * $Log�ɲ�
 * */


#ifndef INCLUDE_Z_PAUSE_H
#define INCLUDE_Z_PAUSE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif


/************************************************************************
 *
 *	�ݡ������饹
 *
 ************************************************************************/

#define	PAUSE_WAIT	8

typedef struct {
    int		flag;	/* �ݡ����ե饰	    */	
    int		timer;	/* �������꥿���ޡ� */
} Pause;

/*-----------------------------------------------------------------------
 *
 *	�ݡ������饹 ���󥹥ȥ饯��
 *
 *----------------------------------------------------------------------*/
extern void Pause_ct(
    Pause *this
);
/*-----------------------------------------------------------------------
 *
 *	�ݡ�������
 *
 *----------------------------------------------------------------------*/
extern int Pause_proc(
    Pause *this,
    pad_t *pad		/* ����ȥ���ѥåɾ���ݥ��󥿡� */
);

/*-----------------------------------------------------------------------
 *
 *	�ݡ�������
 *
 *----------------------------------------------------------------------*/
#define	Pause_on_off_check(this)	((this)->flag)


#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_pause.h end ***/

