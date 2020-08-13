/* $Id: message_change.c,v 1.1 2003/03/14 03:39:08 tong Exp $ */	
/* $Log: message_change.c,v $
/* Revision 1.1  2003/03/14 03:39:08  tong
/* asset files copied from old tree to new tree.
/*
/* Revision 1.1  2003/02/12 19:07:42  tong
/* message_change source.
/*
 * Revision 1.3  1997/08/29  05:00:15  soejima
 * ��ύX�i���p�X�y�[�X�g�p�j
 * Revision 1.2  1997/04/09  04:37:39  soejima
 * EGWORD Version-UP(Version 7.0)
 * Revision 1.1  1997/01/28  10:53:33  soejima
 * $Log�ǉ�
 * */

/****************************************************************
 *	�l�`�b�m�d�f�v�n�q�c�n���̓e�L�X�g ������ �U�S�ϊ�	*
 *								*
 *	�[���_�U�S ���b�Z�[�W�ϊ��v���O����			*
 *	�y�����q�n�l�Ή��E�o�[�W�����z				*
 *								*
 *					97/01/28�i�΁jPM 04:20	*
 *  cc message_change.c -o message_change			*
 ****************************************************************/
#include <stdio.h>
#include <time.h>


/*======================================*
 *	�����ϊ��p �ϐ�			*
 *======================================*/
#define	unshort		unsigned short
#define	unchar		unsigned char

#define TO_SJIS(x)  ( (x) < (0x000A) ? (x + 0x824F) : (x - 0x000A + 0x8260) ) 
#define TO_ASCII(x) ( (x) < (0x8260) ? (x - 0x824F) : (x - 0x824F - 0x0007) )


char	File_Table[]="message.tbl";			/* �ǂݍ��݃t�@�C���s�`�a�k�d */
char	Write_File[]="zld64_msg_data.c";		/* �f�[�^�������݃t�@�C�� */
char	Table_File[]="zld64_msg_data.tbl";		/* �e�[�u���f�[�^�������݃t�@�C�� */
char	Header_File[]="zld64_msg_data.h";		/* �g�d�`�c�d�q�������݃t�@�C�� */

FILE 	*rfp;			/* �f�[�^�ǂݍ��� �|�C���^ */
FILE 	*rfpi;			/* ���ǂݍ��� �|�C���^ */
FILE 	*wfp;			/* �f�[�^�������� �|�C���^ */
FILE 	*wfpt;			/* ������.������ �������� �|�C���^ */
FILE 	*wfph;			/* ������.��     �������� �|�C���^ */

char 	file_name[200][1000];	/* �e�[�u���o�^�e������ */
unshort	file_su;		/* �e�[�u���o�^�e�������� */
unshort	file_no;		/* �e�[�u���o�^�e�������|�C���^ */
unshort dt_ct;			/* �e���������e�L�X�g �J�E���^ */
char	lf;			/* ���s���� */

int	text_count;		/* �e�L�X�g�� */

int	inf_data_adr;		/* ���b�Z�[�W���擪�A�h���X */
int	inf_data_ct;		/* ���b�Z�[�W��� */

unshort	temp1_buf[200][1000];	/* ���P */
unshort	temp2_buf[2000];	/* ���Q */
unshort	msdt_buf[0x200];	/* �����f�[�^�ǂݍ��݃o�b�t�@�i�����������^�j */
unchar 	msg_no[8];		/* ���b�Z�[�W�m���ǂݍ��݃o�b�t�@�i���������^�j */

unshort	tp1, tp2;

unshort	euc[4];			/* �r�i�h�r���d�t�b�ϊ��o�b�t�@ */

char 	*dlt;


/********************************************************************************/
/*------------ �l�`�b�f�[�^ ------------*/
#define D_HEADER	0x816F	/* �f�[�^�J�n            �i�o�j          */
#define D_SYURYOU       0x8170	/* �f�[�^�d�m�c          �i�p�j          */
#define D_KUGIRI	0x8146	/* �f�[�^��؂�          �i�F�j          */
#define Z_KEYWAIT       0x81A5	/* �L�[�҂� :���y�[�W    �i���j          */
#define Z_BLANK		0x86C7	/* ��                  �i���y�Q���z�j  */
#define Z_NEXTMSG	0x81CB	/* �m�d�w�s���b�Z�[�W�ԍ��i�ˁy�S���z�j  */
#define Z_START         0x8189	/* �ꊇ�\���J�n          �i���j          */
#define Z_STOP          0x818A	/* �ꊇ�\���I��          �i���j          */
#define Z_DISPSTOP      0x86C8	/* �\����~              �i���j          */
#define Z_ENEMY         0x819F	/* �G������R�[�h        �i���j          */
#define Z_TIMER         0x81A3	/* �s�h�l�d�q 		 �i���y�Q���z�j  */
#define Z_PAUSE         0x81A4	/* �L�[�҂�              �i���j          */
#define Z_TIMER_END     0x819E	/* �^�C�}�[�t�I���R�[�h  �i���j          */
#define Z_NAME          0x874F	/* �v���C���[�o�^���O    �i���j          */
#define Z_OCARINA       0x81F0	/* �I�J���i              �i�`�j          */
#define Z_BGM	        0x81F4	/* �T�E���h�i�a�f�l�j    �i��y�S���z�j  */
#define Z_SE            0x81F3	/* �T�E���h�i�r�d�j      �i��y�S���z�j  */
#define Z_DPITEM	0x819A	/* �A�C�e��              �i���y�R���z�j  */
#define Z_SPEED         0x86C9	/* �����\���X�s�[�h      �i���y�Q���z�j  */
#define Z_TEXTURE       0x86B3	/* �P���e�N�X�`��        �i.�s.�y�U���z�j*/
#define Z_EVENT_0	0x8791	/* �d�u�d�m�s�^�C�}�[��  �i��j          */
#define Z_EVENT_1	0x8792	/* �d�u�d�m�s�^�C�}�[��  �i���j          */
#define Z_NONONO	0x8199	/* ������֎~            �i���j          */
#define	Z_SENTAKU_2	0x81BC	/* �Q��                  �i���j          */
#define Z_SENTAKU_3	0x81B8	/* �R��                  �i���j          */
#define KAIGYO          0x0A	/* ���s */
#define CHANGE          0x0B	/* �����F�ؑ� */
#define SPACE           0x8140	/* �X�y�[�X */

/********************************************************************************/
/*=======================================================
  =	�r�i�h�r ���i�i�h�r�j�� �d�t�b �ϊ�		=
  =	�i�{�P�Q�W���O���Ƃi�h�r�ϊ��ɂȂ�j		=
  =======================================================*/
static void
sjis2euc( unchar c1, unchar c2 )
{
    int		adjust = c2 < 159;
    int		rowOffset = c1 < 160 ? 112 : 176;
    int		cellOffset = adjust ? ( c2 > 127 ? 32 : 31 ) : 126;

    euc[0] =  (((( c1 - rowOffset ) << 1) - adjust) + 128) << 8;
    euc[0] |= (c2 - cellOffset) + 128;
    euc[1] =  NULL;
}

/*---------------------------------------
  -	���b�Z�[�W�m���D�f�d�s		-
  ---------------------------------------*/
static void
message_number_get( void )
{
    if ( msdt_buf[5] != D_KUGIRI /*�i�F�j*/ ) {
	/* ���b�Z�[�W�m�n�D�G���[ */
	printf("'%s' Message_No. ERROR\n", file_name[file_no]);
	exit(1);
    }

    /* �L���X�g���Z */
    msg_no[0] = 0x30/* 0 */;
    msg_no[1] = 0x78/* x */;
    msg_no[2] = (char)( msdt_buf[1] > 0x825F ? ( msdt_buf[1] > 0x8280 ? (msdt_buf[1]-0x8281)+0x61 : (msdt_buf[1]-0x8260)+0x41 ) : (msdt_buf[1]-0x824F)+0x30 );
    msg_no[3] = (char)( msdt_buf[2] > 0x825F ? ( msdt_buf[2] > 0x8280 ? (msdt_buf[2]-0x8281)+0x61 : (msdt_buf[2]-0x8260)+0x41 ) : (msdt_buf[2]-0x824F)+0x30 );
    msg_no[4] = (char)( msdt_buf[3] > 0x825F ? ( msdt_buf[3] > 0x8280 ? (msdt_buf[3]-0x8281)+0x61 : (msdt_buf[3]-0x8260)+0x41 ) : (msdt_buf[3]-0x824F)+0x30 );
    msg_no[5] = (char)( msdt_buf[4] > 0x825F ? ( msdt_buf[4] > 0x8280 ? (msdt_buf[4]-0x8281)+0x61 : (msdt_buf[4]-0x8260)+0x41 ) : (msdt_buf[4]-0x824F)+0x30 );
    msg_no[6] = 0x2c/* , */;
    msg_no[7] = 0x20/*   */;

    /* ���b�Z�[�W�m�n�D�������� */
    fprintf(wfpt,"\t{ ");
    if( (fwrite(&msg_no, sizeof(char), 0x8, wfpt)) != 0x8 ){
	printf("[zld64_msg_data.tbl]  Message_No. Write ERROR!!\n");
	exit(1);
    }
    printf("Message_No.=%c%c%c%c  :  ",msg_no[2],msg_no[3],msg_no[4],msg_no[5]);
}

/*---------------------------------------
  -	�s������ �f�[�^ �f�d�s		-
  ---------------------------------------*/
static void
message_type_get( void )
{
    unchar 	msg_buf[10];		/* �f�[�^�ǂݍ��݃o�b�t�@�i���������^�j */


    if ( msdt_buf[8] != D_KUGIRI /*�i�F�j*/ ) {
	printf("'%s' HEADER DATA ERROR\n", file_name[file_no]);
	exit(1);
    }

    /* �L���X�g���Z */
    msg_buf[0] = 0x30/* 0 */;
    msg_buf[1] = 0x78/* x */;
    msg_buf[2] = (char)( msdt_buf[6] > 0x825F ? ( msdt_buf[6] > 0x8280 ? (msdt_buf[6]-0x8281)+0x61 : (msdt_buf[6]-0x8260)+0x41 ) : (msdt_buf[6]-0x824F)+0x30 );
    msg_buf[3] = (char)( msdt_buf[7] > 0x825F ? ( msdt_buf[7] > 0x8280 ? (msdt_buf[7]-0x8281)+0x61 : (msdt_buf[7]-0x8260)+0x41 ) : (msdt_buf[7]-0x824F)+0x30 );
    msg_buf[4] = 0x2c/* , */;
    msg_buf[5] = 0x20/*   */;


    /* �t�@�C�� �������� */
    if( (fwrite(&msg_buf, sizeof(char), 0x6, wfpt)) != 0x6 ) {
	printf("zld64_msg_data.tbl HEADER Write Error\n");
	exit(1);
    }
    printf("Type=%c%c\n",msg_buf[0], msg_buf[1] );
}

/*---------------------------------------
  -	���s�`�F�b�N			-
  ---------------------------------------*/
static void
return_code_check( void )
{
    if ( lf != 0 ) {
	fprintf(wfp, "\n\t");
	lf = 0;
    }
}
/*---------------------------------------
  -	���s�`�F�b�N			-
  ---------------------------------------*/
static void
return_code_check1( void )
{
    if ( lf != 0 ) {
	fprintf(wfp, "\n");
	lf = 0;
    }
}


/****************************************************************
 *	�e������ �n����������					*
 ****************************************************************/
static void
file_open( void )
{
    /*
     * �ǂݍ��݂s�`�a�k�d �n�o�d�m
     */
    printf( "********************************************************\n");
    printf( "*******    S T A R T  :  %s",dlt);
    printf( "********************************************************\n");
    if ( ( rfp = fopen( File_Table, "r" ) ) == NULL ) {
	printf( "[%s] File_Table Open Error!!!\n", File_Table );
	exit(1);
    }
    /* �e�[�u�����̃t�@�C���������߂� */
    file_su = 0;
    while ( fscanf( rfp, "%s\n", &file_name[file_su] ) != EOF ) file_su++;
    if ( !file_su ) {
	/* �t�@�C�������I�I ������ �I�� */
	printf( "%s TABLE_File Nothing!!!\n", File_Table );
	exit(1);
    } else /* �t�@�C�����\�� */
	printf( "*** OPEN File_Table = %s,   FILE COUNT = %d\n", File_Table, file_su );
    fclose( rfp );
    
    /*
     * �f�[�^�������݃t�@�C�� �n������
     */
    if( ( wfp = fopen( Write_File, "w" ) ) == NULL ) {
	printf( "[%s] Write_File OPEN ERROR!!\n", Write_File );
	exit(1);
    }
    fprintf( wfp, "/*\n * �쐬�� : %s */\n", dlt );
    fprintf( wfp, "/*------------ �b�n�c�d �c�`�s�` ------------*/\n" );
    fprintf( wfp, "#define D_SYURYOU            0x8170	/* �f�[�^�d�m�c �i�p�j*/\n" );
    fprintf( wfp, "#define Z_KEYWAIT            0x81A5	/* �L�[�҂� �i���j*/\n" );
    fprintf( wfp, "#define Z_BLANK              0x86C7	/* �󂫁i���y�Q���z�j*/\n" );
    fprintf( wfp, "#define Z_NEXTMSG            0x81CB	/* �m�d�w�s���b�Z�[�W�ԍ��i�ˁy�S���z�j*/\n" );
    fprintf( wfp, "#define Z_START              0x8189	/* �ꊇ�\���J�n �i���j*/\n" );
    fprintf( wfp, "#define Z_STOP               0x818A	/* �ꊇ�\���I�� �i���j*/\n" );
    fprintf( wfp, "#define Z_DISPSTOP           0x86C8	/* �\����~ �i���j*/\n" );
    fprintf( wfp, "#define Z_ENEMY              0x819F	/* �G������R�[�h �i���j*/\n" );
    fprintf( wfp, "#define Z_TIMER              0x81A3	/* �s�h�l�d�q�i���y�Q���z�j*/\n" );
    fprintf( wfp, "#define Z_PAUSE              0x81A4	/* �L�[�҂� �i���j*/\n" );
    fprintf( wfp, "#define Z_TIMER_END          0x819E	/* �^�C�}�[�t�I���R�[�h  �i���j*/\n" );
    fprintf( wfp, "#define Z_NAME               0x874F	/* �v���C���[�o�^���O �i�j*/\n" );
    fprintf( wfp, "#define Z_OCARINA            0x81F0	/* �I�J���i �i�`�j*/\n" );
    fprintf( wfp, "#define Z_BGM                0x81F4	/* �T�E���h�i�a�f�l�j�i��y�S���z*/\n" );
    fprintf( wfp, "#define Z_SE                 0x81F3	/* �T�E���h�i�r�d�j�i��y�S���z�j*/\n" );
    fprintf( wfp, "#define Z_DPITEM             0x819A	/* �A�C�e���i���y�R���z�j*/\n" );
    fprintf( wfp, "#define Z_SPEED              0x86C9	/* �����\���X�s�[�h�i���y�Q���z�j*/\n" );
    fprintf( wfp, "#define Z_TEXTURE            0x86B3	/* �P���e�N�X�`���i.�s.�y�U���z�j*/\n" );
    fprintf( wfp, "#define Z_EVENT_0		0x8791	/* �d�u�d�m�s�^�C�}�[��  �i��j*/\n" );
    fprintf( wfp, "#define Z_EVENT_1		0x8792	/* �d�u�d�m�s�^�C�}�[��  �i���j*/\n" );
    fprintf( wfp, "#define Z_NONONO	        0x8199	/* ������֎~            �i���j*/\n" );
    fprintf( wfp, "#define Z_SENTAKU_2          0x81BC	/* �Q�� */\n" );
    fprintf( wfp, "#define Z_SENTAKU_3          0x81B8	/* �R�� */\n" );
    fprintf( wfp, "#define KAIGYO               0x0A	/* ���s */\n" );
    fprintf( wfp, "#define CHANGE               0x0B	/* �����F�ؑ� */\n" );
    fprintf( wfp, "#define SPACE                0x8140	/* �X�y�[�X */\n\n" );

    /*
     * �e�[�u���f�[�^�������݃t�@�C�� �n������
     */
    if( ( wfpt = fopen( Table_File, "w" ) ) == NULL ) {
	printf( "[%s]  Write_Table OPEN ERROR!!\n", Table_File );
	exit(1);
    }
    fprintf( wfpt, "/*\n * �쐬�� : %s */\nstatic\nMSG_T message_tbl[] = {\n", dlt );

    /*
     * �g�d�`�c�d�q�������݃t�@�C�� �n������
     */
    if( ( wfph = fopen( Header_File, "w" ) ) == NULL ) {
	printf( "[%s] Write_HEADER_FILE OPEN ERROR!!\n", Header_File );
	exit(1);
    }
    fprintf( wfph, "  ==    �쐬�� : %s ", dlt );
    fprintf( wfph, " ===============================================================*/\n");
    fprintf( wfph, "/*------------ �b�n�c�d �c�`�s�` ------------*/\n" );
    fprintf( wfph, "#define D_SYURYOU            0x8170	/* �f�[�^�d�m�c �i�p�j*/\n" );
    fprintf( wfph, "#define Z_KEYWAIT            0x81A5	/* �L�[�҂� �i���j*/\n" );
    fprintf( wfph, "#define Z_BLANK              0x86C7	/* �󂫁i���y�Q���z�j*/\n" );
    fprintf( wfph, "#define Z_NEXTMSG            0x81CB	/* �m�d�w�s���b�Z�[�W�ԍ��i�ˁy�S���z�j*/\n" );
    fprintf( wfph, "#define Z_START              0x8189	/* �ꊇ�\���J�n �i���j*/\n" );
    fprintf( wfph, "#define Z_STOP               0x818A	/* �ꊇ�\���I�� �i���j*/\n" );
    fprintf( wfph, "#define Z_DISPSTOP           0x86C8	/* �\����~ �i���j*/\n" );
    fprintf( wfph, "#define Z_ENEMY              0x819F	/* �G������R�[�h �i���j*/\n" );
    fprintf( wfph, "#define Z_TIMER              0x81A3	/* �s�h�l�d�q�i���y�Q���z�j*/\n" );
    fprintf( wfph, "#define Z_PAUSE              0x81A4	/* �L�[�҂� �i���j*/\n" );
    fprintf( wfph, "#define Z_TIMER_END          0x819E	/* �^�C�}�[�t�I���R�[�h  �i���j*/\n" );
    fprintf( wfph, "#define Z_NAME               0x874F	/* �v���C���[�o�^���O �i�j*/\n" );
    fprintf( wfph, "#define Z_OCARINA            0x81F0	/* �I�J���i �i�`�j*/\n" );
    fprintf( wfph, "#define Z_BGM                0x81F4	/* �T�E���h�i�a�f�l�j�i��y�S���z*/\n" );
    fprintf( wfph, "#define Z_SE                 0x81F3	/* �T�E���h�i�r�d�j�i��y�S���z�j*/\n" );
    fprintf( wfph, "#define Z_DPITEM             0x819A	/* �A�C�e���i���y�R���z�j*/\n" );
    fprintf( wfph, "#define Z_SPEED              0x86C9	/* �����\���X�s�[�h�i���y�Q���z�j*/\n" );
    fprintf( wfph, "#define Z_TEXTURE            0x86B3	/* �P���e�N�X�`���i.�s.�y�U���z�j*/\n" );
    fprintf( wfph, "#define Z_EVENT_0		 0x8791	/* �d�u�d�m�s�^�C�}�[��  �i��j*/\n" );
    fprintf( wfph, "#define Z_EVENT_1		 0x8792	/* �d�u�d�m�s�^�C�}�[��  �i���j*/\n" );
    fprintf( wfph, "#define Z_NONONO	         0x8199	/* ������֎~            �i���j*/\n" );
    fprintf( wfph, "#define Z_SENTAKU_2          0x81BC	/* �Q�� */\n" );
    fprintf( wfph, "#define Z_SENTAKU_3          0x81B8	/* �R�� */\n" );
    fprintf( wfph, "#define KAIGYO               0x0A	/* ���s */\n" );
    fprintf( wfph, "#define CHANGE               0x0B	/* �����F�ؑ� */\n" );
    fprintf( wfph, "#define SPACE                0x8140	/* �X�y�[�X */\n\n" );
}


/****************************************************************
 *	��{�f�[�^�ǂݍ��ݏ���					*
 ****************************************************************/
static void
basic_data_read( void )
{
    int		text_start_adr;		/* ���b�Z�[�W�c�`�s�`�擪�A�h���X */
    int		text_total_ct;		/* ���b�Z�[�W�������� */
    unchar 	title_buf[100];		/* �f�[�^�ǂݍ��݃o�b�t�@�i���������^�j */
    short	i, cfg;


    /*
     * �q�d�`�c �e������ �n������
     */
    if( (rfp = fopen(file_name[file_no],"r")) == NULL ) {
	printf("%s 999 Read File Open Error!!\n", file_name[file_no]);
	exit(1);
    }
    if( (rfpi = fopen(file_name[file_no],"r")) == NULL ) {
	printf("%s 999 Read File Open Error!!\n", file_name[file_no]);
	exit(1);
    }
    
    tp1 = 0;
    /*
     * �^�C�g���ʒu����
     */
    if ( (fread(&title_buf, sizeof(unchar), 0x70, rfp)) != 0x70 ) {
	printf("'%s' READ OPEN ERROR1111!!\n", file_name);
	exit(1);
    }


    /* ���b�Z�[�W���������f�����ytext_total_ct�z */
    cfg = 1;
    i = -1;
    while ( cfg ) {
	if ( title_buf[++i] == 0x54/* T */ ) {
	    if ( title_buf[++i] == 0x45/* E */ ) {
		if ( title_buf[++i] == 0x58/* X */ ) {
		    if ( title_buf[++i] == 0x54/* T */ ) {
			/* ���b�Z�[�W�c�`�s�`�擪�A�h���X */
			text_start_adr = ((int)title_buf[i+1]<<24 | (int)title_buf[i+2]<<16 | (int)title_buf[i+3]<<8 | (int)title_buf[i+4]);
			/* ���b�Z�[�W�������� */
			text_total_ct = ((int)title_buf[i+5]<<24 | (int)title_buf[i+6]<<16 | (int)title_buf[i+7]<<8 | (int)title_buf[i+8]);
			cfg = 0;
		    }
		}
	    }
	}
    }
    printf("text_total_ct=%d(%x : %2x,%2x,%2x,%2x) text_start_adr=%x\n",text_total_ct, i+5, title_buf[i+5], title_buf[i+6], title_buf[i+7], title_buf[i+8], text_start_adr );


    /* ���b�Z�[�W��񐔂f�����yinf_data_adr, inf_data_ct�z */
    cfg = 1;
    while ( cfg ) {
	if ( title_buf[++i] == 0x41/* A */ ) {
	    if ( title_buf[++i] == 0x54/* T */ ) {
		if ( title_buf[++i] == 0x52/* R */ ) {
		    if ( title_buf[++i] == 0x42/* B */ ) {
			/* ���b�Z�[�W���擪�A�h���X */
			inf_data_adr = ((int)title_buf[i+1]<<24 | (int)title_buf[i+2]<<16 | (int)title_buf[i+3]<<8 | (int)title_buf[i+4]);
			/* ���b�Z�[�W��� */
			inf_data_ct = ((int)title_buf[i+5]<<24 | (int)title_buf[i+6]<<16 | (int)title_buf[i+7]<<8 | (int)title_buf[i+8]);
			cfg = 0;
		    }
		}
	    }
	}
    }
    printf("inf_data_ct=%d(%x : %2x,%2x,%2x,%2x)\n",inf_data_ct, i+5, title_buf[i+5], title_buf[i+6], title_buf[i+7], title_buf[i+8] );


    /* ���b�Z�[�W�c�`�s�`�擪�ʒu�ֈړ� */
    fseek(rfp, text_start_adr, SEEK_SET);

    /* ���擪�ړ� */
    fseek(rfpi, inf_data_adr, SEEK_SET);
}


/****************************************************************
 *	�f�[�^�g�d�`�c�d�q����					*
 ****************************************************************/
static void
header_proc( void )
{
    int		i, r_ct;


    /* �f�[�^�g�d�`�c�d�q���ǂݍ��� */
    if ( (i=fread(&r_ct, sizeof(int), 0x1, rfp)) != 0x1 ) {
	printf("-'%s'- (%x)READ ERROR!!!!\n", file_name[file_no],i);
	exit(1);
    }
    /* �f�[�^�g�d�`�c�d�q�ǂݍ��݁i�f�[�^�g�d�`�c�d�q�����j */
    if ( (i=fread(&msdt_buf, sizeof(unshort), (r_ct/2), rfp)) != (r_ct/2) ) {
	printf("--'%s'-- [%x]READ ERROR!!!!\n", file_name[file_no],i);
	exit(1);
    }
    printf("msdt_buf[%2x]=",r_ct);
    for ( i = 0; i < (r_ct/2); i++ ) {
	/* �r�i�h�r �� �d�t�b */
	sjis2euc( msdt_buf[i] >> 8, msdt_buf[i] & 0x00ff );
	printf("%s ", euc);
    }
    printf("\n");

    if ( msdt_buf[0] == D_HEADER /*�i�o�j*/) {
	/* ���b�Z�[�W�m���D�ǂݍ��� */
	message_number_get();

	/* ���b�Z�[�W�s�x�o�d �ǂݍ��� */
	message_type_get();

	/* "������.������" ���b�Z�[�W�m���D�������� */
	fprintf(wfpt, "%s_%c%c%c%c },\t\t/* %6d */\n", file_name[file_no], msg_no[2], msg_no[3], msg_no[4], msg_no[5], text_count );
	/* "������.��" ���b�Z�[�W�m���D�������� */
	fprintf(wfph, "extern unsigned short %s_%c%c%c%c[];\n",file_name[file_no], msg_no[2], msg_no[3], msg_no[4], msg_no[5] );
    } else {
	printf("DATA HEADER ERROR 123!! :::  msdt_buf[0] = %x \n", msdt_buf[0]);
	exit(1);
    }
}


/****************************************************************
 *	���b�Z�[�W �f�[�^�i���������݃o�b�t�@�P�ɃZ�b�g�j	*
 *	����������������������������������������������		*
 *	�� �� ��       �f�[�^�i�����o�C�g�j       ��		*
 *	����������������������������������������������		*
 * 	  �����p�X�y�[�X�n�j�I�I�i�K�������j			*
 ****************************************************************/
static void
msg_data_get( void )
{
    int		i, j, r_ct;
    unshort	low, high;


    while ( 1 ) {
	if ( (fread(&r_ct, sizeof(int), 0x1, rfp)) != 0x1 ) {
	    printf( "'%s' READ ERROR!!  r_ct=%x\n", file_name[file_no], r_ct );
	    exit(1);
	}
	fseek( rfp, -2, SEEK_CUR );
	printf("r_ct=%x  ",r_ct);
	/* ���b�Z�[�W �f�[�^�ǂݍ��݁i���b�Z�[�W �f�[�^�����j */
	if ( (i=fread(&msdt_buf, sizeof(unshort), (r_ct/2)+1, rfp)) != (r_ct/2)+1 ) {
	    printf("'%s' (%x)READ ERROR!!!!\n", file_name[file_no],i);
	    exit(1);
	}
	if ( msdt_buf[1] == D_HEADER /*�i�o�j*/ ) {
	    printf("\n");
	    temp1_buf[dt_ct][0] = 0;
	    i = r_ct + 4;
	    fseek( rfp, -i, SEEK_CUR );
	    break;
	} else {
	    printf("temp1_buf[%x] = ",dt_ct);
	    for ( i = j = 0; i < (r_ct/2)+1; i++ ) {
		temp1_buf[dt_ct][j] = msdt_buf[i];
		if ( msdt_buf[i] > 0x8000 ) {
		    /* �r�i�h�r �� �d�t�b */
		    sjis2euc( temp1_buf[dt_ct][j] >> 8, temp1_buf[dt_ct][j] & 0x00ff );
		    printf("%s ", euc);
		} else {
		    if ( !j ) printf("[%04x] ",msdt_buf[i]);
		    else      printf("<%04x> ",msdt_buf[i]);
		}
		j++;
		if ( j > 1000 ) {
		    printf("--temp1_buf-- SIZE OVER!!!\n");
		    exit(1);
		}
	    }
	    printf("\n");
	    dt_ct++;
	    temp1_buf[dt_ct][0] = 0;
	    if ( msdt_buf[i-1] == D_SYURYOU ) break;
	}
    }
}


/************************************************************************
 *	�o�͕������i���������݃o�b�t�@�Q�ɃZ�b�g�j			*
 *������������������������������������������������������������������	*
 *�� �� ��      ��      ���T�C�Y��      ��      ��  �F  ��      ��	*
 *������������������������������������������������������������������	*
 *		 	    ��      ��      ��				*
 *			��������������������������			*
 *			�� �� ���T�C�Y��  �F  ��			*
 *			��������������������������			*
 * �T�C�Y�i�P�U�i�\���F��{�P�Q�h�b�g�j					*
 * �F�i�O�F��, �P�F��, �Q�F��, �R�F���F, �S�F��, �T�F�s���N, �U�F���F�j *
 ************************************************************************/
static void
msg_inf_get( void )
{
    int 	r_ct, data_ct, ct;
    unshort	i;
    
    
    data_ct = tp1 = tp2 = 0;
    while ( 1 ) {
	if ( (fread(&r_ct, sizeof(int), 0x1, rfpi)) != 0x1 ) {
	    printf("'%s' INFORMATION COUNT ERROR!!\n", file_name[file_no]);
	    exit(1);
	}
	printf("r_ct=%x\n",r_ct);
	if ( (fread(&msdt_buf, sizeof(unshort), (r_ct/2), rfpi)) != (r_ct/2) ) {
	    printf("'%s' INFORMATION DATA ERROR!!\n", file_name[file_no]);
	    exit(1);
	}
	for ( i = ct = 0; i < (r_ct/2); i += 0x8 ) ct += msdt_buf[0+i];
	if ( !ct ) break;
	printf("ct=%x, temp1_buf=%x\n",ct, temp1_buf[tp1][0] );
	if ( ct == temp1_buf[tp1][0] ) {
	    for ( i = 0; i < (r_ct/2); ) {
		printf("[%02x]=%04x, ",i, msdt_buf[i]);
		i++;
		if ( !(i & 0x0007) ) printf("\n");
	    }
	    for ( i = 0; i < (r_ct/2); i += 0x8 ) {
		/* �� */
		temp2_buf[tp2] = msdt_buf[0+i];
		/* �����T�C�Y */
		temp2_buf[tp2+2] = TO_SJIS( (msdt_buf[3+i] >> 8) );
		/* �����J���[ */
		temp2_buf[tp2+4] = (msdt_buf[6+i] + 0x824F);
		printf("temp2_buf[%02x]=%04x,%04x,%04x(%04x,%04x,%04x)\n",
		       tp2,
		       temp2_buf[tp2],temp2_buf[tp2+2],temp2_buf[tp2+4],
		       msdt_buf[0+i], msdt_buf[3+i],   msdt_buf[6+i]);
		tp2 += 6;
		temp2_buf[tp2] = 0;
		if ( tp2 > 2000 ) {
		    printf("--temp2_buf-- SIZE OVER!!!\n");
		    exit(1);
		}
	    }
	    tp1++;
	} else {
	    if ( !temp1_buf[tp1][0] ) break;
	}
	data_ct += (r_ct + 4);
	printf("inf_data_ct=%x  data_ct=%x\n",inf_data_ct,data_ct);
	if ( inf_data_ct == data_ct ) break;
    }
}


/****************************************************************
 *	���b�Z�[�W�f�[�^ �� �o�͕������ ����			*
 ****************************************************************/
static void
msg_data_link( void )
{
    unshort	x, read_ct;
    int		i, j, ct, mct;
    unshort	comment_buf[1000];	/* �R�����g�p */
    unshort 	inf_buf[3];	        /* �������o�b�t�@ */

    
    dt_ct = tp2 = 0;
    /* ���b�Z�[�W�m���B�������� */
    fprintf(wfp, "unsigned short %s_%c%c%c%c[] = {\n", file_name[file_no], msg_no[2], msg_no[3], msg_no[4], msg_no[5] );
    
    /* �����ݒ� */
    inf_buf[1] = 0x8262;
    inf_buf[2] = 0x824F;

    /* �f�[�^ �������� */
    while ( 1 ) {
	tp1 = 1;
	return_code_check1();		/* ���s�`�F�b�N */
	fprintf(wfp, "\t/*  ");   	/* ���b�Z�[�W �R�����g */
	ct = temp1_buf[dt_ct][0];
	printf("dt_ct=%x ct=%x-->(",dt_ct, ct);
	for ( i = j = 0; i < (ct/2); i++ ) {
	    printf("(%x)",temp1_buf[dt_ct][i+1]);
	    if ( temp1_buf[dt_ct][i+1] != 0x2020 ) {
		comment_buf[j] = temp1_buf[dt_ct][i+1];
		printf("%x, ",comment_buf[j]);
		j++;
	    }
	    comment_buf[j] = NULL;
	}
	printf(")i=%x j=%x   ct=%x\n",i, j, ct);
	if( (fwrite(&comment_buf, sizeof(unshort), j, wfp)) != j ){
	    printf("zld64_msg_data.c COMMENT Write Error\n");
	    exit(1);
	}
	fprintf(wfp, "  */\n");
	
	/* �o�͕������ */
	fprintf(wfp, "\t");
	mct = 0;
	while ( 1 ) {
	    if ( inf_buf[1] != temp2_buf[tp2+2] || inf_buf[2] != temp2_buf[tp2+4] ) {
		x = (( TO_ASCII(temp2_buf[tp2+2]) ) << 8) | TO_ASCII(temp2_buf[tp2+4]);
		return_code_check();	/* ���s�`�F�b�N */
		fprintf( wfp, "CHANGE,0x%04x,\n\t", x );
		inf_buf[1] = temp2_buf[tp2+2];
		inf_buf[2] = temp2_buf[tp2+4];
	    }
	    
	    /* ���b�Z�[�W */
	    for ( i = 0; i < (temp2_buf[tp2]/2); i++ ) {
		printf("msg_no=%x %x %x %x\n",msg_no[2], msg_no[3], msg_no[4], msg_no[5]);
		if ( msg_no[2] == 0x46 && msg_no[3] == 0x46 && msg_no[4] == 0x46 && msg_no[5] == 0x43 ) {
		    /* kscope_moji_FFFC[] */
		    /* �J���C�h�E�X�R�[�v�p�t�H���g�f�[�^ */
		    read_ct = (temp2_buf[tp2] >> 1) + tp1;
		    for (; tp1 < read_ct; tp1++) {
			if ( temp1_buf[dt_ct][tp1] != D_SYURYOU ) {
			    fprintf(wfp, "0x%04x,",temp1_buf[dt_ct][tp1]);
			} else {
			    fprintf( wfp, "\n\tD_SYURYOU,  /* ---> �I�� */\n\t" );
			    break;
			}
		    }
		    lf = 1;
		    break;
		} else {
/*		    printf("<%02x> ",temp1_buf[dt_ct][tp1]);*/
		    switch( temp1_buf[dt_ct][tp1] ) {
		    case D_SYURYOU:
			/* �I�� */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "D_SYURYOU,  /* ---> �I�� */\n\t" );
			break;

		    case Z_KEYWAIT:
			/* �L�[�҂� */
			fprintf( wfp, "\n\tZ_KEYWAIT,  /* �L�[�҂� */\n" );
			lf = 99;
			break;
			    
		    case Z_BLANK:
			x = ( TO_ASCII( temp1_buf[dt_ct][tp1+1] ) ) << 4;
			x |= TO_ASCII( temp1_buf[dt_ct][tp1+2] );
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_BLANK, %x,  /* �󂫂c������ */\n\t", x );
			tp1+=2;
			i+=2;
			break;
			    
		    case Z_NEXTMSG:
			x =  ( TO_ASCII( temp1_buf[dt_ct][tp1+1] ) ) << 12;
			x |= ( TO_ASCII( temp1_buf[dt_ct][tp1+2] ) ) << 8;
			x |= ( TO_ASCII( temp1_buf[dt_ct][tp1+3] ) ) << 4;
			x |= TO_ASCII( temp1_buf[dt_ct][tp1+4] );
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_NEXTMSG, 0x%x,  /* ---> �m�d�w�s���b�Z�[�W�ԍ� */\n\t", x );
			tp1+=4;
			i+=4;
			break;

		    case Z_START:
			/* �ꊇ�\���J�n */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_START, /* �ꊇ�\���J�n */ " );
			lf = 1;
			break;

		    case Z_STOP:
			/* �ꊇ�\���I�� */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_STOP, /* �ꊇ�\���I�� */ " );
			lf = 1;
			break;

		    case Z_TIMER:
			/* �s�h�l�d�q */
			x = ( TO_ASCII( temp1_buf[dt_ct][tp1+1] ) ) << 4;
			x |= TO_ASCII( temp1_buf[dt_ct][tp1+2] );
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_TIMER, %x,  /* �s�h�l�d�q */\n\t", x );
			tp1+=2;
			i+=2;
			lf = 99;
			break;

		    case Z_PAUSE:
			/* �L�[�҂� */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_PAUSE, /* �L�[�҂� */ " );
			lf = 1;
			break;

		    case Z_TIMER_END:
			/* �s�h�l�d�q */
			x = ( TO_ASCII( temp1_buf[dt_ct][tp1+1] ) ) << 4;
			x |= TO_ASCII( temp1_buf[dt_ct][tp1+2] );
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_TIMER_END, %x,  /* �^�C�}�[�t�I���R�[�h */\n\t", x );
			tp1+=2;
			i+=2;
			lf = 99;
			break;

		    case Z_NAME:
			/* �v���C���[�o�^���O */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_NAME, /* �v���C���[�o�^���O */ " );
			lf = 1;
			break;

		    case Z_OCARINA:
			/* �I�J���i */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_OCARINA, /* �I�J���i */ " );
			lf = 1;
			break;

		    case Z_BGM:
			/* �T�E���h�i�a�f�l�j*/
			x =  ( TO_ASCII( temp1_buf[dt_ct][tp1+1] ) ) << 12;
			x |= ( TO_ASCII( temp1_buf[dt_ct][tp1+2] ) ) << 8;
			x |= ( TO_ASCII( temp1_buf[dt_ct][tp1+3] ) ) << 4;
			x |= TO_ASCII( temp1_buf[dt_ct][tp1+4] );
			return_code_check();	/* ���s�`�F�b�N */
			fprintf(wfp, "Z_BGM, 0x%x,\n\t", x );
			tp1+=4;
			break;

		    case Z_SE:
			/* �T�E���h�i�r�d�j*/
			x =  ( TO_ASCII( temp1_buf[dt_ct][tp1+1] ) ) << 12;
			x |= ( TO_ASCII( temp1_buf[dt_ct][tp1+2] ) ) << 8;
			x |= ( TO_ASCII( temp1_buf[dt_ct][tp1+3] ) ) << 4;
			x |= TO_ASCII( temp1_buf[dt_ct][tp1+4] );
			return_code_check();	/* ���s�`�F�b�N */
			fprintf(wfp, "Z_SE, 0x%x,\n\t", x );
			tp1+=4;
			break;
			    
		    case Z_DPITEM:
			/* �A�C�e�� */
			x =  ( TO_ASCII( temp1_buf[dt_ct][tp1+1] ) ) << 8;
			x |= ( TO_ASCII( temp1_buf[dt_ct][tp1+2] ) ) << 4;
			x |= TO_ASCII( temp1_buf[dt_ct][tp1+3] );
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_DPITEM,%x,\n\t", x );
			tp1+=3;
			i+=3;
			break;
			    
		    case Z_SPEED:
			/* �����\���X�s�[�h */
			x = ( TO_ASCII( temp1_buf[dt_ct][tp1+1] ) ) << 4;
			x |= TO_ASCII( temp1_buf[dt_ct][tp1+2] );
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_SPEED, %x,  /* �����\���X�s�[�h */\n\t", x );
			tp1+=2;
			i+=2;
			break;
			    
		    case Z_TEXTURE:
			return_code_check();	/* ���s�`�F�b�N */
			/* �P���e�N�X�`�� */
			x = ( TO_ASCII( temp1_buf[dt_ct][tp1+1] ) ) << 4;
			x |= TO_ASCII( temp1_buf[dt_ct][tp1+2] );
			fprintf( wfp, "Z_TEXTURE, 0x%02x,", x );
			x =  ( TO_ASCII( temp1_buf[dt_ct][tp1+3] ) ) << 12;
			x |= ( TO_ASCII( temp1_buf[dt_ct][tp1+4] ) ) << 8;
			x |= ( TO_ASCII( temp1_buf[dt_ct][tp1+5] ) ) << 4;
			x |= TO_ASCII( temp1_buf[dt_ct][tp1+6] );
			fprintf( wfp, " 0x%04x,  /* �P���e�N�X�`�� */\n\t", x );
			tp1+=6;
			i+=6;
			break;

		    case Z_EVENT_0:
			/* �d�u�d�m�s�^�C�}�[�� */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_EVENT_0, /* �d�u�d�m�s�^�C�}�[�� */ " );
			lf = 1;
			break;

		    case Z_EVENT_1:
			/* �d�u�d�m�s�^�C�}�[�� */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_EVENT_1, /* �d�u�d�m�s�^�C�}�[�� */ " );
			lf = 1;
			break;

		    case Z_NONONO:
			/* ������֎~ */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_NONONO, /* ������֎~ */\n\t" );
			lf = 1;
			break;

		    case Z_SENTAKU_2:
			/* �Q�� */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_SENTAKU_2,\n\t" );
			break;

		    case Z_SENTAKU_3:
			/* �R�� */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_SENTAKU_3,\n\t" );
			break;

		    case 0x2020:
			/* �f�[�^�����i�������X�y�[�X�j*/
			break;

		    case Z_DISPSTOP:
			/* �\����~ */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_DISPSTOP, /* �\����~ */ " );
			lf = 1;
			break;

		    case Z_ENEMY:
			/* �G������R�[�h */
			return_code_check();	/* ���s�`�F�b�N */
			fprintf( wfp, "Z_ENEMY, /* �\����~ */ " );
			lf = 99;
			break;
			
		    default:   /* ���̑� */
/*			printf("- WRITE\n");*/
			fprintf(wfp, "0x%04X,",temp1_buf[dt_ct][tp1]);
			lf = 1;
			break;
		    }
		    tp1++;
		}
	    }
	    mct += temp2_buf[tp2];
	    tp2 += 6;
	    printf("mct=%x   temp2_buf[%x]=%02x\n",mct, tp2, temp2_buf[tp2] );
	    if ( mct == temp1_buf[dt_ct][0] ) break;
	}
	if ( !temp2_buf[tp2] ) break;
	/* ���s */
	if ( lf != 99 ) fprintf(wfp, "KAIGYO,\n");
	lf = 0;
	dt_ct++;
    }
    /* ���b�Z�[�W �I�� */
    fprintf(wfp, "};\n\n");
}



/********************************************************************************	
 *	�l�`�h�m								*
 ********************************************************************************/
main( int argc, char *argv[] )
{
    int 		r_ct;

    typedef long 	time_t;
    time_t 		jikoku;
    struct tm 		*lt;

    /* �J�n�����\�� */
    time(&jikoku);		/* ��Ԃ̎擾 */
    lt = localtime(&jikoku); 	/* ��Ԃ��\���̌^�̎��Ԃɕϊ� */
    dlt = asctime(lt);		/* �\���̌^�̎��Ԃ�\���\������ɕϊ� */
    
    
    /*
     * �e������ �n����������
     */
    file_open();

    /*
     * �e�L�X�g�t�@�C�� �ǂݍ���
     */
    for ( file_no = text_count = 0; file_no < file_su; file_no++ ) {
	printf("-------------------------------------------------------------------\n");
	printf( "file_no = %d,  file_name = %s\n", file_no, file_name[file_no] );
	/*
	 * ��{�f�[�^�ǂݍ��ݏ���
	 */
	basic_data_read();
	printf( "Basic_data READ END\n" );

	/*
	 * �t�@�C�����e�L�X�g����
	 */
	while ( 1 ) {
	    printf("-------------------------------------------------------------------\n");
	    dt_ct = 0;

	    /* �f�[�^�g�d�`�c�d�q���� */
	    header_proc();
	    printf("----------- out-of-head_data (message-no. type) END!! ----------\n");
	    
	    /*
	     * ���b�Z�[�W �f�[�^�i���������݃o�b�t�@�P�ɃZ�b�g�j
	     */
	    msg_data_get();
	    printf("--------------- out-of-text_data (temp1_buf) END!! -------------\n");

	    /*
	     * �o�͕������i���������݃o�b�t�@�Q�ɃZ�b�g�j
	     */
	    msg_inf_get();
	    printf("------------- out-of-information (temp2_buf) END!! -------------\n");
	    
	    /*
	     * ���b�Z�[�W �f�[�^ �� �o�͕������ ����
	     */
	    msg_data_link();
	    printf("=========================  LINK - END  ============================\n");

	    text_count++;

	    if ( (fread(&r_ct, sizeof(int), 0x1, rfp)) != 0x1 ) {
		printf( "'%s' READ ERROR!!  r_ct=%x\n", file_name[file_no], r_ct );
		exit(1);
	    }
	    if ( !r_ct ) break;
	    else	 fseek( rfp, -4, SEEK_CUR );
	}
	
	/*
	 * �e������ �b��������
	 */
	fclose(rfp);
	fclose(rfpi);
    }
    /* �I�� */
    fprintf(wfpt, "\t{ 0xFFFF,  0x00, NULL }\n};\n\n\n");

    
    /*
     * �e������ �b��������
     */
    fclose(wfp);
    fclose(wfpt);
    fclose(wfph);
    

    /* �I�������\�� */
    time(&jikoku);		/* ��Ԃ̎擾 */
    lt = localtime(&jikoku); 	/* ��Ԃ��\���̌^�̎��Ԃɕϊ� */
    dlt = asctime(lt);		/* �\���̌^�̎��Ԃ�\���\������ɕϊ� */
    printf("     END!!  END!!  END!!  :  %s",dlt);
}

