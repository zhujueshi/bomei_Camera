/**
 * @FILENAME: camera_SIM120B.h
 * @BRIEF camera driver file
 * Copyright (C) 2008 Anyka (GuangZhou) Software Technology Co., Ltd.
 * @AUTHOR 
 * @DATE 2008-08-07
 * @VERSION 1.0
 * @REF
 */ 
#ifndef __CAMERA_SIM120B_H__
#define __CAMERA_SIM120B_H__


#ifdef USE_CAMERA_SIM120B

#define DELAY_FLAG   0xfe
#define END_FLAG     0xff


static const T_U8 INIT_TAB[] = 
{
	//16.67fps
	//Low Pass Filter  
	0x00, 0x04, 
	0x20, 0xf8, 
	0x22, 0x07, 
	0x2a, 0xe1,
	0x2b, 0x01,
	0x2c, 0x01,
	
	//interpolation
	0x10, 0x4d,
	0x11, 0x08,
	
	//Sigma Filter
	0x32, 0x5d,
	0x34, 0x06,
	0x35, 0x30, 
	0x37, 0x04, //,0x0c 
	0x38, 0x04, //,0x00
	0x39, 0x30,
	0x3e, 0x80, //,0xa0
	0x41, 0x0f, //,0x00
	0x43, 0x00,
	0x44, 0x30,
	
	//C filter
	0x67, 0x20,
	0x68, 0x10,
	0x69, 0x0f,
	0x6a, 0x30,
	
	//CSC     
	0x70, 0x33,    
	0x71, 0x2e,    
	0x72, 0xf1,    
	0x73, 0x20,    
	0x74, 0xfe,    
	0x75, 0x20,    
	0x76, 0x0b,    
	0x77, 0x4a,    
	0x78, 0xac,    
	0x79, 0x32,    
	0x7a, 0x59,    
	0x7b, 0x74,    
	0x7c, 0x50,    
	0x7d, 0xa5,    
	0x7e, 0x0b, 
	   
	//Edge Control
	0x80, 0xd2,
	0x81, 0x20,
	0x82, 0x36, 
	0x83, 0x06, 
	0x84, 0x30,  //,0x00
	0x85, 0xff,
	0x86, 0x20, //,0x20
	0x87, 0x06, 
	0x88, 0x30,  //,0x00
	0x89, 0xff,
	0x8a, 0x20, //,0x20
	0x8d, 0x30,
	0x8e, 0x30,
	 
	//Memory Speed Control
	0xd0, 0x15,
	0xd1, 0x02,
	0xd2, 0x04,
	0xd3, 0x15,
	0xd4, 0x02,
	0xd5, 0x04,
	  
	//Sensor Control Block
	0x00, 0x00,
	0x04, 0x10,
	0x05, 0x09,
	0x06, 0x06,
	0x07, 0x88, 
	0x08, 0x00, //,0x80 PLL OFF 0408
	0x09, 0x13, 
	0x0a, 0x13, 
	0x10, 0x04, 
	0x13, 0x1a, 
	0x16, 0xbc, //0404
	0x32, 0x32, 
	0x40, 0x0b, //,0x0b //,0x00 //,0x00 0325
	0x41, 0x16, //0404
	0x42, 0x32, //,0x12 
	0x43, 0x40, //,0x00 
	0x57, 0x20, //0408
	 
	//Flicker - 50Hz           60Hz
	0x00, 0x00,
	0x20, 0x10,
	0x21, 0x69, 
	0x23, 0x21,
	0x00, 0x01,
	0x35, 0x3C,
	0x00, 0x00,
	0x24, 0x00,
	0x25, 0x28, 
	0x27, 0x78,
	0x00, 0x01,
	0x34, 0x7D,
	    
	//AE Block 
	0x00, 0x01,
	0x10, 0x00,
	0x11, 0x10, //,0x10 
	0x12, 0x70, //,0x80 
	0x13, 0x70, //,0x7a 
	0x14, 0x70,
	0x15, 0x7f, 
	0x16, 0x00, 
	0x19, 0x8e, 
	0x1a, 0x08, 
	0x1b, 0x0a, 
	0x1c, 0x0e, 
	0x21, 0x7d, //,0x1d
	0x34, 0x50, //,0x4b //,0x64 
	0x35, 0x50, //,0x60 //,0x42 
	0x40, 0x58, //,0x51 
	0x41, 0x28,
	 
	//AE Window
	//0x60, 0x7e,
	//0x61, 0xff,
	//0x62, 0xff,
	//0x63, 0xff,
	//0x64, 0xff,
	//0x65, 0x7e,
	//0x66, 0x00,
	//0x67, 0x50,
	//0x68, 0x90,
	//0x69, 0x90,
	//0x6a, 0x50,
	//0x6b, 0x00,
	//0x6c, 0x06,
	
	//anti saturation
	0x70, 0xc6, //,0xc4
	0x71, 0x34,
	0x72, 0x0a,
	0x73, 0x22,
	0x74, 0xc0,
	0x75, 0x11,
	0x76, 0x66,
	0x77, 0xdc,
	0x78, 0xe0,
	0x79, 0x5a, //,0x5a
	0x7a, 0x60,
	0x7b, 0x60,
	0x7c, 0x06,
	
	//AWB Block
	0x00, 0x02,
	0x10, 0x00,  
	0x11, 0xc0,	//,0x60 
	0x12, 0x00, //,0x80 0521
	0x13, 0x78,
	0x14, 0x80,
	0x15, 0xfe, 
	0x16, 0x80, //,0x9d 
	0x17, 0xea, 
	0x18, 0x80, 
	0x19, 0xa0, //,0xa0
	0x1a, 0x60, 
	0x1b, 0xa0, //,0xa0
	0x1c, 0x60, 
	0x1d, 0xb0, //,0xa0 //,0xa0 0521
	0x1e, 0x70, //,0x60  0521
	0x20, 0xff,	//,0xe8
	0x21, 0x98,	//,0x20
	0x22, 0xcd, //,0xcd 
	0x23, 0x20,     
	0x25, 0x20, 
	0x26, 0x05,     
	0x27, 0x08, //,0x0d   
	0x28, 0x90,     
	0x29, 0xb9, //,0xb3 
	0x2a, 0x9d, //,0xaf
	0x41, 0x04, //,0x05
	0x44, 0x13,   
	0x45, 0x6b,	//,0x48	
	0x46, 0xa3,
		
	//RGB to YCbCr (CSC) no used
	0x50, 0x33, 
	0x51, 0x20, 
	0x52, 0xe5, 
	0x53, 0xfb, 
	0x54, 0x13, 
	0x55, 0x26, 
	0x56, 0x07, 
	0x57, 0xf5, 
	0x58, 0xea, 
	0x59, 0x21,   
	0x63, 0xad, //,0xbd //r D30 to D20          
	0x64, 0xd0, //,0xc2 //b D30 to D20                
	0x65, 0xad, //,0xbd //r D20 to D30                
	0x66, 0xd0, //,0xc2 //b D20 to D30                  
	0x67, 0xc2, //,0xe0 //r D65 to D30                
	0x68, 0xae, //,0xa0 //b D65 to D30                  
	0x69, 0xc2, //,0xe0 //r D30 to D65                
	0x6a, 0xae, //,0xa0 //b D30 to D65
	            
	//IDP - 03
	0x00, 0x03,
	0x10, 0xfe,
	0x11, 0x1f,	
	0x12, 0x1d, 
	0x13, 0xd0, 
	0x14, 0xf9, //0305
	
	//DPC
	0x16, 0xa1,
	0x18, 0x29,
	0x19, 0x08, //0307 ,0x04 
	
	//Gamma - R 
	0x30, 0x00,        
	0x31, 0x0d, 
	0x32, 0x18, 
	0x33, 0x29, 
	0x34, 0x45, 
	0x35, 0x5d,  
	0x36, 0x73,  
	0x37, 0x85,  
	0x38, 0x95,  
	0x39, 0xa2,  
	0x3A, 0xae,  
	0x3B, 0xc2,  
	0x3C, 0xD7,  
	0x3D, 0xEb,  
	0x3E, 0xF5,  
	0x3F, 0xFF,
	  
	//Gamma - G      
	0x40, 0x00,        
	0x41, 0x0d,   
	0x42, 0x18,  
	0x43, 0x29,  
	0x44, 0x45,  
	0x45, 0x5d,  
	0x46, 0x73,  
	0x47, 0x85,  
	0x48, 0x95,  
	0x49, 0xa2,  
	0x4A, 0xae,  
	0x4B, 0xc2,  
	0x4C, 0xD7,  
	0x4D, 0xEB,  
	0x4E, 0xF5,  
	0x4F, 0xFF,  
	
	//Gamma - B      
	0x50, 0x00,      
	0x51, 0x0d,   
	0x52, 0x18,  
	0x53, 0x29,  
	0x54, 0x45,  
	0x55, 0x5d,  
	0x56, 0x73,  
	0x57, 0x85,  
	0x58, 0x95,  
	0x59, 0xa2,  
	0x5A, 0xae,  
	0x5B, 0xc2,  
	0x5C, 0xD7,  
	0x5D, 0xEb,  
	0x5E, 0xF5,  
	0x5F, 0xff,
	  
	//CMA A               
	0x60, 0xaf, 
	0x61, 0x6D, 
	0x62, 0x0E, 
	0x63, 0x6F, 
	0x64, 0xFC, 
	0x65, 0x70, 
	0x66, 0x20, 
	0x67, 0x10, 
	0x68, 0xD0, 
	0x69, 0xB0, 
	0x6a, 0x20, 
	0x6b, 0x30, 
	0x6c, 0x30, 
	0x6d, 0xE0, 
	0x6e, 0xF0,
	 
	//CMA B              
	0x70, 0x2f,           
	0x71, 0x7C, 
	0x72, 0x0e, 
	0x73, 0x7E, 
	0x74, 0xFC, 
	0x75, 0x80, 
	0x76, 0x30, 
	0x77, 0x10, 
	0x78, 0xC0, 
	0x79, 0x00, 
	0x7a, 0x40, 
	0x7b, 0xC0, 
	0x7c, 0x30, 
	0x7d, 0xB0, 
	0x7e, 0x20,
	  
	//CMA C              
	0x80, 0x2f,         
	0x81, 0x6D,         
	0x82, 0x0E,             
	0x83, 0x6F,         
	0x84, 0xF9,         
	0x85, 0xB0,         
	0x86, 0x60,         
	0x87, 0x40,         
	0x88, 0x60, 
	0x89, 0xA0, 
	0x8a, 0x20,         
	0x8b, 0x40,         
	0x8c, 0x20,         
	0x8d, 0x90,         
	0x8e, 0x50,
	   
	//Window Size 
	0x90, 0x00,
	0x91, 0x00,
	0x92, 0x00, 
	0x93, 0x00, 
	0x94, 0x05, 
	0x95, 0x00, 
	0x96, 0x04, 
	0x97, 0x00,
	 
	//Contrast & Color Saturation 
	0xa0, 0x10,      
	0xa1, 0x14, //,0x14 0408  
	0xa2, 0x14, //,0x14 0408
	
	//Brightness
	0xa3, 0x00,
	
	//Color suppress
	0xaa, 0x29,
	0xab, 0x1d, //,0x3a 
	
	//Shading                 
	0xb0, 0x9d, //X-center
	0xb1, 0x76,//Y-center
	0xb2, 0x00,//R shading H
	0xb3, 0x00,//R shading V
	0xb4, 0x00,//Gr shading H
	0xb5, 0x00,//Gr shading V
	0xb6, 0x00,//Gb shading H
	0xb7, 0x00,//Gb shading V
	0xb8, 0x00,//B shading H
	0xb9, 0x00,//B shading V
	0xba, 0x85,
	0xbb, 0x85,
	0xbc, 0x85,
	0xbd, 0x85,
	
	//R
	0xc0, 0x34,
	0xc1, 0x56,
	0xc2, 0x78,
	0xc3, 0xcb,
	0xc4, 0xa9,
	//G1
	0xc5, 0x32,
	0xc6, 0x45,
	0xc7, 0x67,
	0xc8, 0x87,
	0xc9, 0x65,
	//G2
	0xca, 0x32,
	0xcb, 0x43,
	0xcc, 0x67,
	0xcd, 0x87,
	0xce, 0x65,
	//b
	0xcf, 0x32,
	0xd0, 0x43,
	0xd1, 0x56,
	0xd2, 0x76,
	0xd3, 0x43,

	0x00, 0x01,
	0x30, 0x00,
	0x31, 0x7D,
	
	//Sensor On
	0x00, 0x00,
	0x03, 0x05,
	
	//AE On
	0x00, 0x01,
	0x10, 0x80, 
	
	//AWB On
	0x00, 0x02,
	0x60, 0xa0,
	0x61, 0xa0,
	0x62, 0x80,
	0x10, 0xd3,  

	END_FLAG, END_FLAG
};

/****************   Camera Resolution Table   ****************/
static const T_U8 SXGA_MODE_TAB[] = 
{//1280*1024     
	0x00, 0x00,
	0x05, 0x09,
	0x00, 0x00,
	0x04, 0x10,
	
	0x20, 0x10,
	0x21, 0x69, 
	0x23, 0x21,
	0x00, 0x01,
	0x35, 0x3C,
	
	0x00, 0x03,
	0x90, 0x00, 
	0x91, 0x00,
	0x92, 0x00,
	0x93, 0x00,
	0x94, 0x05, 
	0x95, 0x00, 
	0x96, 0x04, 
	0x97, 0x00,

	END_FLAG, END_FLAG
};

static const T_U8 VGA_MODE_TAB[] = 
{//640*480
	0x00, 0x00,
	0x06, 0x06,

	0x00, 0x03,
	0x90, 0x00,
	0x91, 0x00,
	0x92, 0x00, 
	0x93, 0x00, 
	0x94, 0x02, 
	0x95, 0x80, 
	0x96, 0x01, 
	0x97, 0xe0,

	0x00, 0x00,
	0x04, 0x00,	
	END_FLAG, END_FLAG
};

static const T_U8 CIF_MODE_TAB[] = 
{//352*288
	0x00, 0x00,   
	0x06, 0x02,

	0x00, 0x03,
	0x90, 0x00,
	0x91, 0x00,
	0x92, 0x00, 
	0x93, 0x00, 
	0x94, 0x01, 
	0x95, 0x60, 
	0x96, 0x01, 
	0x97, 0x20,

	0x00, 0x00,
	0x04, 0x00,	
	END_FLAG, END_FLAG
};

static const T_U8 QVGA_MODE_TAB[] = 
{//320*240
	0x00, 0x00,   
	0x06, 0x04,

	0x00, 0x03,
	0x90, 0x00,
	0x91, 0x00,
	0x92, 0x00, 
	0x93, 0x00, 
	0x94, 0x01, 
	0x95, 0x40, 
	0x96, 0x00, 
	0x97, 0xf0,

	0x00, 0x00,
	0x04, 0x00,	
	END_FLAG, END_FLAG
};

static const T_U8 QCIF_MODE_TAB[] = 
{//176*144
	0x00, 0x00,   
	0x06, 0x00,

 	0x00, 0x03,
	0x90, 0x00,
	0x91, 0x00,
	0x92, 0x00, 
	0x93, 0x00, 
	0x94, 0x00, 
	0x95, 0xb0, 
	0x96, 0x00, 
	0x97, 0x90,

	0x00, 0x00,
	0x04, 0x00,	
	END_FLAG, END_FLAG
};

static const T_U8 QQVGA_MODE_TAB[] = 
{//160*120	
	END_FLAG, END_FLAG
};

static const T_U8 PREV_MODE_TAB[] = 
{//640*480
	0x00, 0x00,
	0x06, 0x06,
	0x24, 0x00,
	0x25, 0x28, 
	0x27, 0x78,
	0x00, 0x01,
	0x34, 0x7D,
	
	0x00, 0x03,
	0x90, 0x00,
	0x91, 0x00,
	0x92, 0x00, 
	0x93, 0x00, 
	0x94, 0x02, 
	0x95, 0x80, 
	0x96, 0x01, 
	0x97, 0xe0,
	
	0x00, 0x00,
	0x04, 0x00,
	END_FLAG, END_FLAG
};

static const T_U8 RECORD_MODE_TAB[] = 
{//352*288
	0x00, 0x00,   
	0x06, 0x02,

	0x00, 0x03,
	0x90, 0x00,
	0x91, 0x00,
	0x92, 0x00, 
	0x93, 0x00, 
	0x94, 0x01, 
	0x95, 0x60, 
	0x96, 0x01, 
	0x97, 0x20,

	0x00, 0x00,
	0x04, 0x00,	
	END_FLAG, END_FLAG
};

/****************   Camera Exposure Table   ****************/
static const T_U8 EXPOSURE_WHOLE_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 EXPOSURE_CENTER_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 EXPOSURE_MIDDLE_TAB[] = 
{
	END_FLAG, END_FLAG
};

/****************   Camera brightness Table   ****************/
static const T_U8 BRIGHTNESS_0_TAB[] = 
{//Brightness -3
	0x00, 0x03,
	0xA3, 0xB0,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_1_TAB[] = 
{//Brightness -2
	0x00, 0x03,
	0xA3, 0xA0,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_2_TAB[] = 
{//Brightness -1
	0x00, 0x03,
	0xA3, 0x90,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_3_TAB[] = 
{//Brightness 0
	0x00, 0x03,
	0xA3, 0x00,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_4_TAB[] = 
{//Brightness +1
	0x00, 0x03,
	0xA3, 0x10,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_5_TAB[] = 
{//Brightness +2
	0x00, 0x03,
	0xA3, 0x20,
	END_FLAG, END_FLAG
};

static const T_U8 BRIGHTNESS_6_TAB[] = 
{//Brightness +3
	0x00, 0x03,
	0xA3, 0x30,
	END_FLAG, END_FLAG
};

/****************   Camera Contrast Table   ****************/
static const T_U8 CONTRAST_1_TAB[] = 
{//Contrast -3
	0x00, 0x03,
	0xA0, 0x0A,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_2_TAB[] = 
{//Contrast -2
	0x00, 0x03,
	0xA0, 0x0C,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_3_TAB[] = 
{//Contrast -1
	0x00, 0x03,
	0xA0, 0x0E,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_4_TAB[] = 
{//Contrast 0
	0x00, 0x03,
	0xA0, 0x10,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_5_TAB[] = 
{//Contrast +1
	0x00, 0x03,
	0xA0, 0x12,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_6_TAB[] = 
{//Contrast +2
	0x00, 0x03,
	0xA0, 0x14,
	END_FLAG, END_FLAG
};

static const T_U8 CONTRAST_7_TAB[] = 
{//Contrast +3
	0x00, 0x03,
	0xA0, 0x16,
	END_FLAG, END_FLAG
};


/****************   Camera Saturation Table   ****************/
static const T_U8 SATURATION_1_TAB[] = 
{//Saturation �C 2
	0x00, 0x03,
	0xA1, 0x10,	
	0xA2, 0x10,
	END_FLAG, END_FLAG
};

static const T_U8 SATURATION_2_TAB[] = 
{//Saturation -1
	0x00, 0x03,
	0xA1, 0x12,	
	0xA2, 0x12,
	END_FLAG, END_FLAG
};

static const T_U8 SATURATION_3_TAB[] = 
{//Saturation 0
	0x00, 0x03,
	0xA1, 0x14,	
	0xA2, 0x14,
	END_FLAG, END_FLAG
};

static const T_U8 SATURATION_4_TAB[] = 
{//Saturation + 1
	0x00, 0x03,
	0xA1, 0x16,	
	0xA2, 0x16,
	END_FLAG, END_FLAG
};

static const T_U8 SATURATION_5_TAB[] = 
{//Saturation + 2
	0x00, 0x03,
	0xA1, 0x18,	
	0xA2, 0x18,
	END_FLAG, END_FLAG
};


/****************   Camera Sharpness Table   ****************/
static const T_U8 SHARPNESS_0_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_1_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_2_TAB[] =
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_3_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_4_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_5_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 SHARPNESS_6_TAB[] = 
{
	END_FLAG, END_FLAG
};

/****************   Camera AWB Table   ****************/
static const T_U8 AWB_AUTO_TAB[] = 
{
	0x00, 0x02,
	0x10, 0xD3,	
	END_FLAG, END_FLAG
};

static const T_U8 AWB_SUNNY_TAB[] = 
{
	0x00, 0x02,
	0x10, 0x00,
	0x60, 0xC2,
	0x61, 0x9E,
	END_FLAG, END_FLAG
};

static const T_U8 AWB_CLOUDY_TAB[] = 
{
	0x00, 0x02,
	0x10, 0x00,
	0x60, 0xD0,
	0x61, 0x88,
	END_FLAG, END_FLAG
};

static const T_U8 AWB_OFFICE_TAB[] = 
{
	0x00, 0x02,
	0x10, 0x00,
	0x60, 0xAA,
	0x61, 0xBE,
	END_FLAG, END_FLAG
};

static const T_U8 AWB_HOME_TAB[] =
{
	0x00, 0x02,
	0x10, 0x00,
	0x60, 0x90,
	0x61, 0xC0,
	END_FLAG, END_FLAG
};

static const T_U8 AWB_NIGHT_TAB[] = 
{

	END_FLAG, END_FLAG
};

/****************   Camera Mirror Table   ****************/
static const T_U8 MIRROR_V_TAB[] = 
{
	//flip	 
	END_FLAG, END_FLAG
};

static const T_U8 MIRROR_H_TAB[] = 
{
	//mirror	
	END_FLAG, END_FLAG
};

static const T_U8 MIRROR_NORMAL_TAB[] = 
{
	//no mirror/flip	
	END_FLAG, END_FLAG
};

static const T_U8 MIRROR_FLIP_TAB[] = 
{
	//flip/mirror
	END_FLAG, END_FLAG
};

/****************   Camera Effect Table   ****************/
static const T_U8 EFFECT_NORMAL_TAB[] = 
{
	0x00, 0x03,
	0xAC, 0x00,									
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_SEPIA_TAB[] = 
{
	0x00, 0x03,
	0xAC, 0x80,
	0xAD, 0x00,
	0xAE, 0xA0,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_ANTIQUE_TAB[] = 
{
	0x00, 0x03,
	0xAC, 0x08,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_BLUISH_TAB[] =
{
	0x00, 0x03,
	0xAC, 0x80,
	0xAD, 0xC0,
	0xAE, 0x60,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_GREENISH_TAB[] = 
{
	0x00, 0x03,
	0xAC, 0x80,
	0xAD, 0x50,
	0xAE, 0x50,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_REDDISH_TAB[] = 
{
	0x00, 0x03,
	0xAC, 0x80,
	0xAD, 0x60,
	0xAE, 0xE0,
	END_FLAG, END_FLAG,
};

static const T_U8 EFFECT_NEGATIVE_TAB[] = 
{
	0x00, 0x03,
	0xAC, 0x10,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_BW_TAB[] = 
{
	0x00, 0x03,
	0xAC, 0x40,
	END_FLAG, END_FLAG
};

static const T_U8 EFFECT_BWN_TAB[] = 
{
	0x00, 0x03,
	0xAC, 0x20,
	END_FLAG, END_FLAG
};

/****************   Camera PLL Table   ****************/
static const T_U8 PLL_1X_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 PLL_2X_TAB[] =
{
	END_FLAG, END_FLAG
};

static const T_U8 PLL_3X_TAB[] = 
{
	END_FLAG, END_FLAG
};

static const T_U8 PLL_4X_TAB[] = 
{
	END_FLAG, END_FLAG
};


/****************   Camera night/day mode   ****************/
static const T_U8 DAY_MODE_TAB[] = 
{
	//16.67fps
	0x00,0x01,
	0x33,0x08,
	0x00,0x03,
	0xA3,0x00,

	END_FLAG, END_FLAG
};

static const T_U8 NIGHT_MODE_TAB[] = 
{
	//16.67~4.16fps
	0x00,0x01,
	0x33,0x10,
	0x00,0x03,
	0xA3,0x10,

	END_FLAG, END_FLAG
};


#endif
#endif
