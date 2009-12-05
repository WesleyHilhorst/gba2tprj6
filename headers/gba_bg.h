//
// Include gba_bg.h
//

#ifndef BG_H
#define BG_H

#define BG_COLOR256 			0x80
#define CHAR_SHIFT 				2
#define SCREEN_SHIFT 			8
#define WRAPAROUND 				0x1

//background tile bitmap sizes
#define TEXTBG_SIZE_256x256 	0x0
#define TEXTBG_SIZE_256x512 	0x8000
#define TEXTBG_SIZE_512x256 	0x4000
#define TEXTBG_SIZE_512x512 	0xC000


//background setup registers and data
#define BG_COLOR256 			0x80
#define CHAR_SHIFT 				2
#define SCREEN_SHIFT 			8
#define WRAPAROUND 				0x1

//background tile bitmap sizes
#define TEXTBG_SIZE_256x256 	0x0
#define TEXTBG_SIZE_256x512 	0x8000
#define TEXTBG_SIZE_512x256 	0x4000
#define TEXTBG_SIZE_512x512 	0xC000

//background memory offset macros
#define CharBaseBlock(n) 		(((n)*0x4000)+0x6000000)
#define ScreenBaseBlock(n) 		(((n)*0x800)+0x6000000)

//Rotate background 
#define ROTBG_SIZE_128x128 		0x0
#define ROTBG_SIZE_256x256 		0x4000
#define ROTBG_SIZE_512x512 		0x8000
#define ROTBG_SIZE_1024x1024 	0xC000

typedef struct Bg
{
	u16* tileData;
	u16* mapData;
	u8 mosaic;
	u8 colorMode;
	u8 number;
	u16 size;
	u8 charBaseBlock;
	u8 screenBaseBlock;
	u8 wraparound;
	s16 x_scroll,y_scroll;
	s32 DX,DY;
	s16 PA,PB,PC,PD;
}Bg;

#endif