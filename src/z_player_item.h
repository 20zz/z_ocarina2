/* $Id: z_player_item.h,v 2.1 1998-10-22 20:51:48+09 zelda Exp $ */	
/* $Log: z_player_item.h,v $
 * Revision 2.1  1998-10-22 20:51:48+09  zelda
 * �ңϣͽФ��С������(NTSC)
 *
 * Revision 1.37  1998/10/12 16:11:52  iwawaki
 * *** empty log message ***
 *
 * Revision 1.36  1998-09-14 15:54:47+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.35  1998-09-03 23:59:38+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.34  1998-09-01 00:31:33+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.33  1998-08-29 22:22:39+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.32  1998-08-26 00:19:49+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.31  1998-08-22 23:11:07+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.30  1998-08-06 12:50:51+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.29  1998-08-04 13:54:47+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.28  1998-07-31 18:39:55+09  nisiwaki
 * *** empty log message ***
 *
 * Revision 1.27  1998-07-24 13:54:44+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.26  1998-07-20 22:41:47+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.25  1998-07-15 22:58:37+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.24  1998-07-10 23:08:54+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.23  1998-06-29 22:28:54+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.22  1998-06-25 14:13:13+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.21  1998-06-25 14:12:10+09  nisiwaki
 * *** empty log message ***
 *
 * Revision 1.20  1998-06-24 22:57:18+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.19  1998-06-19 22:41:39+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.18  1998-06-16 16:03:56+09  soejima
 * ��餷���ѹ�
 *
 * Revision 1.17  1998-06-15 19:27:17+09  nisiwaki
 * GET_ITEM_RONMILK �ɲ�
 *
 * Revision 1.16  1998-06-10 22:59:00+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.15  1998-06-02 22:56:10+09  iwawaki
 * *** empty log message ***
 *
 * Revision 1.14  1998-05-15 11:06:00+09  nisiwaki
 * PUT_ITEM �����ɲ�
 *
 * Revision 1.13  1998/05/14 11:35:11  iwawaki
 * *** empty log message ***
 *
 * Revision 1.12  1998/04/30 10:23:25  iwawaki
 * *** empty log message ***
 *
 * Revision 1.11  1998/04/28 14:21:39  iwawaki
 * *** empty log message ***
 *
 * Revision 1.10  1998/04/09 08:24:32  nisiwaki
 * *** empty log message ***
 *
 * Revision 1.9  1998/03/25  11:48:15  yoshida
 * �áܡܤ���Υ��󥯥롼�ɤ��б�
 *
 * Revision 1.8  1998/03/18  02:25:06  iwawaki
 * *** empty log message ***
 *
 * Revision 1.7  1998/02/17  13:06:06  iwawaki
 * *** empty log message ***
 *
 * Revision 1.6  1998/02/17  05:40:15  iwawaki
 * *** empty log message ***
 *
 * Revision 1.5  1998/01/30  13:21:51  iwawaki
 * *** empty log message ***
 *
 * Revision 1.4  1997/11/17  12:44:50  iwawaki
 * *** empty log message ***
 *
 * Revision 1.3  1997/11/10  17:17:17  iwawaki
 * *** empty log message ***
 *
 * Revision 1.2  1997/11/01  14:58:39  iwawaki
 * *** empty log message ***
 *
 * Revision 1.1  1997/11/01  06:00:07  iwawaki
 * Initial revision
 *
 *
 * Revision 1.1  1997/06/19  05:21:53  iwawaki
 * Initial revision
 * */


#ifndef INCLUDE_Z_PLAYER_ITEM_H
#define INCLUDE_Z_PLAYER_ITEM_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif

/************************************************************************
 *
 *	�����ƥॿ���סʡ㣰��Ȣ�����	�£����Ĥ���
 *
 ************************************************************************/
enum {
    GET_ITEM_NON,
    GET_ITEM_BOM_5,		/*   1:���ơʣ��ġ� */
    GET_ITEM_NUTS,		/*   2:�ǥ��μ¡ʣ��ġ� */
    GET_ITEM_BOM_RAT,		/*   3:�ܥ���奦�ʣ����ġ� */
    GET_ITEM_ELF_BOW,		/*   4:�����ε� */
    GET_ITEM_PACHINKO,		/*   5:�����Υѥ��� */
    GET_ITEM_BOOMERAN,		/*   6:�֡����� */
    GET_ITEM_STICK,		/*   7:�ǥ������ʣ��ܡ� */
    GET_ITEM_FUCK_S,		/*   8:�եå�����å� */
    GET_ITEM_FUCK_L,		/*   8:��󥰥եå� */
    GET_ITEM_MUSIMEGANE, 	/*  10:�ޤ��Ȥ����� */
    GET_ITEM_MAIL_Z,		/*  11:������μ�� */
    GET_ITEM_OKARINA,		/*  12:���Υ������ */
    GET_ITEM_HAMMER,		/*  13:�ᥬ�ȥ�ϥ�ޡ� */
    GET_ITEM_KOJIRO,		/*  14:��餷�� (������) */
    GET_ITEM_BIN_NUL,		/*  15:�� (��) */
    GET_ITEM_BIN_RED,		/*  16:�� (��) */
    GET_ITEM_BIN_GREEN,		/*  17:�� (��) */
    GET_ITEM_BIN_BLUE,		/*  18:�� (��) */
    GET_ITEM_BIN_ELF,		/*  19:�� (�����κ�) */
    GET_ITEM_BIN_RONMILK,	/*  20:�� �������� */
    GET_ITEM_BIN_MAIL,		/*  21:�� (���) */
    GET_ITEM_MAGIC_BEAN,	/*  22:��ˡ��Ʀ */
    GET_ITEM_MASK_SKJ,		/*  23:��餷�� (�ɥ���Τ���) */
    GET_ITEM_MASK_RE_DEAD,	/*  24:��餷�� (���綠�ʤ���) */
    GET_ITEM_NIWATORI,		/*  25:��餷�� (�ᤶ�ޤ��ɥ�) */
    GET_ITEM_MASK_KI_TAN,	/*  26:��餷�� (��������Τ���) */
    GET_ITEM_MASK_RABIT,	/*  27:��餷�� (������������) */
    GET_ITEM_MASK_TRUTH,	/*  28:��餷�� (�ޤ��Ȥβ���) */
    GET_ITEM_POCKET_EGG,	/*  29:��餷�� (�ݥ��åȥ��ޥ�) */
    GET_ITEM_HANDY_COCK,	/*  30:��餷�� (�ƤΤꥳ�å�) */
    GET_ITEM_AYASHII_KINOKO,	/*  31:��餷�� (���䤷�����Υ�) */
    GET_ITEM_AYASHII_DRUG,	/*  32:��餷�� (���䤷����) */
    GET_ITEM_NOKOGIRI,		/*  33:��餷�� (̩�ļԤΥΥ�����) */
    GET_ITEM_BREAKE_GORON_SWORD,/*  34:��餷�� (�ޤ줿�������) */
    GET_ITEM_SPECIAL_DRUG,	/*  35:��餷�� (��������) */
    GET_ITEM_MEDAMA_FROG,	/*  36:��餷�� (����ޥ�����) */
    GET_ITEM_EYES_DRUG,		/*  37:��餷�� (������������) */
    GET_ITEM_GORON_SWORD_CARD,	/*  38:��餷�� (������������) */
    GET_ITEM_KNIFE,		/*  39:�ʥ��� */
    GET_ITEM_G_KNIFE,		/*  40:��ͤΥʥ��� */
    GET_ITEM_WOOD_SHIELD,	/*  41:�ǥ��ν� */
    GET_ITEM_HIRARU_SHILD,	/*  42:�ϥ����ν� */
    GET_ITEM_MIRROR_SHILD,	/*  43:�ߥ顼������� */
    GET_ITEM_GORON_FUKU,	/*  44:�������� */
    GET_ITEM_ZORA_FUKU,		/*  45:��������� */
    GET_ITEM_HEAVY_BOOT,	/*  46:�إӡ��֡��� */
    GET_ITEM_HOVA_BOOT,		/*  47:�ۥС��֡��� */
    GET_ITEM_BIG_ARROW_CASE,	/*  48:�礭����Ω�� */
    GET_ITEM_HUG_ARROW_CASE,	/*  49:��ä��礭����Ω�� */
    GET_ITEM_BOM_BAG,		/*  50:������*/
    GET_ITEM_BIG_BOM_BAG,	/*  51:�礭���� */
    GET_ITEM_HUG_BOM_BAG,	/*  52:��ä��礭���� */
    GET_ITEM_SILVER_GLOVE,	/*  53:��Υ����� */
    GET_ITEM_GOLD_GLOVE,	/*  54:��Υ����� */
    GET_ITEM_SILVER_SCALE,	/*  55:����� */
    GET_ITEM_GOLD_SCALE,	/*  56:����� */
    GET_ITEM_MODAE_STONE,	/*  57:������� */
    GET_ITEM_GUILD_CAARD,	/*  58:����ɲ���� */
    GET_ITEM_OKARINA2,		/*  59:�����Υ������*/
    GET_ITEM_SEED,		/*  60:�ǥ��Υ��� */
    GET_ITEM_HEART_BOTTLE,	/*  61:�ϡ��Ȥδ� */
    GET_ITEM_HEART_PARTS,	/*  62:�ϡ��Ȥη��� */
    GET_ITEM_BOSS_KEY,		/*  63:�ܥ������Υ��� */
    GET_ITEM_COMPASS,		/*  64:����ѥ�  */
    GET_ITEM_MAP,		/*  65:���󥸥��ޥå� */
    GET_ITEM_KEY,		/*  66:�����ʥ��� */
    GET_ITEM_S_MAGIC_POT,	/*  67:��ˡ����(��) */
    GET_ITEM_B_MAGIC_POT,	/*  68:��ˡ����(��) */
    GET_ITEM_BIG_PURSE,		/*  69:��ͤκ��� */
    GET_ITEM_GIANT_PURSE,	/*  70:��ͤκ��� */
    GET_ITEM_COOK_EGG,		/*  71:��餷�١ʷܤ���� */
    GET_ITEM_HEAL_HEART,	/*  72:�����Υϡ��� */
    GET_ITEM_ARROW_0,		/*  73:��ʣ����ܡ� */
    GET_ITEM_ARROW_1,		/*  74:��ʣ����ܡ� */
    GET_ITEM_ARROW_2,		/*  75:��ʣ����ܡ� */
    GET_ITEM_20RUPPE,		/*  76:��ԡ��� */
    GET_ITEM_RUPPE_BLUE,	/*  77:��ԡ��� */
    GET_ITEM_RUPPE_RED,		/*  78:��ԡ��� */
    GET_ITEM_BOSS_HEART,	/*  79:�ܥ��ݤ����㤨��ϡ��Ȥδ� */
    GET_ITEM_RONMILK,		/*  80:�������� */
    GET_ITEM_MASK_GOLON,	/*  81:�����Τ��� */
    GET_ITEM_MASK_ZOLA,		/*  82:������Τ��� */
    GET_ITEM_MASK_GELD,		/*  83:����ɤΤ��� */
    GET_ITEM_BRACELET,		/*  84:�����Τ��Ǥ� */
    GET_ITEM_BIG_RUPPE,		/*  85:���ԡ� */
    GET_ITEM_GIANT_RUPPE,	/*  86:�����ԡ� */
    GET_ITEM_GOLON_SWORD,	/*  87:����������� */
    GET_ITEM_FIREMAGICARROW,	/*  88:����� */
    GET_ITEM_ICEMAGICARROW,	/*  89:ɹ���� */
    GET_ITEM_SHINEMAGICARROW,	/*  90:������ */
    GET_ITEM_SUTARU,		/*  91:����κ� */
    GET_ITEM_FIRE_GODDESS,	/*  92:�ǥ���α� */
    GET_ITEM_WIND_GODDESS,	/*  93:�ե����� */
    GET_ITEM_LOVE_GODDESS,	/*  94:�͡���ΰ� */
    GET_ITEM_DEKU_POUCH_S,	/*  95:�ǥ��Υ����ޡʣ����� */
    GET_ITEM_DEKU_POUCH_M,	/*  96:�ǥ��Υ����ޡʣ����� */
    GET_ITEM_STICK_5,		/*  97:�ǥ������ʣ��ܡ� */
    GET_ITEM_STICK_10,		/*  98:�ǥ������ʣ����ܡ� */
    GET_ITEM_NUTS_5,		/*  99:�ǥ��μ¡ʣ��ġ� */
    GET_ITEM_NUTS_10,		/* 100:�ǥ��μ¡ʣ����ġ� */
    GET_ITEM_BOM,		/* 101:���ơʣ��ġ� */
    GET_ITEM_BOM_10,		/* 102:���ơʣ����ġ� */
    GET_ITEM_BOM_20,		/* 103:���ơʣ����ġ� */
    GET_ITEM_BOM_30,		/* 104:���ơʣ����ġ� */
    GET_ITEM_SEED_30,		/* 105:�ǥ��Υ��͡ʣ����ġ� */
    GET_ITEM_BOM_RAT_5,		/* 106:�ܥ���奦�ʣ��ġ� */
    GET_ITEM_BOM_RAT_20,	/* 107:�ܥ���奦�ʣ����ġ� */
    GET_ITEM_FISH,		/* 108:�� */
    GET_ITEM_INSECT,		/* 109:�� */
    GET_ITEM_FIRE,		/* 110:�� */
    GET_ITEM_GHOST,		/* 111:�ݥ� */
    GET_ITEM_GHOSTBIG,		/* 112:�ӥå��ݥ� */
    GET_ITEM_BOX_KEY,		/* 113:�����ʥ�������Ȣ���� */
    GET_ITEM_BOX_RUPPE_GREEN,	/* 114:��ԡ��� */
    GET_ITEM_BOX_RUPPE_BLUE,	/* 115:��ԡ��� */
    GET_ITEM_BOX_RUPPE_RED,	/* 116:��ԡ��� */
    GET_ITEM_BOX_BIG_RUPPE,	/* 117:���ԡ� */
    GET_ITEM_BOX_HEART_PARTS,	/* 118:�ϡ��Ȥη��� */
    GET_ITEM_STICK_MAX_20,	/* 119:�ǥ������򣲣��ܤ� */
    GET_ITEM_STICK_MAX_30,	/* 120:�ǥ������򣳣��ܤ� */
    GET_ITEM_NUTS_MAX_30,	/* 121:�ǥ��μ¤򣳣��Ĥ� */
    GET_ITEM_NUTS_MAX_40,	/* 122:�ǥ��μ¤򣴣��Ĥ� */
    GET_ITEM_DEKU_POUCH_L,	/* 123:�ǥ��Υ����ޡʣ����� */
    GET_ITEM_ICE_SMOKE,		/* 124:ɹ�Τ���� */
    GET_ITEM_35,		/* 125:������������ */
    
    /* �Ǹ� */
    GET_ITEM_CATCH		/* 113:��ޤ����� */
};

/************************************************************************
 *
 *	�����Ф������ƥॿ����
 *
 ************************************************************************/
enum {
    PUT_ITEM_NON,
    PUT_ITEM_LETTER,		/* ��餷�١ʥ�����μ��� */
    PUT_ITEM_COOK_EGG,		/* ��餷�١ʤᤶ�ޤ����ޥ��� */
    PUT_ITEM_NIWATORI,		/* ��餷�� (�ᤶ�ޤ��ɥ�) */
    PUT_ITEM_BEAN,		/* ��ˡ��Ʀ */
    PUT_ITEM_POCKET_EGG,	/* ��餷�� (�ݥ��åȥ��ޥ�) */
    PUT_ITEM_HANDY_COCK,	/* ��餷�� (�ƤΤꥳ�å�) */
    PUT_ITEM_KOJIRO,		/* ��餷�� (����Ϻ) */
    PUT_ITEM_AYASHII_KINOKO,	/* ��餷�� (���䤷�����Υ�) */
    PUT_ITEM_AYASHII_DRUG,	/* ��餷�� (���䤷����) */
    PUT_ITEM_NOKOGIRI,		/* ��餷�� (̩�ļԤΥΥ�����) */
    PUT_ITEM_BREAKE_GORON_SWORD,/* ��餷�� (�ޤ줿�������) */
    PUT_ITEM_SPECIAL_DRUG,	/* ��餷�� (��������) */
    PUT_ITEM_MEDAMA_FROG,	/* ��餷�� (����ޥ�����) */
    PUT_ITEM_EYES_DRUG,		/* ��餷�� (������������) */
    PUT_ITEM_GORON_SWORD_CARD,	/* ��餷�� (������������) */
    PUT_ITEM_MASK_SKJ,		/* ��餷�� (�ɥ���Τ���) */
    PUT_ITEM_MASK_RE_DEAD,	/* ��餷�� (���綠�ʤ���) */
    PUT_ITEM_MASK_KI_TAN,	/* ��餷�� (��������Τ���) */
    PUT_ITEM_MASK_RABIT,	/* ��餷�� (������������) */
    PUT_ITEM_MASK_TRUTH,	/* ��餷�� (�ޤ��Ȥβ���) */
    PUT_ITEM_MASK_GOLON,	/* ��餷�� (�����Τ���) */
    PUT_ITEM_MASK_ZOLA,		/* ��餷�� (������Τ���) */
    PUT_ITEM_MASK_GELD,		/* ��餷�� (����ɤΤ���) */
    PUT_ITEM_BIN_FISH,		/* �� */
    PUT_ITEM_BIN_FIRE,		/* �� */
    PUT_ITEM_BIN_BUG,		/* �� */
    PUT_ITEM_BIN_POH,		/* �ݥ� */
    PUT_ITEM_BIN_BIGPOH,	/* �ӥå��ݥ� */
    PUT_ITEM_BIN_MAIL,		/* ��Ȥμ�� */
    PUT_ITEM_MAX
};
    

#ifdef _LANGUAGE_C_PLUS_PLUS
} /* extern "C" */
#endif

#endif

/*** z_player_item.h end ***/
