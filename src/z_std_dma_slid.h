/*
 * $Id: z_std_dma_slid.h,v 2.1 1998/10/22 11:51:48 zelda Exp $
 *
 * ��������� �� Ÿ�����ʤ���ģͣ�
 *
 * $Log: z_std_dma_slid.h,v $
 * Revision 2.1  1998/10/22  11:51:48  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.3  1998/04/01 02:46:19  hayakawa
 * ��������ͤ� __cplusplus �� _LANGUAGE_C_PLUS_PLUS ���ѹ�
 *
 * Revision 1.2  1998/03/19  13:04:23  komatu
 * *** empty log message ***
 *
 * Revision 1.1  1997/08/22  13:47:07  hayakawa
 * Initial revision
 *
 *
 */

#ifndef _Z_STD_DMA_SLID_H_
#define _Z_STD_DMA_SLID_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

void slidma(unsigned long dmasrc, char *dst, unsigned long dmasiz);

#ifdef _LANGUAGE_C_PLUS_PLUS
}
#endif

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* _Z_STD_DMA_SLID_H_ */
