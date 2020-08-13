/*
 *  NINTENDO64 JPEG LIBRARY
 *
 *  FILE : jpg.h
 *
 *  Copyright (C) 1998, NINTENDO Co,Ltd.
 */


/* ���顼 */
#define JPG_ERROR_NOERROR                  0
#define JPG_ERROR_CANNOT_MAKE_HUFFMANTABLE 1
#define JPG_ERROR_CANNOT_HUFFMANDECODE     2
#define JPG_ERROR_CANNOT_HUFFMANENCODE     3

/* ���֥���ץ�󥰥����� */
#define JPG_SUBSAMPLING_422 0
#define JPG_SUBSAMPLING_420 2

/* ���ϥե����ޥå� */
#define JPG_FORMAT_YUV    0
#define JPG_FORMAT_RGBA32 1
#define JPG_FORMAT_RGBA16 2

/* �ϥեޥ�ǥ����ɥե饰 */
#define JPG_LOAD_INIT 0
#define JPG_LOAD_CONT 1

/* �ϥեޥ󥨥󥳡��ɥե饰 */
#define JPG_SAVE_INIT 0
#define JPG_SAVE_CONT 1

/* �ޥ��������ɥե饰 */
#define M_NJPEGTASK 4


/* #######################################################
 *  �̻Ҳ��ơ��֥�ط�
 * ####################################################### */

/* �̻Ҳ��ơ��֥륵���� */
#define JPG_QUANTTABLE_SIZE 128

/* �̻Ҳ��ơ��֥빽¤�� */
typedef struct {
  u16 element[64];
} JPGQuantTable;

/* �̻Ҳ��ơ��֥���� */
void jpgMakeQuantTable(u8 *, JPGQuantTable *, u8);


/* #######################################################
 *  �ϥեޥ�ơ��֥�ط�
 * ####################################################### */

/*
 * ����
 */

/* �ϥեޥ�ơ��֥�����ѥƥ�ݥ���ΰ� */
#define JPG_HSIZETABLE_SIZE 272
#define JPG_HCODETABLE_SIZE 528


/*
 * �ǥ�����
 */

/* �ϥեޥ�ǥ����ɥơ��֥빽¤�� */
#define JPG_DHUFFTABLE_SIZE 84

typedef struct {
  u8  ptrList[16];
  u16 minList[16];
  u16 maxList[16];
  u8  *huffVal;
} JPGDHuffTable;

/* �ϥեޥ�ǥ����ɥơ��֥�κ��� */
u8 jpgMakeDHuffTable(u8 *, JPGDHuffTable *, u8 *, u16 *, u8);


/*
 * ���󥳡���
 */

/* �ϥեޥ󥨥󥳡��ɥơ��֥빽¤�� (DC) */
#define JPG_EDHUFFTABLE_SIZE 48

typedef struct {
  u8  size[16];
  u16 code[16];
} JPGEDcHuffTable;

/* �ϥեޥ󥨥󥳡��ɥơ��֥빽¤�� (AC) */
#define JPG_EAHUFFTABLE_SIZE 768

typedef struct {
  u8  size[256];
  u16 code[256];
} JPGEAcHuffTable;

/* �ϥեޥ󥨥󥳡��ɥơ��֥빽¤�� */
typedef union {
  JPGEDcHuffTable dc;
  JPGEAcHuffTable ac;
} JPGEHuffTable;

/* �ϥեޥ󥨥󥳡��ɥơ��֥�κ��� */
u8 jpgMakeEHuffTable(u8 *, JPGEHuffTable *, u8 *, u16 *);


/* #######################################################
 *  �ϥեޥ�ǥ�����
 * ####################################################### */

/* �ϥեޥ�ǥ����ɥѥ�᡼����¤�� */
typedef struct {
  u8            *input;
  u8            subsampType;
  u8            format;
  JPGDHuffTable *yDcTable;
  JPGDHuffTable *yAcTable;
  JPGDHuffTable *cDcTable;
  JPGDHuffTable *cAcTable;
  u8            restart;
} JPGHuffDecParam;

/* �ϥեޥ�ǥ����ɥ��ơ��ȹ�¤�� */
typedef struct {
  u32 current;
  u8  pointer;
  u8  through;
  u32 buffer;
  s16 yDc;
  s16 cbDc;
  s16 crDc;
} JPGHuffDecState;

/* �ϥեޥ�ǥ����� */
u8 jpgLoad(JPGHuffDecParam *, s16 *, u32, u8, JPGHuffDecState *);


/* #######################################################
 *  �ϥեޥ󥨥󥳡���
 * ####################################################### */

/* �ϥեޥ󥨥󥳡��ɥѥ�᡼����¤�� */
typedef struct {
  u8            *output;
  u8            subsampType;
  JPGEHuffTable *yDcTable;
  JPGEHuffTable *yAcTable;
  JPGEHuffTable *cDcTable;
  JPGEHuffTable *cAcTable;
  u8            restart;
} JPGHuffEncParam;

/* �ϥեޥ󥨥󥳡��ɥ��ơ��ȹ�¤�� */
typedef struct {
  u32 current;
  u8  pointer;
  u32 buffer;
  s16 yDc;
  s16 cbDc;
  s16 crDc;
} JPGHuffEncState;

/* �ϥեޥ󥨥󥳡��� */
u8 jpgSave(JPGHuffEncParam *, s16 *, u32, u8, u32 *, JPGHuffEncState *);


/* #######################################################
 *  �ǥ������ѥޥ���������
 * ####################################################### */

/* JPEG �ǥ����ɥޥ��������� �ѥ�᡼����¤�� */
#define JPG_DUCODE_PARAMSIZE 32

typedef struct {
  s16 *data;
  u32 mbs;
  u32 subsampType;
  u16 *tableY;
  u16 *tableCb;
  u16 *tableCr;
  u32 dummy1;
  u32 dummy2;
} JPGDUcodeParam;

/* JPEG �ǥ����ɥޥ��������ɤ� extern ��� */
extern u8 jpgDYUVTextStart[], jpgDYUVTextEnd[];
extern u8 jpgDYUVDataStart[], jpgDYUVDataEnd[];

extern u8 jpgDRGBATextStart[], jpgDRGBATextEnd[];
extern u8 jpgDRGBADataStart[], jpgDRGBADataEnd[];

extern u8 jpgDRGBA16TextStart[], jpgDRGBA16TextEnd[];
extern u8 jpgDRGBA16DataStart[], jpgDRGBA16DataEnd[];

/* JPEG �ǥ����ɥޥ��������� yield �ΰ� */
#define JPG_DUCODE_YIELDSIZE  512


/* #######################################################
 *  ���󥳡����ѥޥ���������
 * ####################################################### */

/* JPEG ���󥳡��ɥޥ��������� �ѥ�᡼����¤�� */
#define JPG_EUCODE_PARAMSIZE 32

typedef struct {
  u8  *input;
  s16 *output;
  u16 *tableY;
  u16 *tableCb;
  u16 *tableCr;
  u32 subsampType;
  u32 mbs_x;
  u32 mbs_y;
} JPGEUcodeParam;

/* JPEG ���󥳡��ɥޥ��������ɤ� extern ��� */
extern u8 jpgERGBATextStart[], jpgERGBATextEnd[];
extern u8 jpgERGBADataStart[], jpgERGBADataEnd[];

extern u8 jpgERGBA16TextStart[], jpgERGBA16TextEnd[];
extern u8 jpgERGBA16DataStart[], jpgERGBA16DataEnd[];

/* JPEG ���󥳡��ɥޥ��������� yield �ΰ� */
#define JPG_EUCODE_YIELDSIZE  512
