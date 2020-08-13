/* $Id: z_common.h,v 1.2 2003/07/15 22:58:44 wheeler Exp $ */
/* $Log: z_common.h,v $
 * Revision 1.2  2003/07/15 22:58:44  wheeler
 * Attempt to get rid of compiler warning
 *
 * Revision 1.1.1.1  2003/03/10 22:42:53  tong
 * new OBJ tree for ocarina from Nintendo
 *
 * Revision 2.1  1998/10/22  11:45:49  zelda
 * ＲＯＭ出しバージョン(NTSC)
 *
 * Revision 1.17  1998/10/08 00:53:45  zelda
 * *** empty log message ***
 *
 * Revision 1.16  1998-10-07 18:51:15+09  hayakawa
 * *** empty log message ***
 *
 * Revision 1.15  1998-10-02 15:22:28+09  nisiwaki
 * *** empty log message ***
 *
 * Revision 1.14  1998-08-12 20:09:35+09  sasaki
 * *** empty log message ***
 *
 * Revision 1.13  1998/07/01 13:21:58  sasaki
 * *** empty log message ***
 *
 * Revision 1.12  1998/06/03 12:23:43  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.11  1998-04-27 22:55:52+10  sasaki
 * 080-09f add
 *
 * Revision 1.10  1998/04/14 11:28:55  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.9  1998/04/13 14:07:41  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.8  1998/04/07 14:51:10  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.7  1998/03/26  05:54:40  sumiyosi
 * １回あげます
 *
 * Revision 1.6  1998/03/25  08:22:20  sumiyosi
 * イベント、メッセージフラグ追加
 *
 * Revision 1.5  1998/03/18  10:55:56  sumiyosi
 * 修正依頼おわりました。
 *
 * Revision 1.4  1998/02/13  11:15:24  sumiyosi
 * ご迷惑をおかけしました…
 *
 * Revision 1.3  1998/02/13  07:38:09  sumiyosi
 * 謎フラグ更新
 *
 * Revision 1.2  1998/02/10  10:17:07  sumiyosi
 * *** empty log message ***
 *
 * Revision 1.1  1998/02/09  14:01:48  sumiyosi
 * Initial revision
 *
 *
 *
 * */
/*-----------------------------------------------------------------------
 *
 * z_common.h
 * 
 * Program:N.Sumiyosi
 * 1998/02/05
 *
 *----------------------------------------------------------------------*/
#ifndef INCLUDE_Z_COMMON_H
#define INCLUDE_Z_COMMON_H

#ifdef _LANGUAGE_C_PLUS_PLUS
extern "C" {
#endif    

//#include "z_play.h"
    
/*┌─────────────────────────────────┐
  │	セーブビットテーブルアクセス構造体			      │
  └─────────────────────────────────┘*/
typedef struct {
    unsigned short tbl_no;	/* テーブル名				*/
    unsigned short bit;		/* ビット情報				*/
}CheckInfo;

/*┌─────────────────────────────────┐
  │	イベントチェック情報					      │
  └─────────────────────────────────┘*/
enum{
    EVNT_000,			/* スタートデモ終了			*/
    EVNT_001,			/* リンク起きた				*/
    EVNT_002,			/* ミド：通せんぼフラグ			*/
    EVNT_003,			/* サリア怒りフラグ			*/
    EVNT_004,			/* ミド：デクの樹への道開けたフラグ	*/
    EVNT_005,			/* デクの樹の口開いたフラグ		*/
    EVNT_006,			/* ゴーマ倒したフラグ			*/
    EVNT_007,			/* デクの樹ダンジョンクリア		*/
    EVNT_008,			/* トライフォース伝説デモ		*/
    EVNT_009,			/* 森の精霊石入手			*/
    EVNT_00A,			/* ミド：迷いの森への道開けたフラグ	*/
    EVNT_00B,			/* デクの樹Ｊｒの情報フラグ		*/
    EVNT_00C,			/* デクの樹とはじめて会話した		*/
    EVNT_00D,			/* 					*/
    EVNT_00E,			/* 					*/
    EVNT_00F,			/* 					*/
	
    EVNT_010,			/* マロンと話したフラグ			*/
    EVNT_011,			/* インゴーと話したフラグ		*/
    EVNT_012,			/* タロン探索願いフラグ			*/
    EVNT_013,			/* タロンパチンコで起こしたフラグ	*/
    EVNT_014,			/* タロン帰宅フラグ			*/
    EVNT_015,			/* エポナ逃げるフラグ			*/
    EVNT_016,			/* マロンの説明				*/
    EVNT_017,			/* エポナ用オカリナ覚えた		*/
    EVNT_018,			/* エポナ入手				*/
    EVNT_019,			/* 馬の草笛入手				*/
    EVNT_01A,			/* 					*/
    EVNT_01B,			/* 					*/
    EVNT_01C,			/* 					*/
    EVNT_01D,			/* 					*/
    EVNT_01E,			/* マロン レース 牛の入手		*/
    EVNT_01F,			/* 					*/
	
    EVNT_020,			/* ゴロンＦとの会話フラグ		*/
    EVNT_021,			/* ゴロン店主の依頼フラグ		*/
    EVNT_022,			/* ダルニアの爆弾花使用許可フラグ	*/
    EVNT_023,			/* ドドンゴダンジョン入口大岩爆破フラグ	*/
    EVNT_024,			/* ボスドドンゴ倒したフラグ		*/
    EVNT_025,			/* ドドンゴダンジョンクリア		*/
    EVNT_026,			/* ゴロン泣きじゃくる			*/
    EVNT_027,			/* 炎の神殿への通行可			*/
    EVNT_028,			/* カミサマ像動かした			*/
    EVNT_029,			/* ゴロンＡ救助された			*/
    EVNT_02A,			/* ゴロンＢ救助された			*/
    EVNT_02B,			/* ゴロンＣ救助された			*/
    EVNT_02C,			/* ゴロンＤ救助された			*/
    EVNT_02D,			/* ゴロンＥ救助された			*/
    EVNT_02E,			/* ゴロンＦ救助された			*/
    EVNT_02F,			/* 噴火デモで使用			*/
	
    EVNT_030,			/* ゾーラ族と会話したフラグ		*/
    EVNT_031,			/* ゾーラの里で空びんを手にいれた	*/
    EVNT_032,			/* ゾーラＣとの会話フラグ		*/
    EVNT_033,			/* キングゾーラ許可フラグ		*/
    EVNT_034,			/* 水の神殿部屋[５]【赤】の神経切断	*/
    EVNT_035,			/* 水の神殿部屋[８]【緑】の神経切断	*/
    EVNT_036,			/* 水の神殿部屋[９]【青】の神経切断	*/
    EVNT_037,			/* 巨大魚ジャブジャブクリア		*/
    EVNT_038,			/* 					*/
    EVNT_039,			/* 					*/
    EVNT_03A,			/* 巨大魚ジャブジャブデモ終了		*/
    EVNT_03B,			/* 					*/
    EVNT_03C,			/* 					*/
    EVNT_03D,			/* 					*/
    EVNT_03E,			/* 					*/
    EVNT_03F,			/* 					*/
	
    EVNT_040,			/* ゼルダ姫から手紙フラグ		*/
    EVNT_041,	/* ゾーラ/ ゴロンのどちらかの門番にゼルダ姫の手紙見せた	*/
    EVNT_042,	/* ゾーラ/ ゴロンのどちらかの門番が道を開けてくれた	*/
    EVNT_043,			/* 時のオカリナ入手			*/
    EVNT_044,			/* ゼルダ姫の書き置き			*/
    EVNT_045,			/* マスターソード入手			*/
    EVNT_046,			/* 精霊石の輝き消去			*/
    EVNT_047,			/* 大人ではじめてマスターソード抜いた	*/
    EVNT_048,			/* 森の神殿クリア			*/
    EVNT_049,			/* 炎の神殿クリア			*/
    EVNT_04A,			/* 水の神殿クリア			*/
    EVNT_04B,			/* 時の神殿のシャッター開いた		*/
    EVNT_04C,			/* 					*/
    EVNT_04D,			/* インパ消える				*/
    EVNT_04E,			/* オカリナ演奏				*/
    EVNT_04F,			/* インパの許可				*/
	
    EVNT_050,			/* 風のメヌエット覚えた			*/
    EVNT_051,			/* 炎のボレロ覚えた			*/
    EVNT_052,			/* 水のワルツ覚えた			*/
    EVNT_053,			/* 魂のゴスペル覚えた			*/
    EVNT_054,			/* 闇のエチュード覚えた			*/
    EVNT_055,			/* 光のプレリュード覚えた		*/
    EVNT_056,			/* 					*/
    EVNT_057,			/* 					*/
    EVNT_058,			/* 					*/
    EVNT_059,			/* 					*/
    EVNT_05A,			/* 炎のメダル入手			*/
    EVNT_05B,			/* 嵐の歌を 覚えた */
    EVNT_05C,			/* 風のメダル入手			*/
    EVNT_05D,			/* 魂のメダル入手			*/
    EVNT_05E,			/* 光のメダル入手			*/
    EVNT_05F,			/* 闇のメダル入手			*/
	
    EVNT_060,			/* 名人のノコギリキャラバンＡに渡した	*/
    EVNT_061,			/* キャラバンＡがゲルドの谷に橋をかけた	*/
    EVNT_062,			/* ナボールさらわれた			*/
    EVNT_063,			/* カカリコ村燃えている			*/
    EVNT_064,			/* カカリコ村の火事消えた		*/
    EVNT_065,			/* 風車イベント発生			*/
    EVNT_066,			/* ガノンの塔出現			*/
    EVNT_067,			/* 					*/
    EVNT_068,			/*  やぶさめ経験			*/
    EVNT_069,			/* 					*/
    EVNT_06A,			/* 					*/
    EVNT_06B,			/* 					*/
    EVNT_06C,			/* 					*/
    EVNT_06D,			/* 					*/
    EVNT_06E,			/* 					*/
    EVNT_06F,			/* 					*/
	
    EVNT_070,			/* 巨大邪神像攻略			*/
    EVNT_071,			/* 闇の神殿攻略				*/
    EVNT_072,			/* 					*/
    EVNT_073,			/* 					*/
    EVNT_074,			/* 					*/
    EVNT_075,			/* 					*/
    EVNT_076,			/* 					*/
    EVNT_077,			/* 					*/
    EVNT_078,			/* 					*/
    EVNT_079,			/* 					*/
    EVNT_07A,			/* 					*/
    EVNT_07B,			/* 					*/
    EVNT_07C,			/* 					*/
    EVNT_07D,			/* 					*/
    EVNT_07E,			/* 					*/
    EVNT_07F,			/* 					*/

    EVNT_080,			/* ゼルダがオカリナ投げた		*/
    EVNT_081,			/* 					*/
    EVNT_082,			/* 					*/
    EVNT_083,			/* 					*/
    EVNT_084,			/* 					*/
    EVNT_085,			/* 					*/
    EVNT_086,			/* 					*/
    EVNT_087,			/* 					*/
    EVNT_088,			/* 					*/
    EVNT_089,			/* 					*/
    EVNT_08A,			/* 					*/
    EVNT_08B,			/* 					*/
    EVNT_08C,			/* 					*/
    EVNT_08D,			/* 					*/
    EVNT_08E,			/* 					*/
    EVNT_08F,			/* 					*/

    EVNT_090,			/* 大工A 救出  				*/
    EVNT_091,			/* 大工B 救出				*/
    EVNT_092,			/* 大工C 救出				*/
    EVNT_093,			/* 大工D 救出				*/
    EVNT_094,			/* 					*/
    EVNT_095,			/* 					*/
    EVNT_096,			/* 					*/
    EVNT_097,			/* 					*/
    EVNT_098,			/* 					*/
    EVNT_099,			/* 					*/
    EVNT_09A,			/* 					*/
    EVNT_09B,			/* 					*/
    EVNT_09C,			/* 					*/
    EVNT_09D,			/* 					*/
    EVNT_09E,			/* 					*/
    EVNT_09F,			/* 					*/

	/* （080 - 09F）は、ステージ紹介デモ用に予約されていたりします。*/
    EVNT_0A0,			/* ＳＰＯＴ００紹介デモ 終わった？	*/
    EVNT_0A1,			/* ＳＰＯＴ１６紹介デモ 終わった？	*/
    EVNT_0A2,			/* 					*/
    EVNT_0A3,			/* 					*/
    EVNT_0A4,			/* 					*/
    EVNT_0A5,			/* 					*/
    EVNT_0A6,			/* 					*/
    EVNT_0A7,			/* 					*/
    EVNT_0A8,			/* 					*/
    EVNT_0A9,			/* 					*/
    EVNT_0AA,			/* 					*/
    EVNT_0AB,			/* 					*/
    EVNT_0AC,			/* 					*/
    EVNT_0AD,			/* 					*/
    EVNT_0AE,			/* 					*/
    EVNT_0AF,			/* 					*/

    EVNT_0B0,			/*					*/
    EVNT_0B1,			/*					*/
    EVNT_0B2,			/* 					*/
    EVNT_0B3,			/* 					*/
    EVNT_0B4,			/* 					*/
    EVNT_0B5,			/* 					*/
    EVNT_0B6,			/* 					*/
    EVNT_0B7,			/* 					*/
    EVNT_0B8,			/* 					*/
    EVNT_0B9,			/* 					*/
    EVNT_0BA,			/* 					*/
    EVNT_0BB,			/* 					*/
    EVNT_0BC,			/* 					*/
    EVNT_0BD,			/* 					*/
    EVNT_0BE,			/* 					*/
    EVNT_0BF,			/* 					*/

    EVNT_0C0,			/*					*/
    EVNT_0C1,			/*					*/
    EVNT_0C2,			/* 					*/
    EVNT_0C3,			/* 					*/
    EVNT_0C4,			/* 					*/
    EVNT_0C5,			/* 					*/
    EVNT_0C6,			/* 					*/
    EVNT_0C7,			/* ゲルドの砦 牢屋に放り込まれるデモ終了*/
    EVNT_0C8,			/* 					*/
    EVNT_0C9,			/* 					*/
    EVNT_0CA,			/* 					*/
    EVNT_0CB,			/* 					*/
    EVNT_0CC,			/* 					*/
    EVNT_0CD,			/* 					*/
    EVNT_0CE,			/* 					*/
    EVNT_0CF			/* 					*/
};

/*┌─────────────────────────────────┐
  │	メッセージチェック情報					      │
  └─────────────────────────────────┘*/
enum{

    /*** サリア <リンク子供>	****/
    NAZO_000,			/* サリア冒頭				*/
    NAZO_001,			/* ２回目				*/
    NAZO_002,			/* 《ミド通せんぼ》			*/
    NAZO_003,			/* ２回目				*/
    NAZO_004,			/* 《森の精霊石入手》			*/
    NAZO_005,			/* ２回目				*/
    NAZO_006,			/* 					*/
    NAZO_007,			/* 					*/

    /*** サリア <リンク大人>	****/
    NAZO_008,			/* 《マスターソード入手》		*/
    NAZO_009,			/* 					*/
    NAZO_00A,			/* 					*/
    NAZO_00B,			/* 					*/

    /*** ミド <リンク子供>	****/
    NAZO_00C,			/* ２回目				*/
    NAZO_00D,			/* 《サリア怒り》			*/
    NAZO_00E,			/* ２回目				*/
    NAZO_00F,			/* 《森の精霊石入手》			*/
    NAZO_010,			/* ２回目				*/
    NAZO_011,			/*					*/
    NAZO_012,			/*					*/
    NAZO_013,			/*					*/
	
    /*** ミド <リンク大人>	****/
    NAZO_014,			/* 《マスターソード入手》		*/
    NAZO_015,			/* ２回目				*/
    NAZO_016,			/* 《デクの樹Ｊｒ．の情報》		*/
    NAZO_017,			/* ２回目				*/
    NAZO_018,			/* 《風のメダル入手》			*/
    NAZO_019,			/* ２回目				*/
    NAZO_01A,			/* 					*/
    NAZO_01B,			/* 					*/
	
    /*** コキリＡ <リンク子供>	****/
    NAZO_01C,			/* 《森の精霊石入手》			*/
    NAZO_01D,			/* 					*/
	
    /*** コキリＢ <リンク子供>	****/
    NAZO_01E,			/* ２回目				*/
    NAZO_01F,			/* 《森の精霊石入手》			*/
	
    /*** コキリＣ <リンク子供>	****/
    NAZO_020,			/* 《森の精霊石入手》			*/
    NAZO_021,			/* 					*/

    /*** コキリＤ <リンク子供>	****/
    NAZO_022,			/* ２回目				*/
    NAZO_023,			/* 《森の精霊石入手》			*/
	
    /*** コキリＥ <リンク子供>	****/
    NAZO_024,			/* ２回目				*/
    NAZO_025,			/* 《森の精霊石入手》			*/

    /*** コキリＦ <リンク子供>	****/
    NAZO_026,			/* ２回目				*/
    NAZO_027,			/* 《森の精霊石入手》			*/
	
    /*** コキリＧ <リンク子供>	****/
    NAZO_028,			/* ２回目				*/
    NAZO_029,			/* 《森の精霊石入手》			*/
	
    /*** コキリＨ <リンク子供>	****/
    NAZO_02A,			/* 二択→"黄色のアイコン"２回目		*/
    NAZO_02B,			/* 二択→"モノの持ち替え"２回目		*/
    NAZO_02C,			/* 《森の精霊石入手》			*/
    NAZO_02D,			/* 					*/
	
    /*** コキリＩ <リンク子供>	****/
    NAZO_02E,			/* 三択→"ＭＡＰ？"２回目		*/
    NAZO_02F,			/* 三択→"装備？"２回目			*/
    NAZO_030,			/* 三択→"コレクト？"２回目		*/
    NAZO_031,			/* 《森の精霊石入手》			*/
	
    /*** コキリＪ <リンク子供>	****/
    NAZO_032,			/* 《森の精霊石入手》			*/
    NAZO_033,			/* 					*/
	
    /*** コキリＫ <リンク子供>	****/
    NAZO_034,			/* 《森の精霊石入手》			*/
    NAZO_035,			/* 					*/
	
    /*** コキリＬ <リンク子供>	****/
    NAZO_036,			/* 二択→"盾あり？"２回目		*/
    NAZO_037,			/* 二択→"盾なし？"２回目		*/
    NAZO_038,			/* 《森の精霊石入手》			*/
    NAZO_039,			/* 					*/
	
    /*** デクの樹 <リンク子供>	****/
    NAZO_03A,			/* 					*/
    NAZO_03B,			/* 					*/
    NAZO_03C,			/* 					*/
    NAZO_03D,			/* 					*/
    NAZO_03E,			/* 					*/
    NAZO_03F,			/* 					*/
	
    /*** コキリＡ <リンク大人>	****/
    NAZO_040,			/* 《マスターソード入手》		*/
    NAZO_041,			/* ２回目				*/
    NAZO_042,			/* 《風のメダル入手》			*/
    NAZO_043,			/* 					*/

    /*** コキリＢ <リンク大人>	****/
    NAZO_044,			/* 《マスターソード入手》		*/
    NAZO_045,			/* 《風のメダル入手》			*/

    /*** コキリＣ <リンク大人>	****/
    NAZO_046,			/* 《マスターソード入手》		*/
    NAZO_047,			/* ２回目				*/
    NAZO_048,			/* 《風のメダル入手》			*/
    NAZO_049,			/* 					*/

    /*** コキリＤ <リンク大人>	****/
    NAZO_04A,			/* 《マスターソード入手》		*/
    NAZO_04B,			/* 《風のメダル入手》			*/
	
    /*** コキリＥ <リンク大人>	****/
    NAZO_04C,			/* 《マスターソード入手》		*/
    NAZO_04D,			/* 《風のメダル入手》			*/
	
    /*** コキリＦ <リンク大人>	****/
    NAZO_04E,			/* 《マスターソード入手》		*/
    NAZO_04F,			/* 《風のメダル入手》			*/
	
    /*** コキリＧ <リンク大人>	****/
    NAZO_050,			/* 《マスターソード入手》		*/
    NAZO_051,			/* ２回目				*/
    NAZO_052,			/* 《風のメダル入手》			*/
    NAZO_053,			/* 					*/
	
    /*** コキリＨ <リンク大人>	****/
    NAZO_054,			/* 《マスターソード入手》		*/
    NAZO_055,			/* 《風のメダル入手》			*/
    NAZO_056,			/* 					*/
    NAZO_057,			/* 					*/
	
    /*** コキリＩ <リンク大人>	****/
    NAZO_058,			/* 《マスターソード入手》		*/
    NAZO_059,			/* ２回目				*/
    NAZO_05A,			/* 《風のメダル入手》			*/
    NAZO_05B,			/* 					*/
	
    /*** コキリＪ <リンク大人>	****/
    NAZO_05C,			/* 《マスターソード入手》		*/
    NAZO_05D,			/* 《風のメダル入手》			*/
	
    /*** コキリＫ <リンク大人>	****/
    NAZO_05E,			/* 《マスターソード入手》		*/
    NAZO_05F,			/* 《風のメダル入手》			*/

    /*** コキリＬ <リンク大人>	****/
    NAZO_060,			/* 《マスターソード入手》		*/
    NAZO_061,			/* ２回目				*/
    NAZO_062,			/* 《風のメダル入手》			*/
    NAZO_063,			/*					*/
	
    /*** デクの樹Ｊｒ <リンク大人>	****/
    NAZO_064,			/* 二択→"うん"				*/
    NAZO_065,			/* 二択→"やだ"				*/
    NAZO_066,			/* ２回目				*/
    NAZO_067,			/* 《風のメダル入手》			*/
    NAZO_068,			/* 					*/
    NAZO_069,			/* 					*/

    /*** 城門の兵士	****/
    NAZO_06A,			/* ２回目				*/
    NAZO_06B,			/* 					*/
	
    /*** 路地裏倒れ兵士	****/
    NAZO_06C,			/* ２回目				*/
    NAZO_06D,			/* 					*/
	
    /*** 見回り兵士	****/
    NAZO_06E,			/* 					*/
    NAZO_06F,			/* 					*/

    /*** 凱旋門の門番	****/
    NAZO_070,			/* 《タロン捜索願い》			*/
    NAZO_071,			/* ２回目				*/
    NAZO_072,			/* 《３つの精霊石そろった》		*/
    NAZO_073,			/* 					*/

    /*** ゾーラ川門番・カカリコ村門番	****/
    NAZO_074,			/* 《ゼルダ姫から手紙もらった》		*/
    NAZO_075,			/* 《門番にゼルダ姫の手紙を見せた》	*/
    NAZO_076,			/* ２回目				*/
    NAZO_077,		/* 《どっちか先に門番が道を開けてくれた》	*/
    NAZO_078,			/* 《マスターソード入手》		*/
    NAZO_079,			/* 					*/

    /*** タロン <リンク子供>	****/
    NAZO_07A,			/* 					*/
    NAZO_07B,			/* 					*/
    NAZO_07C,			/*					*/
    NAZO_07D,			/* 					*/
    NAZO_07E,			/* 					*/
    NAZO_07F,			/* 					*/

    /*** タロン <リンク大人>	****/
    NAZO_080,			/* 					*/
    NAZO_081,			/* 					*/
    NAZO_082,			/* 					*/
    NAZO_083,			/* 					*/

    /*** マロン <リンク子供>	****/
    NAZO_084,			/* 【牧場にて歌っている】２回目		*/
    NAZO_085,			/* 《インゴー＆マロン》			*/
    NAZO_086,			/* 《タロン帰宅》			*/
    NAZO_087,			/* 《エポナ逃げる》			*/
    NAZO_088,			/* 《マロンの説明》			*/
    NAZO_089,			/* 【オカリナ演奏正解】			*/
    NAZO_08A,			/* 					*/
    NAZO_08B,			/* 					*/

    /*** マロン <リンク大人>	****/
    NAZO_08C,			/* 					*/
    NAZO_08D,			/* 					*/
    NAZO_08E,			/* 					*/
    NAZO_08F,			/* 					*/
    NAZO_090,			/* 					*/
    NAZO_091,			/* 					*/
    NAZO_092,			/* 					*/
    NAZO_093,			/* 					*/

    /*** インゴー <リンク子供>	****/
    NAZO_094,			/* ２回目				*/
    NAZO_095,			/* 					*/
    NAZO_096,			/* 			 		*/
    NAZO_097,			/* 					*/

    /*** インゴー <リンク大人>	****/
    NAZO_098,			/* 					*/
    NAZO_099,			/* 					*/
    NAZO_09A,			/* ２回目				*/
    NAZO_09B,			/* 					*/
    NAZO_09C,			/* 					*/
    NAZO_09D,			/* 					*/
    NAZO_09E,			/* 【乗馬体験】				*/
    NAZO_09F,			/* 					*/
    NAZO_100,			/* 					*/
    NAZO_101,			/* 					*/
    NAZO_102,			/* ２回目				*/
    NAZO_103,			/* 					*/
    NAZO_104,			/* 【レースやる】			*/
    NAZO_105,			/* 					*/
    NAZO_106,			/* 					*/
    NAZO_107,			/* 					*/
    NAZO_108,			/* 					*/
    NAZO_109,			/* 					*/
    NAZO_10A,			/* 					*/

    /*** ？？？	****/
    NAZO_10B,			/* 					*/
    NAZO_10C,			/* 					*/
    NAZO_10D,			/* 					*/
    NAZO_10E,			/* 					*/
    NAZO_10F,			/* 					*/
	
    /*** ？？？	****/
    NAZO_110,			/* 					*/
    NAZO_111,			/* 					*/
    NAZO_112,			/* 					*/
    NAZO_113,			/* 					*/
    NAZO_114,			/* 					*/
    NAZO_115,			/* 					*/
    NAZO_116,			/* 					*/
    NAZO_117,			/* 					*/
    NAZO_118,			/* 					*/
    NAZO_119,			/* 					*/
    NAZO_11A,			/* 					*/
    NAZO_11B,			/* 					*/
    NAZO_11C,			/* 					*/
    NAZO_11D,			/* 					*/
    NAZO_11E,			/* 					*/
    NAZO_11F,			/* 					*/

    /*** ハイリアＡ	****/
    NAZO_120,			/* 《３つの精霊石そろった》		*/
    NAZO_121,			/* 					*/

    /*** ハイリアＢ	****/
    NAZO_122,			/* ２回目				*/
    NAZO_123,			/* 					*/

    /*** ハイリアＣ	****/
    NAZO_124,			/* ２回目				*/
    NAZO_125,			/* 					*/

    /*** ハイリアＤ	****/
    NAZO_126,			/* 《インゴーからタロン居場所》２回目	*/
    NAZO_127,			/* 《タロン帰宅》			*/
    NAZO_128,			/* 					*/
    NAZO_129,			/* 					*/

    /*** ハイリアＥ	****/	
    NAZO_12A,			/* ２回目				*/
    NAZO_12B,			/* 					*/

    /*** ハイリアＦ	****/
    NAZO_12C,			/* ２回目				*/
    NAZO_12D,			/* 					*/

    /*** ハイリアＧ	****/
    NAZO_12E,			/* ２回目				*/
    NAZO_12F,			/* 					*/
	
    /*** ハイリアＨ	****/
    NAZO_130,			/* ２回目				*/
    NAZO_131,			/* 					*/

    /*** ハイリアＩ	****/	
    NAZO_132,			/* ２回目				*/
    NAZO_133,			/* 					*/

    /*** ハイリアＪ	****/
    NAZO_134,			/* ２回目				*/
    NAZO_135,			/* 					*/
	
    /*** 湖のじいさん	****/
    NAZO_136,			/* ２回目				*/
    NAZO_137,			/* 					*/

    /*** 墓守ダンベイ	****/
    NAZO_138,			/* ２回目				*/
    NAZO_139,			/* 					*/

    /*** 墓守ダンベイの小屋の扉	****/
    NAZO_13A,			/* 					*/
    NAZO_13B,			/* 					*/

    /*** ダンベイの日記 <リンク子供>	****/
    NAZO_13C,			/* 					*/
    NAZO_13D,			/* 					*/

    /*** ダンベイの日記 <リンク大人>	****/
    NAZO_13E,			/* 					*/
    NAZO_13F,			/* 					*/

   /*** ゴロンＡ <リンク子供>	****/
    NAZO_140,			/* ２回目				*/
    NAZO_141,			/* 《大岩爆破》				*/
    NAZO_142,			/* 《炎の精霊石入手》			*/
    NAZO_143,			/* 					*/

   /*** ゴロンＢ <リンク子供>	****/
    NAZO_144,			/* 《大岩爆破》				*/
    NAZO_145,			/* 《炎の精霊石入手》			*/
    NAZO_146,			/* 					*/
    NAZO_147,			/* 					*/

   /*** ゴロンＣ <リンク子供>	****/
    NAZO_148,			/* 二択→"うん"《爆弾花使用許可》	*/
    NAZO_149,			/* 二択→"うん"《爆弾花使用許無》	*/
    NAZO_14A,			/* 二択→"ううん"			*/
    NAZO_14B,			/* ２回目				*/
    NAZO_14C,			/* 《大岩爆破》				*/
    NAZO_14D,			/* 《炎の精霊石入手》			*/
    NAZO_14E,			/* 					*/
    NAZO_14F,			/* 					*/

   /*** ゴロンＤ <リンク子供>	****/
    NAZO_150,			/* ２回目				*/
    NAZO_151,			/* 《炎の精霊石入手》			*/
    NAZO_152,			/* 					*/
    NAZO_153,			/* 					*/

   /*** ゴロンＥ <リンク子供>	****/
    NAZO_154,			/* ２回目				*/
    NAZO_155,			/* 《炎の精霊石入手》			*/
    NAZO_156,			/* 					*/
    NAZO_157,			/* 					*/

   /*** ゴロンＦ <リンク子供>	****/
    NAZO_158,			/* ２回目				*/
    NAZO_159,			/* 《ダルニア炎の精霊石説明》		*/
    NAZO_15A,			/* 《炎の精霊石入手》			*/
    NAZO_15B,			/* 					*/
	
   /*** ゴロン店爆弾	****/
    NAZO_15C,			/* 					*/
    NAZO_15D,			/* 					*/
    NAZO_15E,			/* 					*/
    NAZO_15F,			/* 		 			*/
	
   /*** ゴロン店主 <リンク子供>		****/
    NAZO_160,			/* 					*/
    NAZO_161,			/* 					*/
    NAZO_162,			/* 					*/
    NAZO_163,			/* 					*/
    NAZO_164,			/* 					*/
    NAZO_165,			/* 					*/
	
   /*** ゴロン店主 <リンク大人>		****/
    NAZO_166,			/* 					*/
    NAZO_167,			/* 					*/
	
   /*** ゴロン子供 <リンク大人>		****/
    NAZO_168,			/* 					*/
    NAZO_169,			/* 					*/
    NAZO_16A,			/* 《泣きじゃくる》			*/
    NAZO_16B,			/* 二択→"リュウってなに？"		*/
    NAZO_16C,			/* 二択→"なんでみんないないの？"	*/
    NAZO_16D,			/* 両方尋ねた				*/
    NAZO_16E,			/* ２回目				*/
    NAZO_16F,			/* 《炎の神殿攻略》２回目		*/

   /*** ダルニア <リンク子供>	****/
    NAZO_170,		/* 《ゴロンＦとの会話》《ゴロン店主の依頼》	*/
    NAZO_171,		/* 二択→"炎の精霊石ほしい"２回目		*/
    NAZO_172,		/* 二択→"爆弾品切れ"  	《爆弾使用許可》	*/
    NAZO_173,			/* 《爆弾使用許可》２回目		*/
    NAZO_174,			/* 《炎の精霊石入手》			*/
    NAZO_175,			/* 					*/
    NAZO_176,			/* 					*/
    NAZO_177,			/*					*/

   /*** ダルニア <リンク大人>	****/
    NAZO_178,			/* 《マスターソード入手》		*/
    NAZO_179,			/* デモ後炎の神殿内に消える		*/
    NAZO_17A,			/*					*/
    NAZO_17B,			/*					*/
    NAZO_17C,			/*					*/
    NAZO_17D,			/*					*/
	
   /*** 各ゴロン共通 <リンク大人>	****/
    NAZO_17E,			/*					*/
    NAZO_17F,			/*					*/

   /*** ゾーラＡ	****/
    NAZO_180,			/* 《ゾーラ族と会話》			*/
    NAZO_181,			/* 《水の精霊石入手》			*/
    NAZO_182,			/* 					*/
    NAZO_183,			/* 					*/

   /*** ゾーラＢ	****/
    NAZO_184,			/* 《ゾーラ族と会話》２回目		*/
    NAZO_185,			/* 《水の精霊石入手》			*/
    NAZO_186,			/* 					*/
    NAZO_187,			/* 					*/

   /*** ゾーラＣ	****/
    NAZO_188,			/* 《ゾーラ族と会話》			*/
    NAZO_189,		/* 《ゾーラの里で空ビン》《ゾーラＣと会話》	*/
    NAZO_18A,			/* ２回目				*/
    NAZO_18B,			/* 《水の精霊石入手》			*/

   /*** ゾーラＤ	****/
    NAZO_18C,			/* 《ゾーラ族と会話》			*/
    NAZO_18D,			/* 《水の精霊石入手》			*/
    NAZO_18E,			/* 					*/
    NAZO_18F,			/* 					*/

   /*** ゾーラＥ	****/
    NAZO_190,			/* 《ゾーラ族と会話》			*/
    NAZO_191,			/* 《キングゾーラの許可》		*/
    NAZO_192,			/* 《水の精霊石入手》			*/
    NAZO_193,			/* 					*/

   /*** ゾーラＦ	****/
    NAZO_194,			/* 《ゾーラ族と会話》			*/
    NAZO_195,			/* 《水の精霊石入手》			*/
    NAZO_196,			/* 					*/
    NAZO_197,			/* 					*/

   /*** キングゾーラ <リンク子供>	****/
    NAZO_198,			/* 《ゾーラＣと会話》２回目		*/
    NAZO_199,			/* 《水の精霊石入手》			*/
    NAZO_19A,			/* 					*/
    NAZO_19B,			/* 					*/

   /*** キングゾーラ <リンク大人>	****/
    NAZO_19C,			/* 《水の精霊石入手》			*/
    NAZO_19D,			/* 					*/
    NAZO_19E,			/* 					*/
    NAZO_19F,			/* 					*/

   /*** ルト姫 <リンク子供>	****/
    NAZO_200,			/* [ルト姫幽閉部屋３]			*/
    NAZO_201,			/* [ルト姫幽閉部屋４]２回目		*/
    NAZO_202,			/* 《３つの神経切断》			*/
    NAZO_203,			/* リフト上昇				*/
    NAZO_204,			/* [ルト姫幽閉部屋15]			*/
    NAZO_205,			/* 					*/
    NAZO_206,			/* 					*/
    NAZO_207,			/* 					*/

   /*** ルト姫 <リンク大人>	****/
    NAZO_208,	/* 《マスターソード入手》水の神殿再会部屋へセット	*/
    NAZO_209,			/* 水の神殿ボス部屋			*/
    NAZO_20A,		/* 水の神殿ボス倒した後、賢者の間にセット２回目 */
    NAZO_20B,			/* 《氷のメダル入手》			*/
    NAZO_20C,			/* ２回目				*/
    NAZO_20D,			/* 					*/
    NAZO_20E,			/* 					*/
    NAZO_20F,			/* 					*/
	
   /*** 土産屋ゾーラ	****/
    NAZO_210,			/* 					*/
    NAZO_211,			/* 					*/
    NAZO_212,			/* 					*/
    NAZO_213,			/* 					*/
	
   /*** インパ <リンク大人>	****/
    NAZO_214,			/* 《マスターソード入手》		*/
    NAZO_215,			/* 二択→"そうだ"			*/
    NAZO_216,			/* 二択→"ちがうよ"			*/
    NAZO_217,			/* 《インパ消える》			*/
    NAZO_218,			/* 《インパの許可》			*/
    NAZO_219,			/* 《闇の神殿ボス倒した》		*/
    NAZO_21A,			/* 《闇のメダル入手》			*/
    NAZO_21B,			/* ２回目				*/
    NAZO_21C,			/* 					*/
    NAZO_21D,			/* 					*/
    NAZO_21E,			/* 					*/
    NAZO_21F,			/* 					*/

   /*** カカリコ村人Ａ	****/
    NAZO_220,			/* 					*/
    NAZO_221,			/* 					*/

   /*** カカリコ村人Ｂ	****/
    NAZO_222,			/* 					*/
    NAZO_223,			/* 					*/

   /*** カカリコ村人Ｃ	****/
    NAZO_224,			/* 					*/
    NAZO_225,			/* 					*/

   /*** カカリコ村人Ｄ	****/
    NAZO_226,			/* ２回目				*/
    NAZO_227,			/* 					*/

   /*** カカリコ村人Ｅ	****/
    NAZO_228,			/* 					*/
    NAZO_229,			/* 					*/

   /*** カカリコ村人Ｆ	****/
    NAZO_22A,			/* ２回目				*/
    NAZO_22B,			/* 					*/
    NAZO_22C,			/* 					*/
    NAZO_22D,			/* 					*/
    NAZO_22E,			/* 					*/
    NAZO_22F,			/* 					*/

   /*** キャラバンＡ	****/
    NAZO_230,			/* 《名人のノコギリ入手》２回目		*/
    NAZO_231,			/* 《銀のグローブ入手》			*/
    NAZO_232,			/* 					*/
    NAZO_233,			/* 					*/

   /*** キャラバンＢ	****/
    NAZO_234,			/* ２回目				*/
    NAZO_235,			/* 《銀のグローブ入手》			*/
    NAZO_236,			/* 					*/
    NAZO_237,			/* 					*/

   /*** キャラバンＣ	****/
    NAZO_238,			/* ２回目				*/
    NAZO_239,			/* 《名人のノコギリ入手》２回目		*/
    NAZO_23A,			/* 					*/
    NAZO_23B,			/* 					*/

   /*** キャラバンＤ	****/
    NAZO_23C,			/* ２回目				*/
    NAZO_23D,			/* 					*/

   /*** キャラバンＥ	****/
    NAZO_23E,			/* 					*/
    NAZO_23F,			/* 					*/

   /*** 流鏑馬ゲルド	****/
    NAZO_240,			/* 					*/
    NAZO_241,			/* 					*/
    NAZO_242,			/* 					*/
    NAZO_243,			/* 					*/
    NAZO_244,			/* 					*/
    NAZO_245,			/* 					*/
    NAZO_246,			/* 					*/
    NAZO_247,			/* 					*/

   /*** ゲルド修行道場門番	****/
    NAZO_248,			/* 					*/
    NAZO_249,			/* 					*/
    NAZO_24A,			/* 					*/
    NAZO_24B,			/* 					*/
    NAZO_24C,			/* 					*/
    NAZO_24D,			/* 					*/
    NAZO_24E,			/* 					*/
    NAZO_24F,			/* 					*/

    NAZO_MAX			/* 設定されている謎の最大数		*/
};

/*┌─────────────────────────────────┐
  │	会話用キャラの名称（ややこしいですが、わけます…）	      │
  └─────────────────────────────────┘*/
enum{
    KOKIRI_SARIA,		/*  0: サリア				*/
    KOKIRI_MIDO,		/*  1: ミド				*/
    KOKIRI_A,			/*  2: コキリＡ				*/
    KOKIRI_B,			/*  3: コキリＢ				*/
    KOKIRI_C,			/*  4: コキリＣ				*/
    KOKIRI_D,			/*  5: コキリＤ				*/
    KOKIRI_E,			/*  6: コキリＥ				*/
    KOKIRI_F,			/*  7: コキリＦ				*/
    KOKIRI_G,			/*  8: コキリＧ				*/
    KOKIRI_H,			/*  9: コキリＨ				*/
    KOKIRI_I,			/* 10: コキリＩ				*/
    KOKIRI_J,			/* 11: コキリＪ				*/
    KOKIRI_K,			/* 12: コキリＫ				*/
    KOKIRI_L,			/* 13: コキリＬ				*/
    DEKU,			/* 14: デクの樹				*/
    DEKU_JR,			/* 15: デクの樹Ｊｒ．			*/
    HEI_A,			/* 16: 城門の兵士			*/
    HEI_B,			/* 17: 路地裏倒れ兵士			*/
    MONBAN_A,			/* 18: 凱旋門の門番			*/
    HEI_C,			/* 19: 見回り兵士			*/
    MONBAN_B,			/* 20: ゾーラ川門番			*/
    MONBAN_C,			/* 21: カカリコ村門番			*/
    SEKIBAN,			/* 22: せきばん				*/
    TARON,			/* 23: タロン				*/
    HYLIA_A,			/* 24: ハイリアＡ			*/
    HYLIA_B,			/* 25: ハイリアＢ			*/
    HYLIA_C,			/* 26: ハイリアＣ			*/
    HYLIA_D,			/* 27: ハイリアＤ			*/
    HYLIA_E,			/* 28: ハイリアＥ			*/
    HYLIA_F,			/* 29: ハイリアＦ			*/
    HYLIA_G,			/* 30: ハイリアＧ			*/
    HYLIA_H,			/* 31: ハイリアＨ			*/
    HYLIA_I,			/* 32: ハイリアＩ			*/
    HYLIA_J,			/* 33: ハイリアＪ			*/
    LAKE_JIJI,			/* 34: 湖のじいさん			*/
    DANPEI,			/* 35: 墓守ダンペイ			*/
    DANPEI_ROOM_DOOR,		/* 36: 墓守ダンペイの小屋の扉		*/
    DANPEI_DIALY,		/* 37: 墓守ダンペイの日記		*/
    GORON_A,			/* 38: ゴロンＡ				*/
    GORON_B,			/* 39: ゴロンＢ				*/
    GORON_C,			/* 40: ゴロンＣ				*/
    GORON_D,			/* 41: ゴロンＤ				*/
    GORON_E,			/* 42: ゴロンＥ				*/
    GORON_F,			/* 43: ゴロンＦ				*/
    GORON_CHILD,		/* 44: ゴロン子供			*/
    GORON_SHOP_BOM,		/* 45: ゴロン店爆弾			*/
    GORON_TENSYU,		/* 46: ゴロン店主			*/
    MIYAGE_ZORA,		/* 47: みやげ屋ゾーラ			*/
    DARUNIA,			/* 48: ダルニア				*/
    ZORA_A,			/* 49: ゾーラＡ				*/
    ZORA_B,			/* 50: ゾーラＢ				*/
    ZORA_C,			/* 51: ゾーラＣ				*/
    ZORA_D,			/* 52: ゾーラＤ				*/
    ZORA_E,			/* 53: ゾーラＥ				*/
    ZORA_F,			/* 54: ゾーラＦ				*/
    KING_ZORA,			/* 55: キングゾーラ			*/
    RUTO,			/* 56: ルト姫				*/
    INPA,			/* 57: インパ				*/
    KAKARICO_A,			/* 58: カカリコ村Ａ			*/
    KAKARICO_B,			/* 59: カカリコ村Ｂ			*/
    KAKARICO_C,			/* 60: カカリコ村Ｃ			*/
    KAKARICO_D,			/* 61: カカリコ村Ｄ			*/
    KAKARICO_E,			/* 62: カカリコ村Ｅ			*/
    KAKARICO_F,			/* 63: カカリコ村Ｆ			*/
    CARAVAN_A,			/* 64: キャラバンＡ			*/
    CARAVAN_B,			/* 65: キャラバンＢ			*/
    CARAVAN_C,			/* 66: キャラバンＣ			*/
    CARAVAN_D,			/* 67: キャラバンＤ			*/
    CARAVAN_E,			/* 68: キャラバンＥ			*/
    YABUSAME_GERUDO,		/* 69: 流鏑馬ゲルド			*/
    MONBAN_D,			/* 70: ゲルド修行場門番			*/
    MARON,			/* 71: マロン				*/
    INGO			/* 72: インゴー				*/
};

/*┌─────────────────────────────────┐
  │	関数のプロトタイプ宣言					      │
  └─────────────────────────────────┘*/
/* イベントフラグのゲット		*/
extern int event_check(int no);

/* イベントフラグのセット		*/
extern void event_set(int no);
		
/* メッセージチェックフラグのゲット	*/
extern int nazo_check(int no);

/* メッセージチェックフラグのセット	*/
extern void nazo_set(int no);
		
/* メッセージセレクト	*/
extern unsigned short set_talk_message(Game_play *game_play, short chrno);

/* 会話処理		*/
extern int talk_to_player(Game_play *game_play, Actor *thisx,
			  int chrno, int *talking);

/* チェイン角度もどす	*/
extern int chain_angle_reset(s_xyz *neck_angle, s_xyz *body_angle);

/* 視点移動 		*/
extern short eye_move(Game_play *game_play, Actor *thisx, s_xyz *neck_angle,
		      s_xyz *body_angle, float eye_posint, int talking);

/* 視点移動（改訂版）	*/
extern short eye_move2(Game_play *game_play, Actor *thisx, s_xyz *neck_angle,
		       s_xyz *body_angle, xyz_t eye_pos);


#ifdef _LANGUAGE_C_PLUS_PLUS
}	/* extern "C"	*/
#endif

#endif
/*** z_common.h ***/


