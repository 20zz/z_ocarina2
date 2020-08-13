/*
 * $Id: audio.h,v 2.1 1998-10-22 20:41:56+09 zelda Exp $
 *
 * $Log: audio.h,v $
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.6  1998/06/26 12:50:45  hayakawa
 * audio_StopAllSoundEffect�ɲ�
 *
 * Revision 1.5  1998-04-01 11:45:45+09  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.4  1997/12/03  02:16:21  hayakawa
 * *** empty log message ***
 *
 * Revision 1.3  1997/12/03  02:15:25  hayakawa
 * /project��ľ�ܤߤʤ��褦�ˤ���
 *
 * Revision 1.2  1997/05/28  06:17:06  hayakawa
 * HAYAKAWA_TESTa��ɸ��ˤ��Ƴ�����
 *
 * Revision 1.1  1997/05/22  02:16:16  hayakawa
 * Initial revision
 *
 * Revision 1.8  1997/04/09  09:35:11  hayakawa
 * NOUSE_AUDIO���
 *
 * Revision 1.7  1996/11/21  05:08:17  hayakawa
 * ���󥯥롼�ɤ���٤��ե�����򥤥󥯥롼�ɤ��Ƥ��ʤ��ä�
 *
 * Revision 1.6  1996/10/29  12:35:17  hayakawa
 * NOUSE_AUDIO��拾��ѥ���
 * NEW_AUDIO���
 *
 * Revision 1.5  1996/10/20  08:51:53  hayakawa
 * _LANGUAGE_C_PLUS_PLUS �� __cplusplus ���ѹ�
 *
 */
#ifndef __AUDIO_H_
#define __AUDIO_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "../lib/audio/audio_game.h"
    
extern void audio_StopAllSoundEffect(void);

#ifdef _LANGUAGE_C_PLUS_PLUS
}
#endif

#endif
