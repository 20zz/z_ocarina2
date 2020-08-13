/*
 * Do not edit this file_  It was automatically generated
 * by "rgb2c" from the file "sf_0b_ia"_
 *
 *   Size: 80 x 32
 *   Number of channels: 4
 *   Number of bits per texel: 8 (G_IM_SIZ_8b)
 *   Format of texel: G_IM_FMT_IA
 *
 * Example usage:
 *
 *   gsDPPipeSync (),
 *   gsDPSetCombineMode (G_CC_DECALRGB, G_CC_DECALRGB),
 *   gsDPSetTexturePersp (G_TP_PERSP),
 *   gsDPSetTextureLOD (G_TL_TILE),
 *   gsDPSetTextureFilter (G_TF_BILERP),
 *   gsDPSetTextureConvert(G_TC_FILT),
 *   gsDPSetTextureLUT (G_TT_NONE),
 *   gsDPLoadTextureBlock (sf_0b_txt, G_IM_FMT_IA, G_IM_SIZ_8b, 80, 32, 0,
 *     G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR,
 *     G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
 */

#if 0	/* Image preview */
	+--------------------------------------------------------------------------------+
	|###############################################################################*|
	|###############################################################################_|
	|o**ooo*********o~,~++o**%%**++o+++oooo++ooo+++o+~++~++oooooooo****oo~o*oo**%*o__|
	|o*+oo***oooo***+~~+oo**%**%o+*oo*oooo+o*oo+oooo+++~++ooo++ooo***++o++**o*****o__|
	|*o+o***oooo***o+~+oooo*****++o+oo++oo**++++o**o+oo+o+oo++oo+ooooooo~+*+o*oooo*__|
	|*o**%**oo**%%o*++oooooo***++o++o+~+oo*o+++o***oo**oooo+++ooooooo**oo*o+*ooo+oo__|
	|oo*%***oo******+o*o+oo**oo+~oo++~+o***o+**%%o*oo*ooo**ooooooooooo*o+oooo+oooo*__|
	|*%%%**o++oo***o+oo++oooooo~oooo++o%***oo**%***+ooooo*oooooooo+o+oo~oooo++o***%__|
	|**%*o++++oo*ooooo++++o*oo+oooooo*%**oo++ooo**++ooooooooooooooo*o+++oooooo*****__|
	|oo*oo++ooo******oo+oooooooo++ooo**oo++~+oo*ooooooo+ooooooooooooooo+++ooo*%**o*__|
	|oo*o+~+oo***%%***oo+ooooo++ooo++oo++++*o*******o*oooooooooooooooo+oooo++******__|
	|o*oo+~oooo*%%*%**oo+oooo+++++++oooo++o*****%%**oooo*ooooooooooooooo+++o*%%%**%__|
	|ooo+o+oooo*****oo+o**ooo+++ooooo**+++*****%%****ooooooooooooooo*o*oo**%%#%%**%__|
	|oo~oo+o*oo*o***ooo**ooo++oo***ooo++o+*********o+++oooooooooooooooo*%%%%%%**%*%__|
	|+~+o++***oo**o+oo**oo*oo***ooooo+~ooo********oo+++*o+o**oooooooo******%#**%%o*__|
	|+++o+ooooo*o+oooo*oo****%%%*ooo+~+ooo%*%****o+o+oooo*%%****oo******o*%%%*%%oo*__|
	|+++oooooo+o++o++oooo**%%##%**o+++ooo****o*o+ooooooo***%*%%**%%***%**%%%%%*o+oo__|
	|o+oo*ooooo++++ooooo**%%%#*ooo+ooo*********++oo+++oo*%#%**%*%%%**%**%%%%%oooooo__|
	|ooooo+oooooo+o+o**%*%%%%*o+o+o*oo********o+oo+oo++*%%#****%*%%****%#%%*o+o+ooo__|
	|ooooooooooo+++o*##+***%%%o++oooo**%**%**o+oo*oo++**%%***o*oooooo*%%%%*o+*o*oo*__|
	|oo*oo+o+ooo++o####+~+*%%*ooo*o**%***%%**o****o*o**%**o++oo+ooo**%%%*%**o*ooo**__|
	|o*o+++++o+++o####%o+~+*%**o*******o*%*oo*%*o****%%%*o+~~++++o****%*%**oooo++oo__|
	|*o+~+++oooo####%****+~++o*ooo*****o*%*oo**oo***%%%%**++o**o*%******ooo+++++ooo__|
	|o+~+++++o#####*o*%**o*++~+ooo****o*%%*o*ooo****%%%***+o*%%%%*%*%*oooo++++++ooo__|
	|+~+~+++o####**o*%*oo%%**~,~+o*o**o*%%*oooo*****o*o+oo+**%%%**%***ooo**oo+++ooo__|
	|~++++o####*oooo+~,,~oo%*+~~~~+o****%%*+o*%%*****oooooo**%%**%*ooo++***oo+++o*o__|
	|+++o####%o+++~________~+oo++~~~o***#%*o*%%****o+ooo*****%%*%%***+o*o*o+o++o**o__|
	|+~*####o+oo+,__,~~~,,,__++ooo+~~+o%%%****ooo*++ooo***o**%%%*%**o**o*o+o++o****__|
	|*####*o***+__,o*oo++o*~,_,+***o~~~+%%ooo+ooo~~ooo*ooooo*%%**********++~~o**%**__|
	|###*~++o*+__~***oooo*ooo~_oo***o+~~~+o+ooo*o+ooo**ooooo***o**o*****++++o*o*%*o__|
	|#%++~~oo+,_~%%%**#+~o**%o+~o**ooo++~~~+oo********+~+++o%*+oooooo**ooooo*oo***o__|
	|+++~~+o+,_,*%*%**%,,*%**o+++*ooooooo~~~+o***o**o+~~o++**++++ooo*ooo+++oo+o*o**__|
	+--------------------------------------------------------------------------------+
#endif

// Gfx sf_0b_txt_C_dummy_aligner1[] = { //EndDisplayList() };

unsigned char sf_0b_txt[] = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xaf, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf, 
	0x9f, 0xaf, 0xaf, 0x8f, 0x9f, 0x9f, 0xaf, 0xbf, 0xbf, 0xbf, 0xbf, 0xaf, 0xbf, 0xbf, 0xaf, 0x8f, 0x5f, 0x3f, 0x5f, 0x6f, 0x7f, 0x8f, 0xbf, 0xbf, 0xcf, 0xcf, 0xbf, 0xaf, 0x7f, 0x7f, 0x8f, 0x6f, 0x6f, 0x7f, 0x8f, 0x9f, 0x9f, 0x8f, 0x7f, 0x7f, 0x9f, 0x9f, 0x9f, 0x7f, 0x7f, 0x7f, 0x8f, 0x6f, 0x5f, 0x6f, 0x6f, 0x5f, 0x6f, 0x7f, 0x8f, 0x9f, 0x8f, 0x8f, 0x9f, 0x8f, 0x8f, 0x8f, 0xaf, 0xaf, 0xaf, 0xaf, 0x9f, 0x8f, 0x5f, 0x8f, 0xbf, 0x9f, 0x9f, 0xaf, 0xbf, 0xcf, 0xbf, 0x9f, 0xf, 0xf, 
	0x9f, 0xaf, 0x7f, 0x9f, 0x9f, 0xaf, 0xbf, 0xbf, 0x8f, 0x8f, 0x9f, 0x9f, 0xaf, 0xbf, 0xaf, 0x7f, 0x4f, 0x4f, 0x6f, 0x9f, 0x9f, 0xaf, 0xbf, 0xcf, 0xbf, 0xbf, 0xcf, 0x9f, 0x7f, 0xaf, 0x9f, 0x8f, 0xaf, 0x9f, 0x8f, 0x9f, 0x8f, 0x7f, 0x8f, 0xaf, 0x9f, 0x9f, 0x7f, 0x9f, 0x8f, 0x9f, 0x8f, 0x6f, 0x6f, 0x6f, 0x5f, 0x6f, 0x7f, 0x8f, 0x9f, 0x8f, 0x7f, 0x7f, 0x8f, 0x9f, 0x9f, 0xaf, 0xbf, 0xaf, 0x7f, 0x7f, 0x8f, 0x6f, 0x6f, 0xaf, 0xaf, 0x9f, 0xbf, 0xbf, 0xbf, 0xbf, 0xaf, 0x8f, 0xf, 0xf, 
	0xaf, 0x9f, 0x7f, 0x9f, 0xaf, 0xbf, 0xbf, 0x8f, 0x8f, 0x8f, 0x8f, 0xaf, 0xbf, 0xaf, 0x9f, 0x6f, 0x5f, 0x7f, 0x9f, 0x8f, 0x8f, 0x9f, 0xaf, 0xaf, 0xbf, 0xbf, 0xaf, 0x6f, 0x7f, 0x9f, 0x6f, 0x8f, 0x8f, 0x6f, 0x7f, 0x8f, 0x9f, 0xaf, 0xaf, 0x7f, 0x7f, 0x7f, 0x7f, 0x9f, 0xaf, 0xaf, 0x9f, 0x7f, 0x8f, 0x8f, 0x7f, 0x8f, 0x7f, 0x8f, 0x8f, 0x7f, 0x7f, 0x8f, 0x9f, 0x7f, 0x8f, 0x9f, 0x9f, 0x8f, 0x8f, 0x9f, 0x8f, 0x4f, 0x7f, 0xaf, 0x7f, 0x9f, 0xaf, 0x9f, 0x9f, 0x9f, 0x9f, 0xaf, 0xf, 0xf, 
	0xaf, 0x8f, 0xaf, 0xbf, 0xcf, 0xbf, 0xbf, 0x9f, 0x8f, 0xaf, 0xbf, 0xdf, 0xcf, 0x9f, 0xaf, 0x7f, 0x7f, 0x9f, 0x9f, 0x9f, 0x8f, 0x8f, 0x9f, 0xaf, 0xbf, 0xaf, 0x7f, 0x7f, 0x8f, 0x7f, 0x6f, 0x8f, 0x6f, 0x5f, 0x7f, 0x8f, 0x9f, 0xaf, 0x8f, 0x7f, 0x7f, 0x7f, 0x9f, 0xbf, 0xaf, 0xaf, 0x8f, 0x8f, 0xaf, 0xaf, 0x9f, 0x9f, 0x8f, 0x8f, 0x7f, 0x7f, 0x7f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x9f, 0xaf, 0xbf, 0x9f, 0x8f, 0xaf, 0x8f, 0x7f, 0xaf, 0x9f, 0x8f, 0x8f, 0x7f, 0x8f, 0x9f, 0xf, 0xf, 
	0x9f, 0x9f, 0xbf, 0xdf, 0xbf, 0xbf, 0xbf, 0x9f, 0x8f, 0xbf, 0xbf, 0xbf, 0xaf, 0xbf, 0xaf, 0x6f, 0x9f, 0xaf, 0x9f, 0x7f, 0x8f, 0x9f, 0xaf, 0xaf, 0x8f, 0x9f, 0x7f, 0x5f, 0x8f, 0x8f, 0x7f, 0x7f, 0x5f, 0x7f, 0x9f, 0xaf, 0xaf, 0xaf, 0x9f, 0x7f, 0xaf, 0xbf, 0xdf, 0xcf, 0x9f, 0xbf, 0x9f, 0x9f, 0xaf, 0x9f, 0x8f, 0x8f, 0xaf, 0xaf, 0x9f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x8f, 0x9f, 0x9f, 0xbf, 0x9f, 0x7f, 0x9f, 0x8f, 0x8f, 0x9f, 0x7f, 0x8f, 0x9f, 0x9f, 0x9f, 0xaf, 0xf, 0xf, 
	0xaf, 0xcf, 0xdf, 0xcf, 0xbf, 0xaf, 0x8f, 0x7f, 0x6f, 0x8f, 0x9f, 0xaf, 0xaf, 0xaf, 0x8f, 0x6f, 0x9f, 0x8f, 0x7f, 0x7f, 0x8f, 0x8f, 0x9f, 0x8f, 0x9f, 0x8f, 0x5f, 0x8f, 0x9f, 0x9f, 0x9f, 0x6f, 0x7f, 0x9f, 0xcf, 0xbf, 0xaf, 0xbf, 0x9f, 0x8f, 0xaf, 0xbf, 0xcf, 0xaf, 0xbf, 0xaf, 0x7f, 0x9f, 0x9f, 0x8f, 0x9f, 0x9f, 0xaf, 0x9f, 0x8f, 0x8f, 0x9f, 0x9f, 0x8f, 0x8f, 0x8f, 0x7f, 0x8f, 0x7f, 0x9f, 0x8f, 0x5f, 0x8f, 0x9f, 0x9f, 0x9f, 0x7f, 0x7f, 0x8f, 0xaf, 0xaf, 0xaf, 0xcf, 0xf, 0xf, 
	0xbf, 0xbf, 0xcf, 0xaf, 0x9f, 0x7f, 0x7f, 0x6f, 0x7f, 0x8f, 0x9f, 0xaf, 0x9f, 0x9f, 0x9f, 0x9f, 0x8f, 0x7f, 0x7f, 0x6f, 0x7f, 0x8f, 0xaf, 0x9f, 0x8f, 0x7f, 0x8f, 0x9f, 0x8f, 0x8f, 0x8f, 0x8f, 0xaf, 0xcf, 0xbf, 0xaf, 0x9f, 0x8f, 0x7f, 0x6f, 0x8f, 0x9f, 0x9f, 0xaf, 0xaf, 0x7f, 0x7f, 0x9f, 0x8f, 0x9f, 0x8f, 0x9f, 0x9f, 0x8f, 0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0x8f, 0x8f, 0x8f, 0xaf, 0x9f, 0x7f, 0x6f, 0x6f, 0x8f, 0x8f, 0x9f, 0x8f, 0x8f, 0x9f, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xf, 0xf, 
	0x9f, 0x9f, 0xaf, 0x9f, 0x8f, 0x6f, 0x6f, 0x9f, 0x9f, 0x9f, 0xaf, 0xaf, 0xaf, 0xbf, 0xaf, 0xbf, 0x9f, 0x8f, 0x7f, 0x8f, 0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x8f, 0x7f, 0x7f, 0x9f, 0x8f, 0x9f, 0xbf, 0xbf, 0x9f, 0x8f, 0x6f, 0x7f, 0x5f, 0x7f, 0x9f, 0x9f, 0xaf, 0x9f, 0x9f, 0x9f, 0x9f, 0x8f, 0x8f, 0x9f, 0x7f, 0x8f, 0x8f, 0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x8f, 0x7f, 0x6f, 0x7f, 0x9f, 0x8f, 0x9f, 0xaf, 0xcf, 0xaf, 0xaf, 0x9f, 0xbf, 0xf, 0xf, 
	0x9f, 0x9f, 0xaf, 0x9f, 0x7f, 0x5f, 0x7f, 0x9f, 0x9f, 0xaf, 0xaf, 0xbf, 0xcf, 0xcf, 0xbf, 0xaf, 0xaf, 0x9f, 0x8f, 0x7f, 0x8f, 0x8f, 0x8f, 0x8f, 0x9f, 0x6f, 0x7f, 0x8f, 0x8f, 0x9f, 0x7f, 0x7f, 0x8f, 0x8f, 0x7f, 0x7f, 0x6f, 0x7f, 0xaf, 0x9f, 0xaf, 0xaf, 0xaf, 0xaf, 0xbf, 0xaf, 0xbf, 0x9f, 0xaf, 0x9f, 0x8f, 0x9f, 0x8f, 0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x8f, 0x9f, 0x6f, 0x8f, 0x9f, 0x8f, 0x9f, 0x7f, 0x7f, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0xbf, 0xf, 0xf, 
	0x9f, 0xaf, 0x9f, 0x9f, 0x6f, 0x5f, 0x8f, 0x9f, 0x9f, 0x9f, 0xaf, 0xcf, 0xcf, 0xbf, 0xcf, 0xbf, 0xbf, 0x9f, 0x8f, 0x7f, 0x9f, 0x9f, 0x8f, 0x9f, 0x7f, 0x6f, 0x7f, 0x6f, 0x6f, 0x7f, 0x6f, 0x8f, 0x8f, 0x9f, 0x8f, 0x7f, 0x6f, 0x8f, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0xcf, 0xcf, 0xbf, 0xaf, 0x9f, 0x9f, 0x9f, 0x9f, 0xaf, 0x8f, 0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x8f, 0x9f, 0x7f, 0x7f, 0x7f, 0x8f, 0xbf, 0xcf, 0xcf, 0xcf, 0xbf, 0xbf, 0xdf, 0xf, 0xf, 
	0x9f, 0x9f, 0x9f, 0x6f, 0x8f, 0x6f, 0x9f, 0x8f, 0x9f, 0x9f, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0x9f, 0x8f, 0x7f, 0x8f, 0xaf, 0xbf, 0x9f, 0x9f, 0x8f, 0x6f, 0x7f, 0x7f, 0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0xbf, 0xaf, 0x7f, 0x6f, 0x6f, 0xaf, 0xaf, 0xaf, 0xaf, 0xbf, 0xdf, 0xdf, 0xbf, 0xbf, 0xaf, 0xaf, 0x8f, 0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xaf, 0x9f, 0xaf, 0x9f, 0x9f, 0xaf, 0xbf, 0xcf, 0xdf, 0xef, 0xdf, 0xcf, 0xbf, 0xbf, 0xdf, 0xf, 0xf, 
	0x9f, 0x8f, 0x5f, 0x9f, 0x8f, 0x6f, 0x9f, 0xaf, 0x9f, 0x9f, 0xbf, 0x9f, 0xaf, 0xaf, 0xaf, 0x8f, 0x8f, 0x9f, 0xaf, 0xbf, 0x9f, 0x9f, 0x9f, 0x7f, 0x7f, 0x8f, 0x9f, 0xaf, 0xaf, 0xaf, 0x9f, 0x9f, 0x9f, 0x6f, 0x6f, 0x8f, 0x7f, 0xaf, 0xaf, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0x9f, 0x7f, 0x6f, 0x6f, 0x9f, 0x9f, 0x8f, 0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xbf, 0xcf, 0xcf, 0xdf, 0xdf, 0xdf, 0xcf, 0xaf, 0xbf, 0xcf, 0xaf, 0xcf, 0xf, 0xf, 
	0x6f, 0x4f, 0x6f, 0x8f, 0x7f, 0x7f, 0xbf, 0xaf, 0xbf, 0x9f, 0x9f, 0xaf, 0xaf, 0x9f, 0x7f, 0x8f, 0x8f, 0xaf, 0xaf, 0x9f, 0x9f, 0xaf, 0x8f, 0x9f, 0xaf, 0xbf, 0xbf, 0x9f, 0x9f, 0x8f, 0x8f, 0x9f, 0x6f, 0x5f, 0x9f, 0x9f, 0x8f, 0xbf, 0xbf, 0xaf, 0xbf, 0xbf, 0xaf, 0xbf, 0xaf, 0x9f, 0x8f, 0x7f, 0x7f, 0x7f, 0xaf, 0x9f, 0x7f, 0x9f, 0xaf, 0xaf, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xaf, 0xbf, 0xbf, 0xaf, 0xbf, 0xbf, 0xdf, 0xef, 0xbf, 0xaf, 0xdf, 0xcf, 0x9f, 0xbf, 0xf, 0xf, 
	0x6f, 0x6f, 0x6f, 0x8f, 0x6f, 0x9f, 0x9f, 0x9f, 0x8f, 0x8f, 0xaf, 0x9f, 0x7f, 0x8f, 0x9f, 0x8f, 0x9f, 0xaf, 0x9f, 0x9f, 0xaf, 0xaf, 0xbf, 0xbf, 0xcf, 0xdf, 0xcf, 0xaf, 0x9f, 0x9f, 0x8f, 0x6f, 0x4f, 0x7f, 0x9f, 0x8f, 0x9f, 0xcf, 0xbf, 0xcf, 0xbf, 0xaf, 0xbf, 0xaf, 0x9f, 0x7f, 0x8f, 0x7f, 0x9f, 0x9f, 0x9f, 0x9f, 0xaf, 0xcf, 0xcf, 0xbf, 0xaf, 0xaf, 0xaf, 0x9f, 0x9f, 0xaf, 0xbf, 0xaf, 0xaf, 0xaf, 0xaf, 0x9f, 0xaf, 0xdf, 0xdf, 0xcf, 0xbf, 0xcf, 0xcf, 0x8f, 0x8f, 0xbf, 0xf, 0xf, 
	0x7f, 0x6f, 0x7f, 0x8f, 0x8f, 0x9f, 0x9f, 0x8f, 0x8f, 0x7f, 0x9f, 0x6f, 0x6f, 0x8f, 0x7f, 0x7f, 0x9f, 0x9f, 0x9f, 0x8f, 0xaf, 0xbf, 0xcf, 0xcf, 0xef, 0xef, 0xcf, 0xbf, 0xaf, 0x8f, 0x6f, 0x6f, 0x6f, 0x8f, 0x9f, 0x8f, 0xaf, 0xbf, 0xbf, 0xaf, 0x9f, 0xbf, 0x9f, 0x7f, 0x8f, 0x9f, 0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0xaf, 0xbf, 0xbf, 0xdf, 0xbf, 0xcf, 0xcf, 0xbf, 0xaf, 0xcf, 0xdf, 0xbf, 0xaf, 0xbf, 0xcf, 0xaf, 0xbf, 0xdf, 0xdf, 0xcf, 0xdf, 0xcf, 0xbf, 0x9f, 0x7f, 0x9f, 0x9f, 0xf, 0xf, 
	0x8f, 0x7f, 0x9f, 0x9f, 0xaf, 0x9f, 0x9f, 0x9f, 0x8f, 0x9f, 0x7f, 0x6f, 0x7f, 0x7f, 0x8f, 0x8f, 0x9f, 0x9f, 0x8f, 0xaf, 0xbf, 0xcf, 0xcf, 0xdf, 0xef, 0xbf, 0x9f, 0x9f, 0x8f, 0x7f, 0x8f, 0x9f, 0x9f, 0xaf, 0xaf, 0xaf, 0xaf, 0xbf, 0xaf, 0xaf, 0xaf, 0xaf, 0x7f, 0x7f, 0x9f, 0x8f, 0x7f, 0x7f, 0x7f, 0x8f, 0x8f, 0xbf, 0xcf, 0xef, 0xdf, 0xbf, 0xbf, 0xcf, 0xbf, 0xcf, 0xdf, 0xdf, 0xaf, 0xbf, 0xcf, 0xbf, 0xaf, 0xcf, 0xdf, 0xcf, 0xcf, 0xcf, 0x9f, 0x8f, 0x9f, 0x8f, 0x8f, 0x9f, 0xf, 0xf, 
	0x9f, 0x9f, 0x8f, 0x9f, 0x8f, 0x7f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x7f, 0x9f, 0x7f, 0x9f, 0xaf, 0xbf, 0xcf, 0xbf, 0xcf, 0xcf, 0xcf, 0xdf, 0xbf, 0x8f, 0x7f, 0x8f, 0x7f, 0x8f, 0xaf, 0x9f, 0x9f, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0xbf, 0xaf, 0xaf, 0x9f, 0x7f, 0x8f, 0x8f, 0x7f, 0x8f, 0x8f, 0x7f, 0x7f, 0xaf, 0xdf, 0xcf, 0xef, 0xbf, 0xbf, 0xbf, 0xbf, 0xcf, 0xbf, 0xdf, 0xcf, 0xaf, 0xaf, 0xaf, 0xaf, 0xcf, 0xef, 0xdf, 0xcf, 0xbf, 0x9f, 0x6f, 0x8f, 0x7f, 0x9f, 0x9f, 0x9f, 0xf, 0xf, 
	0x9f, 0x8f, 0x8f, 0x8f, 0x9f, 0x8f, 0x9f, 0x8f, 0x8f, 0x9f, 0x9f, 0x6f, 0x7f, 0x7f, 0x9f, 0xaf, 0xef, 0xff, 0x7f, 0xaf, 0xaf, 0xbf, 0xcf, 0xcf, 0xcf, 0x9f, 0x7f, 0x7f, 0x8f, 0x9f, 0x8f, 0x9f, 0xaf, 0xbf, 0xcf, 0xbf, 0xbf, 0xcf, 0xaf, 0xaf, 0x9f, 0x7f, 0x8f, 0x9f, 0xaf, 0x8f, 0x9f, 0x7f, 0x7f, 0xaf, 0xbf, 0xcf, 0xdf, 0xbf, 0xaf, 0xaf, 0x9f, 0xbf, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0x9f, 0xbf, 0xdf, 0xdf, 0xcf, 0xcf, 0xbf, 0x9f, 0x7f, 0xaf, 0x9f, 0xaf, 0x9f, 0x9f, 0xaf, 0xf, 0xf, 
	0x9f, 0x9f, 0xaf, 0x9f, 0x9f, 0x7f, 0x8f, 0x7f, 0x9f, 0x8f, 0x8f, 0x6f, 0x7f, 0x8f, 0xef, 0xff, 0xff, 0xff, 0x6f, 0x5f, 0x7f, 0xaf, 0xdf, 0xdf, 0xbf, 0x8f, 0x8f, 0x8f, 0xaf, 0x9f, 0xaf, 0xbf, 0xcf, 0xbf, 0xbf, 0xaf, 0xcf, 0xcf, 0xaf, 0xaf, 0x8f, 0xaf, 0xbf, 0xbf, 0xbf, 0x9f, 0xaf, 0x8f, 0xaf, 0xbf, 0xcf, 0xbf, 0xaf, 0x8f, 0x7f, 0x6f, 0x8f, 0x9f, 0x7f, 0x8f, 0x8f, 0x9f, 0xaf, 0xbf, 0xcf, 0xcf, 0xcf, 0xbf, 0xcf, 0xbf, 0xaf, 0x9f, 0xaf, 0x8f, 0x8f, 0x8f, 0xaf, 0xaf, 0xf, 0xf, 
	0x9f, 0xaf, 0x8f, 0x7f, 0x6f, 0x7f, 0x7f, 0x7f, 0x8f, 0x7f, 0x7f, 0x6f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x8f, 0x6f, 0x4f, 0x6f, 0xaf, 0xcf, 0xaf, 0xaf, 0x9f, 0xaf, 0xaf, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0x9f, 0xaf, 0xcf, 0xbf, 0x9f, 0x8f, 0xaf, 0xcf, 0xaf, 0x9f, 0xaf, 0xaf, 0xaf, 0xaf, 0xcf, 0xcf, 0xcf, 0xaf, 0x9f, 0x7f, 0x4f, 0x5f, 0x7f, 0x7f, 0x6f, 0x7f, 0x9f, 0xaf, 0xbf, 0xbf, 0xbf, 0xcf, 0xbf, 0xcf, 0xbf, 0xbf, 0x9f, 0x8f, 0x8f, 0x8f, 0x7f, 0x7f, 0x9f, 0x9f, 0xf, 0xf, 
	0xaf, 0x9f, 0x6f, 0x5f, 0x6f, 0x7f, 0x7f, 0x8f, 0x8f, 0x8f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xaf, 0xbf, 0xbf, 0xbf, 0x7f, 0x5f, 0x6f, 0x6f, 0x8f, 0xaf, 0x9f, 0x9f, 0x9f, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0x9f, 0xbf, 0xcf, 0xbf, 0x8f, 0x9f, 0xbf, 0xaf, 0x8f, 0x8f, 0xaf, 0xbf, 0xaf, 0xcf, 0xcf, 0xdf, 0xcf, 0xaf, 0xaf, 0x6f, 0x6f, 0x9f, 0xaf, 0xaf, 0x9f, 0xaf, 0xcf, 0xbf, 0xbf, 0xaf, 0xbf, 0xbf, 0xaf, 0x9f, 0x9f, 0x9f, 0x7f, 0x7f, 0x7f, 0x7f, 0x6f, 0x8f, 0x9f, 0x9f, 0xf, 0xf, 
	0x8f, 0x7f, 0x5f, 0x6f, 0x6f, 0x6f, 0x6f, 0x7f, 0x9f, 0xef, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x9f, 0xbf, 0xcf, 0xaf, 0xaf, 0x9f, 0xaf, 0x7f, 0x6f, 0x5f, 0x6f, 0x9f, 0x8f, 0x9f, 0xaf, 0xaf, 0xaf, 0xaf, 0x9f, 0xaf, 0xcf, 0xcf, 0xaf, 0x9f, 0xaf, 0x9f, 0x9f, 0x9f, 0xbf, 0xaf, 0xaf, 0xaf, 0xcf, 0xcf, 0xcf, 0xaf, 0xaf, 0xaf, 0x7f, 0x9f, 0xbf, 0xdf, 0xcf, 0xcf, 0xdf, 0xbf, 0xcf, 0xbf, 0xcf, 0xaf, 0x9f, 0x8f, 0x8f, 0x8f, 0x7f, 0x7f, 0x7f, 0x7f, 0x6f, 0x7f, 0x8f, 0x9f, 0x9f, 0xf, 0xf, 
	0x6f, 0x5f, 0x6f, 0x5f, 0x6f, 0x7f, 0x6f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xaf, 0xaf, 0x9f, 0xaf, 0xcf, 0xaf, 0x8f, 0x8f, 0xcf, 0xcf, 0xbf, 0xaf, 0x5f, 0x3f, 0x4f, 0x6f, 0x8f, 0xaf, 0x9f, 0xaf, 0xaf, 0x9f, 0xbf, 0xcf, 0xcf, 0xbf, 0x9f, 0x8f, 0x9f, 0x9f, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0x9f, 0xaf, 0x8f, 0x7f, 0x9f, 0x8f, 0x7f, 0xaf, 0xbf, 0xdf, 0xdf, 0xcf, 0xaf, 0xbf, 0xcf, 0xbf, 0xaf, 0xaf, 0x9f, 0x9f, 0x8f, 0xbf, 0xaf, 0x8f, 0x8f, 0x7f, 0x6f, 0x7f, 0x8f, 0x9f, 0x9f, 0xf, 0xf, 
	0x5f, 0x6f, 0x6f, 0x6f, 0x7f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xbf, 0x8f, 0x8f, 0x8f, 0x9f, 0x6f, 0x5f, 0x3f, 0x3f, 0x5f, 0x8f, 0x9f, 0xdf, 0xaf, 0x7f, 0x5f, 0x4f, 0x4f, 0x4f, 0x6f, 0x8f, 0xaf, 0xaf, 0xaf, 0xbf, 0xcf, 0xdf, 0xaf, 0x7f, 0x9f, 0xaf, 0xcf, 0xcf, 0xaf, 0xaf, 0xbf, 0xaf, 0xaf, 0x9f, 0x8f, 0x9f, 0x9f, 0x8f, 0x9f, 0xaf, 0xbf, 0xdf, 0xcf, 0xaf, 0xbf, 0xcf, 0xbf, 0x9f, 0x9f, 0x8f, 0x7f, 0x7f, 0xaf, 0xbf, 0xaf, 0x8f, 0x8f, 0x6f, 0x7f, 0x7f, 0x9f, 0xaf, 0x8f, 0xf, 0xf, 
	0x7f, 0x7f, 0x6f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xcf, 0x8f, 0x6f, 0x7f, 0x6f, 0x4f, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0x4f, 0x7f, 0x9f, 0x9f, 0x6f, 0x6f, 0x4f, 0x4f, 0x5f, 0x9f, 0xbf, 0xbf, 0xbf, 0xef, 0xdf, 0xaf, 0x9f, 0xbf, 0xcf, 0xdf, 0xbf, 0xbf, 0xaf, 0xbf, 0x9f, 0x7f, 0x8f, 0x9f, 0x9f, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0xcf, 0xcf, 0xbf, 0xcf, 0xcf, 0xbf, 0xbf, 0xaf, 0x7f, 0x9f, 0xaf, 0x9f, 0xaf, 0x8f, 0x7f, 0x8f, 0x7f, 0x7f, 0x8f, 0xaf, 0xaf, 0x8f, 0xf, 0xf, 
	0x6f, 0x4f, 0xaf, 0xff, 0xff, 0xff, 0xef, 0x9f, 0x7f, 0x8f, 0x9f, 0x6f, 0x2f, 0xf, 0xf, 0x2f, 0x5f, 0x5f, 0x5f, 0x3f, 0x2f, 0x2f, 0xf, 0xf, 0x7f, 0x7f, 0x8f, 0x9f, 0x8f, 0x6f, 0x5f, 0x5f, 0x6f, 0x9f, 0xcf, 0xcf, 0xdf, 0xaf, 0xbf, 0xbf, 0xaf, 0x9f, 0x9f, 0x9f, 0xaf, 0x7f, 0x6f, 0x8f, 0x9f, 0x9f, 0xaf, 0xaf, 0xaf, 0x9f, 0xaf, 0xbf, 0xdf, 0xdf, 0xcf, 0xbf, 0xcf, 0xbf, 0xbf, 0x9f, 0xbf, 0xbf, 0x9f, 0xaf, 0x9f, 0x7f, 0x8f, 0x7f, 0x6f, 0x8f, 0xaf, 0xaf, 0xaf, 0xaf, 0xf, 0xf, 
	0xbf, 0xff, 0xff, 0xff, 0xff, 0xaf, 0x9f, 0xaf, 0xaf, 0xaf, 0x6f, 0xf, 0xf, 0x2f, 0x9f, 0xaf, 0x9f, 0x8f, 0x7f, 0x7f, 0x9f, 0xaf, 0x4f, 0x2f, 0x1f, 0x2f, 0x7f, 0xaf, 0xaf, 0xaf, 0x8f, 0x5f, 0x5f, 0x5f, 0x7f, 0xcf, 0xcf, 0x9f, 0x9f, 0x8f, 0x7f, 0x8f, 0x9f, 0x9f, 0x5f, 0x5f, 0x8f, 0x9f, 0x9f, 0xaf, 0x9f, 0x9f, 0x9f, 0x9f, 0x8f, 0xbf, 0xcf, 0xcf, 0xbf, 0xaf, 0xbf, 0xaf, 0xaf, 0xbf, 0xaf, 0xaf, 0xbf, 0xaf, 0x7f, 0x6f, 0x4f, 0x5f, 0x8f, 0xbf, 0xaf, 0xcf, 0xbf, 0xaf, 0xf, 0xf, 
	0xff, 0xff, 0xff, 0xaf, 0x5f, 0x6f, 0x7f, 0x8f, 0xaf, 0x6f, 0xf, 0xf, 0x5f, 0xbf, 0xbf, 0xbf, 0x9f, 0x8f, 0x9f, 0x9f, 0xaf, 0x9f, 0x9f, 0x8f, 0x4f, 0x1f, 0x8f, 0x9f, 0xaf, 0xbf, 0xaf, 0x8f, 0x7f, 0x4f, 0x4f, 0x5f, 0x7f, 0x8f, 0x7f, 0x9f, 0x8f, 0x9f, 0xaf, 0x8f, 0x6f, 0x8f, 0x8f, 0x8f, 0xbf, 0xbf, 0x9f, 0x9f, 0x8f, 0x8f, 0x8f, 0xbf, 0xbf, 0xaf, 0x8f, 0xbf, 0xaf, 0x9f, 0xaf, 0xaf, 0xaf, 0xaf, 0xaf, 0x7f, 0x6f, 0x6f, 0x6f, 0x9f, 0xaf, 0x9f, 0xaf, 0xcf, 0xaf, 0x9f, 0xf, 0xf, 
	0xff, 0xcf, 0x7f, 0x6f, 0x5f, 0x5f, 0x8f, 0x9f, 0x7f, 0x2f, 0xf, 0x4f, 0xcf, 0xcf, 0xcf, 0xbf, 0xaf, 0xff, 0x7f, 0x5f, 0x9f, 0xaf, 0xbf, 0xcf, 0x9f, 0x6f, 0x4f, 0x8f, 0xaf, 0xbf, 0x9f, 0x9f, 0x9f, 0x7f, 0x6f, 0x4f, 0x4f, 0x4f, 0x6f, 0x9f, 0x9f, 0xaf, 0xbf, 0xaf, 0xaf, 0xaf, 0xbf, 0xbf, 0xbf, 0x7f, 0x5f, 0x6f, 0x6f, 0x6f, 0x9f, 0xcf, 0xbf, 0x7f, 0x9f, 0x9f, 0x8f, 0x9f, 0x9f, 0x9f, 0xaf, 0xaf, 0x9f, 0x8f, 0x8f, 0x8f, 0x9f, 0xaf, 0x8f, 0x8f, 0xaf, 0xaf, 0xaf, 0x9f, 0xf, 0xf, 
	0x7f, 0x6f, 0x6f, 0x5f, 0x5f, 0x7f, 0x8f, 0x7f, 0x3f, 0xf, 0x2f, 0xaf, 0xcf, 0xbf, 0xdf, 0xaf, 0xaf, 0xcf, 0x3f, 0x3f, 0xbf, 0xcf, 0xaf, 0xaf, 0x9f, 0x7f, 0x6f, 0x7f, 0xbf, 0x9f, 0x8f, 0x9f, 0x9f, 0x9f, 0x9f, 0x8f, 0x5f, 0x4f, 0x4f, 0x6f, 0x9f, 0xaf, 0xbf, 0xbf, 0x9f, 0xaf, 0xbf, 0x9f, 0x7f, 0x5f, 0x5f, 0x8f, 0x7f, 0x7f, 0xaf, 0xaf, 0x7f, 0x7f, 0x7f, 0x7f, 0x8f, 0x9f, 0x9f, 0xaf, 0x9f, 0x9f, 0x8f, 0x7f, 0x7f, 0x7f, 0x8f, 0x8f, 0x7f, 0x9f, 0xaf, 0x9f, 0xaf, 0xaf, 0xf, 0xf, 
};

