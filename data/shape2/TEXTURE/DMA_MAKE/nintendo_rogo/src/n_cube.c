/* This file was created by flt2n64 [ Sep 17 1998 23:16:37 ] make program version.*/
#include <mbi.h>

#include "z_hilite.h"
extern unsigned char  n_cube_txt[];

/* vertex=178 (vcnt=<141>)*/
static Vtx n_cube_new_v[]={
	{    -5,     22,     11, 0,    186,   1295,   37,   85,   76, 255}, /*   0 L*/
	{     5,     11,      5, 0,    384,   1536,  -65,   29,  -96, 255}, /*   1 L*/
	{    -5,     22,      5, 0,    128,   1210,   25,   57, -102, 255}, /*   2 L*/
	{    -5,     22,     11, 0,    186,   1295,   37,   85,   76, 255}, /*   3 L*/
	{     5,     11,     11, 0,    326,   1536,   -8,   20,  118, 255}, /*   4 L*/
	{     5,     11,      5, 0,    384,   1536,  -65,   29,  -96, 255}, /*   5 L*/
	{    -5,     11,     -5, 0,    896,   1536,   65,   29,   96, 255}, /*   6 L*/
	{     5,     22,     -5, 0,    640,   1210,  -25,   57,  102, 255}, /*   7 L*/
	{     5,     22,    -11, 0,    698,   1295,  -37,   85,  -76, 255}, /*   8 L*/
	{    -5,     11,    -11, 0,    838,   1536,    8,   20, -118, 255}, /*   9 L*/
	{    11,      0,     -5, 0,    582,   1777,  102,  -57,   25, 255}, /*  10 L*/
	{    11,     11,      5, 0,    442,   1536,  118,  -20,   -8, 255}, /*  11 L*/
	{     5,      0,     -5, 0,    640,   1862,  -88,  -78,   22, 255}, /*  12 L*/
	{   -11,      0,      5, 0,     70,   1777, -102,  -57,  -25, 255}, /*  13 L*/
	{   -11,     11,     -5, 0,    -70,   1536, -118,  -20,    8, 255}, /*  14 L*/
	{    -5,     11,     -5, 0,   -128,   1536,   65,   29,   96, 255}, /*  15 L*/
	{    -5,      0,      5, 0,    128,   1862,   88,  -78,  -22, 255}, /*  16 L*/
	{     5,      0,    -11, 0,    698,   1777,  -80,  -40,  -80, 255}, /*  17 L*/
	{     5,     11,     -5, 0,    640,   1536,  -65,  -29,   96, 255}, /*  18 L*/
	{     5,     11,    -11, 0,    698,   1536,   -8,  -20, -118, 255}, /*  19 L*/
	{     5,      0,     -5, 0,    640,   1862,  -88,  -78,   22, 255}, /*  20 L*/
	{     5,     22,     11, 0,    326,   1295,  -80,   40,   80, 255}, /*  21 L*/
	{     5,     11,      5, 0,    384,   1536,  -65,   29,  -96, 255}, /*  22 L*/
	{     5,     11,     11, 0,    326,   1536,   -8,   20,  118, 255}, /*  23 L*/
	{     5,     22,      5, 0,    384,   1210,  -88,   78,  -22, 255}, /*  24 L*/
	{    -5,      0,     11, 0,    186,   1777,   80,  -40,   80, 255}, /*  25 L*/
	{    -5,     11,      5, 0,    128,   1536,   65,  -29,  -96, 255}, /*  26 L*/
	{    -5,     11,     11, 0,    186,   1536,    8,  -20,  118, 255}, /*  27 L*/
	{    -5,      0,      5, 0,    128,   1862,   88,  -78,  -22, 255}, /*  28 L*/
	{    -5,     22,     -5, 0,    896,   1210,   88,   78,   22, 255}, /*  29 L*/
	{    -5,     11,     -5, 0,    896,   1536,   65,   29,   96, 255}, /*  30 L*/
	{    -5,     22,    -11, 0,    838,   1295,   80,   40,  -80, 255}, /*  31 L*/
	{    -5,     11,    -11, 0,    838,   1536,    8,   20, -118, 255}, /*  32 L*/
	{    11,     11,      5, 0,    442,   1536,  118,  -20,   -8, 255}, /*  33 L*/
	{    11,     22,     11, 0,    384,   1335,   80,   80,   40, 255}, /*  34 L*/
	{    11,     11,     11, 0,    384,   1536,   84,    0,   84, 255}, /*  35 L*/
	{    11,     22,      5, 0,    442,   1295,  102,   57,  -25, 255}, /*  36 L*/
	{    11,      0,     -5, 0,    582,   1777,  102,  -57,   25, 255}, /*  37 L*/
	{    11,      0,    -11, 0,    640,   1737,   80,  -80,  -40, 255}, /*  38 L*/
	{    11,     11,     -5, 0,    582,   1536,  118,   20,    8, 255}, /*  39 L*/
	{    11,     11,    -11, 0,    640,   1536,   84,    0,  -84, 255}, /*  40 L*/
	{   -11,     11,      5, 0,     70,   1536, -118,   20,   -8, 255}, /*  41 L*/
	{   -11,      0,     11, 0,    128,   1737,  -80,  -80,   40, 255}, /*  42 L*/
	{   -11,     11,     11, 0,    128,   1536,  -84,    0,   84, 255}, /*  43 L*/
	{   -11,      0,      5, 0,     70,   1777, -102,  -57,  -25, 255}, /*  44 L*/
	{   -11,     22,     -5, 0,    954,   1295, -102,   57,   25, 255}, /*  45 L*/
	{   -11,     22,    -11, 0,    896,   1335,  -80,   80,  -40, 255}, /*  46 L*/
	{   -11,     11,     -5, 0,    954,   1536, -118,  -20,    8, 255}, /*  47 L*/
	{   -11,     11,    -11, 0,    896,   1536,  -84,    0,  -84, 255}, /*  48 L*/
	{    -5,      0,    -11, 0,    838,   1777,   37,  -85,  -76, 255}, /*  49 L*/
	{     5,     11,     -5, 0,    640,   1536,  -65,  -29,   96, 255}, /*  50 L*/
	{    -5,      0,     -5, 0,    896,   1862,   25,  -57,  102, 255}, /*  51 L*/
	{     5,     11,    -11, 0,    698,   1536,   -8,  -20, -118, 255}, /*  52 L*/
	{     5,      0,     11, 0,    326,   1777,  -37,  -85,   76, 255}, /*  53 L*/
	{    -5,     11,      5, 0,    128,   1536,   65,  -29,  -96, 255}, /*  54 L*/
	{     5,      0,      5, 0,    384,   1862,  -25,  -57, -102, 255}, /*  55 L*/
	{    -5,     11,     11, 0,    186,   1536,    8,  -20,  118, 255}, /*  56 L*/
	{   -11,     22,     11, 0,    128,   1335,  -49,   49,   98, 255}, /*  57 L*/
	{   -11,     22,      5, 0,     70,   1295,  -69,   69,  -69, 255}, /*  58 L*/
	{   -11,     11,     11, 0,    128,   1536,  -84,    0,   84, 255}, /*  59 L*/
	{   -11,     11,      5, 0,     70,   1536, -118,   20,   -8, 255}, /*  60 L*/
	{   -11,      0,      5, 0,     70,   1777, -102,  -57,  -25, 255}, /*  61 L*/
	{   -11,     22,     -5, 0,    -70,   1295, -102,   57,   25, 255}, /*  62 L*/
	{   -11,     11,     -5, 0,    -70,   1536, -118,  -20,    8, 255}, /*  63 L*/
	{   -11,     11,     -5, 0,    954,   1536, -118,  -20,    8, 255}, /*  64 L*/
	{   -11,     11,    -11, 0,    896,   1536,  -84,    0,  -84, 255}, /*  65 L*/
	{   -11,      0,     -5, 0,    954,   1777,  -69,  -69,   69, 255}, /*  66 L*/
	{   -11,      0,    -11, 0,    896,   1737,  -49,  -49,  -98, 255}, /*  67 L*/
	{    11,     22,    -11, 0,    640,   1335,   49,   49,  -98, 255}, /*  68 L*/
	{    11,     22,     -5, 0,    582,   1295,   69,   69,   69, 255}, /*  69 L*/
	{    11,     11,    -11, 0,    640,   1536,   84,    0,  -84, 255}, /*  70 L*/
	{    11,     11,     -5, 0,    582,   1536,  118,   20,    8, 255}, /*  71 L*/
	{    11,     22,      5, 0,    442,   1295,  102,   57,  -25, 255}, /*  72 L*/
	{    11,     11,      5, 0,    442,   1536,  118,  -20,   -8, 255}, /*  73 L*/
	{    11,      0,     -5, 0,    582,   1777,  102,  -57,   25, 255}, /*  74 L*/
	{    11,     11,     11, 0,    384,   1536,   84,    0,   84, 255}, /*  75 L*/
	{    11,      0,      5, 0,    442,   1777,   69,  -69,  -69, 255}, /*  76 L*/
	{    11,      0,     11, 0,    384,   1737,   49,  -49,   98, 255}, /*  77 L*/
	{    -5,     22,     -5, 0,   -128,   1210,   88,   78,   22, 255}, /*  78 L*/
	{    -5,      0,      5, 0,    128,   1862,   88,  -78,  -22, 255}, /*  79 L*/
	{    -5,     11,     -5, 0,   -128,   1536,   65,   29,   96, 255}, /*  80 L*/
	{     5,     22,      5, 0,    384,   1210,  -88,   78,  -22, 255}, /*  81 L*/
	{     5,     11,     -5, 0,    640,   1536,  -65,  -29,   96, 255}, /*  82 L*/
	{     5,      0,     -5, 0,    640,   1862,  -88,  -78,   22, 255}, /*  83 L*/
	{     5,     11,      5, 0,    384,   1536,  -65,   29,  -96, 255}, /*  84 L*/
	{    11,     22,      5, 0,    442,   1295,  102,   57,  -25, 255}, /*  85 L*/
	{    11,     11,     -5, 0,    582,   1536,  118,   20,    8, 255}, /*  86 L*/
	{     5,     11,     -5, 0,    640,   1536,  -65,  -29,   96, 255}, /*  87 L*/
	{     5,     22,      5, 0,    384,   1210,  -88,   78,  -22, 255}, /*  88 L*/
	{    -5,     22,     -5, 0,   -128,   1210,   88,   78,   22, 255}, /*  89 L*/
	{   -11,     22,     -5, 0,    -70,   1295, -102,   57,   25, 255}, /*  90 L*/
	{   -11,     11,      5, 0,     70,   1536, -118,   20,   -8, 255}, /*  91 L*/
	{    -5,     11,      5, 0,    128,   1536,   65,  -29,  -96, 255}, /*  92 L*/
	{    11,      0,      5, 0,    442,   1777,   69,  -69,  -69, 255}, /*  93 L*/
	{     5,     11,      5, 0,    384,   1536,  -65,   29,  -96, 255}, /*  94 L*/
	{    11,     11,      5, 0,    442,   1536,  118,  -20,   -8, 255}, /*  95 L*/
	{     5,      0,      5, 0,    384,   1862,  -25,  -57, -102, 255}, /*  96 L*/
	{   -11,     22,      5, 0,     70,   1295,  -69,   69,  -69, 255}, /*  97 L*/
	{    -5,     22,      5, 0,    128,   1210,   25,   57, -102, 255}, /*  98 L*/
	{    11,     22,     -5, 0,    582,   1295,   69,   69,   69, 255}, /*  99 L*/
	{     5,     22,     -5, 0,    640,   1210,  -25,   57,  102, 255}, /* 100 L*/
	{    -5,      0,     -5, 0,    896,   1862,   25,  -57,  102, 255}, /* 101 L*/
	{    -5,     11,     -5, 0,    896,   1536,   65,   29,   96, 255}, /* 102 L*/
	{   -11,      0,     -5, 0,    954,   1777,  -69,  -69,   69, 255}, /* 103 L*/
	{   -11,     11,     -5, 0,    954,   1536, -118,  -20,    8, 255}, /* 104 L*/
	{    -5,     11,     11, 0,    186,   1536,    8,  -20,  118, 255}, /* 105 L*/
	{   -11,     22,     11, 0,    128,   1335,  -49,   49,   98, 255}, /* 106 L*/
	{   -11,     11,     11, 0,    128,   1536,  -84,    0,   84, 255}, /* 107 L*/
	{    -5,     22,     11, 0,    186,   1295,   37,   85,   76, 255}, /* 108 L*/
	{     5,      0,     11, 0,    326,   1777,  -37,  -85,   76, 255}, /* 109 L*/
	{    11,      0,     11, 0,    384,   1737,   49,  -49,   98, 255}, /* 110 L*/
	{     5,     11,     11, 0,    326,   1536,   -8,   20,  118, 255}, /* 111 L*/
	{    11,     11,     11, 0,    384,   1536,   84,    0,   84, 255}, /* 112 L*/
	{    -5,     11,    -11, 0,    838,   1536,    8,   20, -118, 255}, /* 113 L*/
	{   -11,      0,    -11, 0,    896,   1737,  -49,  -49,  -98, 255}, /* 114 L*/
	{   -11,     11,    -11, 0,    896,   1536,  -84,    0,  -84, 255}, /* 115 L*/
	{    -5,      0,    -11, 0,    838,   1777,   37,  -85,  -76, 255}, /* 116 L*/
	{     5,     22,    -11, 0,    698,   1295,  -37,   85,  -76, 255}, /* 117 L*/
	{    11,     22,    -11, 0,    640,   1335,   49,   49,  -98, 255}, /* 118 L*/
	{     5,     11,    -11, 0,    698,   1536,   -8,  -20, -118, 255}, /* 119 L*/
	{    11,     11,    -11, 0,    640,   1536,   84,    0,  -84, 255}, /* 120 L*/
	{   -11,      0,     11, 0,    128,   1737,  -80,  -80,   40, 255}, /* 121 L*/
	{    -5,      0,     11, 0,    186,   1777,   80,  -40,   80, 255}, /* 122 L*/
	{   -11,     11,     11, 0,    128,   1536,  -84,    0,   84, 255}, /* 123 L*/
	{    -5,     11,     11, 0,    186,   1536,    8,  -20,  118, 255}, /* 124 L*/
	{    11,     22,     11, 0,    384,   1335,   80,   80,   40, 255}, /* 125 L*/
	{     5,     22,     11, 0,    326,   1295,  -80,   40,   80, 255}, /* 126 L*/
	{    11,     11,     11, 0,    384,   1536,   84,    0,   84, 255}, /* 127 L*/
	{     5,     11,     11, 0,    326,   1536,   -8,   20,  118, 255}, /* 128 L*/
	{    -5,     22,     11, 0,    186,   1295,   37,   85,   76, 255}, /* 129 L*/
	{     5,      0,     11, 0,    326,   1777,  -37,  -85,   76, 255}, /* 130 L*/
	{    11,      0,    -11, 0,    640,   1737,   80,  -80,  -40, 255}, /* 131 L*/
	{     5,      0,    -11, 0,    698,   1777,  -80,  -40,  -80, 255}, /* 132 L*/
	{    -5,      0,    -11, 0,    838,   1777,   37,  -85,  -76, 255}, /* 133 L*/
	{    -5,     11,    -11, 0,    838,   1536,    8,   20, -118, 255}, /* 134 L*/
	{   -11,     11,    -11, 0,    896,   1536,  -84,    0,  -84, 255}, /* 135 L*/
	{    -5,     22,    -11, 0,    838,   1295,   80,   40,  -80, 255}, /* 136 L*/
	{   -11,     22,    -11, 0,    896,   1335,  -80,   80,  -40, 255}, /* 137 L*/
	{    -5,     11,      5, 0,    128,   1536,   65,  -29,  -96, 255}, /* 138 L*/
	{    -5,     22,      5, 0,    128,   1210,   25,   57, -102, 255}, /* 139 L*/
	{     5,      0,      5, 0,    384,   1862,  -25,  -57, -102, 255}, /* 140 L*/
	{     5,     11,      5, 0,    384,   1536,  -65,   29,  -96, 255}, /* 141 L*/
	{     5,     11,     -5, 0,    640,   1536,  -65,  -29,   96, 255}, /* 142 L*/
	{     5,     22,     -5, 0,    640,   1210,  -25,   57,  102, 255}, /* 143 L*/
	{    -5,      0,     -5, 0,    896,   1862,   25,  -57,  102, 255}, /* 144 L*/
	{    -5,     11,     -5, 0,    896,   1536,   65,   29,   96, 255}, /* 145 L*/
	{     5,      0,    -11, 0,    698,   1777,  -80,  -40,  -80, 255}, /* 146 L*/
	{    11,      0,    -11, 0,    640,   1737,   80,  -80,  -40, 255}, /* 147 L*/
	{     5,      0,     -5, 0,    640,   1862,  -88,  -78,   22, 255}, /* 148 L*/
	{    11,      0,     -5, 0,    582,   1777,  102,  -57,   25, 255}, /* 149 L*/
	{   -11,      0,      5, 0,     70,   1777, -102,  -57,  -25, 255}, /* 150 L*/
	{    -5,      0,      5, 0,    128,   1862,   88,  -78,  -22, 255}, /* 151 L*/
	{   -11,      0,     11, 0,    128,   1737,  -80,  -80,   40, 255}, /* 152 L*/
	{    -5,      0,     11, 0,    186,   1777,   80,  -40,   80, 255}, /* 153 L*/
	{    -5,     22,     -5, 0,    896,   1210,   88,   78,   22, 255}, /* 154 L*/
	{   -11,     22,    -11, 0,    896,   1335,  -80,   80,  -40, 255}, /* 155 L*/
	{   -11,     22,     -5, 0,    954,   1295, -102,   57,   25, 255}, /* 156 L*/
	{    -5,     22,    -11, 0,    838,   1295,   80,   40,  -80, 255}, /* 157 L*/
	{   -11,     22,     11, 0,    128,   1335,  -49,   49,   98, 255}, /* 158 L*/
	{    -5,     22,     11, 0,    186,   1295,   37,   85,   76, 255}, /* 159 L*/
	{   -11,     22,      5, 0,     70,   1295,  -69,   69,  -69, 255}, /* 160 L*/
	{    -5,     22,      5, 0,    128,   1210,   25,   57, -102, 255}, /* 161 L*/
	{    11,     22,     11, 0,    384,   1335,   80,   80,   40, 255}, /* 162 L*/
	{     5,     22,      5, 0,    384,   1210,  -88,   78,  -22, 255}, /* 163 L*/
	{     5,     22,     11, 0,    326,   1295,  -80,   40,   80, 255}, /* 164 L*/
	{    11,     22,      5, 0,    442,   1295,  102,   57,  -25, 255}, /* 165 L*/
	{     5,     22,     -5, 0,    640,   1210,  -25,   57,  102, 255}, /* 166 L*/
	{    11,     22,     -5, 0,    582,   1295,   69,   69,   69, 255}, /* 167 L*/
	{     5,     22,    -11, 0,    698,   1295,  -37,   85,  -76, 255}, /* 168 L*/
	{    11,     22,    -11, 0,    640,   1335,   49,   49,  -98, 255}, /* 169 L*/
	{    -5,      0,     -5, 0,    896,   1862,   25,  -57,  102, 255}, /* 170 L*/
	{   -11,      0,     -5, 0,    954,   1777,  -69,  -69,   69, 255}, /* 171 L*/
	{    -5,      0,    -11, 0,    838,   1777,   37,  -85,  -76, 255}, /* 172 L*/
	{   -11,      0,    -11, 0,    896,   1737,  -49,  -49,  -98, 255}, /* 173 L*/
	{     5,      0,      5, 0,    384,   1862,  -25,  -57, -102, 255}, /* 174 L*/
	{    11,      0,      5, 0,    442,   1777,   69,  -69,  -69, 255}, /* 175 L*/
	{     5,      0,     11, 0,    326,   1777,  -37,  -85,   76, 255}, /* 176 L*/
	{    11,      0,     11, 0,    384,   1737,   49,  -49,   98, 255}, /* 177 L*/
};

Gfx n_cube_model[]={

/* ======== g1 ========*/
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPTexture(3800, 3800, 0, 0, G_ON),
	gsDPLoadMultiBlock(n_cube_txt, 0, 0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0,
		G_TX_WRAP, G_TX_WRAP, 5, 5, 2, 1),
	gsDPSetCombineLERP(
		TEXEL0, PRIMITIVE, ENV_ALPHA, TEXEL0,
		0, 0, 0, 0,
		PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT,
		0, 0, 0, 1
	),
	gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
	gsSPClearGeometryMode(G_FOG),
	gsSPSetGeometryMode(G_LIGHTING | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsDPSetPrimColor( 0, 0, 255, 170, 255, 255),
	gsDPSetEnvColor(150, 0, 50, 128),
	gsSPVertex(&n_cube_new_v[0],3,0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPVertex(&n_cube_new_v[3],14,0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 8, 2, 0),
	gsSP2Triangles(7, 2, 9, 0, 10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),

/* ======== g2 ========*/
	gsDPPipeSync(),
	gsDPSetPrimColor( 0, 0, 170, 255, 255, 255),
	gsDPSetEnvColor(0, 50, 150, 128),
	gsSPVertex(&n_cube_new_v[17],32,0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
	gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
	gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
	gsSPVertex(&n_cube_new_v[49],32,0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
	gsSP2Triangles(12, 11, 13, 0, 13, 14, 12, 0),
	gsSP2Triangles(15, 16, 17, 0, 16, 18, 17, 0),
	gsSP2Triangles(19, 20, 21, 0, 20, 22, 21, 0),
	gsSP2Triangles(23, 24, 25, 0, 25, 22, 23, 0),
	gsSP2Triangles(26, 27, 24, 0, 26, 28, 27, 0),
	gsSP2Triangles(29, 5, 30, 0, 29, 30, 31, 0),
	gsSPVertex(&n_cube_new_v[81],4,0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),

/* ======== g3 ========*/
	gsDPPipeSync(),
	gsDPSetPrimColor( 0, 0, 255, 255, 170, 255),
	gsDPSetEnvColor(50, 100, 0, 128),
	gsSPVertex(&n_cube_new_v[85],32,0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 7, 6, 0, 12, 13, 7, 0),
	gsSP2Triangles(14, 2, 1, 0, 14, 15, 2, 0),
	gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
	gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 31, 29, 0),
	gsSPVertex(&n_cube_new_v[117],29,0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
	gsSP2Triangles(11, 12, 13, 0, 12, 7, 13, 0),
	gsSP2Triangles(14, 15, 3, 0, 15, 2, 3, 0),
	gsSP2Triangles(2, 16, 0, 0, 16, 17, 0, 0),
	gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
	gsSP2Triangles(21, 22, 23, 0, 22, 24, 23, 0),
	gsSP2Triangles(25, 26, 27, 0, 26, 28, 27, 0),

/* ======== g4 ========*/
	gsDPPipeSync(),
	gsDPSetPrimColor( 0, 0, 255, 255, 170, 255),
	gsDPSetEnvColor(200, 150, 0, 128),
	gsSPVertex(&n_cube_new_v[146],32,0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
	gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
	gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
	gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
	gsSPEndDisplayList(),
};
