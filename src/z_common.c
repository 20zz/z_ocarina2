/* $Id: z_common.c,v 1.1.1.1 2003/03/10 22:42:53 tong Exp $ */
/* $Log: z_common.c,v $
 * Revision 1.1.1.1  2003/03/10 22:42:53  tong
 * new OBJ tree for ocarina from Nintendo
 *
 * Revision 2.1  1998-10-22 20:45:49+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.37  1998/10/20 14:02:02  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.36  1998-06-20 22:53:37+09  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.35  1998-06-06 18:45:25+10  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.34  1998-06-06 18:35:16+10  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.33  1998-06-05 23:20:55+10  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.32  1998-06-04 17:20:21+10  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.31  1998-06-03 22:23:27+10  sumiyosi
 * ���󥴡��Υ���մط�������ޤ�����
 *
 * Revision 1.30  1998-05-20 23:37:23+10  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.29  1998/05/19 01:40:44  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.28  1998/05/18 13:45:00  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.27  1998/05/15 13:42:04  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.26  1998/05/15 07:40:18  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.25  1998/05/15 01:13:51  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.24  1998/05/08 14:03:24  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.23  1998/05/06 13:55:16  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.22  1998/05/05 13:32:39  sumiyosi
 * ���ô�Ϣ���ȡ���¤
 *
 * Revision 1.21  1998/05/01 08:35:37  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.20  1998/04/28 00:32:48  sumiyosi
 * ��ʼ�Υ�å������ѹ�
 *
 * Revision 1.19  1998/04/14 11:26:32  sumiyosi
 * �ޥ�󡢥��󥴡���å������ɲ�
 *
 * Revision 1.18  1998/04/13 12:23:50  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.17  1998/04/09 08:28:03  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.16  1998/04/08  07:27:57  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.15  1998/04/07  14:51:16  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.14  1998/04/07  02:30:31  sumiyosi
 * �ϥ������å��������äȡ�
 *
 * Revision 1.13  1998/04/06  06:15:02  soejima
 * Inf_Table�ޥ�����
 *
 * Revision 1.12  1998/04/06  06:04:08  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.11  1998/04/03  14:14:34  sumiyosi
 * �����ѹ�������˺�줿��
 *
 * Revision 1.10  1998/03/26  05:54:20  sumiyosi
 * ��󤢤��ޤ�
 *
 * Revision 1.9  1998/03/25  08:21:52  sumiyosi
 * ������Ϣ�Υ�å�����������ޤ�����
 *
 * Revision 1.8  1998/03/24  13:48:18  sumiyosi
 * �Ȥꤢ������������ο����ޡ����åȡ��ޡ����åȥ��쥤�Υ�å�����
 * ����Ȥ��ޤ����ġ�
 *
 * Revision 1.7  1998/03/18  13:59:20  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.6  1998/03/09  05:07:49  iwawaki
 * *** empty log message ***
 *
 * Revision 1.5  1998/02/13  11:15:40  sumiyosi
 * �����Ǥ򤪤������ޤ�����
 *
 * Revision 1.4  1998/02/13  07:37:11  sumiyosi
 * �����²�Υ�å������ɲ�
 *
 * Revision 1.3  1998/02/10  10:16:50  sumiyosi
 * �����Υ�å���������
 *
 * Revision 1.2  1998/02/10  08:39:54  sumiyosi
 * ��å���������
 *
 * Revision 1.1  1998/02/09  14:01:40  sumiyosi
 * Initial revision
 *
 *
 *
 * */
/*-----------------------------------------------------------------------
 *
 * z_common.c
 * 
 * Program:N.Sumiyosi
 * 1998/02/05
 *
 *----------------------------------------------------------------------*/
#include"z_save_area_h.h"
#include"z_common_data.h"
#include"z_in_race.h"
#include"z_parameter_h.h"
extern int debug_camera_sw;

/*����������������������������������������������������������������������
  ��								      ��
  ��	��å���������					     	      ��
  ��								      ��
  ����������������������������������������������������������������������*/
extern void message_set3(
    Game_play *game_play,
    Actor *thisx,
    unsigned short mesno
){
    message_set2(game_play, mesno);
    thisx->talk_message=mesno;
}

/*����������������������������������������������������������������������
  ��								      ��
  ��	��ե饰�˴ؤ��뤳��					      ��
  ��								      ��
  ����������������������������������������������������������������������*/
/*����������������������������������������������������������������������
  ��	���٥�ȥե饰�Υ��å�					      ��
  ����������������������������������������������������������������������*/
extern int event_check(
    int no
){
    int check_bit, data_idx;

    check_bit=1<<(no&0x000F);	/* �����å�����ӥå�	*/
    data_idx=no>>4;		/* �ǡ�������ǥå���	*/
    return (Event_Chk_Inf(data_idx)&check_bit);
}

/*����������������������������������������������������������������������
  ��	���٥�ȥե饰�Υ��å�					      ��
  ����������������������������������������������������������������������*/
extern void event_set(
    int no
){
    int check_bit, data_idx;

    check_bit=1<<(no&0x000F);	/* �����å�����ӥå�	*/
    data_idx=no>>4;		/* �ǡ�������ǥå���	*/
    Event_Chk_Inf(data_idx)|=check_bit;
}

/*����������������������������������������������������������������������
  ��	��å����������å��ե饰�Υ��å�			      ��
  ����������������������������������������������������������������������*/
extern int nazo_check(
    int no
){
    int check_bit, data_idx;

    check_bit=1<<(no&0x000F);	/* �����å�����ӥå�	*/
    data_idx=no>>4;		/* �ǡ�������ǥå���	*/
    return (Inf_Table(data_idx)&check_bit);
}

/*����������������������������������������������������������������������
  ��	��å����������å��ե饰�Υ��å�			      ��
  ����������������������������������������������������������������������*/
extern void nazo_set(
    int no
){
    int check_bit, data_idx;

    check_bit=1<<(no&0x000F);	/* �����å�����ӥå�	*/
    data_idx=no>>4;		/* �ǡ�������ǥå���	*/
    Inf_Table(data_idx)|=check_bit;
}

/*����������������������������������������������������������������������
  ��								      ��
  ��	���ä˴ؤ��뤳��					      ��
  ��								      ��
  ����������������������������������������������������������������������*/
/************************************************************************
 *
 *	��å��������å�
 *			
 ************************************************************************/
static int npc_mes_set(
    Game_play *game_play,
    short chrno
){
    unsigned short mesno=0x0000;
    unsigned short time;
    Player_actor *pl=(Player_actor *)get_player_actor(game_play);

    switch(chrno)
    {
	
    case KOKIRI_SARIA:	/*** ���ꥢ	****/
	
	/* �������������ꡩ	*/
	if(event_check(EVNT_009)) {
	    if(nazo_check(NAZO_005)) mesno=0x1048;
	    else mesno=0x1047;
	    break;
	}
	
	/* �ߥ��̤���ܡ�	*/
	if(event_check(EVNT_002)) {
	    if(nazo_check(NAZO_003)) mesno=0x1032;
	    else mesno=0x1031;
	    break;
	}
	
	/* ���ꥢ��Ƭ��		*/
	if(nazo_check(NAZO_000)) {
	    if(nazo_check(NAZO_001)) mesno=0x1003;
	    else mesno=0x1002;
	}
	else mesno=0x1001;
	break;
	
    case KOKIRI_MIDO:	/*** �ߥ�	****/
	
	if(ZCommonGet(link_age)) { /* ��󥯻Ҷ�	*/

	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) {
		if(nazo_check(NAZO_010)) mesno=0x1046;
		else mesno=0x1045;
		break;
	    }
	    
	    /* ���ꥢ�ܤꡩ	*/
	    if(event_check(EVNT_003)) {
		if(nazo_check(NAZO_00E)) mesno=0x1034;
		else mesno=0x1033;
		break;
	    }
	    
	    if(nazo_check(NAZO_00C)) mesno=0x1030;
	    else mesno=0x102F;
	    break;
	}
	
	else {	/* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) {
		if(nazo_check(NAZO_019)) mesno=0x1071;
		else mesno=0x1070;
		break;
	    }
	    
	    /* �ǥ��μ��ʣ򡥤ξ���	*/
	    if(event_check(EVNT_00B)) {
		if(nazo_check(NAZO_017)) mesno=0x1068;
		else mesno=0x1067;
		break;
	    }
	    
	    if(nazo_check(NAZO_015)) mesno=0x1061;
	    else mesno=0x1060;
	    break;
	}
	break;
	
    case KOKIRI_A:	/*** �������	****/
	
	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/
	    
	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x1042;
	    else mesno=0x1004;
	}
	else {	/* ������	*/
	    
	    /* ���Υ��������	*/
	    if(event_check(EVNT_05C)) {
		mesno=0x1072;
	    }
	    else {
		if(nazo_check(NAZO_041)) mesno=0x1055;
		else mesno=0x1056;
	    }
	}
	break;
	
    case KOKIRI_B:	/*** �������	****/
	
	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/
	    
	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x1043;
	    else {
		if(nazo_check(NAZO_01E)) mesno=0x1006;
		else mesno=0x1005;
	    }
	}
	
	else { /* ������	*/
	    
	    /* ���Υ��������	*/
	    if(event_check(EVNT_05C)) mesno=0x1073;
	    else mesno=0x105A;
	}
	break;
	
    case KOKIRI_C:	/*** �������	****/
	
	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/
	    
	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x1042;
	    else mesno=0x1007;
	}
	
	else { /* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) mesno=0x1072;
	    else {
		
		if(nazo_check(NAZO_047)) mesno=0x105E;
		else mesno=0x105D;
	    }
	}
	break;
	
    case KOKIRI_D:	/*** �������	****/
	
	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/
	    
	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x1044;
	    else {
		if(nazo_check(NAZO_022)) mesno=0x1009;
		else mesno=0x1008;
	    }
	}
	
	else {	/* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) mesno=0x1075;
	    else mesno=0x105B;
	}
	break;
	
    case KOKIRI_E:	/*** �������	****/
	
	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/
	    
	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x1042;
	    else {
		if(nazo_check(NAZO_024)) mesno=0x100B;
		else mesno=0x100A;
	    }
	}
	
	else {	/* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) mesno=0x1056;
	    else mesno=0x105F;
	    
	}
	break;

    case KOKIRI_F:	/*** �������	****/

	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/

	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x1043;
	    else {
		if(nazo_check(NAZO_026)) mesno=0x100D;
		else mesno=0x100C;
	    }
	}
	
	else {	/* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) mesno=0x1057;
	    else mesno=0x1057;
	    
	}
	break;

    case KOKIRI_G:	/*** �������	****/

	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/

	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x1043;
	    else {
		if(nazo_check(NAZO_028)) mesno=0x1019;
		else mesno=0x100E;
	    }
	}
	
	else {	/* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) mesno=0x1077;
	    else {
		if(nazo_check(NAZO_051)) mesno=0x1058;
		else mesno=0x1059;
	    }
	}
	break;
	
    case KOKIRI_H:	/*** �������	****/
	
	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/
	    
	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x1049;
	    else mesno=0x1035;
	}
	
	else {	/* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) mesno=0x1079;
	    else mesno=0x104e;
	}
	break;
	
    case KOKIRI_I:	/*** �������	****/
	
	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/
	    
	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x104A;
	    else mesno=0x1038;
	}
	
	else {	/* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) mesno=0x1079;
	    else {
		if(nazo_check(NAZO_059)) mesno=0x1050;
		else mesno=0x104F;
	    }
	}
	break;
	
    case KOKIRI_J:	/*** �������	****/
	
	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/
	    
	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x104B;
	    else mesno=0x103C;
	}
	
	else {	/* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) mesno=0x107B;
	    else mesno=0x1051;
	}
	break;
	
    case KOKIRI_K:	/*** �������	****/
	
	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/
	    
	    /* �������������ꡩ	*/
	    if(event_check(EVNT_009)) mesno=0x104C;
	    else mesno=0x103D;
	}
	
	else {	/* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) mesno=0x107C;
	    else mesno=0x1052;
	}
	break;
	
    case KOKIRI_L:	/*** �������	****/
	
	if(ZCommonGet(link_age)) {	/* ��󥯻Ҷ�	*/
	    
		/* �������������ꡩ	*/
		if(event_check(EVNT_009)) mesno=0x104D;
		else mesno=0x103E;
	    }
	    
	else {	/* ������	*/
	    
	    /* ���Υ�������ꡩ	*/
	    if(event_check(EVNT_05C)) mesno=0x106E;
	    else {
		if(nazo_check(NAZO_061)) mesno=0x1053;
		else mesno=0x1054;
	    }
	}
	break;
	
    case DEKU_JR:	/*** �ǥ��μ��ʣ�	****/
	
	/* ���Υ�������ꡩ	*/
	if(event_check(EVNT_05C)) mesno=0x1078;
	else {
	    if(nazo_check(NAZO_066)) mesno=0x1066;
	    else mesno=0x1062;
	}
	break;
	
    case HEI_A:	/*** �����ʼ��	****/

	if(game_play->scene_data_ID==SPOT15) {	/* ���̡�	*/
	    mesno=0x7002;
	    break;
	}
	
	if(nazo_check(NAZO_06A)) mesno=0x7004;
	else {
	    time=ZCommonGet(zelda_time);
	    if((time>=0x4000)&&(time<0xc556)) mesno=0x7002;
	    else mesno=0x7003;
	}
	break;
	
    case HEI_B:	/*** ϩ��΢�ݤ�ʼ��	****/
	
	/* ���Ĥ������Ф���ä���	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
        ){
	    if(nazo_check(NAZO_06C)) mesno=0x7008;
	    else mesno=0x7007;
	}
	break;
	
    case HEI_C:	/*** �����ʼ��	****/

	mesno=0x702D;
	break;

    case MONBAN_A:	/*** �����������	****/

	/* ���Ĥ������Ф���ä���	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
	){
	    mesno=0x7006;
	    break;
	}
	
	/* �����õ���ꤤ��	*/
	if(event_check(EVNT_012)) {
	    if(nazo_check(NAZO_071)) mesno=0x7072;
	    else mesno=0x7071;
	}
	else {
	    mesno=0x7029;
	}
	break;
	
    case MONBAN_B:	/*** �����ꥳ¼����	****/
    case MONBAN_C:	/*** ������������	****/
	
	/* �ɤ��餫��ƻ�򤢤��Ƥ��줿��	*/
	if(event_check(EVNT_042)) {
	    mesno=0x2012;
	    break;
	}
	
	/* ���֤˥����ɱ�μ���ߤ�����	*/
	if(event_check(EVNT_041)) {
	    if(nazo_check(NAZO_076)) mesno=0x2011;
	    else mesno=0x2010;
	    break;
	}
	
	/* �����ɱ��������ä���	*/
	if(event_check(EVNT_040)) mesno=0x200F;
	else mesno=0x200E;
	break;
	
    case HYLIA_A:	/*** �ϥ��ꥢ��	****/
	
	/* ���Ĥ������Ф�����	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))) mesno=0x7044;
	else mesno=0x7015;
	break;
	
    case HYLIA_B:	/*** �ϥ��ꥢ��	****/
	
	/* ���Ĥ������Ф�����	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
	){
	    mesno=0x7045;
	}
	else {
	    if(nazo_check(NAZO_122)) mesno=0x7017;
	    mesno=0x7016;
	}
	break;

    case HYLIA_C:	/*** �ϥ��ꥢ��	****/
	
	/* ���Ĥ������Ф�����	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
        ){
	    mesno=0x7046;
	}
	else {
	    if(nazo_check(NAZO_122)) mesno=0x7019;
	    mesno=0x7018;
	}
	break;

    case HYLIA_D:	/*** �ϥ��ꥢ��	****/
	
	/* ���Ĥ������Ф�����	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
        ){
	    mesno=0x7047;
	    break;
	}
	    
	/* �������	*/
	if(event_check(EVNT_014))
	{
	    mesno=0x701A;
	    break;
	}

	/* ���󥴡����饿���ε��ꡩ	*/
	if(event_check(EVNT_011)) {
	    if(nazo_check(NAZO_126)) mesno=0x701C;
	    else mesno=0x701B;
	}
	else mesno=0x701A;
	break;

    case HYLIA_E:	/*** �ϥ��ꥢ��	****/
	
	/* ���Ĥ������Ф�����	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
        ){
	    mesno=0x7048;
	}
	else {
	    if(nazo_check(NAZO_12A)) mesno=0x701E;
	    mesno=0x701D;
	}
	break;
	    
    case HYLIA_F:	/*** �ϥ��ꥢ��	****/
	
	/* ���Ĥ������Ф�����	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
        ){
	    mesno=0x7049;
	}
	else {
	    if(nazo_check(NAZO_12C)) mesno=0x7020;
	    mesno=0x701F;
	}
	break;
	    
    case HYLIA_G:	/*** �ϥ��ꥢ��	****/
	
	/* ���Ĥ������Ф�����	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
        ){
	    mesno=0x704A;
	}
	else {
	    if(nazo_check(NAZO_12E)) mesno=0x7022;
	    mesno=0x7021;
	}
	break;
	
    case HYLIA_H:	/*** �ϥ��ꥢ��	****/
	
	/* ���Ĥ������Ф�����	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
        ){
	    mesno=0x704B;
	}
	else {
	    if(nazo_check(NAZO_130)) mesno=0x7024;
	    mesno=0x7023;
	}
	break;
	    
    case HYLIA_I:	/*** �ϥ��ꥢ��	****/
	
	/* ���Ĥ������Ф�����	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
        ){
	    mesno=0x704C;
	}
	else {
	    if(nazo_check(NAZO_132)) mesno=0x7026;
	    mesno=0x7025;
	}
	break;
	    
    case HYLIA_J:	/*** �ϥ��ꥢ��	****/
	
	/* ���Ĥ������Ф�����	*/
	if((event_check(EVNT_009))&&
	   (event_check(EVNT_025))&&
	   (event_check(EVNT_037))
        ){
	    mesno=0x704D;
	}
	else {
	    if(nazo_check(NAZO_134)) mesno=0x7028;
	    mesno=0x7027;
	}
	break;
	    
    case LAKE_JIJI:	/*** �ФΤ�������	****/
	
	if(nazo_check(NAZO_136)) mesno=0x403D;
	mesno=0x403C;
	break;

    case DANPEI:	/*** ������ڥ�	****/

	if(nazo_check(NAZO_138)) mesno=0x5029;
	else mesno=0x5028;
	break;

    case DANPEI_DIALY:	/*** ����ڥ�������	****/

	mesno=0x5002;
	break;

    case GORON_A:	/*** ������	****/

	if(ZCommonGet(link_age)) { /* ��󥯻Ҷ�	*/
	    
	    /* ������������ꡩ	*/
	    if(event_check(EVNT_025)) {
		mesno=0x3027;
		break;
	    }
	    
	    /* ������ˡ�	*/
	    if(event_check(EVNT_023)) mesno=0x3021;
	    else {
		if(nazo_check(NAZO_140)) mesno=0x302A;
		else mesno=0x3008;
	    }
	}
	else {	/* ������	*/
	    
	    if(event_check(EVNT_020)) mesno=0x4043;
	    else mesno=0x302A;
	}
	break;

    case GORON_B:	/*** ������	****/

	if(ZCommonGet(link_age)) { /* ��󥯻Ҷ�	*/
	    
	    /* ������������ꡩ	*/
	    if(event_check(EVNT_025)) {
		mesno=0x3027;
		break;
	    }
	    
	    /* ������ˡ�	*/
	    if(event_check(EVNT_023)) mesno=0x3026;
	    else mesno=0x3009;
	}
	else {	/* ������	*/
	    
	    if(event_check(EVNT_02A)) mesno=0x4043;
	    else mesno=0x302A;
	}
	break;

    case GORON_C:	/*** ������	****/

	if(ZCommonGet(link_age)) { /* ��󥯻Ҷ�	*/
	    
	    /* ������������ꡩ	*/
	    if(event_check(EVNT_025)) {
		mesno=0x3027;
		break;
	    }
	    
	    /* ������ˡ�	*/
	    if(event_check(EVNT_023)) {
		mesno=0x3026;
		break;
	    }

	    /* ������		*/
	    if(nazo_check(NAZO_14B)) mesno=0x302B;
	    else mesno=0x300A;
	}
	else {	/* ������	*/
	    
	    if(event_check(EVNT_02B)) mesno=0x4043;
	    else mesno=0x302A;
	}
	break;

    case GORON_D:	/*** ������	****/

	if(ZCommonGet(link_age)) { /* ��󥯻Ҷ�	*/
	    
	    /* ������������ꡩ	*/
	    if(event_check(EVNT_025)) {
		mesno=0x3027;
		break;
	    }
	    if(nazo_check(NAZO_150)) mesno=0x3015;
	    else mesno=0x3014;
	}
	else {	/* ������	*/
	    
	    if(event_check(EVNT_02C)) mesno=0x4043;
	    else mesno=0x302A;
	}
	break;
	
    case GORON_E:	/*** ������	****/

	if(ZCommonGet(link_age)) { /* ��󥯻Ҷ�	*/
	    
	    /* ������������ꡩ	*/
	    if(event_check(EVNT_025)) {
		mesno=0x3027;
		break;
	    }
	    if(nazo_check(NAZO_154)) mesno=0x3017;
	    else mesno=0x3016;
	}
	else { /* ������	*/
	    
	    if(event_check(EVNT_02C)) mesno=0x4043;
	    else mesno=0x302A;
	}
	break;
	    
    case GORON_F:	/*** ������	****/

	if(ZCommonGet(link_age)) { /* ��󥯻Ҷ�	*/
	    
	    /* ������������ꡩ	*/
	    if(event_check(EVNT_025)) {
		mesno=0x3027;
		break;
	    }
	    if(nazo_check(NAZO_158)) mesno=0x3019;
	    else mesno=0x3018;
	}
	else { /* ������	*/
	    
	    if(event_check(EVNT_02D)) mesno=0x4043;
	    else mesno=0x302A;
	}
	break;
	
    case DARUNIA:	/*** ����˥�	****/

	/* ������������ꡩ	*/
	if(event_check(EVNT_025)) {
	    mesno=0x3029;
	    break;
	}

	/* �����ƤȲ��á������Ź��ΰ��ꡩ	*/
	if((event_check(EVNT_020))&&
	   (event_check(EVNT_021))) mesno=0x301B;
	else mesno=0x301A;
	break;
	
    case ZORA_A:	/*** �������	****/

	/* ������������ꡩ	*/
	if(event_check(EVNT_037)) {
	    mesno=0x402D;
	    break;
	}

	/* ������²�Ȳ��á�	*/
	if(event_check(EVNT_030)) mesno=0x4007;
	else mesno=0x4006;
	break;
	
    case ZORA_B:	/*** �������	****/

	/* ������������ꡩ	*/
	if(event_check(EVNT_037)) {
	    mesno=0x402E;
	    break;
	}

	/* ������²�Ȳ��á�	*/
	if(event_check(EVNT_030)) {
	    if(nazo_check(NAZO_184)) mesno=0x4009;
	    else mesno=0x4008;
	}
	else mesno=0x4006;
	break;

    case ZORA_C:	/*** �������	****/

	/* ������������ꡩ	*/
	if(event_check(EVNT_037)) {
	    mesno=0x402D;
	    break;
	}

	/* �������Τ�Ƕ����Ӥ󢪥�����äȲ��á�	*/
	if(event_check(EVNT_031))
	{
	    if(nazo_check(NAZO_18A)) mesno=0x400B;
	    else mesno=0x402F;
	    break;
	}
	
	/* ������²�Ȳ��á�	*/
	if(event_check(EVNT_030)) mesno=0x400A;
	else mesno=0x4006;
	break;

    case ZORA_D:	/*** �������	****/

	/* ������������ꡩ	*/
	if(event_check(EVNT_037)) {
	    mesno=0x402E;
	    break;
	}

	/* ������²�Ȳ��á�	*/
	if(event_check(EVNT_030)) mesno=0x400C;
	else mesno=0x4006;
	break;
	
    case ZORA_E:	/*** �������	****/

	/* ������������ꡩ	*/
	if(event_check(EVNT_037)) {
	    mesno=0x402D;
	    break;
	}

	/* ���󥰥�������ġ�	*/
	if(event_check(EVNT_033)) {
	    mesno=0x4010;
	    break;
	}

	/* ������²�Ȳ��á�	*/
	if(event_check(EVNT_030)) mesno=0x400F;
	else mesno=0x4006;
	break;
	
    case ZORA_F:	/*** �������	****/

	/* ������������ꡩ	*/
	if(event_check(EVNT_037)) {
	    mesno=0x402E;
	    break;
	}

	/* ������²�Ȳ��á�	*/
	if(event_check(EVNT_030)) mesno=0x4011;
	else mesno=0x4006;
	break;
	
    case KING_ZORA:	/*** ���󥰥�����	****/

	if(ZCommonGet(link_age)) { /* ��󥯻Ҷ�	*/

	    /* ������������ꡩ	*/
	    if(event_check(EVNT_037)) {
		mesno=0x402B;
		break;
	    }

	    /* ���ӥ���ˤ��줿��	*/
	    if(event_check(EVNT_031)) {
		if(nazo_check(NAZO_198)) mesno=0x401C;
		else mesno=0x401B;
	    }
	    else mesno=0x401A;
	}
	break;

    case KAKARICO_A:	/*** �����ꥳ¼�ͣ�	****/
	    
	mesno=0x500F;
	break;

    case KAKARICO_B:	/*** �����ꥳ¼�ͣ�	****/

	mesno=0x5010;
	break;

    case KAKARICO_C:	/*** �����ꥳ¼�ͣ�	****/

	mesno=0x5012;
	break;
	
    case KAKARICO_D:	/*** �����ꥳ¼�ͣ�	****/

	if(nazo_check(NAZO_226)) mesno=0x5001;
	else mesno=0x5000;
	break;

    case KAKARICO_E:	/*** �����ꥳ¼�ͣ�	****/

	mesno=0x5012;
	break;
	
    case KAKARICO_F:	/*** �����ꥳ¼�ͣ�	****/

	if(nazo_check(NAZO_22A)) mesno=0x5001;
	else mesno=0x5000;
	break;

    case MARON:		/*** �ޥ��	****/

	/* �ޥ���������	*/
	if(event_check(EVNT_016)) {
	    mesno=0x2049;
	    break;
	}

	/* ���ݥ�ƨ���롩	*/
	if(event_check(EVNT_015)) {
	    mesno=0x2048;
	    break;
	}

	/* �������		*/
	if(event_check(EVNT_014)) {
	    mesno=0x2047;
	    break;
	}

	/* "õ���ꤤ"���ФƤơ�"����"���Ƥʤ���	*/
	if(( event_check(EVNT_012))&&
	   (!event_check(EVNT_014))) {
	    mesno=0x2044;
	    break;
	}

	/* �ޥ����ä�����	*/
	if(event_check(EVNT_010)) {

	    /* ���󥴡����ä�����	*/
	    if(event_check(EVNT_011)) mesno=0x2043;
	    else mesno=0x2042;
	}
	else mesno=0x2041;
	break;

    case INGO:		/*** ���󥴡�	****/

	if(ZCommonGet(link_age)) {	/* �Ҷ�����	*/

	    /* �������		*/
	    if(event_check(EVNT_014)) {
		mesno=0x2040;
		break;
	    }
	    
	    if(nazo_check(NAZO_094)) mesno=0x2040;
	    else mesno=0x203F;
	}
	else {	/* ��ͻ���	*/

	    /* ���ݥ����ꡩ	*/
	    if(event_check(EVNT_018)) {
		break;
	    }

	    if(ZCommonGet(asahiru_fg)) {
		mesno=0x204E;
		break;
	    }
#if 0
	    /* ���󥴡��ξ���	*/
	    if(INGORaceGetScene==SCENE_1_WIN1) {
		if(INGORaceGetFlags(INGO_COND2)) {
		    mesno=0x203E;
		    break;
		}
		mesno=0x203D;
		break;
	    }

	    /* ���󥴡����餱( 1����)	*/
	    if(INGORaceGetScene==SCENE_1_LOS1) {
		mesno=0x203A;
		break;
	    }

	    /* ���󥴡����餱( 2����)	*/
	    if(INGORaceGetScene==SCENE_1_LOS2) {
		mesno=0x203B;
		break;
	    }
	    
	    /* �����θ��桩	*/
	    if(INGORaceGetScene==SCENE_2) {
		if(pl->action&P_ACTION_RIDE_HORSE) {
		    if(INGORaceGetFlags(INGO_COND1))	mesno=0x2038;
		    else mesno=0x2037;
		}
		else mesno=0x2036;
		break;
	    }
#endif
	    if(nazo_check(NAZO_09A)) mesno=0x2031;
	    else mesno=0x2030;
	    break;
	}
	break;

    }

    if(!mesno) mesno=0x0001;
    return mesno;
}

/************************************************************************
 *
 *	��å�������Ρ��ե饰���å�
 *			
 ************************************************************************/
static void info_set(
    unsigned short mesno,
    short chrno
){
    switch(chrno)
    {
	
    case KOKIRI_SARIA:	/*** ���ꥢ	****/

	switch(mesno)
	{
	case 0x1001: nazo_set(NAZO_000); break;
	case 0x1002: nazo_set(NAZO_001); break;

	case 0x1031:
	    event_set(EVNT_003);	/* �ԥ��ꥢ�ܤ��	*/
	    nazo_set(NAZO_003);
	    break;
	    
	case 0x1047: nazo_set(NAZO_005); break;
	}
	break;

    case KOKIRI_MIDO:	/*** �ߥ�	****/

	switch(mesno)
	{
	case 0x102F:
	    event_set(NAZO_002);	/* �ԥߥ��̤���ܡ�	*/
	    nazo_set(NAZO_00C);
	    break;
	    
	case 0x1033:

	    /*
	     * ���ӣť��å�[�ɤ����Ȥ����������]
	     */
	    Na_StartSystemSe(
		NA_SE_SY_CORRECT_CHIME
		);
	    
	    event_set(EVNT_004);	/* �ԥǥ��μ��ؤ�ƻ��������	*/
	    nazo_set(NAZO_00E);
	    break;
	    
	case 0x1045: nazo_set(NAZO_010); break;
	case 0x1060: nazo_set(NAZO_015); break;

	case 0x1067:
	    event_set(EVNT_00A);	/* ���¤��ο��ؤ�ƻ��������	*/
	    nazo_set(NAZO_017);
	    break;

	case 0x1070: nazo_set(NAZO_019); break;
	}
	break;

    case KOKIRI_A:	/*** �������	****/

	if(mesno==0x1056) nazo_set(NAZO_041);
	break;
	
    case KOKIRI_B:	/*** �������	****/

	if(mesno==0x1005) nazo_set(NAZO_01E);
	break;

    case KOKIRI_C:	/*** �������	****/

	if(mesno==0x105D) nazo_set(NAZO_047);
	break;

    case KOKIRI_D:	/*** �������	****/	

	if(mesno==0x1008) nazo_set(NAZO_022);
	break;

    case KOKIRI_E:	/*** �������	****/

	if(mesno==0x100A) nazo_set(NAZO_024);
	break;

    case KOKIRI_F:	/*** �������	****/

	if(mesno==0x100C) nazo_set(NAZO_026);
	break;

    case KOKIRI_G:	/*** �������	****/

	if(mesno==0x100E) nazo_set(NAZO_028);
	if(mesno==0x1059) nazo_set(NAZO_051);
	break;
	
    case KOKIRI_I:	/*** �������	****/

	if(mesno==0x104F) nazo_set(NAZO_059);
	break;
	
    case KOKIRI_L:	/*** �������	****/

	if(mesno==0x1054) nazo_set(NAZO_061);
	break;
	
    case DEKU_JR:	/*** �ǥ��μ��ʣ�	****/

	if(mesno==0x1062) nazo_set(NAZO_066);
	break;
	
    case HEI_A:		/*** �����ʼ��	****/

	if(mesno==0x7002) nazo_set(NAZO_06A);
	if(mesno==0x7003) nazo_set(NAZO_06A);
	break;

    case HEI_B:		/*** ϩ��΢�ݤ�ʼ��	****/

	if(mesno==0x7007) nazo_set(NAZO_06C);
	break;
	
    case MONBAN_A:	/*** �����������	****/

	if(mesno==0x7071) nazo_set(NAZO_071);
	break;
	
    case MONBAN_B:	/*** ������������	****/
    case MONBAN_C:	/*** �����ꥳ¼����	****/

	if(mesno==0x2010) nazo_set(NAZO_076);
	break;

    case HYLIA_B:	/*** �ϥ��ꥢ��	****/

	if(mesno==0x7016) nazo_set(NAZO_122);
	break;

    case HYLIA_C:	/*** �ϥ��ꥢ��	****/

	if(mesno==0x7018) nazo_set(NAZO_124);
	break;

    case HYLIA_E:	/*** �ϥ��ꥢ��	****/

	if(mesno==0x701D) nazo_set(NAZO_12A);
	break;

    case HYLIA_F:	/*** �ϥ��ꥢ��	****/

	if(mesno==0x701F) nazo_set(NAZO_12C);
	break;
	
    case HYLIA_G:	/*** �ϥ��ꥢ��	****/

	if(mesno==0x7021) nazo_set(NAZO_12E);
	break;

    case HYLIA_H:	/*** �ϥ��ꥢ��	****/

	if(mesno==0x7023) nazo_set(NAZO_130);
	break;

    case HYLIA_I:	/*** �ϥ��ꥢ��	****/

	if(mesno==0x7025) nazo_set(NAZO_132);
	break;

    case HYLIA_J:	/*** �ϥ��ꥢ��	****/

	if(mesno==0x7027) nazo_set(NAZO_134);
	break;

    case LAKE_JIJI:	/*** �ФΤ�������	****/

	if(mesno==0x403C) nazo_set(NAZO_136);
	break;

    case DANPEI:	/*** ������ڥ�	****/

	if(mesno==0x5028) nazo_set(NAZO_138);
	break;

    case GORON_A:	/*** ������	****/

	if(mesno==0x3008) nazo_set(NAZO_140);
	break;

    case GORON_C:	/*** ������	****/

	if(mesno==0x300B) nazo_set(NAZO_14B);
	break;

    case GORON_D:	/*** ������	****/

	if(mesno==0x3014) nazo_set(NAZO_150);
	break;

    case GORON_E:	/*** ������	****/

	if(mesno==0x3016) nazo_set(NAZO_154);
	break;

    case GORON_F:	/*** ������	****/

	if(mesno==0x3018) {
	    event_set(EVNT_020);
	    nazo_set(NAZO_158);
	}
	break;

    case DARUNIA:	/*** ����˥�	****/
	
	if(mesno==0x3020) {
	    event_set(EVNT_022);
	    nazo_set(NAZO_173);
	}
	break;

    case ZORA_A:	/*** �������	****/
    case ZORA_D:	/*** �������	****/
    case ZORA_E:	/*** �������	****/
    case ZORA_F:	/*** �������	****/

	if(mesno==0x4006) event_set(EVNT_030);
	break;
	
    case ZORA_B:	/*** �������	****/

	if(mesno==0x4006) event_set(EVNT_030);
	if(mesno==0x4008) nazo_set(NAZO_184);
	break;

    case ZORA_C:	/*** �������	****/

	if(mesno==0x4006) event_set(EVNT_030);
	if(mesno==0x400A) event_set(EVNT_032);
	if(mesno==0x402F) nazo_set(NAZO_18A);
	break;

    case KING_ZORA:	/*** ���󥰥�����	****/

	if(mesno==0x401B) {
	    event_set(EVNT_033);
	    nazo_set(NAZO_198);
	}
	break;

    case KAKARICO_D:	/*** �����ꥳ¼�ͣ�	****/

	if(mesno==0x5000) nazo_set(NAZO_226);
	break;

    case KAKARICO_F:	/*** �����ꥳ¼�ͣ�	****/

	if(mesno==0x5013) nazo_set(NAZO_22A);
	break;

    case MARON:	/*** �ޥ��	****/

	if(mesno==0x2041) event_set(EVNT_010);
	if(mesno==0x2044) event_set(EVNT_012);
	if(mesno==0x2047) event_set(EVNT_015);
	if(mesno==0x2048) event_set(EVNT_016);
	break;

    case INGO:	/*** ���󥴡�	****/
#if 0
	if(mesno==0x203F) {
	    event_set(EVNT_011);
	    nazo_set(NAZO_094);
	}

	/* ���Ϥ˾��ä�	1����	*/
	if(mesno==0x203D) {
	    INGORaceSetFlags(INGO_COND2);
	    INGORaceSetScene(SCENE_1);	/* �Ϥ�ˤ�ɤ�	*/
	}
	
	/* ���Ϥ��餱�� 1����	*/
	if(mesno==0x203A) {
	    INGORaceSetFlags(INGO_COND3);
	    INGORaceSetScene(SCENE_3);	/* ��ä�������	*/
	}
	
	/* ���Ϥ��餱�� 2����	*/
	if(mesno==0x203B) {
	    INGORaceSetScene(SCENE_4);	/* ����⡼�ɤ�	*/
	}
	
	/* �θ����ϥ��	*/
	if(mesno==0x2035) {
	    INGORaceSetScene(SCENE_1);
	}
#endif	
	break;
	
    }
}

/************************************************************************
 *
 *	�����å�����
 *			
 ************************************************************************/
static int select_mes(
    Game_play *game_play,
    Actor *thisx,
    unsigned short mesno
){
    Message *mes=(Message *)&game_play->message;
    int ret=TRUE;

    switch(mesno)
    {
	
    case 0x1035:

	/* �����Υ�������	*/
	if(mes->sel_pnt==0) {
	    if(nazo_check(NAZO_02A)) message_set3(game_play, thisx, 0x1036);
	    else message_set3(game_play, thisx, 0x1041);
	}

	/* ��Τλ����ؤ���	*/
	if(mes->sel_pnt==1) {
	    if(nazo_check(NAZO_02B)) message_set3(game_play, thisx, 0x1037);
	    else message_set3(game_play, thisx, 0x1041);
	}
	ret=FALSE;
	break;

    case 0x1038:
	
	/* �ͣ��С�	*/
	if(mes->sel_pnt==0) {
	    if(nazo_check(NAZO_02E)) message_set3(game_play, thisx, 0x1039);
	    else message_set3(game_play, thisx, 0x1041);
	}

	/* ������	*/
	if(mes->sel_pnt==1) {
	    if(nazo_check(NAZO_02F)) message_set3(game_play, thisx, 0x103A);
	    else message_set3(game_play, thisx, 0x1041);
	}

	/* ���쥯�ȡ�	*/
	if(mes->sel_pnt==2) {
	    if(nazo_check(NAZO_030)) message_set3(game_play, thisx, 0x103B);
	    else message_set3(game_play, thisx, 0x1041);
	}
	ret=FALSE;
	break;

    case 0x103E:

	/* �⤢�ꡩ	*/
	if(mes->sel_pnt==0) message_set3(game_play, thisx, 0x103F);

	/* ��ʤ���	*/
	if(mes->sel_pnt==1) message_set3(game_play, thisx, 0x1040);
	ret=FALSE;
	break;

    case 0x1041:

	if(mes->sel_msgno==0x1035) {
	    if(mes->sel_pnt==0) {
		message_set3(game_play, thisx, 0x1036);
		nazo_set(NAZO_02A);
	    }
	    if(mes->sel_pnt==1) {
		message_set3(game_play, thisx, 0x1037);
		nazo_set(NAZO_02B);
	    }
	}
	
	if(mes->sel_msgno==0x1038) {
	    if(mes->sel_pnt==0) {
		message_set3(game_play, thisx, 0x1039);
		nazo_set(NAZO_02E);
	    }
	    if(mes->sel_pnt==1) {
		message_set3(game_play, thisx, 0x103A);
		nazo_set(NAZO_02F);
	    }
	    if(mes->sel_pnt==2) {
		message_set3(game_play, thisx, 0x103B);
		nazo_set(NAZO_030);
	    }
	}
	ret=FALSE;
	break;

    case 0x1062:

	/* ����	*/
	if(mes->sel_pnt==0) message_set3(game_play, thisx, 0x1063);

	/* ���	*/
	if(mes->sel_pnt==1) message_set3(game_play, thisx, 0x1064);
	ret=FALSE;
	break;

    case 0x2030:
    case 0x2031:
	
	/* ����	*/
	if(mes->sel_pnt==0) {
	    if(S_Private.lupy_count>=10) {
		message_set3(game_play, thisx, 0x2034);
		lupy_increase(-10);
	    }
	    else {
		message_set3(game_play, thisx, 0x2032);
	    }
	}

	/* ���	*/
	if(mes->sel_pnt==1) message_set3(game_play, thisx, 0x2032);
	
	nazo_set(NAZO_09A);
	ret=FALSE;
	break;

    case 0x2037:
#if 0	
	INGORaceSetFlags(INGO_COND1);
#endif	
	
    case 0x2036:
	
	/* �ĤŤ���	*/
	if(mes->sel_pnt==0) message_set3(game_play, thisx, 0x201F);

	/* ����	*/
	if(mes->sel_pnt==1) message_set3(game_play, thisx, 0x205A);
	ret=FALSE;
	break;

    case 0x2038:

	/* ���		*/
	if(mes->sel_pnt==0) {
#if 0	    
	    INGORaceSetScene(SCENE_3);
	    mes->wct=0;
#endif	    
	    break;
	}
	
	/* ����	*/
	if(mes->sel_pnt==1) message_set3(game_play, thisx, 0x205A);
	ret=FALSE;
	break;

    case 0x2034:
	
	/* ��������	*/
	if(mes->sel_pnt==0) {
	    message_set3(game_play, thisx, 0x2035);
	    ret=FALSE;
	    break;
	}

    case 0x2035:
#if 0
	INGORaceSetScene(SCENE_2);
	mes->wct=0;
#endif	
	break;
	
    case 0x2043:

	/* �����õ���ꤤ�Ф�����	*/
	if(!event_check(EVNT_012)) {
	    message_set3(game_play, thisx, 0x2044);
	    ret=FALSE;
	}
	break;

    case 0x205A:
#if 0	
	INGORaceSetScene(SCENE_1);
	mes->wct=0;
#endif	
	break;

    case 0x300A:

	/* ����		*/
	if(mes->sel_pnt==0) {
	    if(event_check(EVNT_022)) message_set3(game_play, thisx, 0x300B);
	    else message_set3(game_play, thisx, 0x300C);
	}
		
	/* ������	*/
	if(mes->sel_pnt==1) message_set3(game_play, thisx, 0x300D);
	ret=FALSE;
	break;

    case 0x301B:

	/* ��������Фۤ���	*/
	if(mes->sel_pnt==0) message_set3(game_play, thisx, 0x301D);

	/* �Х��������ڤǤ��ޤ�	*/
	if(mes->sel_pnt==1) {
	    if(nazo_check(NAZO_173)) message_set3(game_play, thisx, 0x301F);
	    else message_set3(game_play, thisx, 0x301E);
	}
	ret=FALSE;
	break;

    case 0x301E:

	message_set3(game_play, thisx, 0x3020);
	ret=FALSE;
	break;

    case 0x400C:

	/* ����		*/
	if(mes->sel_pnt==0) {
	    message_set3(game_play, thisx, 0x400D);
	}
		
	/* ������	*/
	if(mes->sel_pnt==1) {
	    message_set3(game_play, thisx, 0x400E);
	}
	ret=FALSE;
	break;
	    
    case 0x7007:

	message_set3(game_play, thisx, 0x703E);
	ret=FALSE;
	break;

    case 0x703E:
	
	message_set3(game_play, thisx, 0x703F);
	ret=FALSE;
	break;
	
    case 0x703F:
	
	message_set3(game_play, thisx, 0x7042);
	ret=FALSE;
	break;

    }
    return ret;
}

/*����������������������������������������������������������������������
  ��	��å��������쥯��					      ��
  ����������������������������������������������������������������������*/
extern unsigned short set_talk_message(
    Game_play *game_play,
    short chrno
){
    ( void )game_play;
    return (unsigned short)npc_mes_set(game_play, chrno);
}

/*����������������������������������������������������������������������
  ��	��ե饰�����Υ�å��������å�				      ��
  ����������������������������������������������������������������������*/
static int set_nazo_and_next_message(
    Game_play *game_play,
    short chrno,
    unsigned short mesno
){
    ( void )game_play;
    info_set(mesno, chrno);
    return FALSE;
}

/*����������������������������������������������������������������������
  ��	Ũ����ǽ�����å������ξ��Ľ���			      ��
  ����������������������������������������������������������������������*/
static int special_talk(
    Game_play *game_play,
    Actor *thisx,
    short chrno
){
    ( void )chrno;
    return select_mes(game_play, thisx, thisx->talk_message);
}

/*����������������������������������������������������������������������
  ��	��å�������λ						      ��
  ����������������������������������������������������������������������*/
static int message_end_check(
    Game_play *game_play,
    Actor *thisx,
    short chrno
){
    Message *mes=(Message *)&game_play->message;
    int ret=FALSE;
    
    switch(message_check(&game_play->message))
    {
    case 2:	/* ��å�������λ��	*/

	set_nazo_and_next_message(game_play, chrno, thisx->talk_message);
	ret=TRUE;
	break;

    case 4:	/* ����			*/
    case 5:	/* Ũ¦���桩		*/

	if(!pad_on_check(game_play)) break;
	if(special_talk(game_play, thisx, chrno)) {
	    Na_StartSystemSe(NA_SE_SY_CANCEL);
	    mes->msg_mode=M_CLOSE;
	    ret=TRUE;
	}
	break;
    }
    return ret;
}

/*����������������������������������������������������������������������
  ��								      ��
  ��	���ý���						      ��
  ��								      ��
  ����������������������������������������������������������������������*/
extern int talk_to_player(
    Game_play *game_play,
    Actor *thisx,
    int chrno,
    int *talking
){
    short distance_angle_y;
    short display_x;
    short display_y;

    if(Actor_talk_check(thisx, game_play)) {
	*talking=ON;
	return TRUE;
    }

    /*
     * ���Ǥ˲����椫��
     */
    if(*talking==ON)
    {
	if(message_end_check(game_play, thisx, chrno)) *talking=OFF;
	return FALSE;
    }

    /*
     * �����оݤβ���������å�
     */
    Actor_display_position_set(
	game_play,
	thisx,
	&display_x,
	&display_y
    );
    
    if((display_x<  0)||
       (display_x>320)||
       (display_y<  0)||
       (display_y>240))	return FALSE;

    /*
     * ���������å�
     */
    distance_angle_y=
	ABS(distance_angle(thisx->player_angle_y,
			   thisx->shape.angle.sy
	));
    if(distance_angle_y>=0x4300)
	return FALSE;
    
    /*
     * ���åꥯ�����Ȥ����
     */
/*    if((thisx->player_range > anchor_status_data[ANCHOR_RANGE_A].range)&&
 */

    /* ����� 80.0f �Ȥ������Ȥˤ��ޤ���(^^;;	*/
    if((thisx->player_range > (160.0f*160.0f))&&
       (!thisx->anchor_flag)) return FALSE;

    if(thisx->player_range<=(80.0f*80.0f)) {
	if(Actor_talk_request2(thisx, game_play, 80.0f))
	    thisx->talk_message=set_talk_message(game_play, chrno);
    }
    else {
	if(Actor_talk_request(thisx, game_play))
	    thisx->talk_message=set_talk_message(game_play, chrno);
    }
    return FALSE;
}

/*����������������������������������������������������������������������
  ��								      ��
  ��	������ư						      ��
  ��								      ��
  ����������������������������������������������������������������������*/
/*����������������������������������������������������������������������
  ��	����������٤�ɤ�					      ��
  ����������������������������������������������������������������������*/
extern int chain_angle_reset(
    s_xyz *neck_angle,
    s_xyz *body_angle
){
    /* �󥢥󥰥��ɤ�	*/
    add_calc_short_angle(
	&neck_angle->sy,
	0,
	6,
	6200,
	100
    );
    add_calc_short_angle(
	&neck_angle->sx,
	0,
	6,
	6200,
	100
    );
    
    /* �Υ��󥰥��ɤ�	*/
    add_calc_short_angle(
	&body_angle->sy,
	0,
	6,
	6200,
	100
    );
    add_calc_short_angle(
	&body_angle->sx,
	0,
	6,
	6200,
	100
    );
    return TRUE;
}

/*����������������������������������������������������������������������
  ��	����������٤���ɸ�˸�����				      ��
  ����������������������������������������������������������������������*/
static int chain_angle_set(
    Actor *thisx,
    xyz_t *target_pos,
    s_xyz *neck_angle,
    s_xyz *body_angle
){
    short aim_look_angle_x;
    short aim_look_angle_y;
    short offset_angle;
    short func_result;

    /*
     * �������Ȥγ��٤����
     */
    aim_look_angle_x=search_position_angleX(
	&thisx->eye.position,
	target_pos
    );
    aim_look_angle_y=search_position_angleY(
	&thisx->eye.position,
	target_pos
    ) -thisx->world.angle.sy;

    /*
     * ��Ĥդ�
     */
    offset_angle=aim_look_angle_x;
    add_calc_short_angle(
	&neck_angle->sx, offset_angle,
	6,
	2000,	/* 6200,	*/
	1	/* 100		*/
    );
    neck_angle->sx=(short)min_max_limit(
	neck_angle->sx,
	6000*-1,
	6000
    );
    
    /*
     * ��ޤ魯
     */
    offset_angle=aim_look_angle_y;
    func_result=add_calc_short_angle(
	&neck_angle->sy, offset_angle,
	6,
	2000,	/* 6200,	*/
	1	/* 1000		*/
    );
    neck_angle->sy=(short)min_max_limit(
	neck_angle->sy,
	8000*-1,
	8000
    );
    
    if((func_result)&&(ABS(neck_angle->sy)<8000))
	return FALSE;
    
    /*
     * �Τޤ魯
     */
    offset_angle=(short)(aim_look_angle_y-neck_angle->sy);
    add_calc_short_angle(
	&body_angle->sy, offset_angle,
	4,
	2000,	/* 6200,	*/
	1	/* 10		*/
    );

    body_angle->sy=(short)min_max_limit(
	body_angle->sy,
	12000*-1,
	12000
    );

    return TRUE;
}

/*����������������������������������������������������������������������
  ��	�ᥤ��							      ��
  ����������������������������������������������������������������������*/
extern short eye_move(
    Game_play *game_play,
    Actor *thisx,
    s_xyz *neck_angle,
    s_xyz *body_angle,
    float eye_posint,
    int talking
){
    Actor *pl=get_player_actor(game_play);
    short distance_angle_y;
    xyz_t target_position;

    talking;
    
    /*
     * �ܤΰ��֥��å�
     */
    thisx->eye.position=thisx->world.position;
    thisx->eye.position.y+=eye_posint;

    /*
     * ���������å�
     */
    
    /* �ǥ��Ѿ���ɲ�	*/
    if(((!game_play->demo_play.mode)&&(!debug_camera_sw))||
       (ZCommonGet(scene_no)!=SPOT04_0)
    ){
	distance_angle_y=
	    ABS(distance_angle(thisx->player_angle_y,
			       thisx->shape.angle.sy
		));
	if(distance_angle_y>=0x4300)
	{
	    chain_angle_reset(neck_angle, body_angle);
	    return FALSE;
	}
    }

    /*
     * �������򸫤�
     */
    
    /* �ǥ��Ѿ���ɲ�	*/
    if(((game_play->demo_play.mode)||(debug_camera_sw))&&
       (ZCommonGet(scene_no)==SPOT04_0)
    ){
	target_position=game_play->view.eye;
    }
    else {
	target_position=pl->eye.position;
    }

    chain_angle_set(
	thisx,
	&target_position,
	neck_angle,
	body_angle
    );
    return TRUE;
}

/*����������������������������������������������������������������������
  ��	�ᥤ��							      ��
  ����������������������������������������������������������������������*/
extern short eye_move2(
    Game_play *game_play,
    Actor *thisx,
    s_xyz *neck_angle,
    s_xyz *body_angle,
    xyz_t eye_pos
){
    Actor *pl=get_player_actor(game_play);
    short distance_angle_y;
    xyz_t target_position;

    /*
     * �ܤΰ��֥��å�
     */
    thisx->eye.position=eye_pos;

    /*
     * ���������å�
     */
    
    /* �ǥ��Ѿ���ɲ�	*/
    if(((!game_play->demo_play.mode)&&(!debug_camera_sw))||
       (ZCommonGet(scene_no)!=SPOT04_0)
    ){
	distance_angle_y=
	    ABS(distance_angle(thisx->player_angle_y,
			       thisx->shape.angle.sy
		));
	if(distance_angle_y>=0x4300)
	{
	    chain_angle_reset(neck_angle, body_angle);
	    return FALSE;
	}
    }

    /*
     * �������򸫤�
     */
    
    /* �ǥ��Ѿ���ɲ�	*/
    if(((game_play->demo_play.mode)||(debug_camera_sw))&&
       (ZCommonGet(scene_no)==SPOT04_0)
    ){
	target_position=game_play->view.eye;
    }
    else {
	target_position=pl->eye.position;
    }

    chain_angle_set(
	thisx,
	&target_position,
	neck_angle,
	body_angle
    );
    return TRUE;
}
