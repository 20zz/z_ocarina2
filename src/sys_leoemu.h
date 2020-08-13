/*
 * $Id: sys_leoemu.h,v 2.1 1998-10-22 20:41:56+09 zelda Exp $
 *
 * leoemu�إå�
 *
 * $Log: sys_leoemu.h,v $
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.1  1998/07/07 10:47:11  hayakawa
 * Initial revision
 *
 *
 */

#ifndef __SYS_LEOEMU_H__
#define __SYS_LEOEMU_H__

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include <leo.h>
    
#ifdef USE_LEOEMU

    /* IPL����γ��ϥ��ɥ쥹��Ĺ���֥�å���������ޤ��� */
    extern s32 LeoExGetIPLInfo(u32* iplAdrs, u32* iplLength);

    /* osEPiStartDma�ؿ��Υ��ߥ�졼�����Ǥ� */
    extern s32 osEPiStartDmaEmu(OSPiHandle *pHandle , OSIoMesg *pMesg, s32 nMode);
#define osEPiStartDma(a, b, c) osEPiStartDmaEmu(a, b, c)

/*
  ���δؿ��ϡ�ɬ�������㤤ͥ���̤Υ���åɤǡ��Ƥ�³�����ʤ���Ф����ޤ���
  void idle(void *arg)
  {
     ...
     while(1) {
       LeoIdle();
     }
  }
*/

extern void LeoIdle(void);

#else  /* USE_LEOEMU */

#define LeoIdle() (void)0

#endif /* USE_LEOEMU */

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __SYS_LEOEMU_H__ */
