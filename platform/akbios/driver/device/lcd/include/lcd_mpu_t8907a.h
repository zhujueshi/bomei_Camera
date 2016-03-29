/**
 * @FILENAME: lcd_t8907a.c
 * @BRIEF LCD driver file
 * Copyright (C) 2007 Anyka (GuangZhou) Software Technology Co., Ltd.
 * @AUTHOR 
 * @DATE 2007-10-24
 * @VERSION 1.0
 * @REF
 * @Note:	MODE: 
			LCD Module : 240XRGBX320 Dots
			Screen Size:
			Interface: 18 bits
 */ 
#ifndef __LCD_T8907A_H__
#define __LCD_T8907A_H__

#ifdef USE_LCD_MPU_8907A

#define DELAY_FLAG        0xFFFE   // first parameter is 0xfffe, then 2nd parameter is delay time count
#define END_FLAG          0xFFFF   // first parameter is 0xffff, then parameter table is over 


static const T_U16 init_cmdset[][2] = 
{ 
	{DELAY_FLAG, 50}, 
	{0x0000, 0x0000}, 
	{0x0007, 0x0001}, 
	{DELAY_FLAG,  1}, 
	{0x0017, 0x0001}, 
	{DELAY_FLAG,  1}, 
	{0x0010, 0x17B0}, 
	{DELAY_FLAG,  1}, 
	{0x0011, 0x0007}, 
	{DELAY_FLAG,  1},
	{0x0012, 0x011A}, 
	{DELAY_FLAG,  1}, 
	{0x0013, 0x0F00}, 
	{DELAY_FLAG,  1}, 
	{0x0015, 0x0000}, 
	{DELAY_FLAG,  1}, 
	{0x0029, 0x0010}, 
	{DELAY_FLAG,  1}, 
	{0x00FD, 0x0000}, 
	{DELAY_FLAG,  1},
	{0x0012, 0x013A}, 
	{DELAY_FLAG,  1}, 
	{0x0001, 0x0100}, 
	{DELAY_FLAG,  5}, 
	{0x0002, 0x0700}, 
	{0x0003, 0x1030}, 
	{0x0008, 0x0808}, 
	{0x0009, 0x0000}, 
	{0x000A, 0x0000}, 
	{0x000C, 0x0000}, 
	{0x000D, 0x0000}, 
	{0x0030, 0x0000}, 
	{0x0031, 0x0000}, 
	{0x0032, 0x0000}, 
	{0x0033, 0x0000},
	{0x0034, 0x0000}, 
	{0x0035, 0x0000}, 
	{0x0036, 0x0000}, 
	{0x0037, 0x0707}, 
	{0x0038, 0x0707},
	{0x0039, 0x0707}, 
	{0x003A, 0x0303}, 
	{0x003B, 0x0303}, 
	{0x003C, 0x0707}, 
	{0x003D, 0x0F0F}, 
	{0x0050, 0x0000}, 
	{0x0051, 0x00EF}, 
	{0x0052, 0x0000}, 
	{0x0053, 0x013F}, 
	{0x0060, 0x2700}, 
	{0x0061, 0x0001}, 
	{0x006A, 0x0000}, 
	{0x0090, 0x0010}, 
	{0x0092, 0x0000}, 
	{0x0093, 0x0000},
	{0x0020, 0x0000}, 
	{0x0021, 0x0000}, 
	{0x0022, 0x0000}, 
	{0x0030, 0x0707}, 
	{0x0031, 0x0407}, 
	{0x0032, 0x0203}, 
	{0x0033, 0x0303}, 
	{0x0034, 0x0303}, 
	{0x0035, 0x0202}, 
	{0x0036, 0x001F}, 
	{0x0037, 0x0707}, 
	{0x0038, 0x0407}, 
	{0x0039, 0x0203}, 
	{0x003A, 0x0303}, 
	{0x003B, 0x0303}, 
	{0x003C, 0x0202}, 
	{0x003D, 0x001F}, 
	{0x0020, 0x0000}, 
	{0x0021, 0x0000}, 
	{DELAY_FLAG,200}, 

	{END_FLAG, END_FLAG}
};

static const T_U16 turnon_cmdset[][2] = 
{
	{0x0007, 0x0021}, 
	{DELAY_FLAG, 40}, 
	{0x0007, 0x0061}, 
	{DELAY_FLAG, 40}, 
	{DELAY_FLAG, 40},
	{0x0007, 0x0173}, 
	
	{END_FLAG, END_FLAG}
};

static const T_U16 turnoff_cmdset[][2] = 
{
	{0x0007, 0x0072}, 
	{DELAY_FLAG, 40}, 
	{0x0007, 0x0001}, 
	{DELAY_FLAG, 40}, 
	{0x0007, 0x0000},
	{DELAY_FLAG, 40}, 

	{END_FLAG, END_FLAG}
};

#endif
#endif
