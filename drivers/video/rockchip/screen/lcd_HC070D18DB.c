/* This Lcd Driver is HSD070IDW1 write by cst 2009.10.27 */
#ifndef __LCD_YQ70CPT__
#define __LCD_YQ70CPT__


/* Base */
#define SCREEN_TYPE		SCREEN_RGB
#define LVDS_FORMAT       	LVDS_8BIT_1
#define OUT_FACE		OUT_P666
#define DCLK			55000000
#define LCDC_ACLK      	500000000     //29 lcdc axi DMA Ƶ��

/* Timing */
#define H_PW			20
#define H_BP			140
#define H_VD			1024
#define H_FP			160

#define V_PW			3
#define V_BP			20
#define V_VD			600
#define V_FP			12

/* Other */
#define DCLK_POL		0
#define DEN_POL			0
#define VSYNC_POL		0
#define HSYNC_POL		0

#define SWAP_RB			0
#define SWAP_DUMMY		0
#define SWAP_GB			0
#define SWAP_RG			0



#define LCD_WIDTH       	154    //need modify
#define LCD_HEIGHT      	85

#endif
