/*
 * $Id: sys_ddcache.h,v 2.1 1998/10/22 11:41:56 zelda Exp $
 *
 * �ģĴʰץ���å��奷���ƥ�
 * ������ǡ����ȥ롼��ǡ����Υ������Ȥ����٤�Ϣ³���Ƥ���Ȳ��ꤷ�Ƥ���
 * �Τ���դ��뤳��
 *
 * $Log: sys_ddcache.h,v $
 * Revision 2.1  1998/10/22  11:41:56  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.3  1998/09/04 02:42:37  hayakawa
 * *** empty log message ***
 *
 * Revision 1.2  1998-09-04 11:00:37+09  hayakawa
 * IF�ѹ�
 *
 * Revision 1.1  1998-06-19 21:06:51+09  hayakawa
 * Initial revision
 *
 *
 */

#ifndef __SYS_DDCACHE_H_
#define __SYS_DDCACHE_H_

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

#include "u64types.h"
    
    typedef struct DDCache_s {
	void *cache;		/* !NULL:����å�����Ƭ�ݥ���(16B align) */
	u32 start;		/* ����ROM���ɥ쥹 */
	u32 end;		/* ��λROM���ɥ쥹 */
	u32 size;		/* ����å��奵���� */
    } DDCache_t;
    typedef DDCache_t DDCache;
    
    extern void DDCache_SetCacheBuffer(DDCache *this, void *buffer, u32 size);
    extern void *DDCache_GetCacheBuffer(DDCache *this, void **buffer_p, u32 *size_p);
    extern int DDCache_ReadyCache(DDCache *this, u32 start, u32 end);
    extern void DDCache_Load(DDCache *this, void *dst, u32 src, u32 size);

    extern DDCache *DDCache_init(DDCache *this, void *buffer, u32 size);
    extern void DDCache_cleanup(DDCache *this);
    
    
#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* __SYS_DDCACHE_H_ */
