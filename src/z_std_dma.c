/*
 * $Id: z_std_dma.c,v 1.4 2003/09/11 21:19:03 wheeler Exp $
 *
 * ��������� �� �ģͣ�
 *
 * $Log: z_std_dma.c,v $
 * Revision 1.4  2003/09/11 21:19:03  wheeler
 * Fix compiler warnings.
 * Remove debugging code
 * Reduce stacksize.
 *
 * Revision 1.3  2003/09/11 18:46:22  wheeler
 * Additional source from Nintendo (and one from me: fakeprintf.c)
 *
 * Revision 2.2  2001/04/04  07:21:47  zelda
 * �ɥ�ե��󥨥ߥ�졼���Ѳ������� CIC��64DD�б���ʬ��Ϥ������С������
 *
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.57  1998/10/13 14:07:33  hayakawa
 * *** empty log message ***
 *
 * Revision 1.56  1998-10-13 09:40:47+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.55  1998-10-08 19:58:34+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.54  1998-10-07 15:57:52+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.53  1998-10-03 16:27:35+09  zelda
 * *** empty log message ***
 *
 * Revision 1.52  1998-09-30 20:04:47+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.51  1998-09-28 23:13:46+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.50  1998-09-28 17:15:01+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.49  1998-09-18 12:05:58+09  zelda
 * ̤�ƥ��ȴ�
 *
 * Revision 1.48  1998-09-17 22:47:42+09  zelda
 * *** empty log message ***
 *
 * Revision 1.47  1998-09-17 22:33:44+09  zelda
 * DMA ERROR ���˸ƤӽФ��������ɽ������褦�ˤ���
 *
 * Revision 1.46  1998-09-17 11:50:48+09  hayakawa
 * �ģĤΥ�å������������Ȥ�̵���ä��Τ���
 *
 * Revision 1.45  1998-09-15 21:52:00+09  hayakawa
 * �����ģĹ���
 *
 * Revision 1.44  1998-09-14 22:59:52+09  hayakawa
 * DD Font ž���� DMA
 *
 * Revision 1.43  1998-09-05 20:21:33+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.42  1998-09-04 16:50:11+09  hayakawa
 * DD�������������֤Τ���
 *
 * Revision 1.41  1998-08-26 17:12:24+09  hayakawa
 * ��å������Хåե��ο������䤷��
 *
 * Revision 1.40  1998-08-24 20:14:47+09  hayakawa
 * z_segment.decl�ƥ���
 *
 * Revision 1.39  1998-08-20 23:09:37+09  hayakawa
 * slidma����Ȥ��˥���åɥץ饤����ƥ��򲼤��Ƥߤ�
 *
 * Revision 1.38  1998-08-18 21:28:03+09  hayakawa
 * ʬ�䥵�������ѹ��Ǥ���褦�ˤ����ʥǥХå��ѡ�
 *
 * Revision 1.37  1998-08-17 21:45:38+09  zelda
 * DMAʬ�䥵�����򣸣ˤ�����
 *
 * Revision 1.36  1998-08-08 15:55:57+09  hayakawa
 * ���顼�����ѹ�
 *
 * Revision 1.35  1998-08-07 13:38:25+09  hayakawa
 * fault_HungUpMsg�ƥ���
 *
 * Revision 1.34  1998-07-24 16:17:35+09  hayakawa
 * percial_DMA�������ͤ��֤��褦�ˤ���
 *
 * Revision 1.33  1998-07-17 21:35:13+09  hayakawa
 * dmacopy_fg, dmacopy_bg �������ͤ���Ĥ褦�ˤ���
 *
 * Revision 1.32  1998-07-07 19:49:10+09  hayakawa
 * leoemu�б��ʼ¸����
 *
 * Revision 1.31  1998-06-23 21:31:31+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.30  1998-06-23 21:20:33+09  hayakawa
 * 64DDư����˥�����ɤΣģͣ���¹Ԥ��ʤ��褦�ˤ���
 *
 * Revision 1.29  1998-06-05 16:56:55+09  hayakawa
 * ��������ѥȥ�åפʤ�
 *
 * Revision 1.28  1998-05-19 16:49:14+09  hayakawa
 * �ģͣ�ʬ�䥵�����򣲣��������ˤ��ѹ��ʰ�������������
 *
 * Revision 1.27  1998-05-15 22:08:30+09  hayakawa
 * DMA_PERFORMACE_TEST��ž�����֤�졼�Ȥ�׻�ɽ������褦�ˤ���
 *
 * Revision 1.26  1998-04-21 16:18:34+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.25  1998/03/25 13:17:10  hayakawa
 * �áܡ��ѽ���
 *
 * Revision 1.24  1998/03/25  10:54:39  hayakawa
 * ���ΰ㤤����
 *
 * Revision 1.23  1998/03/23  09:49:03  hayakawa
 * osPi��osEPi�ѹ�
 *
 * Revision 1.22  1998/03/23  06:26:52  hayakawa
 * �����԰��׽���
 *
 * Revision 1.21  1998/03/13  11:56:19  hayakawa
 * �áܡܥ���ѥ���ǥ��顼�ˤʤ�ʤ��褦�ˤ���
 *
 * Revision 1.20  1998/03/12  11:28:24  hayakawa
 * ��äѤ�strcmp���ʤ������֤Τ�����
 *
 * Revision 1.19  1998/03/12  05:58:45  hayakawa
 * �ѡ������ģͣ�����Ω������
 * �ӣڣа��̽�������
 *
 * Revision 1.18  1998/03/06  01:47:11  hayakawa
 * ��������Τ���˥�������̾�ơ��֥��Ȥ�ʤ��褦�ˤ���
 *
 * Revision 1.17  1998/02/23  05:16:35  hayakawa
 * *** empty log message ***
 *
 * Revision 1.16  1998/02/18  08:42:12  hayakawa
 * ���ۣңϣͥ��ɥ쥹�������ͣ¤�Ķ���Ƥ��Ƥ⤤���褦�ˤ���
 *
 * Revision 1.15  1998/02/17  09:24:14  hayakawa
 * *** empty log message ***
 *
 * Revision 1.14  1998/01/05  02:39:55  hayakawa
 * dma_rom_ad���̥������˰�ư
 *
 * Revision 1.13  1997/11/18  12:46:54  hayakawa
 * DMAMGR_STACKSIZE�����䤷��
 *
 * Revision 1.12  1997/11/17  10:04:20  hayakawa
 * �����å������å���ޥ���ˤ���
 *
 * Revision 1.11  1997/11/16  13:37:07  hayakawa
 * stackcheck�б�
 *
 * Revision 1.10  1997/11/07  10:37:26  hayakawa
 * *** empty log message ***
 *
 * Revision 1.9  1997/09/12  13:01:27  hayakawa
 * �ǥХå������֤��ơ��ɤΥ������Ȥⰵ�̤��Ƥ��ʤ����˸¤ꡢ
 * �ơ��֥����Ͽ���Ƥ��ʤ����������ΰ��ž������
 *
 * Revision 1.8  1997/09/05  14:02:06  hayakawa
 * makerom�������ȥ��������ǧ����褦�ˤ���
 *
 * Revision 1.7  1997/08/25  13:56:56  hayakawa
 * ��������̾�ʥǥХå��ѡ��ɲ�
 *
 * Revision 1.6  1997/08/25  09:11:06  hayakawa
 * ROMSIZE��32Mbytes�˰����夲��
 *
 * Revision 1.5  1997/08/23  08:37:33  hayakawa
 * *** empty log message ***
 *
 * Revision 1.4  1997/08/22  13:46:53  hayakawa
 * szs�б�
 *
 * Revision 1.3  1997/08/22  04:41:48  hayakawa
 * *** empty log message ***
 *
 * Revision 1.2  1997/08/20  09:22:40  hayakawa
 * ���ͥ��Ǥΰ��̲���ƥ���
 *
 * Revision 1.1  1997/08/18  12:42:47  hayakawa
 * Initial revision
 *
 */

#define  _Z_STD_DMA_C_
#include "z_std_dma.h"
#include "z_std_dma_slid.h"
#include "u64basic.h"
#include "ThreadID.h"
#include "ThreadPriority.h"
#include "debug.h"
#include "stackcheck.h"		/* stackcheck */
#include "system.h"		/* carthandle */
#include "assert64.h"		/* assert */
#if defined(USE_N64DD)
#include "z_n64dd_keep.h"
#endif /* defined(USE_N64DD) */
#include "sleep.h"		/* msleep */
#include "sys_leoemu.h"		/* osEPiStartDma(Emu) */
#include "fault.h"		/* fault_HungUpMsg */
#if defined(USE_N64DD)
#include "z_n64dd_function.h"
#endif /* defined(USE_N64DD) */

#define is_compressed(dma_rom_t) ((dma_rom_t)->rom_e != 0)

#define MAXROMSIZE 0x04000000	/* 64Mbytes */
#define VERBOSE 0
#define DMA_SPLIT_SIZE 0x2000	/* DMAʬ�䥵���� */
#define MSGBUF_SIZE 32
#define DMAMGR_STACKSIZE 0x500	/* ���� 0x204 */

StackCheckDecl(dmamgr);

/*
 * �ǥХå��ѱ��������Х��ѿ�
 */
int _dma_verbose = 0;	/* DMAɽ����٥� */
				/* 0:����ɽ�����ʤ� */
				/* 1:��̿Ū�ʥ��顼�Τ� */
u32 _dma_split_size = DMA_SPLIT_SIZE;

static int exist_compressed = 0; /* !0:�ģͣ��ơ��֥����ˣ��ĤǤⰵ�̥������Ȥ�¸�ߤ��� */

static OSMesgQueue 	dmaEntryMsgQ;
static OSMesg 		dmaEntryMsgBufs[MSGBUF_SIZE];
static OSThread		dmamgrThread;
static u64		dmamgrStack[DMAMGR_STACKSIZE / sizeof(u64)];

extern dma_rom_t dma_rom_ad[];
extern char _bootSegmentRomStart[];
extern OSMesgQueue _PiMsgQ;

#ifdef USE_SEGMENT_NAME_TABLE
static unsigned char *dma_rom_ad_name[] = {
    "makerom",
#define _DECL_(name) #name,
#include "z_segment_decl.inc"
#undef _DECL_
};
#endif /* USE_SEGMENT_NAME_TABLE */

/*
 * strcmp ��Ʊ���Ǥ�
 */
static int
my_strcmp(const unsigned char *a, const unsigned char *b)
{
    while (*a != 0) {
	if (*a > *b)
	    return 1;
	else if (*a < *b)
	    return -1;
	a++;
	b++;
    }
    if (0 < *b)
	return -1;
    else
	return 0;
}

#if 0				/* EPI Lock Test ̤���� */
extern volatile char _EPI_isAvaliable; /* !0:EPI���Ѳ�ǽ(no busy) */
volatile char _EPI_isAvaliable; /* !0:EPI���Ѳ�ǽ(no busy) */

/*
 * EPI��å�
 */
static int
EPI_LockNoWait(void)
{
    osRecvMesg
    if (!_EPI_isAvaliable) {
	return 0;
    }
    _EPI_isAvaliable = 0;
    
    return 1;
}

/*
 * EPI��å�
 * ��å��Ǥ���ޤǵ���ʤ�
 */
static void
EPI_Lock(void)
{
    while (!EPI_LockNoWait()) {
	COLOR_RED();
	PRINTF("EPI�����Ѳ�ǽ�ǤϤ���ޤ���\n");
	COLOR_NORMAL();
	msleep(1);
    }
}

/*
 * EPI�����å�
 */
static void
EPI_Unlock(void)
{
    if (_EPI_isAvaliable) {
	COLOR_RED();
	PRINTF("EPI Lock���Ƥʤ��Τ�Unlock���褦�Ȥ���\n");
	COLOR_NORMAL();
	HungUp();
    }
    _EPI_isAvaliable = 1;
}

/*
 * �ǥ�������å�����
 */
static int
EPI_isLocked(void)
{
    return !_EPI_isAvaliable;
}
#endif





/*
 *
 *	�ģͣ�ʬ��	������ɥ����फ����
 *
 */
extern s32
percial_DMA(
    u32 romaddress,
    void *ramaddress,
    u32 size
)
{
    OSIoMesg    dmaIOMsgBuf;
    OSMesgQueue dmaFinishMsgQ;
    OSMesg 	dmaFinishMsgBuf;
    s32 r;
    u32 dma_split_size = _dma_split_size;

    if (dma_split_size == 0) {
	dma_split_size = DMA_SPLIT_SIZE;
    }
    osInvalICache(ramaddress, size);
    osInvalDCache(ramaddress, size);
    osCreateMesgQueue(&dmaFinishMsgQ, &dmaFinishMsgBuf, 1);
    while (size > dma_split_size){
       	SetupDmaIOMsgBuf(&dmaIOMsgBuf, OS_MESG_PRI_NORMAL, romaddress,
			 ramaddress, dma_split_size, &dmaFinishMsgQ);
	if (_dma_verbose == 10) {
	    OSIoMesg *mb = &dmaIOMsgBuf;
	    
	    PRINTF("%10lld �Ρ��ޥ�ģͣ� %08x %08x %08x (%d)\n",
		   OS_CYCLES_TO_USEC(osGetTime()),
		   mb->dramAddr, mb->devAddr, mb->size, MQ_GET_COUNT(&_PiMsgQ));
	}

       	r = osEPiStartDma(carthandle, &dmaIOMsgBuf, OS_READ);
	if (r != 0) {
	    goto ERROR_EXIT;
	}
	if (_dma_verbose == 10) {
	    PRINTF("%10lld �Ρ��ޥ�ģͣ� START (%d)\n",
		   OS_CYCLES_TO_USEC(osGetTime()),
		   MQ_GET_COUNT(&_PiMsgQ));
	}
        osRecvMesg(&dmaFinishMsgQ, NULL, OS_MESG_BLOCK);
	if (_dma_verbose == 10) {
	    PRINTF("%10lld �Ρ��ޥ�ģͣ� END (%d)\n",
		   OS_CYCLES_TO_USEC(osGetTime()),
		   MQ_GET_COUNT(&_PiMsgQ));
	}
	size -= dma_split_size;
	romaddress += dma_split_size;
	ramaddress = (void *)((char *)ramaddress + dma_split_size);
    }
    SetupDmaIOMsgBuf(&dmaIOMsgBuf, OS_MESG_PRI_NORMAL,
		     romaddress, ramaddress, size, &dmaFinishMsgQ);
    if (_dma_verbose == 10) {
	OSIoMesg *mb = &dmaIOMsgBuf;
	    
	PRINTF("%10lld �Ρ��ޥ�ģͣ� %08x %08x %08x (%d)\n",
	       OS_CYCLES_TO_USEC(osGetTime()),
	       mb->dramAddr, mb->devAddr, mb->size, MQ_GET_COUNT(&_PiMsgQ));
    }
    r = osEPiStartDma(carthandle, &dmaIOMsgBuf, OS_READ);
    if (r != 0) {
	goto ERROR_EXIT;
    }
    osRecvMesg(&dmaFinishMsgQ, NULL, OS_MESG_BLOCK);
    if (_dma_verbose == 10) {
	PRINTF("%10lld �Ρ��ޥ�ģͣ� END (%d)\n",
	       OS_CYCLES_TO_USEC(osGetTime()),
	       MQ_GET_COUNT(&_PiMsgQ));
    }

ERROR_EXIT:
    osInvalICache(ramaddress, size);
    osInvalDCache(ramaddress, size);
    
    return r;
}


/*
 *
 * ������ɣģͣ�
 *
 * �֤���(osEPiStartDma��Ʊ��)
 * -1:PI�ޥ͡����㤬Ω���夬�äƤ��ʤ�����å��������塼������
 *  0:����
 */
extern s32
dmaSoundRomHandler(
    OSPiHandle *pihandle,
    OSIoMesg *mb,
    s32 direction
)
{
    s32 r;
    
    assert(pihandle == carthandle);
    assert(direction == OS_READ);
    assert(mb != NULL);

    if (_dma_verbose == 10) {
	PRINTF("%10lld ������ɣģͣ� %08x %08x %08x (%d)\n",
	       OS_CYCLES_TO_USEC(osGetTime()),
	       mb->dramAddr, mb->devAddr, mb->size, MQ_GET_COUNT(&_PiMsgQ));
    }
#if defined(USE_N64DD)
    if (n64dd_isInitialized()) {
	while (_n64dd_isSoundStopped) {
	    COLOR_ERROR();
	    PRINTF("�ǥ������� ������ɤ� DMA ��ػߤ��Ƥ���\n");
	    COLOR_NORMAL();
	    msleep(1000);
	}
    }
#endif /* defined(USE_N64DD) */
    r = osEPiStartDma(pihandle, mb, direction);
    if (r) {
	PRINTF("OOPS!!\n");
    }
    
    return r;
}

/*
 * DISK�����ž��
 */
extern void
dmacopy_ddrom_fg(void *dst, u32 src, u32 size)
{
//    int i;
    OSPiHandle *handler;
    OSMesgQueue mq;
    OSMesg m;
    OSIoMesg iom;
    
    handler = osDriveRomInit();
    
    osInvalICache(dst, size);
    osInvalDCache(dst, size);
    
    osCreateMesgQueue(&mq, &m, 1);
    SetupDmaIOMsgBuf(&iom, OS_MESG_PRI_NORMAL, src, dst, size, &mq);
    handler->transferInfo.cmdType = OS_OTHERS;
    osEPiStartDma(handler, &iom, OS_READ);
    osRecvMesg(&mq, NULL, OS_MESG_BLOCK);
}

#ifdef DMA_DEBUG_MODE
char        *_dmacopy_file;
unsigned int _dmacopy_line;
static void
dma_fatal(dma_t *dmap, unsigned char *segname,
	  unsigned char *e_msg, unsigned char *j_msg)
{   
    u32 rom = dmap->romadr;
    void *ram = (u8 *)dmap->dstptr;
    u32 size = dmap->dstsiz;
    char s1[80], s2[80];

    BEEP();
    COLOR_RED();
    PRINTF("DMA��̿Ū���顼"
	   "(%s)\n"
	   "ROM:%X RAM:%X SIZE:%X %s\n",
	   j_msg ? j_msg : e_msg ? e_msg : "???",
	   rom, ram, size, segname ? segname : "???");
    if (dmap->_file != NULL) {
	PRINTF("DMA ERROR: %s %d", dmap->_file, dmap->_line);
    } else if (_dmacopy_file != NULL) {
	PRINTF("DMA ERROR: %s %d", _dmacopy_file, _dmacopy_line);
    }
    COLOR_NORMAL();
    
    /*
     * N64���̤�ɽ��
     */
    if (dmap->_file != NULL) {
	sprintf(s1, "DMA ERROR: %s %d", dmap->_file, dmap->_line);
    } else if (_dmacopy_file != NULL) {
	sprintf(s1, "DMA ERROR: %s %d", _dmacopy_file, _dmacopy_line);
    } else {
	sprintf(s1, "DMA ERROR: %s", e_msg ? e_msg : "???");
    }
    sprintf(s2, "%07X %08X %X %s", rom, ram, size, segname ? segname : "???");
    fault_HungUpMsg(s1, s2);
}
#else  /* DMA_DEBUG_MODE */
#define dma_fatal(dmap, segname, e_msg, j_msg) HungUp()
#endif /* DMA_DEBUG_MODE */

/*
 * ROM���ɥ쥹�򥻥�����̾���Ѵ�����
 */
extern unsigned char *
dma_rom2name( u32 rom )
{
#ifndef USE_SEGMENT_NAME_TABLE
    return "??";
#else
    dma_rom_t *p;
    unsigned char **pp;
    
    pp = dma_rom_ad_name;
    for (p = dma_rom_ad; p->rom_b != 0; ++p) {
	if (p->rom_a <= rom && rom < p->rom_b) {
	    return *pp;
	}
	pp ? ++pp : pp;
    }
    return "!?";
#endif /* USE_SEGMENT_NAME_TABLE */
}

/*======================================================================*
 *									*
 *	�ģͣ� �ңϣ� �ơ��֥� �����å�					*
 *									*
 *======================================================================*/
static void
dma_rom_chk(
    dma_t *dmap
)
{
    u32 rom = dmap->romadr;
    void *ram = (u8 *)dmap->dstptr;
    u32 size = dmap->dstsiz;
    u32 realrom;
    u32 realsize;
    char		flg = 0;
    dma_rom_t *p;
    unsigned char **pp;
//    unsigned char *ppp;

#ifdef USE_SEGMENT_NAME_TABLE
    pp = dma_rom_ad_name;
#else
    pp = NULL;
#endif /* USE_SEGMENT_NAME_TABLE */
#define ppp ((pp != NULL) ? *pp : "")
    for (p = dma_rom_ad; p->rom_b != 0; ++p) {

	if (p->rom_a <= rom && rom < p->rom_b) {

	    if (VERBOSE > 2) {
		if (pp == NULL || (my_strcmp(ppp, "kanji") && my_strcmp(ppp, "link_animetion"))) {
		    PRINTF("DMA ROM:%08X RAM:%08X SIZE:%08X %s\n", rom, ram, size, ppp);
		}
	    }
	    
	    if (!is_compressed(p)) { /* ���̤���Ƥ��ʤ� */

		if (rom + size > p->rom_b) {
		    dma_fatal(dmap, ppp,
			      "Segment Alignment Error",
			      "�������ȶ�����ޤ����ä�"
			      "�ģͣ�ž�����뤳�ȤϤǤ��ޤ���");
		}
		realrom = p->rom_s + rom - p->rom_a;
		percial_DMA(realrom, ram, size);
		if (VERBOSE > 1) {
		    PRINTF("No Press ROM:%08X RAM:%08X SIZE:%08X\n",
			   realrom, ram, size);
		}
		flg = 1;
		
		break;

	    } else {
		realsize = p->rom_e - p->rom_s;
		realrom = p->rom_s;

		if (p->rom_a != rom) {
		    dma_fatal(dmap, ppp,
			      "Can't Transfer Segment",
			      "���̤��줿�������Ȥ����椫���"
			      "�ģͣ�ž�����뤳�ȤϤǤ��ޤ���");
		}
		if (size != p->rom_b - p->rom_a) {
		    dma_fatal(dmap, ppp,
			      "Can't Transfer Segment",
			      "���̤��줿�������Ȥΰ���������"
			      "�ģͣ�ž�����뤳�ȤϤǤ��ޤ���");
		}
		osSetThreadPri(NULL, PRIORITY_MAIN);
		slidma(realrom, (char *)ram, realsize);
		osSetThreadPri(NULL, PRIORITY_DMAMGR);
		if (VERBOSE > 2) {
		    PRINTF("   Press ROM:%X RAM:%X SIZE:%X\n",
			   realrom, ram, realsize);
		}
		flg = 1;
		break;
	    }
	}
	pp ? ++pp : pp;
    }

    if (flg == 0) {
	if (exist_compressed) {
	    dma_fatal(dmap, NULL,
		      "DATA DON'T EXIST",
		      "��������ǡ�����¸�ߤ��ޤ���");
	} else {
	    /*
	     * �ǥХå������֤��ơ��ɤΥ������Ȥⰵ�̤��Ƥ��ʤ����˸¤ꡢ
	     * �ơ��֥����Ͽ���Ƥ��ʤ����������ΰ��ž������
	     */
	    realrom = rom;
	    percial_DMA(realrom, ram, size);
	    if (VERBOSE > 1) {
		PRINTF("No Press ROM:%08X RAM:%08X SIZE:%08X (�����)\n",
		       realrom, ram, size);
	    }
	}
    }
}

/*
 * �ģͣ�ž������å�
 */
static void
dmamgr_proc(void *arg)
{
    OSMesg	osmsg;
    dma_t 	*dmap;
    
    PRINTF("�ģͣ��ޥ͡����㥹��åɼ¹Գ���\n");
    (void)arg;
    
    while (1) {
	/*
	 * �ģͣ�ž�������å��������Ԥ�
	 */
	(void)osRecvMesg(&dmaEntryMsgQ, &osmsg, OS_MESG_BLOCK);
	if (osmsg == NULL) {
	    break;
	}
	dmap = (dma_t *)osmsg;
	if (VERBOSE > 3) PRINTF("�ģͣ���Ͽ���� dmap=%08x\n", dmap);
	dma_rom_chk(dmap);
	/*
	 * ��å��������塼����Ͽ����Ƥ���С���å���������������
	 */
	if (dmap->mq != NULL) {
	    if (VERBOSE > 3) {
		PRINTF("osSendMesg: "
		       "dmap=%08x, mq=%08x, m=%08x \n",
		       dmap, dmap->mq, dmap->m);
	    }
	    (void)osSendMesg(dmap->mq, dmap->m, OS_MESG_NOBLOCK);
	}
    }
    
    PRINTF("�ģͣ��ޥ͡����㥹��åɼ¹Խ�λ\n");
}

/*
 * �Хå����饦��ɤǡ��ģͣ�ž������
 * �إå��ɤ߹��ߤ���Ͽ�򤹤�
 *
 * ������
 * -1:�ѥ�᡼���۾�
 * 0:�������
 */
extern int
dmacopy_bg(
    dma_t *dmap,
    void *dst,			/* ž����ˣ����ɥ쥹�ʣ��Х��ȥХ������� */
    u32 src,			/* ž�����ңϣͥ��ɥ쥹�ʣ��Х��ȥХ������� */
    u32 size,			/* ž���������ʣ��Х��ȥХ������� */
    void *work,			/* ���̥ǡ����ݻ��ѥ���ΰ� */
    OSMesgQueue *mq,		/* ��λ�Ԥ���碌�ѥ�å��������塼 */
    OSMesg m			/* ��å��������� */
)
{
    
    if (VERBOSE > 3) {
	PRINTF("dmacopy_bg(%x, %x, %x, %x, %x, %x, %x)\n",
	       dmap, dst, src, size, work, mq, m);
    }

    (void)work;
    
#if defined(USE_N64DD)
    if (n64dd_function_ok(dmacopy_bg) &&
	n64dd_function_call(dmacopy_bg)(dmap, dst, src, size, work, mq, m)) {
	return 0;
    }
#endif /* defined(USE_N64DD) */
    
#if DEBUG
    if (dst == NULL || (u32)OS_K0_TO_PHYSICAL(dst) + size > osMemSize ||
	src & 1 != 0 || src > MAXROMSIZE || 
	size == 0 || size & 1 != 0) {
	    dma_fatal(dmap, NULL,
		      "ILLIGAL DMA-FUNCTION CALL",
		      "�ѥ�᡼���۾�Ǥ�");
    }
#endif

    dmap->romadr = src;
    dmap->dstptr = dst;
    dmap->dstsiz = size;
    dmap->pri = OS_MESG_PRI_NORMAL;
    dmap->mq = mq;
    dmap->m = m;

#if DEBUG
    {
	static int flag = 0;

	if (VERBOSE > 0 && flag == 0 && MQ_IS_FULL(&dmaEntryMsgQ)) {
	    flag++;
	    BEEP();
	    COLOR_RED();
	    PRINTF("dmaEntryMsgQ�����դǤ������塼�������κƸ�Ƥ�򤪤����ᤷ�ޤ���");
	    disp(d, number(dmaEntryMsgBufs));
	    COLOR_NORMAL();
	}
    }
#endif
    (void)osSendMesg(&dmaEntryMsgQ, (OSMesg)dmap, OS_MESG_BLOCK);

    return 0;
}

/*
 * �ե������饦��ɤǡ��ģͣ�ž������
 */
extern int
dmacopy_fg(void *dst, u32 src, u32 size)
{
    dma_t dma;
    OSMesgQueue mq;
    OSMesg m;
    int r;
    
#ifdef DMA_PERFORMACE_TEST
    OSTime t0, t1;
    float t;
#endif
    
#ifdef DMA_PERFORMACE_TEST
    t0 = osGetTime();
#endif
    
    osCreateMesgQueue(&mq, &m, 1);
    r = dmacopy_bg(&dma, dst, src, size, NULL, &mq, NULL);
    if (r == -1) {
	return r;
    }
    osRecvMesg(&mq, NULL, OS_MESG_BLOCK);
    
#ifdef DMA_PERFORMACE_TEST
    t1 = osGetTime();
    t = (float)OS_CYCLES_TO_USEC(t1 - t0);
    COLOR_YELLOW();
    PRINTF("DMA:size=%lu bytes  time=%8.3f ms  rate=%8.3f KB/s\n",
	   size, t / 1000.0f, (float)size * 1000.0f * 1000.0f / t / 1024.0f);
    COLOR_NORMAL();
#endif

    return 0;
}

/*
 *  DMA����åɤκ���
 */
extern void
CreateDmaManager( void )
{
    EXTERN_DEFSEG(dmadata);

    /*
     * dmadata��ž��
     */
    percial_DMA((u32)_dmadataSegmentRomStart,
		(u8 *)_dmadataSegmentStart,
		_dmadataSegmentRomEnd - _dmadataSegmentRomStart);
    
#if DEBUG
    if (VERBOSE > 0) {
	int i;
	dma_rom_t *p;
	unsigned char **pp;

	PRINTF("dma_rom_ad[]\n");
	p = dma_rom_ad;
#ifdef USE_SEGMENT_NAME_TABLE
	pp = dma_rom_ad_name;
#else
	pp = NULL;
#endif /* USE_SEGMENT_NAME_TABLE */
#define ppp ((pp != NULL) ? *pp : "")
	i = 0;
	exist_compressed = 0;
	while (p->rom_b != 0) {
	    if (is_compressed(p)) {
		exist_compressed = 1;
	    }
	    PRINTF("%3d %08x %08x %08x %08x %08x %c %s\n",
		   i,
		   p->rom_a,
		   p->rom_b,
		   p->rom_s,
		   p->rom_e,
		   p->rom_e ? p->rom_e - p->rom_s : p->rom_b - p->rom_a,
		   (p->rom_e ? p->rom_e - p->rom_s : 0) > 65536 ? '*' : ' ',
		   ppp);
	    i++;
	    p++;
	    pp ? ++pp : pp;
	}
    }
#endif
    
    if ((int)_bootSegmentRomStart != (int)dma_rom_ad[0].rom_b) {
	PRINTF("_bootSegmentRomStart(%08x) != dma_rom_ad[0].rom_b(%08x)\n",
	       _bootSegmentRomStart, dma_rom_ad[0].rom_b);
	HungUp();
    }
    
    osCreateMesgQueue(&dmaEntryMsgQ, dmaEntryMsgBufs, number(dmaEntryMsgBufs));
    StackCheckInit(dmamgr);

    osCreateThread(&dmamgrThread, THREAD_ID_DMAMGR, dmamgr_proc, NULL, dmamgrStack + number(dmamgrStack), PRIORITY_DMAMGR);
    osStartThread(&dmamgrThread);
}

#ifdef DMA_DEBUG_MODE
extern int
__dmacopy_bg( dma_t *dmap, void *dst, u32 src, u32 size, void *work,
	     OSMesgQueue *mq, OSMesg m, char *file, u32 line)
{
    dmap->_file = file;
    dmap->_line = line;
    return dmacopy_bg( dmap, dst, src, size, work, mq, m);
}
extern int
__dmacopy_fg(void *dst, u32 src, u32 size, char *file, u32 line)
{
    dma_t dma, *dmap = &dma;
    OSMesgQueue mq;
    OSMesg m;
    int r;
    
#ifdef DMA_PERFORMACE_TEST
    OSTime t0, t1;
    float t;
#endif
    
    dmap->_file = file;
    dmap->_line = line;

#ifdef DMA_PERFORMACE_TEST
    t0 = osGetTime();
#endif
    
    osCreateMesgQueue(&mq, &m, 1);
    r = dmacopy_bg(&dma, dst, src, size, NULL, &mq, NULL);
    if (r == -1) {
	return r;
    }
    osRecvMesg(&mq, NULL, OS_MESG_BLOCK);
    
#ifdef DMA_PERFORMACE_TEST
    t1 = osGetTime();
    t = (float)OS_CYCLES_TO_USEC(t1 - t0);
    COLOR_YELLOW();
    PRINTF("DMA:size=%lu bytes  time=%8.3f ms  rate=%8.3f KB/s\n",
	   size, t / 1000.0f, (float)size * 1000.0f * 1000.0f / t / 1024.0f);
    COLOR_NORMAL();
#endif

    return 0;
}
#endif /* DMA_DEBUG_MODE */
