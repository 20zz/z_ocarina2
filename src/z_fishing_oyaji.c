/* $Id: z_fishing_oyaji.c,v 2.1 1998-10-22 21:17:25+09 zelda Exp $ */
/*
 * $Log: z_fishing_oyaji.c,v $
 * Revision 2.1  1998-10-22 21:17:25+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.37  1998/10/01 08:35:59  morita
 * *** empty log message ***
 *
 * Revision 1.36  1998-10-01 17:21:52+09  morita
 * *** empty log message ***
 *
 * Revision 1.35  1998-09-30 23:49:49+09  morita
 * *** empty log message ***
 *
 * Revision 1.34  1998-09-30 16:06:32+09  morita
 * *** empty log message ***
 *
 * Revision 1.33  1998-09-26 22:35:50+09  morita
 * *** empty log message ***
 *
 * Revision 1.32  1998-09-23 16:18:29+09  morita
 * *** empty log message ***
 *
 * Revision 1.31  1998-09-22 22:58:37+09  morita
 * *** empty log message ***
 *
 * Revision 1.30  1998-09-18 00:21:40+09  morita
 * *** empty log message ***
 *
 * Revision 1.29  1998-09-17 23:22:03+09  morita
 * *** empty log message ***
 *
 * Revision 1.28  1998-09-12 22:38:23+09  morita
 * *** empty log message ***
 *
 * Revision 1.27  1998-09-12 15:38:21+09  morita
 * *** empty log message ***
 *
 * Revision 1.26  1998-09-12 14:10:48+09  morita
 * *** empty log message ***
 *
 * Revision 1.25  1998-09-09 16:46:34+09  morita
 *  ��븶
 *
 * Revision 1.24  1998-09-09 11:08:05+09  morita
 * *** empty log message ***
 *
 * Revision 1.23  1998-09-08 23:24:04+09  morita
 * *** empty log message ***
 *
 * Revision 1.22  1998-09-03 23:59:57+09  morita
 * *** empty log message ***
 *
 * Revision 1.21  1998-09-02 22:10:31+09  morita
 * *** empty log message ***
 *
 * Revision 1.20  1998-09-02 22:04:19+09  morita
 * *** empty log message ***
 *
 * Revision 1.19  1998-08-31 22:19:05+09  morita
 * *** empty log message ***
 *
 * Revision 1.18  1998-08-29 17:49:19+09  morita
 * *** empty log message ***
 *
 * Revision 1.17  1998-08-27 20:43:21+09  morita
 * *** empty log message ***
 *
 * Revision 1.16  1998-08-27 19:26:21+09  morita
 * *** empty log message ***
 *
 * Revision 1.15  1998-08-27 18:17:12+09  morita
 * *** empty log message ***
 *
 * Revision 1.14  1998-08-26 22:21:37+09  kuzuhara
 * ����졩
 *
 * Revision 1.13  1998-08-26 21:43:17+09  kuzuhara
 * �䡼������Υ���
 * �ǣţԡ���������
 *
 * Revision 1.12  1998-08-26 21:05:35+09  morita
 * *** empty log message ***
 *
 * Revision 1.11  1998-08-26 17:53:42+09  morita
 * *** empty log message ***
 *
 * Revision 1.10  1998-08-25 22:56:24+09  morita
 * *** empty log message ***
 *
 * Revision 1.9  1998-08-25 20:49:25+09  morita
 * *** empty log message ***
 *
 * Revision 1.8  1998-08-24 20:31:57+09  morita
 * *** empty log message ***
 *
 * Revision 1.7  1998-08-24 11:19:56+09  kuzuhara
 * �ɤ��Ǥ���
 *
 * Revision 1.6  1998-08-22 21:06:25+09  kuzuhara
 * ����ǡ�
 * �֥�֥�
 *
 * Revision 1.5  1998-08-22 18:24:17+09  morita
 * *** empty log message ***
 *
 * Revision 1.4  1998-08-21 00:09:32+09  morita
 * *** empty log message ***
 *
 * Revision 1.3  1998-08-05 16:39:43+09  kuzuhara
 * �դ���
 *
 * Revision 1.2  1998-08-05 15:04:05+09  morita
 * *** empty log message ***
 *
 * Revision 1.1  1998-08-05 14:49:42+09  morita
 * Initial revision
 *
 **/


/* bm ���� ->work[?] */
#define BM_MES_MODE 0
#define BM_MES_WAIT 1
#define BM_EYE_NO   2
#define BM_EYE_TIME 3
#define BM_KUBI_YA  4


/* Ź�ο��� */
/*=======================================================================
 *	���ý���
 *======================================================================*/
static void bm_message_check(Fishing_actor *this, Game_play *game_play)
{
/*    Player_actor *pla = (Player_actor *)get_player_actor(game_play);*/
    
    /* ��å������������Ǥä��� */
    
#if 0
    if ( kREG(32) ) {			/* start + B */
	PRINTF( "\033[35m ���������� ���Ҥ㤢   ���������� %d\n\033[m", message_check( &( game_play->message )) );
	PRINTF( "\033[36m ���������� �ȤҤ硼�� ���������� %d\n\033[m", this->work[ BM_MES_MODE ] );
	PRINTF( "\n\n"  );
	kREG(32) = OFF;
    }
#endif
    switch( this->work[ BM_MES_MODE ] ) {

    case 0:		/* ���˥�����å��������åȽ����� */
	if ( fishing_game_mode == 0 ) {					/* GAME ��Ǥʤ��� */
	    if(AGE != 1 /* || KAZ(8) */) { /* 17�� */
		if((HI_SCORE(HS_FISH) & SAVE_CHILD_PLAY) &&
		   !(HI_SCORE(HS_FISH) & SAVE_ADULT_PLAY)) { /* �Ҷ���äƤ�����ͤǽ��ơ� */
		    this->actor.talk_message = 0x4093;		/* �͡����� ���Ф餯��(����) */
		} else {
		    this->actor.talk_message = 0x407b;		/* �͡�������ԡ��Ǥ��롩(����) */
		}
	    } else {
		this->actor.talk_message = 0x407b;		/* �͡�������ԡ��Ǥ��롩(����) */
	    }
	}
	else {		/* ��������Υ�å����� */
	    if(lure_with_head == 0) {
		this->actor.talk_message = 0x4084;/* �ʤ󤫤褦�� */
	    } else { /* �ܥ����Ȥ�줿�塩 */
		this->actor.talk_message = 0x4097;/* ������椦�Ƥ����� */
//		this->actor.talk_message = 0x408a;/* ������椦�Ƥ����� */
	    }
	}
	
	if( Actor_talk_check((Actor *)this, game_play) ) {	/* �����󥸲��å⡼�ɸ� */
	    if ( fishing_game_mode == 0 ) {				/* GAME ��Ǥʤ��� */
		this->work[ BM_MES_MODE ] = 1;		/* ��������å��� */
		
		if(AGE != 1 /* || KAZ(8) */) { /* 17�� */
		    HI_SCORE(HS_FISH) |= SAVE_ADULT_PLAY; /* ����Ǥ��ä��� */
		} else {
		    HI_SCORE(HS_FISH) |= SAVE_CHILD_PLAY; /* ����Ǥ��ä��� */
		}
	    }
	    else {
		this->work[ BM_MES_MODE ] = 10;  /*3;*/		/* Ũ���楯�ꥢ�� */
	    }
	    break;
	}
	Actor_talk_request2((Actor *)this, game_play, 100.0f /* + (float)BREG(16) */ );	/* ���äǤ����ϰϸ� */
	break;
	
    case 1:		/* �����å����������å������� */
	if ( message_check( &( game_play->message ) ) == 4 ) {	/* �������Ԥ��� */
	    if ( pad_on_check(game_play) ) {
		message_close(game_play);			/* ��å�����������ɥ��Ĥ������롩  */
		
		switch ( game_play->message.sel_pnt ) {		/* �����ͤ󡩤�����ͤ�  */
		case 0:				/* �����ͤ� */
		    if ( S_Private.lupy_count >= 20 ) { /* ���⤢�롩 */
 			lupy_increase( -20 ); 

			if ( !z_vibctl2_RumblePackIsConnected() )	/* ��ư�ѥå������äƤ뤫����̵ͭ */
			    this->actor.talk_message = 0x0407c;			/* �͡���ư�ѥå��ʤ����� */
			else
			    this->actor.talk_message = 0x0407d;			/* �͡���ư�ѥå������� */
			
			message_set2( game_play, this->actor.talk_message );	/* ������å��������å� */
			this->work[ BM_MES_MODE ] = 2;
		    }
		    else { /* ��ʤ� */
			message_set2( game_play, 0x0407e );	/* ������å��������å� */
			this->work[ BM_MES_MODE ] = 3;
		    }
		    break;
		    
		case 1:				/* ������ͤ� */
		    message_set2( game_play, 0x002d );	/* ������å��������å� */
		    this->work[ BM_MES_MODE ] = 3;
		    break;
		}
	    }
	}
	break;

    case 2:		/* �֤�֤�ѥå���å�������λ�Ԥ� */
	if ( message_check( &( game_play->message ) ) == 5 ) {	/* Ũ�����å�������λ���Ԥ��� */
	    if ( pad_on_check(game_play) ) {
		message_close(game_play);			/* ��å�����������ɥ��Ĥ������롩  */
			
		message_set2( game_play, 0x0407f );	/* ������å��������å� */
		this->work[ BM_MES_MODE ] = 4;
	    }
	}
	break;
	
    case 3:		/* ����å����������å������� */
	if ( message_check( &( game_play->message ) ) == 5 ) {	/* Ũ�����å�������λ���Ԥ��� */
	    if ( pad_on_check(game_play) ) {
		message_close(game_play);			/* ��å�����������ɥ��Ĥ������롩  */
		this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
#if 0
		if(AGE != 1) { /* 17�� */
		    bm_head_no = 1; /* �ϥ� �� ˹�� */
		    lure_with_head = 0;
		}
		
		head_check = 20;  /* ����ܤ���Ƚ��ʤ����� */
#endif		
	    }
	}

	if ( message_check( &( game_play->message ) ) == 6 ) {	/* ��ư��λ��å������Ԥ��� */
	    this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
	}
	
	break;

	
    case 4:		/* ����å����������å�������(GAME ����) */
	if ( message_check( &( game_play->message ) ) == 4 ) {	/* �������Ԥ��� */
	    if ( pad_on_check(game_play) ) {
		message_close(game_play);			/* ��å�����������ɥ��Ĥ������롩  */
		
		switch ( game_play->message.sel_pnt ) {		/* �����ͤ󡩤�����ͤ� */
		case 0:				/* �����ͤ� */
		    FishRangeForMessage = (u16)fish_record;
		    message_set2( game_play, 0x04080 );	/* ������å��������å� */
		    this->work[ BM_MES_MODE ] = 5;			/* ��븶 */
		    break;

		case 1:				/* ������ͤ�(�����롼��) */
		    message_set2( game_play, 0x0407f );	/* ������å��������å� */
		    break;
		}
	    }
	}
	break;

    case 5:		/* �ǽ���å������Ԥ� */
	if ( message_check( &( game_play->message ) ) == 5 ) {	/* �������Ԥ��� */
	    if ( pad_on_check(game_play) ) {
		message_close(game_play);			/* ��å�����������ɥ��Ĥ������롩  */

		/* �����ॹ������ */
		ON_HOLD_ROD( game_play );

/* 		if(KAZ(66) == 0) */
		    to_fishing_set(game_play); /* �������å� */
		
		fishing_game_mode = 1;     /* �ȥ��å� */
		
		head_check = 20;  /* ����ܤ���Ƚ��ʤ����� */
		
		this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
#if 0		
		lupy_increase( -20 ); /* ���٤ɤ��� */
#endif
		/* �ץ쥤��������� */
		if((HI_SCORE(HS_FISH) & 0x00ff0000) < 0x00ff0000) { /* 255��̤�� */
		    HI_SCORE(HS_FISH) += SAVE_PLAY_COUNT;
		}
	    }
	}
	break;




/* �ɲ� */
	
    case 10:		/* �ʤ󤫤褦�� */
	if(lure_with_head) { /* �ܥ����Ȥ�줿���ȡ� */
	    if ( message_check( &( game_play->message ) ) == 4 ) {	/* �������Ԥ��� */
		if ( pad_on_check(game_play) ) {
		    message_close(game_play);			/* ��å�����������ɥ��Ĥ������롩  */

		    switch ( game_play->message.sel_pnt ) {		/* �֤��ơ� */
		    case 0:	/* �֤� */
			message_set2( game_play, 0x40b2 );	/* ���á����ʤ���� */
			bm_head_no = 1; /* �ܥ����᤹ */
			lure_with_head = 0;
			this->work[ BM_MES_MODE ] = 20;
			break;
		    case 1:	/* ����� */
			this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
			break;
		    }
		}
	    }

#if 0
	    
	    if ( message_check( &( game_play->message ) ) == 0 ) {	/* �������Ԥ��� */
		bm_head_no = 1; /* �ܥ����᤹ */
		lure_with_head = 0;
		this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
	    }
#endif	    
	} else {
	    if ( message_check( &( game_play->message ) ) == 4 ) {	/* �������Ԥ��� */
		if ( pad_on_check(game_play) ) {
		    message_close(game_play);			/* ��å�����������ɥ��Ĥ������롩  */

/* 		    if(KAZ(88)) { */
/* 			game_play->message.sel_pnt = 2; */
/* 		    } */
		    switch ( game_play->message.sel_pnt ) {		/* �� */
		    case 0:	/* �����ʸ��� */
			if(my_record == 0.0f) {
			    this->actor.talk_message = 0x408c; /* ���ʤ��� */
			    this->work[ BM_MES_MODE ] = 20;			/*  */
			} else {
			    if(my_fish_kind == FISH_KIND_BASS) {
				FishRangeForMessage = (u16)my_record;
				
				if((short)fish_record < (short)my_record) {
				    if(use_lure == LURE_TYPE_WORM) {
					this->actor.talk_message = 0x40b0; /* ���ǵ�Ͽ���� */
				    } else {
					this->actor.talk_message = 0x4086; /* ��Ͽ������ */
				    }
				    this->work[ BM_MES_MODE ] = 11;			/*  */
				} else  {
				    this->actor.talk_message = 0x408b; /* �������� */
				    this->work[ BM_MES_MODE ] = 20;			/*  */
				}
			    } else { /* SNAKE_HEAD */
				this->actor.talk_message = 0x409b; /* ����Ϥ᤺�餷���� */
				this->work[ BM_MES_MODE ] = 11;			/*  */
			    }
			}
			message_set2( game_play, this->actor.talk_message );	/* ������å��������å� */
			break;
			
		    case 1:	/* �ʤ󤫤���٤ä� */
			if(fishing_time > 36000 /* || KAZ(76) */) { /* �󣳣�ʬ�в� */
/* 			    KAZ(76) = 0; */
			    fishing_time = 36000 - 6000; /* ��, ��ʬ�����˸��� */
			    message_set2( game_play, 0x04088 );	/* ������å��������å� */
			} else { /* ������ */
			    static u16 seken_mes_no[] = {
				0x4096, /* ���äƤ�Ȥ��� */
				
				0x408d,
				0x408e,
				0x408f,
				
 			     /* ����� */
				0x4094,
				0x4095,
				
			    };
			    
			    if(mad_water == 0) { /*�ˤ��äƤʤ����� */
				if(seken_mes_ct == 0) { /* No.0 �Ϥʤ� */
				    seken_mes_ct ++;
				}
			    }

			    if(lure_type == LURE_TYPE_WORM &&
			       seken_mes_no[seken_mes_ct] == 0x408d) { /* �﨡����äƤ롩 */
				message_set2( game_play, 0x40af );	/* ������å��������å� */
			    } else {
				message_set2( game_play, seken_mes_no[seken_mes_ct] );	/* ������å��������å� */
			    }
			    
			    seken_mes_ct ++;
			    
			    if(AGE != 1 ) { /* 17�͡� */
				if(seken_mes_ct > 5)
				    seken_mes_ct = 0;
			    } else {
				if(seken_mes_ct > 3)
				    seken_mes_ct = 0;
			    }
			}
			
			this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
			break;
			
		    case 2:  /* �⤦���� */
			if(fish_catch_count == 0) { /* �ܤ����� */
			    message_set2( game_play, 0x4085 );	/* ������å��������å� */
			} else {
			    if(AGE == 1) { /* 5�� */
				message_set2( game_play, 0x4092 );	/* ������å��������å� */
			    }
			}
			this->work[ BM_MES_MODE ] = 22;
			break;
		    }
		}
	    }
	}
	break;

    case 11:  /* ���ʤ�餦 */
	if ( message_check( &( game_play->message ) ) == 5 ||
	     message_check( &( game_play->message ) ) == 0
/*||
	     message_check( &( game_play->message ) ) == 6  */  ) {	/* ��å��������ꡩ */
	    if ( pad_on_check(game_play) ) {
		int gi;
		
		message_close(game_play);			/* ��å�����������ɥ��Ĥ������롩  */

		if(my_fish_kind == FISH_KIND_BASS) {
		    fish_record = my_record; /* ��Ͽ���� */
		    my_record = 0.0f;
		    
		    if(AGE == 1) { /* 5�� */
			float record;
			
			HI_SCORE(HS_FISH) &= 0xffffff00;
			HI_SCORE(HS_FISH) |= ((long)fish_record & 0x0000007f);

			record = (float)((HI_SCORE(HS_FISH) & 0x7f000000) >> 24); /* ��ͤε�Ͽ */
			
			if(fish_record > record) { /* ��ͤε�Ͽ�⹹�� */
			    HI_SCORE(HS_FISH) &= 0x00ffffff;
			    HI_SCORE(HS_FISH) |= (((long)fish_record & 0x007f) << 24);
			    
			    if(use_lure ==  LURE_TYPE_WORM) { /* �﨡��ǤĤäƤ��⤦���� */
				HI_SCORE(HS_FISH) |= SAVE_USE_WORM_A;
			    }
			}
			
			if(use_lure ==  LURE_TYPE_WORM) { /* �﨡��ǤĤäƤ��⤦���� */
			    HI_SCORE(HS_FISH) |= SAVE_USE_WORM_C;
			    this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
			    break;  /* ���ʤʤ� */
			}
		    } else { /* ��� */
			HI_SCORE(HS_FISH) &= 0x00ffffff;
			HI_SCORE(HS_FISH) |= (((long)fish_record & 0x007f) << 24);
			if(use_lure ==  LURE_TYPE_WORM) { /* �﨡��ǤĤäƤ��⤦���� */
			    HI_SCORE(HS_FISH) |= SAVE_USE_WORM_A;
			    this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
			    break;  /* ���ʤʤ� */
			}
		    }
		    
		    /* ���ܤ�館����ʥ��å� */
		    if(fish_record >= 60.0f) { /* 60�����С��� */
			gi = GET_ITEM_BIG_RUPPE;
		    } else if(fish_record >= 50.0f) { /* 50�����С��� */
			gi = GET_ITEM_RUPPE_RED;
		    } else if(fish_record >= 40.0f) { /* 40�����С��� */
			gi = GET_ITEM_RUPPE_BLUE;
		    } else {                          /* 30�����С��� */
			gi = GET_ITEM_20RUPPE;
		    }

		    /* ���̤�館����ʥ��å� */
		    if(AGE == 1) { /* 5�� */
			if(fish_record >= 50.0f) { /* 50�����С��� */
			    if(!(HI_SCORE(HS_FISH) & SAVE_HEART_GET)) { /* �ϡ��Ȥ��äƤʤ��� */
				HI_SCORE(HS_FISH) |= SAVE_HEART_GET; /* ��餪�� */
				
 				gi = GET_ITEM_HEART_PARTS; 
/* 				gi = GET_ITEM_BIN_NUL; */
				/* �﨡��ɤä������ */
				worm_set_P = 1 + (u8)rnd_f(3.999f); /* 1 ~ 3 */
			    }
			}
		    } else {                        /* 17�� */
			if(fish_record >= 60.0f) { /* 60�����С��� */
			    if(!(HI_SCORE(HS_FISH) & SAVE_UROKO_GET)) { /* �������äƤʤ��� */
				HI_SCORE(HS_FISH) |= SAVE_UROKO_GET; /* ��餪�� */
				
				gi = GET_ITEM_GOLD_SCALE;
				/* �﨡��ɤä������ */
				worm_set_P = 1 + (u8)rnd_f(3.999f); /* 1 ~ 3 */
			    }
			}
		    }
		} else {  /* ��ƻ�ѷ��� */
		    my_record = 0.0f;
		    gi = GET_ITEM_BIG_RUPPE;
		}

		/* ���ʤ�餪�� */
		this->actor.mother = NULL;		/* �����夲�ޤ��˿Ƥ���� */
		
		Actor_carry_request_set2( &this->actor, game_play,
					  gi,			/* ��Υ��� */
					  2000.0f,		/* �����ϰϤϥ�å����������ϰϤ���� */
					  1000.0f );
		
		this->work[ BM_MES_MODE ] = 23;			/* �����夲�׵�����å��� */
	    }
	}
	break;
	
    case 20: /* �ޤ����Ρ� */
	if ( message_check( &( game_play->message ) ) == 5 /* ||
	     message_check( &( game_play->message ) ) == 6 */) {	/* ��å��������ꡩ */
	    if ( pad_on_check(game_play) ) {
		message_close(game_play);			/* ��å�����������ɥ��Ĥ������롩  */
#if 0	    
		message_set2( game_play, 0x408a );	/* ������å��������å� */
		this->work[ BM_MES_MODE ] = 21;			/* ��븶 */
#endif		
		this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
	    }
	}
	break;
	
    case 21:
	if ( message_check( &( game_play->message ) ) == 4 ) {	/* �������Ԥ��� */
	    if ( pad_on_check(game_play) ) {
		message_close(game_play);			/* ��å�����������ɥ��Ĥ������롩  */
		
		switch ( game_play->message.sel_pnt ) {		/* �� */
		case 0:	/* �ޤ���� */
		    this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
		    break;

		case 1:	/* �⤦���� */
		    if(fish_catch_count == 0) { /* �ܤ����� */
			message_set2( game_play, 0x4085 );	/* ������å��������å� */
		    } else {
			if(AGE == 1) { /* 5�� */
			    message_set2( game_play, 0x4092 );	/* ������å��������å� */
			}
		    }
		    this->work[ BM_MES_MODE ] = 22;
		    break;
		}
	    }
	}
	break;
	
    case 22:
	if ( message_check( &( game_play->message ) ) == 0 ) {	/* ��å��������ꡩ */
	    this->work[ BM_MES_MODE ] = 0;
#if 0		    
	    if(AGE != 1) { /* 17�� */
		bm_head_no = 1; /* �ܥ����᤹ */
		lure_with_head = 0;
	    }
#endif
	    
#if 01
	    if(lure_with_head) {
		bm_head_no = 1; /* �ܥ����᤹ */
		lure_with_head = 0;
	    }
	    fishing_game_mode = 0; /* ���� */
	    OFF_HOLD_ROD( game_play );
/*	    pla->fishing_mode = 0;*/
#endif	    
	}
	break;

    case 23:			/* �����夲�׵�����å��� */
	rod_disp = 0; /* �� �� �륢��ɽ��̵�� */
	
	if ( Actor_carry_check( &this->actor, game_play ) ) {
	    this->work[ BM_MES_MODE ] = 24;			/* ��λ�Ԥ� */
	}
	else {
	    Actor_carry_request_set2( &this->actor, game_play,
				      GET_ITEM_GOLD_SCALE,		/* ����� */
				      2000.0f,		/* �����ϰϤϥ�å����������ϰϤ���� */
				      1000.0f );
	}
	break;

    case 24:			/* ��λ�Ԥ� */
	rod_disp = 0; /* �� �� �륢��ɽ��̵�� */
	
	if ( message_check( &( game_play->message ) ) == 6 ) {
	    if ( pad_on_check(game_play) ) {
//		message_set2( game_play, 0x408a );	/* ������å��������å� */
		
/* 		PRINTF( "\033[32m���������� ���ｪλ ���������� \n\033[m" ); */

		if(my_fish_kind == FISH_KIND_BASS) {
#if 0		    
		    message_set( game_play, 0x408a, NULL );	/* ������å��������å� */
		    this->work[ BM_MES_MODE ] = 21;			/* ��븶 */
#endif		    
		    this->work[ BM_MES_MODE ] = 0;			/* ��븶 */
		} else {
		    message_set( game_play, 0x409c, NULL );	/* ƨ������ */
		    this->work[ BM_MES_MODE ] = 20;			/* ��븶 */
		}
	    }
	}
	break;
	
    }
}

/************************************************************************
 *	��å����� ��λ�����å�		message_check(z_message.c)	*
 *									*
 *	�ң���������	�����Σ��������å�����			*
 *			�������Υ�å�����ͭ��				*
 *			������å�������λ				*
 *			������å�����������				*
 *			��������					*
 *			����Ũ¦����					*
 *			������å��������Ͻ�λ				*
 *			����������ʼ�ư���ս�λ			*
 *			����������ʱ�������				*
 *			����������ʱ��ո��				*
 *		      �����������Ԥ�					*
 ************************************************************************/
