/*
 * $Id: z_actor.h,v 2.1 1998-10-22 20:45:49+09 zelda Exp $
 *
 * �����������
 *
 * $Log: z_actor.h,v $
 * Revision 2.1  1998-10-22 20:45:49+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.309  1998/10/17 16:20:58  zelda
 * *** empty log message ***
 *
 * Revision 1.308  1998-10-15 13:31:54+09  matutani
 * *** empty log message ***
 *
 * Revision 1.307  1998-10-13 22:03:52+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.306  1998-10-12 23:28:17+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.305  1998-10-09 15:04:45+09  nisiwaki
 * *** empty log message ***
 *
 * Revision 1.304  1998-10-09 00:17:00+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.303  1998-10-07 00:36:36+09  matutani
 * *** empty log message ***
 *
 * Revision 1.302  1998-10-06 15:16:36+09  matutani
 * *** empty log message ***
 *
 * Revision 1.301  1998-10-04 01:25:10+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.300  1998-10-03 22:45:11+09  umemiya
 * �����å���Ϣ�ε�ؿ�����
 *
 * Revision 1.299  1998-10-03 16:08:12+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.298  1998-10-03 01:49:02+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.297  1998-09-30 01:00:15+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.296  1998-09-29 00:19:47+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.295  1998-09-26 01:17:48+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.294  1998-09-23 23:59:55+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.293  1998-09-22 14:03:13+09  morita
 * ActorQuakeRumbleSet
 *
 * Revision 1.292  1998-09-20 02:22:54+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.291  1998-09-18 09:29:50+09  zelda
 * �ޥ��������������ø��ʤΤ��Ĥ�����������
 * �ޤ�������
 *
 * Revision 1.290  1998-09-18 00:46:52+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.289  1998-09-16 22:45:28+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.288  1998-09-16 11:44:47+09  umemiya
 * Actor_timer_level_SE_set�ɲ�
 *
 * Revision 1.287  1998-09-12 23:48:36+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.286  1998-09-10 11:48:33+09  morita
 * *** empty log message ***
 *
 * Revision 1.285  1998-09-07 20:35:41+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.284  1998-09-05 16:18:50+09  umemiya
 * Actor_player_glass_check���ɲ�
 *
 * Revision 1.283  1998-09-05 00:10:56+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.282  1998-09-03 23:58:21+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.281  1998-09-03 00:25:18+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.280  1998-08-31 22:57:49+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.279  1998-08-27 16:23:40+09  matutani
 * ACTOR_STATUS_MOVEBG_ABLE_SW_ON/moveBG SW�ե饰���åȤ������ե饰
 * ���ɲ�
 *
 * Revision 1.278  1998-08-27 00:25:00+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.277  1998-08-22 18:35:06+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.276  1998-08-20 00:48:35+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.275  1998-08-18 12:42:28+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.274  1998-08-12 00:34:26+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.273  1998-08-11 00:55:16+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.272  1998-07-30 09:36:01+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.271  1998-07-24 22:57:23+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.270  1998-07-23 23:13:36+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.269  1998-07-17 22:55:37+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.268  1998-07-17 10:29:02+09  umemiya
 * *** empty log message ***
 *
 * Revision 1.267  1998-07-16 20:01:40+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.266  1998-07-15 22:56:41+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.265  1998-07-10 23:11:36+09  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.264  1998-07-09 23:08:16+09  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.263  1998-07-08 16:31:42+09  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.262  1998-07-07 22:57:02+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.261  1998-07-06 22:54:46+09  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.260  1998-07-04 23:54:26+10  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.259  1998-07-01 23:19:03+10  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.258  1998-06-30 23:54:50+10  iwawaki
 * *** empty log message ***
 *
 * Revision 1.257  1998-06-26 22:20:03+09  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.256  1998-06-25 17:14:44+10  hayakawa
 * actor�Υ��Ф򸺤餷�ƥ�������
 *
 * Revision 1.255  1998-06-25 14:55:49+09  matutani
 * �������ɲäΤ�
 *
 * Revision 1.254  1998-06-23 17:11:43+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.253  1998-06-19 22:41:39+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.252  1998-06-15 23:02:11+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.251  1998-06-11 10:39:16+09  umemiya
 * EN_DOOR_KEY_TIME��.c�����ư
 *
 * Revision 1.250  1998-06-10 22:59:00+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.249  1998-06-09 23:20:55+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.248  1998-06-09 22:43:30+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.247  1998-06-08 22:57:47+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.246  1998-06-08 10:22:03+09  nisiwaki
 * Setpos_HiliteReflect_xlu_init
 *
 * Revision 1.245  1998-06-05 16:09:15+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.244  1998-06-04 23:06:05+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.243  1998-06-02 22:56:10+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.242  1998-05-30 22:51:08+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.241  1998-05-29 15:53:28+09  hayakawa
 * �ɲ�Ĵ���ѥ��ߡ��ΰ�Υѥǥ��󥰥ߥ��ǹ�¤�Υ��������Ѥ�äƤ����Τ���
 *
 * Revision 1.240  1998-05-29 13:49:46+09  hayakawa
 * draw_status���Ф��ɲ�
 * draw_status���������ޥ�����ɲ�
 * �ɲ�Ĵ���ѥ��ߡ��ΰ�η��� u64 �� u32 ���ѹ��������ǿ��� 15 �� 30 ���ѹ�
 * �ѥǥ��󥰥��Ф��ɲ�
 *
 * Revision 1.239  1998-05-29 10:44:23+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.238  1998-05-28 22:38:58+09  tarukado
 * *** empty log message ***
 *
 * Revision 1.237  1998-05-27 15:09:38+09  hayakawa
 * ��拾��ѥ�������
 *
 * Revision 1.236  1998-05-19 23:38:47+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.235  1998/05/19 09:50:59  iwawaki
 * *** empty log message ***
 *
 * Revision 1.234  1998/05/16 11:11:43  iwawaki
 * *** empty log message ***
 *
 * Revision 1.233  1998/05/15 14:01:46  iwawaki
 * *** empty log message ***
 *
 * Revision 1.232  1998/05/14 11:35:11  iwawaki
 * *** empty log message ***
 *
 * Revision 1.231  1998/05/14 01:50:15  iwawaki
 * *** empty log message ***
 *
 * Revision 1.230  1998/05/13 13:59:41  iwawaki
 * *** empty log message ***
 *
 * Revision 1.229  1998/05/09 13:10:52  tarukado
 * *** empty log message ***
 *
 * Revision 1.228  1998/05/08 14:00:14  iwawaki
 * *** empty log message ***
 *
 * Revision 1.227  1998/05/06 14:30:31  iwawaki
 * *** empty log message ***
 *
 * Revision 1.226  1998/05/06 04:26:39  iwawaki
 * *** empty log message ***
 *
 * Revision 1.225  1998/05/06 04:12:57  iwawaki
 * *** empty log message ***
 *
 * Revision 1.224  1998/05/02 07:38:26  iwawaki
 * *** empty log message ***
 *
 * Revision 1.223  1998/05/02 04:54:49  iwawaki
 * *** empty log message ***
 *
 * Revision 1.222  1998/05/01 14:27:38  iwawaki
 * *** empty log message ***
 *
 * Revision 1.221  1998/04/30 13:05:49  tarukado
 * *** empty log message ***
 *
 * Revision 1.220  1998/04/30 06:44:10  matutani
 * *** empty log message ***
 *
 * Revision 1.219  1998-04-29 23:01:29+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.218  1998/04/29 12:03:27  iwawaki
 * *** empty log message ***
 *
 * Revision 1.217  1998/04/29 10:12:24  iwawaki
 * *** empty log message ***
 *
 * Revision 1.216  1998/04/29 07:07:04  iwawaki
 * *** empty log message ***
 *
 * Revision 1.215  1998/04/28 05:15:41  tarukado
 * *** empty log message ***
 *
 * Revision 1.214  1998/04/27 14:18:54  iwawaki
 * *** empty log message ***
 *
 * Revision 1.213  1998/04/27 06:15:35  iwawaki
 * *** empty log message ***
 *
 * Revision 1.212  1998/04/22 10:42:23  iwawaki
 * *** empty log message ***
 *
 * Revision 1.211  1998/04/18 14:43:34  iwawaki
 * *** empty log message ***
 *
 * Revision 1.210  1998/04/17 02:50:49  okajima
 * *** empty log message ***
 *
 * Revision 1.209  1998/04/16 11:24:03  iwawaki
 * *** empty log message ***
 *
 * Revision 1.208  1998/04/15 04:40:45  iwawaki
 * *** empty log message ***
 *
 * Revision 1.207  1998/04/14 13:35:25  hayakawa
 * ������ˡ�ΰ����Ū��static��
 *
 * Revision 1.206  1998-04-14 20:19:50+09  hayakawa
 * Actor_info �� ������ˡ�ΰ���ɲý���
 *
 * Revision 1.205  1998-04-13 22:22:38+09  hayakawa
 * ���������������������Τ����
 *
 * Revision 1.204  1998-04-09 23:36:13+09  morita
 *       ��̩�κ�Ȥ���̩���Τꤿ���ҤȤ� SEX(69)��2����R�ܥ��󲡤��ʤ���L6���
 *       �� 1 ������� �� �������ߤ��Τ���Ǥ�ܥ� �� ������ǡ�������
 *       ����ȡ������������路�������ˡ�� /home/morita/JOY_FILES/himitu.lst
 *       �ˤ���ޤ���
 *
 * Revision 1.203  1998/04/03  14:06:43  iwawaki
 * *** empty log message ***
 *
 * Revision 1.202  1998/03/24  07:39:06  umemiya
 * �𲡤���ط���STATUS�ɲ�
 *
 * Revision 1.201  1998/03/19  10:32:00  sakakibara
 * *** empty log message ***
 *
 * Revision 1.200  1998/03/09  08:10:35  iwawaki
 * *** empty log message ***
 *
 * Revision 1.199  1998/03/09  06:21:33  iwawaki
 * *** empty log message ***
 *
 * Revision 1.198  1998/03/07  14:24:48  iwawaki
 * *** empty log message ***
 *
 * Revision 1.197  1998/03/05  02:40:50  iwawaki
 * *** empty log message ***
 *
 * Revision 1.196  1998/03/03  13:39:57  umemiya
 * *** empty log message ***
 *
 * Revision 1.195  1998/03/02  13:49:24  iwawaki
 * *** empty log message ***
 *
 * Revision 1.194  1998/02/27  11:26:33  sakakibara
 * *** empty log message ***
 *
 * Revision 1.193  1998/02/27  08:41:19  iwawaki
 * *** empty log message ***
 *
 * Revision 1.192  1998/02/26  08:37:53  iwawaki
 * *** empty log message ***
 *
 * Revision 1.191  1998/02/10  06:38:06  iwawaki
 * *** empty log message ***
 *
 * Revision 1.190  1998/02/09  13:55:44  sumiyosi
 * �ΣУô�Ϣ�Υ��֥롼�����ɲá�
 *
 * Revision 1.189  1998/02/09  08:33:27  sakakibara
 * *** empty log message ***
 *
 * Revision 1.188  1998/02/07  13:24:45  iwawaki
 * *** empty log message ***
 *
 * Revision 1.187  1998/02/06  04:53:29  sakakibara
 * *** empty log message ***
 *
 * Revision 1.186  1998/02/04  13:01:43  sumiyosi
 * Anchor_Status �� anchor_status_data �ɲá�
 *
 * Revision 1.185  1998/02/03  13:35:00  iwawaki
 * *** empty log message ***
 *
 * Revision 1.184  1998/01/30  13:21:51  iwawaki
 * *** empty log message ***
 *
 * Revision 1.183  1998/01/29  13:33:06  iwawaki
 * *** empty log message ***
 *
 * Revision 1.182  1998/01/29  11:39:32  tarukado
 * *** empty log message ***
 *
 * Revision 1.181  1998/01/28  08:04:59  morita
 * *** empty log message ***
 *
 * Revision 1.180  1998/01/22  07:46:47  tarukado
 *  ���� ��ɽ���롼�����ɲ�
 *
 * Revision 1.179  1998/01/21  12:42:01  iwawaki
 * *** empty log message ***
 *
 * Revision 1.178  1998/01/20  14:28:50  iwawaki
 * *** empty log message ***
 *
 * Revision 1.177  1998/01/13  14:38:11  iwawaki
 * *** empty log message ***
 *
 * Revision 1.176  1998/01/09  08:27:01  tarukado
 * *** empty log message ***
 *
 * Revision 1.175  1998/01/07  08:58:47  tarukado
 * *** empty log message ***
 *
 * Revision 1.174  1998/01/05  07:20:09  tarukado
 * *** empty log message ***
 *
 * Revision 1.173  1997/12/11  07:15:56  umemiya
 * ACTOR_MAX���䤷��
 *
 * Revision 1.172  1997/12/09  10:48:54  iwawaki
 * *** empty log message ***
 *
 * Revision 1.171  1997/12/01  13:59:09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.170  1997/12/01  09:40:42  iwawaki
 * *** empty log message ***
 *
 * Revision 1.169  1997/12/01  09:04:48  iwawaki
 * *** empty log message ***
 *
 * Revision 1.168  1997/11/19  05:31:34  iwawaki
 * *** empty log message ***
 *
 * Revision 1.167  1997/11/18  04:59:10  iwawaki
 * *** empty log message ***
 *
 * Revision 1.166  1997/11/14  03:17:35  iwawaki
 * *** empty log message ***
 *
 * Revision 1.165  1997/11/14  02:46:57  tarukado
 * *** empty log message ***
 *
 * Revision 1.164  1997/11/14  02:27:33  morita
 * *** empty log message ***
 *
 * Revision 1.163  1997/11/13  14:50:33  tarukado
 * *** empty log message ***
 *
 * Revision 1.162  1997/11/12  16:49:53  iwawaki
 * *** empty log message ***
 *
 * Revision 1.161  1997/11/12  15:36:17  iwawaki
 * *** empty log message ***
 *
 * Revision 1.160  1997/11/12  11:49:47  iwawaki
 * *** empty log message ***
 *
 * Revision 1.159  1997/11/03  13:36:19  tarukado
 * *** empty log message ***
 *
 * Revision 1.158  1997/11/03  13:32:37  iwawaki
 * *** empty log message ***
 *
 * Revision 1.157  1997/11/01  14:58:39  iwawaki
 * *** empty log message ***
 *
 * Revision 1.156  1997/11/01  07:05:46  iwawaki
 * *** empty log message ***
 *
 * Revision 1.155  1997/10/30  14:11:04  matutani
 * Status              status_info:���ơ������ɲ�
 *
 * Revision 1.154  1997/10/30  13:30:14  tarukado
 * *** empty log message ***
 *
 * Revision 1.153  1997/10/29  11:10:16  tarukado
 * *** empty log message ***
 *
 * Revision 1.152  1997/10/22  14:45:46  iwawaki
 * *** empty log message ***
 *
 * Revision 1.151  1997/10/19  12:31:23  iwawaki
 * *** empty log message ***
 *
 * Revision 1.150  1997/10/17  05:33:25  tarukado
 * *** empty log message ***
 *
 * Revision 1.149  1997/10/16  08:48:53  iwawaki
 * *** empty log message ***
 *
 * Revision 1.148  1997/10/04  11:02:16  tarukado
 * *** empty log message ***
 *
 * Revision 1.147  1997/10/03  13:36:49  iwawaki
 * *** empty log message ***
 *
 * Revision 1.146  1997/10/03  13:12:58  iwawaki
 * *** empty log message ***
 *
 * Revision 1.145  1997/10/03  07:55:06  tarukado
 * *** empty log message ***
 *
 * Revision 1.144  1997/10/03  02:10:08  tarukado
 * *** empty log message ***
 *
 * Revision 1.143  1997/09/26  14:37:55  iwawaki
 * *** empty log message ***
 *
 * Revision 1.142  1997/09/17  08:37:55  iwawaki
 * *** empty log message ***
 *
 * Revision 1.141  1997/09/10  14:37:21  iwawaki
 * *** empty log message ***
 *
 * Revision 1.140  1997/09/09  10:03:42  tarukado
 * *** empty log message ***
 *
 * Revision 1.139  1997/09/08  12:09:20  matutani
 * Actor_shadow_horse�ɲ�
 *
 * Revision 1.138  1997/09/02  07:31:55  tarukado
 * *** empty log message ***
 *
 * Revision 1.137  1997/08/29  04:38:50  iwawaki
 * *** empty log message ***
 *
 * Revision 1.136  1997/08/27  04:49:44  tarukado
 * *** empty log message ***
 *
 * Revision 1.135  1997/08/27  02:12:14  iwawaki
 * *** empty log message ***
 *
 * Revision 1.134  1997/08/27  02:08:54  iwawaki
 * *** empty log message ***
 *
 * Revision 1.133  1997/08/25  13:44:57  iwawaki
 * *** empty log message ***
 *
 * Revision 1.132  1997/08/23  09:38:26  iwawaki
 * *** empty log message ***
 *
 * Revision 1.131  1997/08/21  09:51:37  iwawaki
 * *** empty log message ***
 *
 * Revision 1.130  1997/08/21  09:09:11  iwawaki
 * *** empty log message ***
 *
 * Revision 1.129  1997/08/21  08:32:12  iwawaki
 * *** empty log message ***
 *
 * Revision 1.128  1997/08/19  13:24:15  iwawaki
 * *** empty log message ***
 *
 * Revision 1.127  1997/08/18  08:38:43  iwawaki
 * *** empty log message ***
 *
 * Revision 1.126  1997/08/18  07:35:49  iwawaki
 * *** empty log message ***
 *
 * Revision 1.125  1997/08/09  12:31:00  matutani
 *  ground_no_hit_set()��extern�ˤ���
 *
 * Revision 1.124  1997/08/09  07:33:45  iwawaki
 * *** empty log message ***
 *
 * Revision 1.123  1997/08/09  05:01:02  iwawaki
 * *** empty log message ***
 *
 * Revision 1.122  1997/08/07  10:09:09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.121  1997/08/06  11:40:56  morita
 * *** empty log message ***
 *
 * Revision 1.120  1997/08/06  03:23:01  iwawaki
 * *** empty log message ***
 *
 * Revision 1.119  1997/08/04  04:56:07  iwawaki
 * *** empty log message ***
 *
 * Revision 1.118  1997/08/04  01:34:57  iwawaki
 * *** empty log message ***
 *
 * Revision 1.117  1997/07/30  12:12:51  iwawaki
 * *** empty log message ***
 *
 * Revision 1.116  1997/07/23  06:16:55  iwawaki
 * *** empty log message ***
 *
 * Revision 1.115  1997/07/22  04:05:43  iwawaki
 * *** empty log message ***
 *
 * Revision 1.114  1997/07/18  14:14:39  iwawaki
 * *** empty log message ***
 *
 * Revision 1.113  1997/07/18  10:31:09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.112  1997/07/16  01:43:12  iwawaki
 * *** empty log message ***
 *
 * Revision 1.111  1997/07/11  07:52:11  iwawaki
 * *** empty log message ***
 *
 * Revision 1.110  1997/07/09  04:40:30  iwawaki
 * *** empty log message ***
 *
 * Revision 1.109  1997/07/08  09:13:13  iwawaki
 * *** empty log message ***
 *
 * Revision 1.108  1997/07/08  07:44:11  iwawaki
 * *** empty log message ***
 *
 * Revision 1.107  1997/06/26  05:16:52  iwawaki
 * *** empty log message ***
 *
 * Revision 1.106  1997/06/17  08:38:06  iwawaki
 * *** empty log message ***
 *
 * Revision 1.105  1997/06/09  06:53:20  iwawaki
 * *** empty log message ***
 *
 * Revision 1.104  1997/06/09  06:52:51  iwawaki
 * *** empty log message ***
 *
 * Revision 1.103  1997/06/09  06:17:46  iwawaki
 * *** empty log message ***
 *
 * Revision 1.102  1997/06/06  08:12:05  tarukado
 * *** empty log message ***
 *
 * Revision 1.101  1997/06/06  02:15:32  iwawaki
 * *** empty log message ***
 *
 * Revision 1.100  1997/06/05  00:34:08  iwawaki
 * *** empty log message ***
 *
 * Revision 1.99  1997/06/04  07:19:22  tarukado
 * *** empty log message ***
 *
 * Revision 1.98  1997/05/31  13:12:21  iwawaki
 * *** empty log message ***
 *
 * Revision 1.97  1997/05/30  12:36:43  iwawaki
 * *** empty log message ***
 *
 * Revision 1.96  1997/05/29  02:47:10  tarukado
 * *** empty log message ***
 *
 * Revision 1.95  1997/05/28  08:21:20  tarukado
 * �ѡ���ʬ������ɲ�
 *
 * Revision 1.94  1997/05/26  07:00:47  iwawaki
 * *** empty log message ***
 *
 * Revision 1.93  1997/05/24  07:17:59  iwawaki
 * *** empty log message ***
 *
 * Revision 1.92  1997/05/22  06:48:11  iwawaki
 * *** empty log message ***
 *
 * Revision 1.91  1997/05/20  12:12:12  iwawaki
 * *** empty log message ***
 *
 * Revision 1.90  1997/05/06  07:42:39  iwawaki
 * new
 *
 * Revision 1.89  1997/04/21  04:50:57  iwawaki
 * *** empty log message ***
 *
 * Revision 1.88  1997/04/15  08:57:56  iwawaki
 * *** empty log message ***
 *
 * Revision 1.87  1997/04/14  02:15:43  iwawaki
 * *** empty log message ***
 *
 * Revision 1.86  1997/04/12  12:18:16  iwawaki
 * *** empty log message ***
 *
 * Revision 1.85  1997/04/10  13:17:02  iwawaki
 * *** empty log message ***
 *
 * Revision 1.84  1997/04/05  09:11:17  iwawaki
 * *** empty log message ***
 *
 * Revision 1.83  1997/04/05  05:02:57  iwawaki
 * *** empty log message ***
 *
 * Revision 1.82  1997/04/05  05:02:33  iwawaki
 * *** empty log message ***
 *
 * Revision 1.81  1997/04/03  03:37:29  iwawaki
 * *** empty log message ***
 *
 * Revision 1.80  1997/03/26  12:04:30  iwawaki
 * *** empty log message ***
 *
 * Revision 1.79  1997/03/26  12:04:03  iwawaki
 * *** empty log message ***
 *
 * Revision 1.78  1997/03/25  02:44:01  iwawaki
 * *** empty log message ***
 *
 * Revision 1.77  1997/03/25  00:30:59  iwawaki
 * *** empty log message ***
 *
 * Revision 1.76  1997/03/19  02:54:23  iwawaki
 * *** empty log message ***
 *
 * Revision 1.75  1997/03/14  01:28:48  iwawaki
 * *** empty log message ***
 *
 * Revision 1.74  1997/03/13  04:14:56  iwawaki
 * *** empty log message ***
 *
 * Revision 1.73  1997/03/11  06:10:31  iwawaki
 * *** empty log message ***
 *
 * Revision 1.72  1997/03/04  10:29:59  iwawaki
 * *** empty log message ***
 *
 * Revision 1.71  1997/03/04  09:44:20  iwawaki
 * *** empty log message ***
 *
 * Revision 1.70  1997/03/04  08:53:06  iwawaki
 * *** empty log message ***
 *
 * Revision 1.69  1997/03/04  08:19:38  iwawaki
 * *** empty log message ***
 *
 * Revision 1.68  1997/03/03  02:57:26  iwawaki
 * *** empty log message ***
 *
 * Revision 1.67  1997/02/28  06:22:39  iwawaki
 * *** empty log message ***
 *
 * Revision 1.66  1997/02/27  00:54:24  iwawaki
 * *** empty log message ***
 *
 * Revision 1.65  1997/02/26  06:14:14  iwawaki
 * �ޡ������ɲ�
 *
 * Revision 1.64  1997/02/24  10:07:01  iwawaki
 * *** empty log message ***
 *
 * Revision 1.63  1997/02/24  09:51:43  iwawaki
 * *** empty log message ***
 *
 * Revision 1.62  1997/02/24  09:48:23  iwawaki
 * *** empty log message ***
 *
 * Revision 1.61  1997/02/21  01:09:41  iwawaki
 * *** empty log message ***
 *
 * Revision 1.60  1997/02/20  07:31:52  iwawaki
 * *** empty log message ***
 *
 * Revision 1.59  1997/02/20  05:49:26  iwawaki
 * *** empty log message ***
 *
 * Revision 1.58  1997/02/14  06:58:22  iwawaki
 * *** empty log message ***
 *
 * Revision 1.57  1997/02/05  10:46:32  iwawaki
 * *** empty log message ***
 *
 * Revision 1.56  1997/01/28  07:56:39  iwawaki
 * *** empty log message ***
 *
 * Revision 1.55  1997/01/20  02:35:14  iwawaki
 * *** empty log message ***
 *
 * Revision 1.54  1997/01/16  08:42:49  iwawaki
 * *** empty log message ***
 *
 * Revision 1.53  1997/01/16  08:41:57  iwawaki
 * Actor_player_demo_check�ɲ�
 *
 * Revision 1.52  1997/01/09  00:21:45  iwawaki
 * *** empty log message ***
 *
 * Revision 1.51  1996/12/12  02:47:24  iwawaki
 * �ʺ������ɲ�
 *
 * Revision 1.50  1996/12/09  12:57:07  iwawaki
 * BG check test
 *
 * Revision 1.49  1996/12/02  05:58:51  iwawaki
 * *** empty log message ***
 *
 * Revision 1.48  1996/11/27  07:41:15  iwawaki
 * *** empty log message ***
 *
 * Revision 1.47  1996/11/26  06:04:30  iwawaki
 * ��ɽ���ѹ�
 *
 * Revision 1.46  1996/11/26  02:00:28  iwawaki
 * *** empty log message ***
 *
 * Revision 1.45  1996/11/25  10:25:07  iwawaki
 * *** empty log message ***
 *
 * Revision 1.44  1996/11/21  11:42:28  iwawaki
 * *** empty log message ***
 *
 * Revision 1.43  1996/11/20  01:30:03  iwawaki
 * ��������δؿ��ɲ�
 *
 * Revision 1.42  1996/11/18  12:32:31  iwawaki
 * *** empty log message ***
 *
 * Revision 1.41  1996/11/18  09:48:47  iwawaki
 * *** empty log message ***
 *
 * Revision 1.40  1996/11/14  13:06:32  iwawaki
 * *** empty log message ***
 *
 * Revision 1.39  1996/11/14  06:52:34  iwawaki
 * *** empty log message ***
 *
 * Revision 1.38  1996/11/14  06:20:44  iwawaki
 * *** empty log message ***
 *
 * Revision 1.37  1996/11/14  05:52:45  iwawaki
 * *** empty log message ***
 *
 * Revision 1.36  1996/11/14  05:11:23  iwawaki
 * *** empty log message ***
 *
 * Revision 1.35  1996/11/13  10:42:30  iwawaki
 * Actor_search_position_angleX��Actor_search_position_distanceXZ���ɲ�
 *
 * Revision 1.34  1996/11/07  06:45:18  iwawaki
 * *** empty log message ***
 *
 * Revision 1.33  1996/11/07  02:23:31  iwawaki
 * *** empty log message ***
 *
 * Revision 1.32  1996/11/07  02:00:34  iwawaki
 * *** empty log message ***
 *
 * Revision 1.31  1996/11/06  12:14:34  iwawaki
 * gamealloc���ѹ�
 *
 * Revision 1.30  1996/11/06  12:06:42  iwawaki
 * *** empty log message ***
 *
 * Revision 1.29  1996/10/30  05:49:25  iwawaki
 * Actor_HiliteReflect�ɲ�
 *
 * Revision 1.28  1996/10/28  11:54:45  iwawaki
 * *** empty log message ***
 *
 * Revision 1.27  1996/10/28  09:02:24  iwawaki
 * *** empty log message ***
 *
 * Revision 1.26  1996/10/27  10:03:08  iwawaki
 * Actor_info_make_child_actor�ɲ�
 *
 * Revision 1.25  1996/10/27  08:23:01  iwawaki
 * *** empty log message ***
 *
 * Revision 1.24  1996/10/25  13:10:20  iwawaki
 * *** empty log message ***
 *
 * Revision 1.23  1996/10/23  12:34:52  iwawaki
 * Actor_search_position_angleY�ɲ�
 *
 * Revision 1.22  1996/10/22  04:56:51  iwawaki
 * Actor_info_make_actor�ɲ�
 *
 * Revision 1.21  1996/10/19  11:54:04  iwawaki
 * *** empty log message ***
 *
 * Revision 1.20  1996/10/14  13:24:09  iwawaki
 * Actor_info_ct���ѹ�
 *
 * Revision 1.19  1996/10/05  09:10:54  iwawaki
 * *** empty log message ***
 *
 * Revision 1.18  1996/10/05  07:16:56  iwawaki
 * *** empty log message ***
 *
 * Revision 1.17  1996/10/04  07:10:39  iwawaki
 * *** empty log message ***
 *
 * Revision 1.16  1996/10/04  06:45:24  iwawaki
 * *** empty log message ***
 *
 * Revision 1.15  1996/10/02  05:44:44  iwawaki
 * get_world�ɲ�
 *
 * Revision 1.14  1996/10/02  05:14:40  iwawaki
 * shape change
 *
 * Revision 1.13  1996/09/28  11:12:44  iwawaki
 * joint���ѹ�
 *
 * Revision 1.12  1996/09/28  07:48:46  iwawaki
 * joint_num�ɲ�
 *
 * Revision 1.11  1996/09/28  07:11:28  iwawaki
 * *** empty log message ***
 *
 * Revision 1.10  1996/09/27  10:54:01  iwawaki
 * �����ƥ���
 *
 * Revision 1.9  1996/09/25  03:06:01  matutani
 * ���ɸ�
 *
 * Revision 1.8  1996/09/24  13:02:28  matutani
 * *** empty log message ***
 *
 * Revision 1.7  1996/09/24  12:11:31  matutani
 * *** empty log message ***
 *
 * Revision 1.6  1996/09/21  01:55:14  iwawaki
 * *** empty log message ***
 *
 * Revision 1.5  1996/09/21  01:54:54  iwawaki
 * Actor_get_eye�ɲ�
 *
 * Revision 1.4  1996/09/19  07:09:15  iwawaki
 * ���饹�����ѹ�
 *
 * Revision 1.3  1996/09/18  09:04:32  iwawaki
 * $Log�ɲ�
 * */

#ifndef INCLUDE_Z_ACTOR_H
#define INCLUDE_Z_ACTOR_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/************************************************************************
 *
 *	��������
 *
 ************************************************************************/
#include "z_actor_h.h"
#include "z_actor_list.h"
#include "z_play_h.h"
#include "z_scene_h.h"
#include "z_camera.h"
#include "z_collision_type.h"
    
#include "z_common.h"	/* z_common.c �Υإå���	*/

/* �ɥ����å����֤Υ��ե��åȡ�;�꾮�����ͤˤ�����ɥ����å��Ǥ��ʤ��ʤ�) */
#define WALL_BGCHECK_OFFSET 		1.0f
//#define	GROUND_BGCHECK_OFFSET_Y		50.0f
#define	GROUND_BGCHECK_OFFSET_Y		50.0f
//#define	GROUND_HIT_OFFSET_Y		75.0f
#define	GROUND_HIT_OFFSET_Y		30.0f


/************************************************************************
 *
 *	������ѥѥ�᡼�����饹
 *
 ************************************************************************/
#define	ANCHOR_WAIT_TIME	40		/* ���ܸ��Ԥ����� */
#define	ANCHOR_CHANGE_WAIT_TIME	5	/* �����ڤ��ؤ��Ԥ����� */

typedef struct {
    Actor	*primary_actor;		/* ������ܣ�������ݥ��� */
    Actor	*secondary_actor;	/* �������ܣ�������ݥ��� */
    int		anchor_change_wait;	/* �����ڤ��ؤ��Ԥ������ޡ� */
} Camera_Parameter;


/************************************************************************
 *
 *	�������׾��󥯥饹
 *
 ************************************************************************/
typedef struct {
    s_xyz		angle;					/* ������������ */
    short		anime_count;				/* ���˥᡼������ѥ����� */
    float		offset_y;				/*         ɽ���������� */
    void (*shadow_proc)(Actor *, LightsN *, Game_play *);	/* �ƴؿ��ݥ��� */ 	
    float		shadow_size;				/* �ƥ����� */ 
    unsigned char	shadow_alpha;				/* �ƥ���ե� */		
    unsigned char	foot_hit_flag;				/* ­���ϥե饰 */
    xyz_t		foot_pos[2];				/* ­��ɸ */
} Shape_Info;

/*-----------------------------------------------------------------------
 *
 *	�������׾��󥯥饹 �����
 *
 *----------------------------------------------------------------------*/
extern void Shape_Info_init(
    Shape_Info *this,
    float	offset_y,
    void (*shadow_proc)(Actor *, LightsN *, Game_play *),
    float	shadow_size
); 
/*-----------------------------------------------------------------------
 *
 *	�������׻����ɽ��
 *
 *----------------------------------------------------------------------*/
extern void Actor_shadow_circle(
    Actor     *this,
    LightsN   *lightN,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	�ݱ�ɽ��
 *
 *----------------------------------------------------------------------*/
extern void Actor_shadow_circle(
    Actor     *this,
    LightsN   *lightN,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	����ɽ��
 *
 *----------------------------------------------------------------------*/
extern void Actor_shadow_white_circle(
    Actor     *this,
    LightsN   *lightN,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	�ϱ�ɽ��
 *
 *----------------------------------------------------------------------*/
extern void Actor_shadow_horse(
    Actor     *this,
    LightsN   *lightN,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	��­��ɽ��
 *
 *----------------------------------------------------------------------*/
extern Gfx foot_shadow_model[];

extern void Actor_shadow_foot(
    Actor     *this,
    LightsN   *lightN,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	��­�ƺ�ɸ�����å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_foot_shadow_pos_set(
    Actor     *this,
    int       jyoint_no,
    int	      L_foot_jyoint,
    xyz_t     *L_foot_offset,
    int	      R_foot_jyoint,
    xyz_t     *R_foot_offset
);

/*-----------------------------------------------------------------------
 *
 *	Ʃ���Ѵ���ɸ���å�
 *
 *----------------------------------------------------------------------*/
extern void projection_pos_set(
    Game_play *game_play,
    xyz_t     *target_pos,
    xyz_t     *display_pos,
    float     *w
);

/************************************************************************
 *
 *	���ܥޡ��������饹
 *
 ************************************************************************/
#define	TARGET_BLURE_MAX	3

typedef struct {
    xyz_t		position;
    float		r;
    Color		color;
} Anchor_Target_Data;
typedef struct {
    signed char		count;
    Anchor_Target_Data	data[TARGET_BLURE_MAX];
} Anchor_Target;

typedef struct {
    xyz_t		position;
    xyz_t		target_position;
    ColorF		center_color;
    ColorF		side_color;
    Actor		*anchor_actor;
    Actor		*target_actor;
    float		move_ratio;
    float		target_r;
    short		target_timer;
    unsigned char	anchor_actor_part;
    unsigned char	rock_on;
    Anchor_Target	target;
    Actor		*anchor_request_actor;
    Actor		*enemyBGM_actor;		/* ��Ʈ�⡼�ɣ£ǣ��ѣ�������ݥ��� */
    Actor		*secondary_actor;		/* �������������ݥ��� */
} Anchor_Marker;

/*-----------------------------------------------------------------------
 *
 *	���ܥޡ���������
 *
 *----------------------------------------------------------------------*/
extern void Anchor_Marker_process(
    Anchor_Marker *this,
    Actor	  *base_actor,
    Actor	  *target_actor,
    Game_play	  *game_play
);

/*-----------------------------------------------------------------------
 *
 *	���ܾȽ�ɽ������
 *
 *----------------------------------------------------------------------*/
extern void Anchor_Marker_target_draw(
    Anchor_Marker *this,
    Game_play	  *game_play
);
    
/************************************************************************
 *
 *	��������Ķ����饹
 *
 ************************************************************************/
typedef struct {
    unsigned long	sw1;		/* �����å��ӥåȡʣ��������� */
    unsigned long	sw2;		/* �����å��ӥåȡʣ����������� */
    unsigned long	sw_c1;		/* �����å��ѥ����å��ӥåȡʣ��������� */
    unsigned long	sw_c2;		/* �����å��ѥ����å��ӥåȡʣ����������� */
    unsigned long	Tbox;		/* ��Ȣ���åȥӥå� */
    unsigned long	room_clear;	/* �������ǥӥå� */
    unsigned long	no_enemy;	/* Ũ¸��̵���ӥå� */
    unsigned long	item1;		/* �����ƥ�ӥåȡʣ��������� */
    unsigned long	item2;		/* �����ƥ�ӥåȡʣ����������� */
} Actor_Environment;

#if 0
/*-----------------------------------------------------------------------
 *
 *	�����å��ӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_sw_check(Actor_Environment *this, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	�����å��ӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_sw_on(Actor_Environment *this, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	�����å��ӥåȣϣƣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_sw_off(Actor_Environment *this, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	�����å��ѥ����å��ӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_sw_c_check(Actor_Environment *this, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	�����å��ѥ����å��ӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_sw_c_on(Actor_Environment *this, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	�����å��ѥ����å��ӥåȣϣƣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_sw_c_off(Actor_Environment *this, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	��Ȣ���åȥӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_Tbox_check(Actor_Environment *this, int Tbox_no);

/*-----------------------------------------------------------------------
 *
 *	��Ȣ���åȥӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_Tbox_on(Actor_Environment *this, int Tbox_no);

/*-----------------------------------------------------------------------
 *
 *	�������ǥӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_room_clear_check(Actor_Environment *this, int room_no);

/*-----------------------------------------------------------------------
 *
 *	�������ǥӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_room_clear_on(Actor_Environment *this, int room_no);

/*-----------------------------------------------------------------------
 *
 *	�������ǥӥåȣϣƣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_room_clear_off(Actor_Environment *this, int room_no);

/*-----------------------------------------------------------------------
 *
 *	Ũ¸��̵���ӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_no_enemy_check(Actor_Environment *this, int room_no);

/*-----------------------------------------------------------------------
 *
 *	Ũ¸��̵���ӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_no_enemy_on(Actor_Environment *this, int room_no);

/*-----------------------------------------------------------------------
 *
 *	Ũ¸��̵���ӥåȣϣƣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_no_enemy_off(Actor_Environment *this, int room_no);

/*-----------------------------------------------------------------------
 *
 *	�����ƥॲ�åȥӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_item_check(Actor_Environment *this, int item_no);

/*-----------------------------------------------------------------------
 *
 *	�����ƥॲ�åȥӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_item_on(Actor_Environment *this, int item_no);
#endif

/*-----------------------------------------------------------------------
 *
 *	�����å��ӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_sw_Check(Game_play *game_play, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	�����å��ӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_sw_On(Game_play *game_play, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	�����å��ӥåȣϣƣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_sw_Off(Game_play *game_play, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	�����å��ѥ����å��ӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_sw_c_Check(Game_play *game_play, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	�����å��ѥ����å��ӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_sw_c_On(Game_play *game_play, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	�����å��ѥ����å��ӥåȣϣƣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_sw_c_Off(Game_play *game_play, int sw_no);

/*-----------------------------------------------------------------------
 *
 *	��Ȣ���åȥӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_Tbox_Check(Game_play *game_play, int Tbox_no);

/*-----------------------------------------------------------------------
 *
 *	��Ȣ���åȥӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_Tbox_On(Game_play *game_play, int Tbox_no);

/*-----------------------------------------------------------------------
 *
 *	�������ǥӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_room_clear_Check(Game_play *game_play, int room_no);

/*-----------------------------------------------------------------------
 *
 *	�������ǥӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_room_clear_On(Game_play *game_play, int room_no);

/*-----------------------------------------------------------------------
 *
 *	�������ǥӥåȣϣƣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_room_clear_Off(Game_play *game_play, int room_no);

/*-----------------------------------------------------------------------
 *
 *	Ũ¸��̵���ӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_no_enemy_Check(Game_play *game_play, int room_no);

/*-----------------------------------------------------------------------
 *
 *	Ũ¸��̵���ӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_no_enemy_On(Game_play *game_play, int room_no);

/*-----------------------------------------------------------------------
 *
 *	Ũ¸��̵���ӥåȣϣƣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_no_enemy_Off(Game_play *game_play, int room_no);

/*-----------------------------------------------------------------------
 *
 *	�����ƥॲ�åȥӥåȥ����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Environment_item_Check(Game_play *game_play, int item_no);

/*-----------------------------------------------------------------------
 *
 *	�����ƥॲ�åȥӥåȣϣ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Environment_item_On(Game_play *game_play, int item_no);

/************************************************************************
 *
 *	��������̾��ɽ�� ���饹
 *
 ************************************************************************/
typedef struct {
    unsigned char	*texture;
    short		x;
    short		y;
    unsigned char	w;
    unsigned char	h;
    unsigned char	timer;
    unsigned char	wait_timer;
    short		alpha;
    short		color;
} Actor_Name_Disp;

/*-----------------------------------------------------------------------
 *
 *	̾��ɽ�����󥹥ȥ饯��
 *
 *----------------------------------------------------------------------*/
extern void Actor_Name_Disp_ct(
    Game_play	    *game_play,
    Actor_Name_Disp *this
);

/*-----------------------------------------------------------------------
 *
 *	̾��ɽ�����å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_Name_Disp_Set(
    Game_play	    *game_play,
    Actor_Name_Disp *this,
    unsigned char   *texture,
    short	    x,
    short	    y,
    unsigned char   w,
    unsigned char   h
);

extern void Actor_Name_Disp_Set2(
    Game_play	    *game_play,
    Actor_Name_Disp *this,
    unsigned char   *texture,
    int		    x,
    int		    y,
    int		    w,
    int		    h,
    int		    start_wait_timer 
);

/*-----------------------------------------------------------------------
 *
 *	̾��ɽ������
 *
 *----------------------------------------------------------------------*/
extern void Actor_Name_Disp_Move(
    Game_play	    *game_play,
    Actor_Name_Disp *this
);

/*-----------------------------------------------------------------------
 *
 *	̾��ɽ��
 *
 *----------------------------------------------------------------------*/
extern void Actor_Name_Disp_Draw(
    Game_play	    *game_play,
    Actor_Name_Disp *this
);

/*-----------------------------------------------------------------------
 *
 *	������̾ɽ������󥻥�
 *
 *----------------------------------------------------------------------*/
extern int Actor_Name_Disp_Cancel(
    Game_play 	    *game_play,
    Actor_Name_Disp *this
);

/*-----------------------------------------------------------------------
 *
 *	̾��ɽ��������å�
 *
 *----------------------------------------------------------------------*/
#if 0

#define	Name_Disp_Check(game_play)	((game_play)->actor_info.name_disp.wait_timer || \
					 (game_play)->actor_info.name_disp.alpha)
#else
    
#define	Name_Disp_Check(game_play)	(0)
#define	Name_Disp_Check2(game_play)	((game_play)->actor_info.name_disp.wait_timer || \
					 (game_play)->actor_info.name_disp.alpha)

#endif

/************************************************************************
 *
 *	�������򥯥饹
 *
 ************************************************************************/
/*
 * �ѿ�������ޥ���
 */
#define	Act_vst_s_c(member, data)		{V_C, V_S_CHAR,      offsetof(Actor, member), (int)(data)}
#define	Act_vst_s_c_e(member, data)		{V_E, V_S_CHAR,      offsetof(Actor, member), (int)(data)}
#define	Act_vst_u_c(member, data)		{V_C, V_U_CHAR,      offsetof(Actor, member), (int)(data)}
#define	Act_vst_u_c_e(member, data)		{V_E, V_U_CHAR,      offsetof(Actor, member), (int)(data)}
#define	Act_vst_s_s(member, data)		{V_C, V_S_SHORT,     offsetof(Actor, member), (int)(data)}
#define	Act_vst_s_s_e(member, data)		{V_E, V_S_SHORT,     offsetof(Actor, member), (int)(data)}
#define	Act_vst_u_s(member, data)		{V_C, V_U_SHORT,     offsetof(Actor, member), (int)(data)}
#define	Act_vst_u_s_e(member, data)		{V_E, V_U_SHORT,     offsetof(Actor, member), (int)(data)}
#define	Act_vst_s_i(member, data)		{V_C, V_S_INT,       offsetof(Actor, member), (int)(data)}
#define	Act_vst_s_i_e(member, data)		{V_E, V_S_INT,       offsetof(Actor, member), (int)(data)}
#define	Act_vst_u_i(member, data)		{V_C, V_U_INT,       offsetof(Actor, member), (int)(data)}
#define	Act_vst_u_i_e(member, data)		{V_E, V_U_INT,       offsetof(Actor, member), (int)(data)}
#define	Act_vst_f(member, data)			{V_C, V_FLOAT,       offsetof(Actor, member), (int)(data)}
#define	Act_vst_f_e(member, data)		{V_E, V_FLOAT,       offsetof(Actor, member), (int)(data)}
#define	Act_vst_f_x1000(member, data)		{V_C, V_FLOAT_X1000, offsetof(Actor, member), (int)((data) * 1000.0f)}
#define	Act_vst_f_x1000_e(member, data)		{V_E, V_FLOAT_X1000, offsetof(Actor, member), (int)((data) * 1000.0f)}
#define	Act_vst_xyz_t(member, data)		{V_C, V_XYZ_T,       offsetof(Actor, member), (int)(data)}
#define	Act_vst_xyz_t_e(member, data)		{V_E, V_XYZ_T,       offsetof(Actor, member), (int)(data)}
#define	Act_vst_xyz_t_x1000(member, data)	{V_C, V_XYZ_T_X1000, offsetof(Actor, member), (int)((data) * 1000.0f)}
#define	Act_vst_xyz_t_x1000_e(member, data)	{V_E, V_XYZ_T_X1000, offsetof(Actor, member), (int)((data) * 1000.0f)}
#define	Act_vst_s_xyz(member, data)		{V_C, V_S_XYZ,       offsetof(Actor, member), (int)(data)}
#define	Act_vst_s_xyz_e(member, data)		{V_E, V_S_XYZ,       offsetof(Actor, member), (int)(data)}

enum {
    BGCHECK_TYPE_BASIC,	/* �̾�£ǥ����å������� */
    BGCHECK_TYPE_PLAYER	/* �ץ쥤�䡼�ѣ£ǥ����å������� */
};

#define	ENVIRONMENT_INFO_GROUND		(1)	/* ������ */
#define	ENVIRONMENT_INFO_LANDING	(1<<1)	/* ���Ϥνִ� */
#define	ENVIRONMENT_INFO_GROUND_LEAVE	(1<<2)	/* ����ؤνִ� */
#define	ENVIRONMENT_INFO_WALL		(1<<3)	/* �ɾ��� */
#define	ENVIRONMENT_INFO_ROOF		(1<<4)	/* ŷ����� */
#define	ENVIRONMENT_INFO_WATER		(1<<5)	/* ���� */
#define	ENVIRONMENT_INFO_WATER_DIVE	(1<<6)	/* ����ؤνִ� */
#define	ENVIRONMENT_INFO_GROUND_HIT	(1<<7)	/* ������ */
#define	ENVIRONMENT_INFO_SANDWICH	(1<<8)	/* ŷ��Ⱦ����ޤ� */
#define	ENVIRONMENT_INFO_FRONT_WALL	(1<<9)	/* �ʥץ쥤�䡼���ѡ� */

enum {
    ANCHOR_RANGE_A,
    ANCHOR_RANGE_B,
    ANCHOR_RANGE_C,
    ANCHOR_RANGE_D,
    ANCHOR_RANGE_E,
    ANCHOR_RANGE_F,
    ANCHOR_RANGE_G,	/* ���Ȼ���! �ɲä��ޤ�����	*/
    ANCHOR_RANGE_H,
    ANCHOR_RANGE_I,
    ANCHOR_RANGE_P,	/* �ƥ����� */
    ANCHOR_RANGE_MAX
};

typedef struct {
    float	range;
    float	cancel_ratio;
} Anchor_Status;

extern Anchor_Status	anchor_status_data[ANCHOR_RANGE_MAX];

/*
 * ���ͥ����å�����
 */
typedef struct {
    COLLISION_PIPE_S	bg_pipe;	/* BG�����å��ѥ��ꥸ������ */
    COLLISION_PIPE_S	body_pipe;	/* ��������å��� */
} Collision_Info;

/*
 * ʣ���ɣ£ǥ����å�
 */
typedef struct {
    float	offset_y;
    float	pipe_r;
} WallCheck_Point;

/*
 * �������򥯥饹
 */
struct ACTOR {
    short		name;			/* ̾�� */
    unsigned char	part;			/* ���� */
    signed char		room_ID;		/* �����Σ� */
    
    unsigned int	status;			/* ���� */
    Position_Angle	home;			/* ���åȺ�ɸ������ */
    
    short		arg_data;		/* �����ǡ��� */
    signed char		bank_ID;		/* �ǡ����Х󥯥ơ��֥�Σ� */
    signed char		anchor_range;		/* ���ܲ�ǽ��Υ������ */

    u16			level_SE_flag;		/* ��٥�ӣ��ѥե饰 */
    
    Position_Angle	world;			/* ���ߺ�ɸ������ */
    Position_Angle	eye;			/* ������ɸ������ */
    float		anchor_offset_y;	/* ���ܣٺ�ɸ���ե��å��� */
    xyz_t		scale;			/* �������� */
    xyz_t		position_speed;		/* ��ɸ®�� */ 
    
    float		speedF;			/* ��������ɸ®�� */
    float		gravity;		/* ���� */
    float		max_speed_y;		/* �����®�� */

    T_Polygon		*wall_polygon_info;	/* �ɥݥꥴ�����ݥ��� */
    T_Polygon		*ground_polygon_info;	/* ���ݥꥴ�����ݥ��� */
    
    unsigned char	wall_bg_actor_index;	/* �ɥ�����������ǥå����ʥ����ʥߥå��ѡ�*/
    unsigned char	ground_bg_actor_index;	/* �ɥ�����������ǥå����ʥ����ʥߥå��ѡ�*/
    short		wall_angle_y;		/* �ɳ��� */
    
    float		ground_y;		/* ����ɸ */
    float		water_surface_y;	/* ���̣ٵ�Υ */
    
    unsigned short	environment_info;	/* �Ķ����� */
    short		player_angle_y;		/* �ץ쥤�䡼�ȤΣټ����� */
    
    float		player_range;		/*               ��Υ */
    float		player_distance;	/*               �أ�ʿ�̵�Υ */
    float		player_high;		/*               �ٵ�Υ */
#if 0
    Collision_Info	collision;		/* ���ͥ����å�����:����� */
    DAMAGE_S            damage;                 /* ���᡼������:����� */
#endif
    Status              status_info;            /* ���ơ����� */
    Shape_Info		shape;			/* �������׾��� */

    xyz_t		camera_position;	/* �����ݥ������ */
    float		camera_w;		/* �������� */			
    float		cull_z;			/* ����󥰵�Υ */
    float		cull_r;			/* �����Ⱦ�� */
    float		cull_y;			/* ����󥰹⤵ */
    
    xyz_t		old_position;		/* ���ե졼���ɸ */
    
    unsigned char	anchor_flag;		/* ���ܥե饰 */
    unsigned char	anchor_wait;		/* �����Ԥ������ޡ� */
    unsigned short	talk_message;		/* ���å�å������ֹ� */

    unsigned short	stop_timer;		/* ��ߥ����ޡ� */
    unsigned short	fog_data;	/* ���᡼�� �� �ե꡼�� �ե����ǡ��� */

    unsigned char	fog_timer;		/* �ե��������ޡ� */
    unsigned char	draw_status;		/* ɽ������ */
						/* 0:��ɽ�� !0:ɽ�� */
    unsigned char	item_bit;		/* ���������ƥ�ӥå� */
    unsigned char	profile_message;	/* �ץ�ե������å����� */
    
    Actor		*mother;		/* �ƣ�������ݥ��� */
    Actor		*child;			/* ��			*/
    Actor		*pre;			/* ��			*/
    Actor		*next;			/* ��			*/
    
    void (*constract_proc)(Actor *, Game *);	/* ���󥹥ȥ饯�ȴؿ��ݥ��� */ 	
    void (*destruct_proc)(Actor *, Game *);	/* �ǥ��ȥ饯�ȴؿ��ݥ��� */
    void (*move_proc)(Actor *, Game *);		/* �����ؿ��ݥ��� */
    void (*draw_proc)(Actor *, Game *);		/* ɽ���ؿ��ݥ��� */
#if 0
    /* �������ɸ�ؿ�:����� */
    int (* sword_defence_proc)(Actor *actor, Game *game,
			       Actor *attacker,
			       COLLISION_TRIANGLE_S *tri1, /* ���λ��ѷ��ΰ� */
			       COLLISION_TRIANGLE_S *tri2);
#endif
    /*DLFTBL_ACTOR*/ void *dlftbl;		/* �����С��쥤�Ѵ����ݥ��� */
#ifdef ROM_D
    u32 filler[4];				/* �ɲ�Ĵ���ѥ��ߡ��ΰ� */
#endif
};

/*-----------------------------------------------------------------------
 *
 *	��������ɽ�����֥����å�
 *
 *----------------------------------------------------------------------*/
#define	Actor_isDraw(this)	((this)->draw_status != 0)
#define	Actor_setDraw(this)	((this)->draw_status = 1)
#define	Actor_resetDraw(this)	((this)->draw_status = 0)

/*-----------------------------------------------------------------------
 *
 *	���������������å�
 *
 *----------------------------------------------------------------------*/
#define	Actor_bitcheck_status(this, bit_data)	bitcheck((this)->status, (bit_data))

/*-----------------------------------------------------------------------
 *
 *	���������������å�
 *
 *----------------------------------------------------------------------*/
#define	Actor_check_status(this, bit_data)	(bitcheck((this)->status, (bit_data)) == (bit_data))

/*-----------------------------------------------------------------------
 *
 *	����������󥻥å�
 *
 *----------------------------------------------------------------------*/
#define	Actor_set_status(this, bit_data)	bitset((this)->status, (bit_data))

/*-----------------------------------------------------------------------
 *
 *	�����������ꥻ�å�
 *
 *----------------------------------------------------------------------*/
#define	Actor_clear_status(this, bit_data)	bitclr((this)->status, (bit_data))

/*-----------------------------------------------------------------------
 *
 *	��������ʬ�����������å�
 *
 *----------------------------------------------------------------------*/
#define	Actor_my_room_check(game_play, this)	((this)->room_ID == (game_play)->room_info.now.ID)

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼��������ˤ����֥����å�
 *
 *----------------------------------------------------------------------*/
#define	Actor_player_swim_check(player_actor)	(bitcheck(((Player_actor *)player_actor)->action, P_ACTION_SWIM))

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼������������ƻ��ȯ�ͥ����å�
 *
 *----------------------------------------------------------------------*/
#define	Actor_player_shoot_check(player_actor)	(((Player_actor *)player_actor)->shoot_timer)

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼���������������å�
 *
 *----------------------------------------------------------------------*/
#define Actor_player_glass_check(game_play)	((game_play)->actor_info.magic_grass)

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�������������׵�
 *
 *----------------------------------------------------------------------*/
#define	Actor_anchor_request(game_play, this)	(((Player_actor *)get_player_actor(game_play))->anchor_request_actor = this)

/*-----------------------------------------------------------------------
 *
 *	�����������������׵�
 *
 *----------------------------------------------------------------------*/
#define	Actor_elf_anchor_request(game_play, this)	(game_play->actor_info.anchor_marker.anchor_request_actor = this)

/*-----------------------------------------------------------------------
 *
 *	�������򥯥饹�������
 *
 *----------------------------------------------------------------------*/
extern void Actor_delete(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	���åȺ�ɸ�������򸽺ߺ�ɸ��������
 *
 *----------------------------------------------------------------------*/
extern void Actor_home_to_world(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	���åȺ�ɸ�������򸽺ߺ�ɸ��������
 *
 *----------------------------------------------------------------------*/
extern void Actor_world_to_eye(
    Actor *this,
    float offset_y
);
/*-----------------------------------------------------------------------
 *
 *	�������������򸽺�������
 *
 *----------------------------------------------------------------------*/
extern void Actor_shape_to_world(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	���������򥷥�����������
 *
 *----------------------------------------------------------------------*/
extern void Actor_world_to_shape(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	�������륻�å�							*
 *
 *----------------------------------------------------------------------*/
extern void Actor_set_scale(
    Actor *this,
    float scale
);
/*-----------------------------------------------------------------------
 *
 *	�ǡ���������������
 *
 *----------------------------------------------------------------------*/
extern void Actor_set_segment(
    Game_play *game_play,
    Actor     *this
);
/*-----------------------------------------------------------------------
 *
 *	�������򥯥饹 ���󥹥ȥ饯��
 *
 *----------------------------------------------------------------------*/
extern void Actor_ct(
    Actor *this,
    Game  *game
);
/*-----------------------------------------------------------------------
 *
 *	�������򥯥饹 �ǥ��ȥ饯��
 *
 *----------------------------------------------------------------------*/
extern void Actor_dt(
    Actor *this,
    Game  *game
);
/*-----------------------------------------------------------------------
 *
 *	��ư�׻�
 *
 *----------------------------------------------------------------------*/
extern void Actor_position_move(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	��ư®�٥��å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_position_speed_set(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	��ư®�٥��åȡܰ�ư�׻�
 *
 *----------------------------------------------------------------------*/
extern void Actor_position_moveF(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	��ư®�٥��åȡʡܣ�������
 *
 *----------------------------------------------------------------------*/
extern void Actor_position_speed_set_XY(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	��ư®�٥��åȡܰ�ư�׻��ʡܣ�������
 *
 *----------------------------------------------------------------------*/
extern void Actor_position_moveF_XY(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	���İ�ư®�٥��å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_vector_to_position_speed(
    Actor *this,
    float vector_speed
);
/*-----------------------------------------------------------------------
 *
 *	���˥᡼�����ȥ�󥹥졼�Ȱ�ư�׻�
 *
 *----------------------------------------------------------------------*/
extern void Actor_position_move_anime(
    Actor         *this,
    Skeleton_Info *skeleton
);
/*-----------------------------------------------------------------------
 *
 *	��������أ�ʿ������������
 *
 *----------------------------------------------------------------------*/
extern short Actor_search_actor_angleY(
    Actor *this,
    Actor *target_actor
);
/*-----------------------------------------------------------------------
 *
 *	��������Υ�������������أ�ʿ�������׻�
 *
 *----------------------------------------------------------------------*/
extern short Actor_eye_search_actor_angleY(
    Actor *this,
    Actor *target_actor
);
/*-----------------------------------------------------------------------
 *
 *	��������ɸ�أ�ʿ�������׻�
 *
 *----------------------------------------------------------------------*/
extern short Actor_search_position_angleY(
    Actor *this,
    xyz_t *target_position
);
/*-----------------------------------------------------------------------
 *
 *	��������������٣�ʿ�������׻�
 *
 *----------------------------------------------------------------------*/
extern short Actor_search_actor_angleX(
    Actor *this,
    Actor *target_actor
);
/*-----------------------------------------------------------------------
 *
 *	��������Υ�������������٣�ʿ�������׻�
 *
 *----------------------------------------------------------------------*/
extern short Actor_eye_search_actor_angleX(
    Actor *this,
    Actor *target_actor
);
/*-----------------------------------------------------------------------
 *
 *	��������ɸ�٣�ʿ�������׻�
 *
 *----------------------------------------------------------------------*/
extern short Actor_search_position_angleX(
    Actor *this,
    xyz_t *target_position
);
/*-----------------------------------------------------------------------
 *
 *	�������������򣳣ĵ�Υ�׻�
 *
 *----------------------------------------------------------------------*/
extern float Actor_search_actor_distance(
    Actor *this,
    Actor *target_actor
);
/*-----------------------------------------------------------------------
 *
 *	��������ɸ���ĵ�Υ�׻�
 *
 *----------------------------------------------------------------------*/
extern float Actor_search_position_distance(
    Actor *this,
    xyz_t *target_position
);
/*-----------------------------------------------------------------------
 *
 *	��������������أ�ʿ�̵�Υ�׻�
 *
 *----------------------------------------------------------------------*/
extern float Actor_search_actor_distanceXZ(
    Actor *this,
    Actor *target_actor
);
/*-----------------------------------------------------------------------
 *
 *	��������ɸ�أ�ʿ�̵�Υ�׻�
 *
 *----------------------------------------------------------------------*/
extern float Actor_search_position_distanceXZ(
    Actor *this,
    xyz_t *target_position
);
/*-----------------------------------------------------------------------
 *
 *	��������ɸ�أ�ʿ����Ƶ�Υ�׻�
 *
 *----------------------------------------------------------------------*/
extern void Actor_search_position_project_distanceXZ(
    Actor *this,
    xyz_t *distance,
    xyz_t *target_position
);
/*-----------------------------------------------------------------------
 *
 *	��������������ٵ�Υ�׻�
 *
 *----------------------------------------------------------------------*/
extern float Actor_search_actor_high(
    Actor *this,
    Actor *target_actor
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼��Ĺ���å�
 *
 *----------------------------------------------------------------------*/
extern float player_get_tall(
    Actor *thisx
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼���祹�ԡ��ɥ��å�
 *
 *----------------------------------------------------------------------*/
extern float player_get_max_speed(
    Actor *thisx
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼����⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int player_bow_check(
    Actor *thisx
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼���𹽤������å�
 *
 *----------------------------------------------------------------------*/
extern int player_bow_ready_check(
    Actor *thisx
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼��Ʈ�⡼�ɥ����å�
 *
 *----------------------------------------------------------------------*/
extern int player_fight_check(
    Game_play *game_play
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�����С��������������å�
 *
 *----------------------------------------------------------------------*/
extern int player_big_SE_action_check(
    Game_play *game_play
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼���ң�����Ф������ߥե饰�����å�
 *
 *----------------------------------------------------------------------*/
extern int player_climb_stop_check(
    Game_play *game_play
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�եå�����åȰ���ĥ��������ؤ�
 *
 *----------------------------------------------------------------------*/
extern void player_hook_carry_change(
    Game_play *game_play,
    Actor     *carry_actor,
    Actor     *change_actor
);
/*-----------------------------------------------------------------------
 *
 *	���ϥ��֥���饻�å�
 *
 *----------------------------------------------------------------------*/
extern void player_make_horse_camera(
    Game_play *game_play,
    Actor     *thisx
);
/*-----------------------------------------------------------------------
 *
 *	���Ͻ������
 *
 *----------------------------------------------------------------------*/
extern void player_ride_horse_init(
    Game_play *game_play,
    Actor     *this,
    Actor     *horse_actor
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�ǥ⥻�å�
 *
 *----------------------------------------------------------------------*/
extern int player_demo_mode_set2(
    Game_play     *game_play,
    Actor         *thisx,
    unsigned char mode
);
extern int player_demo_mode_set(
    Game_play     *game_play,
    Actor         *thisx,
    unsigned char mode
);

#if 0
/*-----------------------------------------------------------------------
 *
 *	�����ʥߥå��£ǥѥ���ꥢ��
 *
 *----------------------------------------------------------------------*/
extern void MoveBG_Actor_power_clear(
    MoveBG_Actor *this
);

/*-----------------------------------------------------------------------
 *
 *	�����ʥߥå��£ǥѥ���å�
 *
 *----------------------------------------------------------------------*/
extern void MoveBG_Actor_powerF_set(
    MoveBG_Actor *this,
    float	 powerF,
    short	 power_angle_y
);
#endif

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�����ä�������Ƥ��뤫�������å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_player_look_direction_check(
    Actor     *this,
    short     angle,
    Game_play *game_play
);


/*-----------------------------------------------------------------------
 *
 *	�£ǥ����å�							*
 *
 *----------------------------------------------------------------------*/
#define	GROUND_NO_HIT_OK_OFFSET_Y	-11.0f

extern int ground_no_hit_set(
    Actor *this,
    float ground_offset_y,
    int	  flag
);

/*-----------------------------------------------------------------------
 *
 *	���������򤬤��ä�������Ƥ��뤫�������å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_look_direction_check(
    Actor *this,
    Actor *target_actor,
    short angle
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�Τ������������å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_player_direction_check(
    Actor *this,
    short angle
);
/*-----------------------------------------------------------------------
 *
 *	��������Τ������������å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_actor_direction_check(
    Actor *this,
    Actor *target_actor,
    short angle
);
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�Τ����Υ�����������å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_player_distance_direction_check(
    Actor *this,
    float distance,
    short angle
);
/*-----------------------------------------------------------------------
 *
 *	��������Τ����Υ�����������å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_actor_distance_direction_check(
    Actor *this,
    Actor *target_actor,
    float distance,
    short angle
);
/*-----------------------------------------------------------------------
 *
 *	�£ǥ����å�							*
 *
 *----------------------------------------------------------------------*/
#define	BGCHECK_WALL			(1)
#define	BGCHECK_ROOF			(1<<1)
#define	BGCHECK_GROUND			(1<<2)
#define	BGCHECK_GROUND_DOWN_SP_SET	(1<<3)
#define	BGCHECK_GROUND_LEAVE_SP_CLR	(1<<4)
#define	BGCHECK_WALL_HIT_CONTINUE	(1<<5)
#define	BGCHECK_WALL_HIT_CONTINUE	(1<<5)
#define	BGCHECK_RIPPLE_NOSET		(1<<6)
#define BGCHECK_WALL_LINE_CHECK_OFF     (1<<7)

#define	GROUND_HIT_SET_SPEED_Y		-4.0f

/*-----------------------------------------------------------------------
 *
 *	�ʿ��ˣ£ǥ����å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_BGcheck2(
    Game_play *game_play,
    Actor     *this,
    float     wall_check_h,
    float     wall_check_r,
    float     roof_check_h,
    int	      flag
);

#if 0
/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�£ǥ����å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_many_wall_BGcheck(
    Actor	     *this,
    int		     wall_check_max,
    WallCheck_Point  *wall_check_point,
    WallCheck_Result *wallcheck_result,
    unsigned char    *BG_hit_count,
    Game	     *game
);
#endif

/*-----------------------------------------------------------------------
 *
 *	�ϥ��饤�ȴĶ��ޥåԥ���Ͽ
 *
 *----------------------------------------------------------------------*/
extern Gfx *HiliteReflect_new(
    xyz_t  *object,
    xyz_t  *eye,
    xyz_t  *light_direction,
    Graph  *graph,
    Gfx	   *gfxp,
    Hilite **hilitep
);
/*-----------------------------------------------------------------------
 *
 *	�ϥ��饤�ȴĶ��ޥåԥ󥰽������
 *
 *----------------------------------------------------------------------*/
extern Hilite *HiliteReflect_init(
    xyz_t *object,
    xyz_t *eye,
    xyz_t *light_direction,
    Graph *graph
);
/*-----------------------------------------------------------------------
 *
 *	�ϥ��饤�ȴĶ��ޥåԥ󥰽�������ȾƩ����
 *
 *----------------------------------------------------------------------*/
extern Hilite *HiliteReflect_xlu_init(
    xyz_t *object,
    xyz_t *eye,
    xyz_t *light_direction,
    Graph *graph
);
/*-----------------------------------------------------------------------
 *
 *	��������ϥ��饤�ȴĶ��ޥåԥ�����ǡ������å�
 *
 *----------------------------------------------------------------------*/
#define	Actor_HiliteReflect_set(this, game_play)	\
	Actor_HiliteReflect_set_init(this, game_play, OFF)

#define	Actor_HiliteReflect_sp_set(this, game_play)	\
	Actor_HiliteReflect_set_init(this, game_play, ON)

extern void Actor_HiliteReflect_set_init(
    Actor     *this,
    Game_play *game_play,
    int	      flag
);
/*-----------------------------------------------------------------------
 *
 *	��������ϥ��饤�ȴĶ��ޥåԥ�����ǡ������åȡ�ȾƩ����
 *
 *----------------------------------------------------------------------*/
#define	Actor_HiliteReflect_xlu_set(this, game_play)	\
	Actor_HiliteReflect_xlu_set_init(this, game_play, OFF)

#define	Actor_HiliteReflect_xlu_sp_set(this, game_play)	\
	Actor_HiliteReflect_xlu_set_init(this, game_play, ON)

extern void Actor_HiliteReflect_xlu_set_init(
    Actor     *this,
    Game_play *game_play,
    int	      flag
);
/*-----------------------------------------------------------------------
 *
 *	������ɸ�������ɤ߹���
 *
 *----------------------------------------------------------------------*/
extern Position_Angle Actor_get_eye(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	���ɺ�ɸ�������ɤ߹���
 *
 *----------------------------------------------------------------------*/
extern Position_Angle Actor_get_world(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	�������׺�ɸ�������ɤ߹���
 *
 *----------------------------------------------------------------------*/
extern Position_Angle Actor_get_shape(
    Actor *this
);
/*-----------------------------------------------------------------------
 *
 *	�������������٥����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_anchor_check(
    Actor *this,
    Actor *player,
    int	  flag
);

/*-----------------------------------------------------------------------
 *
 *	���å����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_talk_check(
    Actor     *this,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	���ðջץ��å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_talk_request_get_item_set(
    Actor     *this,
    Game_play *game_play,
    float     size_r,
    float     size_h,
    int	      get_item
);

extern int Actor_talk_request_get_item(
    Actor     *this,
    Game_play *game_play,
    float     size_r,
    int	      get_item
);

extern int Actor_talk_request2(
    Actor     *this,
    Game_play *game_play,
    float     size_r
);

extern int Actor_talk_request(
    Actor     *this,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	���ý�λ�����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_talk_end_check(
    Actor     *this,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼����Υ��åȥ����ƥ�����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_get_item_check(
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	ɽ����ɸ�׻�
 *
 *----------------------------------------------------------------------*/
extern void Actor_display_position_set(
    Game_play *game_play,
    Actor     *this,
    short     *display_x,
    short     *display_y
);

/*-----------------------------------------------------------------------
 *
 *	�����夲�������å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_carry_check(
    Actor     *this,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	�����ƥ��������夲���ջץ��å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_carry_request_set2(
    Actor     *this,
    Game_play *game_play,
    int	      flag,
    float     size_r,
    float     size_h
);

/*-----------------------------------------------------------------------
 *
 *	�����ƥ��������夲���ջץ��å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_carry_request_set(
    Actor     *this,
    Game_play *game_play,
    int	      flag
);

/*-----------------------------------------------------------------------
 *
 *	�����夲���ջץ��å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_carry_request(
    Actor     *this,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	�����夲��콪λ�����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_carry_end_check(
    Actor     *this,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	�����夲��������ؤ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_carry_change(
    Actor     *this,
    Actor     *change_actor,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	�������󥰰ջ��׵�
 *
 *----------------------------------------------------------------------*/
extern void Actor_dowsing_request(
    Actor     *this,
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	��������å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_ride_check(
    Game_play *game_play,
    Actor     *this
);

/*-----------------------------------------------------------------------
 *
 *	����ջץ��å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_ride_request(
    Game_play *game_play,
    Actor     *this,
    int	      direction
);

/*-----------------------------------------------------------------------
 *
 *	���콪λ�����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_ride_end_check(
    Game_play *game_play,
    Actor     *this
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼������Ф����å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_player_power_damage_set_init(
    Game_play *game_play,
    Actor     *this,
    float     speedF,
    short     angle_y,
    float     speed_y,
    int	      type,
    int	      damage
);
extern void Actor_player_power_damage_AT_set(
    Game_play *game_play,
    Actor     *this,
    float     speedF,
    short     angle_y,
    float     speed_y,
    int	      damage
);
extern void Actor_player_power_damage_set(
    Game_play *game_play,
    Actor     *this,
    float     speedF,
    short     angle_y,
    float     speed_y
);
extern void Actor_player_power_damage_AT_set2(
    Game_play *game_play,
    Actor     *this,
    float     speedF,
    short     angle_y,
    float     speed_y,
    int	      damage
);
extern void Actor_player_power_damage_set2(
    Game_play *game_play,
    Actor     *this,
    float     speedF,
    short     angle_y,
    float     speed_y
);

#if 0
/*-----------------------------------------------------------------------
 *
 *	Ω���Υ��ꥸ�������å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_box_collision_check(
    Actor *this,
    xyz_t *box_center,
    float box_h,
    float box_w,
    float box_d,
    short box_angle_y
);
#endif

/*----------------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�ѣӣť��å�
 *
 *---------------------------------------------------------------------------*/
extern void player_SE_set(
    Actor *this,
    u16   SE_flag
);

/*-----------------------------------------------------------------------
 *
 *	�ӣť��å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_SE_set(
    Actor *this,
    u16   SE_flag
);

/*-----------------------------------------------------------------------
 *
 *	���ϣӣť��åȡʾ��Σ£ǥ����å��ס�����
 *
 *----------------------------------------------------------------------*/
extern void Actor_bound_SE_set(
    Game_play *game_play,
    Actor     *this
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼�����ץ�٥�ӣťե饰���å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_player_level_SE_set(
    Actor *this,
    u16   flag
);

/*-----------------------------------------------------------------------
 *
 *	�����ƥॿ���ץ�٥�ӣťե饰���å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_system_level_SE_set(
    Actor *this,
    u16 flag
);

/*-----------------------------------------------------------------------
 *
 *	���꥿���ץ�٥�ӣťե饰���å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_fix_level_SE_set(
    Actor *this,
    u16 flag
);

/*-----------------------------------------------------------------------
 *
 *	���֥������ȥ����ץ�٥�ӣťե饰���å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_level_SE_set(
    Actor *this,
    u16   flag
);

/*-----------------------------------------------------------------------
 *
 *	�����ޡ���٥�ӣťե饰���å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_timer_level_SE_set(
    Actor *this,
    int timer
);

/*-----------------------------------------------------------------------
 *
 *	����֥��������¡�ˤꥻ�å�
 *
 *----------------------------------------------------------------------*/
extern int jyabujyabu_kiru_check(
    Game_play *game_play,
    Actor     *this,
    T_Polygon *polygon_info,
    int	      bg_actor_index,
    xyz_t     *hit_pos
);

/************************************************************************
 *
 *	��������ǡ������饹
 *
 ************************************************************************/
#define	ACTOR_MAX	200	/* ����������祻�åȲ�ǽ�� */

/*
 * �����ơ��֥�
 */
enum {
    ACTOR_PART_SWITCH,
    ACTOR_PART_FRIEND,
    ACTOR_PART_PLAYER,
    ACTOR_PART_BOM,
    ACTOR_PART_PEOPLE,
    ACTOR_PART_ENEMY,
    ACTOR_PART_OBJ,
    ACTOR_PART_EFFECT,
    ACTOR_PART_ITEM,
    ACTOR_PART_BOSS,
    ACTOR_PART_DOOR,
    ACTOR_PART_TREASURE,
    ACTOR_PART_MAX
}; 

/*
 * ����ơ��֥�
 */
#define	ACTOR_STATUS_NON		(0)
#define	ACTOR_STATUS_ANCHOR_KEEP	(1)					/* �����оݡ� */
#define	ACTOR_STATUS_ANCHOR		ACTOR_STATUS_ANCHOR_KEEP		/* ���ܷ�³�� */
#define	ACTOR_STATUS_FIGHT		((1<<2) | ACTOR_STATUS_ANCHOR)		/* ���ͭ�ꡩ */
#define	ACTOR_STATUS_TALK		((1<<3) | ACTOR_STATUS_ANCHOR)		/* ����ͭ�ꡩ */
#define	ACTOR_STATUS_NO_CULL_MOVE	(1<<4)					/* ����󥰤�ư�������ߤ��ʤ��� */
#define	ACTOR_STATUS_NO_CULL_DRAW	(1<<5)					/* ����󥰤����������ߤ��ʤ��� */
#define	ACTOR_STATUS_NO_CULL_FLAG	(1<<6)					/* ����󥰵�Υ���ե饰�ʷ�̥ե饰�� */
#define	ACTOR_STATUS_INVISIBLE		(1<<7)					/* �����ʤ��ե饰 */
#define	ACTOR_STATUS_TALKING_NOW	(1<<8)					/* ������ե饰 */
#define	ACTOR_STATUS_HOOK_CARRY		(1<<9)					/* �եå�����åȰ���ĥ���ե饰 */
#define	ACTOR_STATUS_HOOK_STOP		(1<<10)					/* �եå�����åȰ���ĥ��ե饰 */
#define	ACTOR_STATUS_ZOMBI		(1<<11)					/* ����Ӥʥե饰 */
#define	ACTOR_STATUS_NO_QUAKE		(1<<12)					/* �Ͽ̱ƶ�̵���ե饰 */
#define	ACTOR_STATUS_HOOK_CARRY_NOW	(1<<13)					/* �եå�����åȰ���ĥ�����ե饰 */
#define ACTOR_STATUS_ARROW_CARRY	(1<<14)					/* �𲡤���ե饰 */
#define ACTOR_STATUS_ARROW_CARRY_NOW	(1<<15)					/* �𲡤�����ե饰 */
#define ACTOR_STATUS_TALK_PLEASE	(1<<16)					/* ���ö��ץե饰 */
#define ACTOR_STATUS_CARRY_ANGLE_SET	(1<<17)					/* �����夲�����٥��åȥե饰 */
#define ACTOR_STATUS_ELF_MAIL		(1<<18 | ACTOR_STATUS_ANCHOR)		/* �����ؤΥ᡼��ͭ�ꡩ */
#define	ACTOR_STATUS_LEVEL_SE_PLAYER	(1<<19)					/* ��٥�ӣť��åȥ����סʥץ쥤�䡼�� */
#define	ACTOR_STATUS_LEVEL_SE_SYSTEM	(1<<20)					/* ��٥�ӣť��åȥ����סʥ����ƥ�� */
#define	ACTOR_STATUS_LEVEL_SE_FIX	(1<<21)					/* ��٥�ӣť��åȥ����סʸ���� */
#define	ACTOR_STATUS_MAP_LIGHT_MODE	(1<<22)					/* �Ϸ������ץ饤�ƥ��󥰥ե饰 */
#define	ACTOR_STATUS_THROW_ONLY		(1<<23)					/* �ꤲ���Τߥե饰 */
#define	ACTOR_STATUS_BODY_HIT		(1<<24)					/* ��������ӣť��åȥե饰 */
#define	ACTOR_STATUS_OKARINA_NO_STOP	(1<<25)					/* ������ʱ��������̵���ե饰 */
#define ACTOR_STATUS_MOVEBG_ABLE_SW_ON  (1<<26)                                 /* moveBG SW�ե饰���åȤ������ե饰 */
#define ACTOR_STATUS_ANCHOR_NO_ROCK	(1<<27)                                 /* ���ܥ�å�̵���ե饰 */
#define ACTOR_STATUS_LEVEL_SE_TIMER	(1<<28)					/* ��٥�ӣť��åȥ����סʥ����ޡ��� */

typedef struct {
    short		name;					/* ̾�� */
    unsigned char	part;					/* ���� */
    unsigned int	status;					/* ���� */
    Object_Bank		bank;					/* �ǡ����Х� */
    size_t		class_size;				/* ���饹������ */
//    int		display_eye_distance;			/* ɽ��������Υ */
    void 		(*construct_proc)(Actor *,		/* ���󥹥ȥ饯�ȴؿ��ݥ��� */
					  Game *);
    void 		(*destruct_proc)(Actor *,		/* �ǥ��ȥ饯�ȴؿ��ݥ��� */
					 Game *);
    void 		(*move_proc)(Actor *,			/* �����ؿ��ݥ��� */
				     Game *);
    void 		(*draw_func)(Actor *,			/* ɽ���ؿ��ݥ��� */
				     Game *);
} Actor_profile;

typedef struct {
    short		profile;	/* ��������ץ�ե�����Σ� */
    s_xyz		position;	/* ���åȺ�ɸ */
    s_xyz		angle;		/*       ���� */
    short		arg_data;	/* �����ǡ��� */
} Actor_data;

typedef struct {
    int			num;		/* ��������ǡ����� */
    Actor_data		*actor_data;	/*                 �ݥ��� */
} Actor_data_info;

typedef struct {
    int		num;		/* ���åȿ� */
    Actor	*actor;		/* ��������ꥹ�ȥݥ��� */
} Actor_list;

typedef struct {
    unsigned char	finish;				/* �ե��˥å��奿���ޡ� */
    unsigned char	finish_type;			/* �ե��˥å��奿���� */
    unsigned char	quake_damage;			/* ���᡼���Ͽ̥����ޡ� */
    unsigned char	magic_grass;			/* ��ˡ�Υᥬ�ͥե饰 */
    unsigned char	pad1;
    short		shield_magic_timer;
    unsigned char	num;				/* ���������򥻥åȿ� */
    Actor_list		actor_list[ACTOR_PART_MAX];	/* �����̣�������ꥹ�� */
    Anchor_Marker	anchor_marker;			/* ���ܥޡ��������饹 */
    Actor_Environment	environment;			/* ��������Ķ����饹 */
    Actor_Name_Disp	name_disp;			/* ̾��ɽ�����饹 */
    void		*elf_message;			/* ������åå������ǡ����ݥ��� */
    void 		*absolute_magic_field;		/* ������ˡ�ΰ� */
} Actor_info;

/*-----------------------------------------------------------------------
 *
 *	��ˡ�Υᥬ�ͥ���󥻥�
 *
 *----------------------------------------------------------------------*/
extern void magic_grass_cancel(
    Game_play *game_play
);

/*-----------------------------------------------------------------------
 *
 *	��������ǡ������饹 ���󥹥ȥ饯��
 *
 *----------------------------------------------------------------------*/
extern void Actor_info_ct(
    Game       *game,
    Actor_info *this,
    Actor_data *player_actor_data
);

/*-----------------------------------------------------------------------
 *
 *	��������ƤӽФ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_info_call_actor(
    Game_play  *game_play,
    Actor_info *this
);

/* ɽ������󥰥����å� */
extern int Actor_draw_actor_no_culling_check(
    Game_play *game_play,
    Actor *actor);

/* ɽ������󥰥����å�:����ʬΥ�� */
extern int Actor_draw_actor_no_culling_check2(
    Game_play *game_play,
    Actor *actor,
    xyz_t *camera_position,
    float camera_w);

/*-----------------------------------------------------------------------
 *
 *	��������ɽ��(actor.h not access "Game_play" !!)
 *
 *----------------------------------------------------------------------*/
extern void Actor_info_draw_actor(
    Game_play  *game_play,
    Actor_info *this
);

/*-----------------------------------------------------------------------
 *
 *	��������ǡ����Х󥯣�����������å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_info_bank_actor_check(
    Game_play  *game_play,
    Actor_info *this
);

/*-----------------------------------------------------------------------
 *
 *	����������ߥ����ޡ����å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_info_stop_timer_set(
    Game_play  *game_play,
    Actor_info *this,
    int	       timer
);

/*-----------------------------------------------------------------------
 *
 *	��������ǡ�������������������å�
 *
 *----------------------------------------------------------------------*/
extern void Actor_info_room_actor_check(
    Game_play  *game_play,
    Actor_info *this
);

/*-----------------------------------------------------------------------
 *
 *	��������ǡ������饹 �ǥ��ȥ饯��
 *
 *----------------------------------------------------------------------*/
extern void Actor_info_dt(
    Actor_info *this,
    Game       *game
);
/*-----------------------------------------------------------------------
 *
 *	�������������̥ꥹ����Ͽ
 *
 *----------------------------------------------------------------------*/
extern void Actor_info_part_new(
    Actor_info 	  *this,
    Actor      	  *actor,
    unsigned char part
);
/*-----------------------------------------------------------------------
 *
 *	�������������̥ꥹ�Ⱥ��
 *
 *----------------------------------------------------------------------*/
extern Actor *Actor_info_part_delete(
    Game_play  *game_play,
    Actor_info *this,
    Actor      *actor
);
/*-----------------------------------------------------------------------
 *
 *	�������򥯥饹�ɲ�
 *
 *----------------------------------------------------------------------*/
extern Actor *Actor_info_make_actor(
    Actor_info *this,
    Game       *game,
    short      profile,
    float      x,
    float      y,
    float      z,
    short      sx,
    short      sy,
    short      sz,
    short      arg_data
);
/*-----------------------------------------------------------------------
 *
 *	�ң������򥯥饹�ɲ�
 *
 *----------------------------------------------------------------------*/
extern Actor *Actor_info_make_child_actor(
    Actor_info *this,
    Actor      *mother_actor,
    Game       *game,
    short      profile,
    float      x,
    float      y,
    float      z,
    short      sx,
    short      sy,
    short      sz,
    short      arg_data
);
/*-----------------------------------------------------------------------
 *
 *	�ɥ����������ɲ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_info_make_door_actor(
    Game_play  *game_play,
    Actor_info *this
);
/*-----------------------------------------------------------------------
 *
 *	�������򥯥饹��Ͽ
 *
 *----------------------------------------------------------------------*/
extern Actor *Actor_info_new(
    Actor_info *this,
    Actor_data *actor_data,
    Game       *game
);
/*-----------------------------------------------------------------------
 *
 *	�������򥯥饹���
 *
 *----------------------------------------------------------------------*/
extern Actor *Actor_info_delete(
    Actor_info *this,
    Actor      *actor,
    Game       *game
);

/*-----------------------------------------------------------------------
 *
 *	���ܣ������򥵡���
 *
 *----------------------------------------------------------------------*/
extern Actor *Actor_info_anchor_search(
    Game_play  *game_play,
    Actor_info *this,
    Actor      **primary_actorp,
    Actor      *target_actor
);

/*-----------------------------------------------------------------------
 *
 *	�������򸡺�
 *
 *----------------------------------------------------------------------*/
extern Actor *Actor_info_name_search(
    Actor_info *this,
    int        name,
    int        part
);

/*-----------------------------------------------------------------------
 *
 *	��������ե��˥å��奻�å�
 *
 *----------------------------------------------------------------------*/
//#define	ACT_FINISH_TIMER	7
//#define	ACT_FINISH_STOP_TIME	6
//#define	ACT_FINISH_FLASH_TIME	3

#define	ACT_FINISH_TIMER	(7-2)
#define	ACT_FINISH_STOP_TIME	(6-2)
#define	ACT_FINISH_FLASH_TIME	(3-2)

extern void Actor_info_finish(
    Game_play *game_play,
    Actor     *this
);

/*-----------------------------------------------------------------------
 *
 *	��������ե��˥å��奻�å�
 *
 *----------------------------------------------------------------------*/
#define	Actor_info_quake_damage_check(game_play)	((game_play)->actor_info.quake_damage)


/************************************************************************
 *
 *	�ܥ��˥᡼����󥯥饹
 *
 ************************************************************************/

/*
 * ɽ��ƥ������㡼�ݥ���
 */
typedef struct {
    unsigned char	*L_eye;
    unsigned char	*R_eye;
    unsigned char	*mouth;
} Face_Texture;

typedef struct {
    unsigned char	*eye;
    unsigned char	*mouth;
} Face_Texture1;

/*
 * �ܥ��˥᡼����󥯥饹
 */
typedef struct {
    short	pattern;	/* �ܤΥ��˥᡼����󥫥��� */
    short	timer;		/* �ܤΥ��˥᡼����󥿥��ޡ� */
} Eye_Anime;

/*-----------------------------------------------------------------------
 *
 *	�ܥ��˥᡼����󥻥å�
 *
 *----------------------------------------------------------------------*/
extern short Eye_Anime_pattern_set(
    Eye_Anime *this,
    short     min_timer,
    short     random_timer,
    short     close_timer
);

/************************************************************************
 *
 *	�����˥᡼����󥯥饹
 *
 ************************************************************************/
/*
 * �����˥᡼����󥯥饹
 */
typedef struct {
    short	pattern;	/* ���Υ��˥᡼����󥫥��� */
    short	timer;		/* ���Υ��˥᡼����󥿥��ޡ� */
} Mouth_Anime;

/*-----------------------------------------------------------------------
 *
 *	�����˥᡼����󥻥å�
 *
 *----------------------------------------------------------------------*/
extern short Mouth_Anime_pattern_set(
    Mouth_Anime *this,
    short       min_timer,
    short       random_timer,
    short       mouth_type
);

/*-----------------------------------------------------------------------
 *
 *	�ץ쥤�䡼��������ǥ���֥����å�
 *
 *----------------------------------------------------------------------*/
extern int Actor_player_demo_check(
    Actor *player_actor
);


/************************************************************************
 *
 *	�����ƥ��Ϣ
 *
 ************************************************************************/
/*-----------------------------------------------------------------------------
 *
 * ���ѥ����ƥॻ�åȡ��Ǥ��夲��
 *
 *---------------------------------------------------------------------------*/
extern Actor *Item_set0(Game *game, xyz_t *this, short item_name);
/*-----------------------------------------------------------------------------
 *
 * �����ॢ���ƥॻ�åȥѥ����󣱡ʶ�����ˡ��Ǥ��夲��
 *
 *---------------------------------------------------------------------------*/
extern Actor *Item_set1(Game *game, xyz_t *this, short item_name);

/* ɽ���⡼�� */
enum {
    ITEM00_RUPEE_1,		//   ���� ����ԡ�
    ITEM00_RUPEE_5,		//   ���� ����ԡ�
    ITEM00_RUPEE_10,		//   ���� ������ԡ�
    ITEM00_HEART,		//   ���� �ϡ���
    ITEM00_BOMB,		//   ���� ����
    ITEM00_AROW,		//   ���� ��
    ITEM00_H_KAKERA,		//   ���� �ϡ��Ȥη���
    ITEM00_H_UTUWA,		//   ���� �ϡ��Ȥδ�
    ITEM00_N_ARROW5,		//   ���� ���ܥ��å�
    ITEM00_N_ARROW20,		//   ���� �𣲣��ܥ��å�
    ITEM00_N_ARROW50,		// ������ �𣵣��ܥ��å�
    ITEM00_N_BOMB,		// ������ ����
    ITEM00_N_NUTS,		// ������ �ǥ��μ�
    ITEM00_N_STICK,		// ������ �ǥ�����
    ITEM00_N_TUBOL,		// ������ ���Ϥ��� ��
    ITEM00_N_TUBOS,		// ������ ���Ϥ��� ��
    ITEM00_SEED,		// ������ �ѥ����� ��
    ITEM00_S_KEY,		// ������ ��������
    ITEM00_N_ELF,		// ������ ����
    ITEM00_RUPEE_500,		// ������ ��������ԡ�
    ITEM00_RUPEE_50,		// ������ ������ԡ�
    ITEM00_SHIELD1,		// ������ �ǥ��ν�
    ITEM00_SHIELD2,		// ������ �ϥ����ν�
    ITEM00_Z_FUKU,		// ������ ���������
    ITEM00_G_FUKU,		// ������ ��������
    ITEM00_BOMB2,		// ������ ������Ȥʤ�����
    ITEM00_D_MODE_LAST_INDEX
};

/* ����ԡ����åȥޥ��� */
#define Macro_Item_1_rupee_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_RUPEE_1))

/* ����ԡ����åȥޥ��� */
#define Macro_Item_5_rupee_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_RUPEE_5))

/* ������ԡ����åȥޥ��� */
#define Macro_Item_10_rupee_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_RUPEE_10))

/* �ϡ��ȥ��åȥޥ��� */
#define Macro_Item_heart_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_HEART))

/* ���ƥ��åȥޥ��� */
#define Macro_Item_bomb_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_BOMB))

/* �𥻥åȥޥ��� */
#define Macro_Item_arow_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_AROW))

/* �ϡ��Ȥδ糧�åȥޥ��� */
#define Macro_Item_utuwa_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_H_UTUWA))

/* �ϡ��Ȥη��ҥ��åȥޥ��� */
#define Macro_Item_kakera_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_H_KAKERA))

/* �����ȥ��åȥޥ��� */
#define Macro_Item_arrow5_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_N_ARROW5))

/* �𣲣����ȥ��åȥޥ��� */
#define Macro_Item_arrow20_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_N_ARROW20))

/* �𣵣����ȥ��åȥޥ��� */
#define Macro_Item_arrow50_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_N_ARROW50))

/* ɽ���� ���ƥ��åȥޥ��� */
#define Macro_Item_n_bomb_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_N_BOMB))

/* ɽ���� �ǥ��μ¥��åȥޥ��� */
#define Macro_Item_n_nuts_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_N_NUTS))

/* ɽ���� �ǥ��������åȥޥ��� */
#define Macro_Item_n_stick_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_N_STICK))

/* ɽ���� ���Ϥ��� �祻�åȥޥ��� */
#define Macro_Item_n_tubol_set(g,p) \
(Actor_info_make_actor(&(g)->actor_info,(Game *)(g),En_Item00,(p)->x,(p)->y,(p)->z,0,0,0,ITEM00_N_TUBOL))

/*
 * �����ƥ�ȯ�����ѥ롼������ �����ץ�٥�
 */
#define ITEM_TYPE_00	0
#define ITEM_TYPE_01	ITEM_TYPE_00 + 16
#define ITEM_TYPE_02	ITEM_TYPE_01 + 16
#define ITEM_TYPE_03	ITEM_TYPE_02 + 16
#define ITEM_TYPE_04	ITEM_TYPE_03 + 16
#define ITEM_TYPE_05	ITEM_TYPE_04 + 16
#define ITEM_TYPE_06	ITEM_TYPE_05 + 16
#define ITEM_TYPE_07	ITEM_TYPE_06 + 16
#define ITEM_TYPE_08	ITEM_TYPE_07 + 16
#define ITEM_TYPE_09	ITEM_TYPE_08 + 16
#define ITEM_TYPE_10	ITEM_TYPE_09 + 16
#define ITEM_TYPE_11	ITEM_TYPE_10 + 16
#define ITEM_TYPE_12	ITEM_TYPE_11 + 16
#define ITEM_TYPE_13	ITEM_TYPE_12 + 16
#define ITEM_TYPE_14	ITEM_TYPE_13 + 16
/*-----------------------------------------------------------------------
 * ����ι�����Ф��륢���ƥද�����å��ѥ롼����
 *-----------------------------------------------------------------------*/
extern void Hit_bit_set( Actor *a, ClObjElem *thisx, int flg);
extern void Hit_bit_set_sph( Actor *a, ClObjJntSph *thisx, int flg);

#define hit_bit_set( a, thisx) Hit_bit_set( a, thisx, 1);
#define hit_bit_set_sph( a, thisx) Hit_bit_set_sph( a, thisx, 1);

/*
 * �����ƥ�ȯ�����ѥ롼������ ���������ץ����å���٥�
 */
#define BIT_FIRE_ARROW (1<<0) /* ����� */
#define BIT_ICE_ARROW (1<<1) /* ɹ���� */
#define BIT_WIND_ARROW (1<<2) /* ������ */
#define BIT_SOUL_ARROW (1<<3) /* ������ */
#define BIT_DARK_ARROW (1<<4) /* �Ǥ��� */
#define BIT_LIGHT_ARROW (1<<5) /* ������ */
#define BIT_LIGHT_MAGIC (1<<6) /* ������ˡ */


/* ���٥� */    
#define C_S_Z	0
#define C_M_Z	12
#define C_B_Z	24
#define C_H_Z	36
#define C_K_Z	48
#define C_O_Z	60

#define A_Z	72
#define B_Z	84
#define H_Z	96
#define M_Z	108

#define M_O_Z	120
#define A_O_Z	132
#define H_O_Z	144
#define R_Z	156

/*
 * �����ƥ�ȯ�����ѥ롼����
 */
extern void Item_Set_Std(
    Game *game, Actor *a, xyz_t *this, short item_set_type);

#define item_set_std( game, this, item_set_type) Item_Set_Std( game, NULL, this, item_set_type)

/*
 * �������ѥ롼����
 */
extern float chase_pos(xyz_t *target,xyz_t *chaser,
		      float speed_s,float speed_m,
		      float area_max, float area_min);

/************************************************************************
 *
 *	��������ʬ�򥯥饹
 *
 ************************************************************************/
/*
 * ��������ʬ�򥯥饹
 */
typedef struct {
    MtxF		*part_base;	/* �ѡ��� �������� */
    short		*b_id;
    short		part_count;	/* �ѡ��� ������� */
    unsigned int	*shape_base;
    int			mtxfget_flg;
    int			old_joint_no;
} Break_work;

extern void Part_Break_init(Break_work *this,int joint_max, Game *game);
extern int Part_break(Actor *thisx, Break_work *this,Game_play *pgame_play,short idx);
extern void Part_Break_Get(Break_work *this,
			   int now_joint,
			   int start_joint,
			   int end_joint,
			   int joint_max,
			   Gfx **shape,
			   short Bank_ID);

#define Part_Break_get(this, n_j, s_j, e_j, j_m, s) Part_Break_Get(this, n_j, s_j, e_j, j_m, s, -1)
#define Part_Break_get2(this, n_j, s_j, e_j, j_m, s, i) Part_Break_Get(this, n_j, s_j, e_j, j_m, s, i)

#define Part_Break(this, b_w, g_p) Part_break(this, b_w, g_p, (this)->arg_data)


/************************************************************************
 *
 *	����ȯ�� ����ץ� ���֥롼����
 *
 ************************************************************************/
/*----------------------------------------------------------------------------
 *
 * ���̱߷���ȯ�����֥롼����
 *
 *   �ݥ������٤� actor.ground_y �˼�ư�Ǥʤ�ޤ���
 *
 *   size�� �ݥ������� �濴�Ȥ���Ⱦ�¤Ǥ���
 *
 *   count�� ���٤����ꤹ�����̤ο��Ǥ���
 *
 *   acc_base�� �������®�٤Υ١������ԡ��ɤǤ����ʣء��ڼ��ΤߤǤ���
 *
 *   ɽ�����������ɤ���
 *----------------------------------------------------------------------*/
extern void _dust_ground_set(Game_play *pgame_play,
			     Actor *this,
			     xyz_t *pos,
			     float size,
			     int count,
			     float acc_base,
			     short scale_100,
			     short scale_diff,
                             u8    light
);

#define	dust_ground_set(a, b, c, d, e, f)              _dust_ground_set( (a), (b), (c), (d), (e), (f), 0, 0, 0)
#define	dust_ground_set_sc(a, b, c, d, e, f, s1, s2)   _dust_ground_set( (a), (b), (c), (d), (e), (f), (s1), (s2), 0)
#define	dust_ground_set_sc_light(a, b, c, d, e, f, s1, s2)   _dust_ground_set( (a), (b), (c), (d), (e), (f), (s1), (s2), 1)

/*-----------------------------------------------------------------------
 * ��ʬ������������Ƚ��
 *-----------------------------------------------------------------------*/

extern Actor *BlastVsMyCheck( Game *game, ClObj *this);
extern Actor *BlastVsMyCheck_c( Game *game, Actor *this);

/*-----------------------------------------------------------------------
 *
 *	�������������ѹ�
 *
 *----------------------------------------------------------------------*/
extern void Actor_info_part_chg(Game_play *game_play, Actor_info *this, Actor *actor, unsigned char part); 
/*-----------------------------------------------------------------------
 * ����ƻ�����ɤ�Ƚ��
 *-----------------------------------------------------------------------*/
extern Actor *ShotVsMyCheck( Game_play *game_play, Actor *this, float reng);
/****************************************************************/
/*		�£ǥݥ���Ⱦ������å�				*/
/****************************************************************/
extern short BG_point_check(Actor *this,Game_play *game_p,float reng,short ang);

/************************************************************************/
/*    ��å����� ���� �ƥ���						*/
/************************************************************************/
extern void mes_set(Game_play *game_play, Actor *thisx, short mes_no);
#define mes_set0(actor, mes_no) actor->talk_message = mes_no
/****************************************************************/
/*		��ʬ��������Ʈ���оݤ������å�			*/
/****************************************************************/
extern short Anc_Fight_My_Check(Game_play *game_play,Actor *this);
/****************************************************************/
/*	������Ʈ�� ��ʬ�� �Ϥߤ� �������å�			*/
/****************************************************************/
extern short Anc_Fight_ham_Check(Game_play *game_play,Actor *this);
/*
 * ���� ��ɽ���롼����
 */
extern void Shadow_draw(xyz_t *pos, xyz_t *shadow_scale,
			unsigned char	shadow_a, Game_play *game_play);


/* �����Ͽ̴ؿ� */
extern void set_jisin(Game_play *game_play, short yad, short time);
/* �����Ͽ̥���ɥ֥�֥륻�å� */    
extern void ActorQuakeRumbleSet(Actor *, Game_play *, short, short);
/*
 *  Ǥ���ϰϤ����
 */
extern float rnd_f(float r);
/*
 *  ������������
 */
extern float rnd_fx(float r);

/*-----------------------------------------------------------------------
 *
 *	��ɽ���Ѵؿ�
 *
 *----------------------------------------------------------------------*/
#define EN_DOOR_KEY_TIME		10
extern void key_draw(Game *game, int key_timer, int type);

/*---------------------------------------------------------------------------
 *
 * �������å�
 *
 *-------------------------------------------------------------------------*/
extern void SetSparkFlash(Game *game, xyz_t *pset_pos);

/*----------------------------------------------------------------------------
 *
 *   Ŭ���˱��Ф����֥롼����
 *
 *   count�� ���٤����ꤹ�����̤ο��Ǥ���
 *
 *----------------------------------------------------------------------*/
/* �饤�Ȥʤ�:���� */
#define dust_fly_set(pgame_play, pos, size, count, scale_100, scale_diff) \
dust_fly_set2((pgame_play), (pos), (size), (count), (scale_100), (scale_diff),\
	      0)
		 
/* �饤�Ȥ���:���� */	      
extern void  dust_fly_set2(
    Game_play *pgame_play,
    xyz_t *pos,
    float size,
    int count,
    short scale_100,
    short scale_diff,
    u8 light
);
/*---------------------------------------------------------------------------
 * ���̥ե�������롼�����Ϣ
 *
 *-------------------------------------------------------------------------*/

#define FOG_TYPE_B 0x0000	/* ��		 ���� */
#define FOG_TYPE_R 0x4000	/* ��		 ���� */
#define FOG_TYPE_H 0x8000	/* ��		 ���� */
#define FOG_POLY_N 0x0000	/* ��Ʃ��	 ���� */
#define FOG_POLY_X 0x2000	/* ȾƩ��	 ���� */

extern void Set_Fog(Actor *this, short fog_type, short fog_color,
		    short poly_type, short timer);

/*---------------------------------------------------------------------------
 * �Ķ��ޥåԥ� �������������å�
 *-------------------------------------------------------------------------*/
extern void Setpos_HiliteReflect_init(xyz_t *,Game_play *);
extern void Setpos_HiliteReflect_xlu_init(xyz_t	*,Game_play *);

/************************************************************************
 *
 * �ΣУô�Ϣ
 *
 ************************************************************************/
/*-----------------------------------------------------------------------
 *
 * �ΣУò���/ ����������¤��
 * ���: ���á�������ư�ν�����ͭ�����뤿����Ѱդ��ޤ�����
 *
 *----------------------------------------------------------------------*/
typedef struct NpcBasicAct_s {

    short talk_stat;		/* ���äξ���		*/
    short see_condition;	/* �������ơ�����	*/
    short see_timer;		/* ����ΰ�		*/
    short see_count;		/* ����ΰ�		*/
    s_xyz neck;			/* �󥢥󥰥�		*/
    s_xyz kosi;			/* �����󥰥�		*/
    float my_eye_offset;	/* �ܥ��ե��å�		*/
    xyz_t attention;		/* ��������		*/		
    short behind_sw;		/* ���֤ˤ�뿶���������	*/

}NpcBasicAct;

/*
 * see_condition������
 * ���: see_condition���ͤϡ��ʲ��ξ��֤��̣���ޤ���
 */
enum {
    CND_DUMY,	/* ���ߡ�			*/
    NON_ACTN,	/* ̵��				*/
    NRM_LOOK,	/* ����				*/
    NCK_MOVE,	/* ������Ǹ���			*/
    TRN_ARND,	/* �Τǿ����֤�			*/
    MAX_COND	/* ���֤μ���			*/
};

/*
 * talk_stat������
 * ���: talk_stat���ͤϡ��ʲ��ξ��֤��̣���ޤ���
 */
enum {
    END_TALK,	/* ���ý�λ		*/
    NOW_TALK,	/* �ޤ���������		*/
    ENY_CTRL,	/* Ũ¦����		*/
    END_CRRY	/* �����ƥ�����夲��λ	*/
};

/*-----------------------------------------------------------------------
 *
 * �����ǡ�����¤��
 * 
 *----------------------------------------------------------------------*/


/*
 * ��ȹ��Υ��󥰥��ư�ϰϡ���¤��
 */
typedef struct AngleLimit_s {

    short neck_limit_y;		/* �� Y���󥰥��ư�ϰ�		*/
    short neck_min_x;		/* �� X���󥰥�(��)��ư�ϰ�	*/
    short neck_max_x;		/* �� X���󥰥�(��)��ư�ϰ�	*/
    short kosi_limit_y;		/* �� Y���󥰥��ư�ϰ�		*/
    short kosi_min_x;		/* �� X���󥰥�(��)��ư�ϰ�	*/
    short kosi_max_x;		/* �� X���󥰥�(��)��ư�ϰ�	*/
    unsigned char turn;		/* �Τޤ魯���ե饰		*/

}AngleLimit;

/*
 * �����ǡ�������¤��
 */
typedef struct EyeMoveInf_s {

    AngleLimit lim_dat;		/* ��ư�ϰϥǡ���	*/
    float search_range;		/* �����Ƥ��Υ		*/
    short search_angle;		/* �����Ƥ��ϰ�		*/

}EyeMoveInf;

/*-----------------------------------------------------------------------
 *
 * ���˥������ǡ�����¤��
 * 
 *----------------------------------------------------------------------*/
typedef struct {
    SoftAnimTblInfo2 *anime;	/* ���˥᡼�����	*/
    float anime_speed;		/* ���˥᥹�ԡ���	*/
    float start_frame;		/* ���ϥե졼��		*/
    float end_frame;		/* ��λ�ե졼��		*/
    unsigned char flag;		/* �롼��or���ȥå׻���	*/
    float morfcount;		/* ��֥ե졼���	*/
}AnimeCtInfo;

/*-----------------------------------------------------------------------
 *
 * ���֤롼����
 * 
 *----------------------------------------------------------------------*/
/*
 ** ɸ�����	****/
extern int npc_talk(
    Game_play *game_play,
    Actor *thisx,
    NpcBasicAct *basic,
    float range,
    unsigned short (*set_mes_process)(Game_play *, Actor *),
    short (*end_mes_process)(Game_play *, Actor *)
);

/*
 ** ������ư	****/
extern void eye_moveM(
    Actor *thisx,
    NpcBasicAct *basic,
    short no,
    short compulsion
);

/*
 ** �������ϰ�	****/
extern short get_search_angle(
    short no
);

/*
** ��Ʃ��������ɽ��	****/
extern void no_clarity(
    Game *game,
    Skeleton_Info *skel,
    int  (*before)(Game *, int, Gfx **, xyz_t *, s_xyz *, void *, Gfx **),
    void (*after)(Game *, int, Gfx **, s_xyz *, void *, Gfx **),
    void *p,
    short alpha
);

/*
 ** ȾƩ��������ɽ��	****/
extern void clarity(
    Game *game,
    Skeleton_Info *skel,
    int  (*before)(Game *, int, Gfx **, xyz_t *, s_xyz *, void *, Gfx **),
    void (*after)(Game *, int, Gfx **, s_xyz *, void *, Gfx **),
    void *p,
    short alpha
);

/*
 **  ������²������ե��ͥ��å�	****/
extern short kokiri_alpha_set(
    Actor *thisx,
    Game_play *game_play,
    short alpha,
    float range
);

/*
 ** ���˥᡼������ڤ��ؤ� ****/
extern void npc_anime_ct(
    Skeleton_Info *sk,
    AnimeCtInfo *dt,
    int no
);

/*
 ** �ץ���ࡦ�������� ****/
extern void program_wait(
    Game_play *game_play,
    short *y,
    short *z,
    int max_count
);
    
#if !defined(ROM_F) && 0
extern void actor_name_show(Actor *actor, char *comment, int data);
#else
#define actor_name_show(a,c,d) /*NOP*/
#endif

/*====	�ΣУô�Ϣ�����	========================================*/

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

    
/*** z_actor.h end ***/
