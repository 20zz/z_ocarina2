/* $Id: z_eff_ss_g_ripple.h,v 1.1.1.1 2003/03/10 22:42:53 tong Exp $ */
/* $Log: z_eff_ss_g_ripple.h,v $
 * Revision 1.1.1.1  2003/03/10 22:42:53  tong
 * new OBJ tree for ocarina from Nintendo
 *
 * Revision 2.1  1998-10-22 21:13:45+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.8  1998/08/05 10:54:44  matutani
 * �����С��쥤��
 *
 * Revision 1.7  1998-03-18 19:49:21+09  sumiyosi
 * �������ꤪ���ޤ�����
 *
 * Revision 1.6  1998/01/21  05:24:23  umemiya
 * ����κ��祹�����������Ǥ���褦�ѹ�
 *
 * Revision 1.5  1997/08/22  00:41:11  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.4  1997/08/11  06:49:57  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.3  1997/08/08  08:05:53  sumiyosi
 * *** empty log message ***
 *
 */
/*-----------------------------------------------------------------------------
 *
 * z_eff_ss_g_ripple.h
 * ����
 * Program:N.Suiyosi
 * 1997/8/6
 *
 *---------------------------------------------------------------------------*/
#ifndef INCLUDE_Z_EFF_SS_G_RIPPLE_H
#define INCLUDE_Z_EFF_SS_G_RIPPLE_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif    

#include"z_basic.h" 
#include"z_effect_soft_sprite_type.h"
#include"z_effect_soft_sprite_old_init.h"

/*=============================================================================
 *
 * ������å��ѥǡ�����¤��
 *
 *==========================================================================*/
typedef struct {
    xyz_t pos;
    short start_scale;
    short end_scale;
    short timer;
} EffSSGRippleData;

/*==========================================================================
 *
 * ���ե����ȥץ�ե�����
 *
 *=========================================================================*/

extern EffectSSProfile Effect_Ss_G_Ripple_Profile;

#ifdef _LANGUAGE_C_PLUS_PLUS
}	/* extern "C"	*/
#endif

#endif
    
/*** z_eff_ss_g_ripple.h  end ***/
