#ifndef __EPD_1IN54_V2_H_
#define __EPD_1IN54_V2_H_

#include "DEV_Config.h"

#define EPD_1IN54_V2_WIDTH  200
#define EPD_1IN54_V2_HEIGHT 200

void EPD_1IN54_V2_Init(void);
void EPD_1IN54_V2_Init_Partial(void);
void EPD_1IN54_V2_Enter_Partial(void);
void EPD_1IN54_V2_Clear(void);
void EPD_1IN54_V2_Display(UBYTE *Image);
void EPD_1IN54_V2_DisplayPartBaseImage(UBYTE *Image);
void EPD_1IN54_V2_DisplayPart(UBYTE *Image);
void EPD_1IN54_V2_LoadPartOldImage(UBYTE *Image);
void EPD_1IN54_V2_Sleep(void);

#endif
