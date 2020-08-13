/*
 * $Id: z_common_data.c,v 2.2 1998/10/28 00:51:27 soejima Exp $
 *
 * ��������̥ǡ���
 *
 * $Log: z_common_data.c,v $
 * Revision 2.2  1998/10/28  00:51:27  soejima
 * �У��̻���
 *
 * Revision 2.1  1998-10-22 20:45:49+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.19  1998/10/06 00:51:50  hayakawa
 * z_locale.h��include���Ƥʤ��Τǥ��顼�ˤʤäƤ���
 *
 * Revision 1.18  1998-10-05 17:08:24+09  soejima
 * *** empty log message ***
 *
 * Revision 1.17  1998-09-29 23:07:30+09  soejima
 * *** empty log message ***
 *
 * Revision 1.16  1998-09-18 23:37:33+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.15  1998/09/15 04:58:50  sasaki
 * *** empty log message ***
 *
 * Revision 1.14  1998/09/12 12:51:17  sasaki
 * next_zelda_time add
 *
 * Revision 1.13  1998/08/25 13:11:43  soejima
 * *** empty log message ***
 *
 * Revision 1.12  1998-08-22 20:31:51+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.11  1998/08/21 10:23:32  sasaki
 * DOUKIDEMO �ѹ�
 *
 * Revision 1.10  1998/07/29 13:50:20  soejima
 * *** empty log message ***
 *
 * Revision 1.9  1998-07-28 15:20:54+09  soejima
 * *** empty log message ***
 *
 * Revision 1.8  1998-07-04 11:15:18+09  soejima
 * �ʡ���
 *
 * Revision 1.7  1998-06-02 21:30:09+09  soejima
 * *** empty log message ***
 *
 * Revision 1.6  1998-05-08 18:08:10+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.5  1998/01/13 13:34:11  sasaki
 * *** empty log message ***
 *
 * Revision 1.4  1998/01/13  04:42:43  soejima
 * *** empty log message ***
 *
 * Revision 1.3  1997/10/20  03:04:18  hayakawa
 * *** empty log message ***
 *
 * Revision 1.2  1997/10/20  03:02:26  hayakawa
 * *** empty log message ***
 *
 * Revision 1.1  1997/10/20  03:01:25  hayakawa
 * Initial revision
 *
 */

#include "z_common_data.h"	/* z_common_data_t */
#include "os.h"			/* bzero */
#include "padmgr.h"
#include "z_locale.h"		/* z_locale_IsJapan */


#define GLOBAL			/* �����Х��ѿ���Ĵ�ѥ��ߡ�����ܥ� */


/*
 * ��������̥ǡ������
 */
GLOBAL z_common_data_t z_common_data;


extern padmgr_t padmgr;


/*
 * ��������ѿ�
 * �إå��򿨤ꤿ���ʤ��Ȥ��˻Ȥ�
 */
GLOBAL int z_common_data__newer_member;
GLOBAL int z_common_data__hayakawa_mode;


/*
 * ��������̥ǡ��������
 */
extern void
z_common_data_init(void)
{
    bzero(&z_common_data, sizeof(z_common_data));

    /*
     * ��������ѿ������
     */
    z_common_data__newer_member = 0;
    z_common_data__hayakawa_mode = 0;

////////    z_common_data.link_age = 1;
////////    z_common_data.day_time = 0x8000;
    z_common_data.old_bgm = 0xff;
    z_common_data.old_env = 0xff;
    z_common_data.NottoriBgm = 0;
    z_common_data.next_daytime = 0xffef;
    z_common_data.doukidemo = 0;
    z_common_data.Kenjya_no = 0;
    z_common_data.next_zelda_time = 0xffff;
    z_common_data.kankyo_time = 0x0;
    z_common_data.dog_event_flag = 1;
    z_common_data.next_wipe = 0xff;
    z_common_data.last_time_type = 50;

#if defined(PAL_VERSION)
#else
# if 0
���ܸ졿�Ѹ�⡼�ɤ�Ƚ�̤ϰʲ��δؿ�����Ѥ��Ƥ�������
���ߤϵ�ư���ˣ������ޤ��äƤ��뤫�ɤ�����Ƚ�̤��Ƥ��ޤ���
�����ǤǤϣңϣͤΣɣĤ�ߤ�Ƚ�Ǥ���褦�ˤʤ�ޤ���
#include "z_locale.h"
extern int z_locale_IsJapan(void); /* JAPAN */
extern int z_locale_IsUSA(void);   /* USA */
# endif
if (z_locale_IsJapan()) {
    /* JAPAN �ν��� */
    z_common_data.j_n = 0;	/* �ʣ��У��� */
}
if (z_locale_IsUSA()) {
    /* USA �ν��� */
    z_common_data.j_n = 1; 	/* �Σţ� */
}
#if 0
    if ( (padmgr_GetPadPattern(&padmgr) & 0x4) ) z_common_data.j_n = 0;	/* �ʣ��У��� */
    else                                         z_common_data.j_n = 1; /* �Σţ� */
#endif
#endif
}

#undef GLOBAL
