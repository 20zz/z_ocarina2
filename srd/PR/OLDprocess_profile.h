/*
 * $Id: OLDprocess_profile.h,v 1.1 2003/03/14 03:27:04 tong Exp $
 *
 * �ץ����ץ�ե�����
 */

#ifndef __PROCESS_PROFILE_H_
#define __PROCESS_PROFILE_H_

#if DEBUG

#include <ultratypes.h>		/* u8 */
#include <os.h>			/* OSTime */

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif
#if 0
}
#endif

typedef struct {
    OSTime start_time;
    OSTime stop_time;
    OSTime process_time;
    OSTime sum_time;
    int number;			/* ��� */
} process_profile_t;
extern void process_profile_init(process_profile_t *this); /* ����� */
extern void process_profile_cleanup(process_profile_t *this); /* ����� */
extern void process_profile_start(process_profile_t *this); /* ��¬���� */
extern void process_profile_end(process_profile_t *this); /* ��¬��λ */
extern void process_profile_clear(process_profile_t *this); /*  */
extern OSTime process_profile_get_ave_time(const process_profile_t *this);
extern void process_profile_report_verbose(const process_profile_t *this, const char *comment);
extern void process_profile_report_brief(const process_profile_t *this, const char *comment);
extern void process_profile_report(const process_profile_t *this, const char *comment);

#define PROCESS_PROFILE_REPORT_NAME(name) process_profile_report(name, #name)
#define PROCESS_PROFILE_REPORT_VERBOSE_NAME(name) process_profile_report_verbose(name, #name)
#define PROCESS_PROFILE_REPORT_BRIEF_NAME(name) process_profile_report_brief(name, #name)

#if 0
{
#endif
#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif /* DEBUG */

#endif /* __PROCESS_PROFILE_H_ */
