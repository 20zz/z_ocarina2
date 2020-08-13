/*
 * $Id: boot.c,v 1.3 2003/09/11 18:46:22 wheeler Exp $
 *
 * �֡��Ƚ���
 *
 * $Log: boot.c,v $
 * Revision 1.3  2003/09/11 18:46:22  wheeler
 * Additional source from Nintendo (and one from me: fakeprintf.c)
 *
 * Revision 2.3  2001/04/04  07:21:47  zelda
 * �ɥ�ե��󥨥ߥ�졼���Ѳ������� CIC��64DD�б���ʬ��Ϥ������С������
 *
 * Revision 2.2  1998-11-09 11:56:22+09  hayakawa
 * �������������ɲ�
 *
 * Revision 2.1  1998-10-22 20:41:56+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.27  1998/10/14 08:43:32  hayakawa
 * *** empty log message ***
 *
 * Revision 1.26  1998-09-07 21:07:36+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.25  1998-09-07 13:32:00+09  hayakawa
 * osMemSize = osGetMemSize() ����褦�ˤ���
 *
 * Revision 1.24  1998-08-13 21:49:31+09  hayakawa
 * osDriveRomInit ������
 *
 * Revision 1.23  1998-07-17 21:24:58+09  hayakawa
 * osAiSetFrequency(376000)��980708patch ������
 *
 * Revision 1.22  1998-06-25 22:11:44+09  hayakawa
 * osSyncPrintf��trapprintf.c�˰�ư
 *
 * Revision 1.21  1998-06-18 22:38:27+09  hayakawa
 * �ץ��Υ����к�������Ƥߤ���
 *
 * Revision 1.20  1998-06-08 22:03:54+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.19  1998-06-08 22:02:33+09  hayakawa
 * ���������
 *
 * Revision 1.18  1998-05-29 17:35:47+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.17  1998-05-01 13:19:28+09  hayakawa
 * if USE_ �� ifdef USE_ ���ѹ�
 *
 * Revision 1.16  1998-04-30 22:38:32+09  hayakawa
 * ����������
 *
 * Revision 1.15  1998-04-15 15:37:00+09  hayakawa
 * ROM_ROM�ΤȤ���isPrintfInit��ƤФʤ��褦�ˤ���
 *
 * Revision 1.14  1998-03-23 18:41:29+09  hayakawa
 * osPi��osEPi�ѹ�
 *
 * Revision 1.13  1998/03/12  11:26:51  hayakawa
 * pt.h�򥤥󥯥롼�ɤ��ʤ��褦�ˤ���
 *
 * Revision 1.12  1997/12/25  09:05:46  hayakawa
 * StackCheckInit��StackCheckInitBoot
 *
 * Revision 1.11  1997/11/18  12:45:12  hayakawa
 * stackcheck�б�
 * ClearRDRAM�Υ����ߥ󥰤��ѹ�
 *
 * Revision 1.10  1997/11/17  10:02:03  hayakawa
 * �����å������å���ޥ���ˤ���
 *
 * Revision 1.9  1997/11/16  13:37:57  hayakawa
 * stackcheck�б�
 *
 * Revision 1.8  1997/08/21  02:58:58  hayakawa
 * IS-VIEWER��
 *
 * Revision 1.7  1997/05/21  09:42:27  hayakawa
 * ��˥��к�
 *
 * Revision 1.6  1997/05/15  12:39:33  iwawaki
 * *** empty log message ***
 *
 * Revision 1.5  1997/05/13  05:42:57  soejima
 * �ɣӡ��ģ������� isPrintfInit() ����
 *
 * Revision 1.4  1997/03/27  12:42:16  hayakawa
 * �ѡ��ȥʡ��ѽ���
 * osSyncPrintf�ѥȥ�å�
 *
 * Revision 1.3  1997/03/20  12:50:52  hayakawa
 * ��९�ꥢ�Υ��������ְ�äƤ���
 *
 * Revision 1.2  1997/03/17  12:15:56  hayakawa
 * �����ɥ�ط��ν�����idle.c�˰ܤ���
 *
 * Revision 1.1  1997/03/17  00:56:51  hayakawa
 * Initial revision
 *
 */

#include "boot.h"
#include "ultra64.h"
#include "u64macro.h"
#include "sys_segment.h"	/* BOOT_STACK_SIZE */
#include "ThreadID.h"
#include "ThreadPriority.h"
#include "debug.h"		/* PRINTF, disp */
#include "macro.h"		/* number */
#include "is_debug.h"		/* ���-�ģ������� */
#include "stackcheck.h"		/* stackcheck */
#include "system.h"		/* carthandle */
#ifdef USE_LOCALE
#include "z_locale.h"		/* z_locale_init */
#endif

#include "idle.h"
#if defined(USE_CIC6105)
#include "CIC6105.h"		/* cic6105_boot */
#endif /* defined(USE_CIC6105) */

EXTERN_DEFSEG_CODE(boot);

/*
 * boot�ϥ���åɤǤϤʤ�
 * bootStack��bootstack.c��������Ƥ���
 */
extern u64 bootStack[BOOT_STACKSIZE / sizeof(u64)];
StackCheckDecl(boot);

static OSThread	idleThread;
static u64	idleStack[IDLE_STACKSIZE / sizeof(u64)];
StackCheckDecl(idle);

#ifdef USE_RMON
/*
 * �����μ���
 * gload -a �ΰ����� argc, argv[]�η����Ѵ�����
 */
static void
get_args(int *argcp, char ***argvp)
{
    static u32 argbuf[16];
    char	*arglist[32];	/* max 32 args */
    char	*ptr;
    u32 *argp;
    int i;
    int argc;
    char **argv;
    
    argp = (u32 *)RAMROM_APP_WRITE_ADDR;
    for (i = 0; i < (int)number(argbuf); i++, argp++) {
	osEPiReadIo(carthandle, (u32)argp, &argbuf[i]); /* Assume no DMA */
    }
    
    /* re-organize argstring to be like main(argv,argc) */
    argc = 1;
    argv = arglist;
    ptr = (char *)argbuf;
    while (*ptr != '\0') {
	while (*ptr != '\0' && (*ptr == ' ')) {
	    *ptr = '\0';
	    ptr++;
	}
	if (*ptr != '\0') {
	    argv[argc++] = ptr;
	}
	while (*ptr != '\0' && (*ptr != ' ')) {
	    ptr++;
	}
    }
    *argcp = argc;
    *argvp = argv;
}
#endif /* DEBUG && USE_RMON */

#ifdef USE_RMON
/*
 * ������ɾ��
 */
static void
parse_args(int argc, char **argv)
{
    /* process the arguments: */
    while (argc > 1) {
	if (argv[1][0] == '-') {
	    switch(argv[1][1]) {
	    case 'd':
		debugflag   = 1;
		break;
		
	    case 'b':
		break;
		
	    case 'v':
		break;
		
	    case 'P':
//		profile     = 1;
		break;
	    default:
		PRINTF("�����ʰ��� [%s]\n", argv[1]);
		break;
	    }
	}
	argc--;
	argv++;
    }
}
#endif /* DEBUG && USE_RMON */

/*
 * �֡��ȥ������ȰʹߤΤ��٤ƤΣң��ͤ򥯥ꥢ����
 */
static void
ClearRDRAM(void)
{
    bzero(_bootSegmentEnd, (size_t)osMemSize - (size_t)OS_K0_TO_PHYSICAL(_bootSegmentEnd));
}

extern void
boot(void)
{
    StackCheckInitBoot(boot);

    osMemSize = osGetMemSize();
#if defined(USE_CIC6105)
    cic6105_boot();
#endif /* defined(USE_CIC6105) */
    
    ClearRDRAM();		/* �֡��ȥ������Ȱʹߤ�RAM�򥯥ꥢ */
    
    osInitialize();		/* �����ϣӽ���� */
    carthandle = osCartRomInit(); /* EPi�ؿ��ѥϥ�ɥ���� */
    osDriveRomInit();		/* ��ä���Ƥ����Τ����� */
#if !defined(ROM_ROM)
#if defined(ISVIEWER)
    isPrintfInit();		/* �ɣӣ֣ɣţףҽ���� */
#elif defined(PARTNER)
    {
	void ptstart(void);

	ptstart();			/* �ѡ��ȥʡ��Σ�������� */
    }
#endif
#endif /* !defined(ROM_ROM) */

    
#ifdef USE_RMON
    {
	int argc;
	char **argv;

	get_args(&argc, &argv);	/* ���ץ������� */
	parse_args(argc, argv);	/* ���ץ������� */
    }
#endif /* USE_RMON */
    
#ifdef USE_LOCALE
    z_locale_init();
#endif
    
    /* �����ɥ륹��åɤ�����ȵ�ư */
    StackCheckInit(idle);
    osCreateThread(&idleThread, THREAD_ID_IDLE, idleproc, NULL,
		   idleStack + number(idleStack),
		   (OSPri)PRIORITY_MAIN);
    osStartThread(&idleThread);

    /* never reached (�褷����ã���ʤ�) */
}
