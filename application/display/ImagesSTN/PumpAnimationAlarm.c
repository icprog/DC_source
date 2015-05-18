/*
  C-file generated by Bitmap converter for emWin GSC V3.74, compiled Dec 19 2003, 12:45:08

  Copyright (C) 1998-2002
  Segger Microcontroller Systeme GmbH
  www.segger.com

  Solutions for real time microcontroller applications

  Source file: PumpAnimationAlarm
  Dimensions:  204 * 13
  NumColors:   38
*/

#include "stdlib.h"

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsPumpAnimationAlarm[] = {
     0xDC00FF,0x000000,0x131313,0x1D1D1D
    ,0x252525,0x0B0B0B,0x020000,0x767878
    ,0x000F6B,0x0004FF,0x000ADE,0x00139C
    ,0x001484,0x000CCE,0x000EAD,0x787779
    ,0x0010B5,0x232323,0x1A1A1A,0x757973
    ,0x000EC5,0x0006EF,0x797678,0x000BC5
    ,0x0008E6,0x001094,0x7B7677,0x777876
    ,0x747978,0x040001,0x757876,0x767577
    ,0x030101,0x777678,0x76777B,0x010002
    ,0x777777,0x787676
};

GUI_CONST_STORAGE GUI_LOGPALETTE PalPumpAnimationAlarm = {
  38,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsPumpAnimationAlarm[0]
};

static GUI_CONST_STORAGE unsigned char acPumpAnimationAlarm[] = {
  0x24, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x04, 0x04, 0x04, 0x03, 0x05, 0x01, 0x01, 0x01, 0x06, 0x07, 0x24, 0x01, 0x01, 0x01, 0x01, 0x08, 0x09, 0x09, 0x0A, 0x0B, 0x03, 0x05, 0x01, 0x01, 0x01, 0x06, 0x07, 0x24, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x0B, 0x0A, 0x09, 0x09, 0x08, 0x01, 0x01, 0x01, 0x06, 0x07, 0x24, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x04, 0x04, 0x04, 0x03, 0x05, 0x01, 0x01, 0x01, 0x06, 0x07, 0x24, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x04, 0x04, 0x04, 0x03, 0x05, 0x01, 0x01, 0x01, 0x06, 0x07, 0x24, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x04, 0x04, 0x04, 0x03, 0x05, 0x01, 0x01, 0x01, 0x06, 0x07, 0x24, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x06, 0x07, 0x24, 0x01, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x06, 0x07, 0x24, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x06, 0x07, 0x24, 0x01, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x06, 0x07, 
        0x24, 0x01, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x06, 0x07, 0x24, 0x01, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x06, 0x07,
  0x24, 0x01, 0x01, 0x01, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x01, 0x09, 0x09, 0x09, 0x09, 0x0D, 0x0E, 0x04, 0x04, 0x03, 0x01, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x01, 0x03, 0x04, 0x04, 0x0E, 0x0D, 0x09, 0x09, 0x09, 0x09, 0x01, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x01, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x01, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x01, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x01, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x01, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x01, 0x24, 
        0x24, 0x01, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x01, 0x24,
  0x0F, 0x06, 0x01, 0x10, 0x10, 0x0C, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x13, 0x0F, 0x06, 0x01, 0x0D, 0x09, 0x09, 0x09, 0x09, 0x14, 0x0C, 0x0C, 0x04, 0x04, 0x03, 0x01, 0x01, 0x13, 0x0F, 0x06, 0x01, 0x03, 0x04, 0x04, 0x0C, 0x0C, 0x14, 0x09, 0x09, 0x09, 0x09, 0x0D, 0x01, 0x01, 0x13, 0x0F, 0x06, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x0C, 0x10, 0x10, 0x01, 0x01, 0x13, 0x0F, 0x06, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x13, 0x0F, 0x06, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x13, 0x0F, 0x06, 0x01, 0x10, 0x10, 0x0C, 0x04, 0x11, 0x12, 0x11, 0x04, 0x0C, 0x10, 0x10, 0x01, 0x01, 0x13, 0x0F, 0x06, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x13, 0x0F, 0x06, 0x01, 0x10, 0x10, 0x0C, 0x04, 0x11, 0x12, 0x11, 0x04, 0x0C, 0x10, 0x10, 0x01, 0x01, 0x13, 0x0F, 0x06, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x13, 
        0x0F, 0x06, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x13, 0x0F, 0x06, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x13,
  0x24, 0x01, 0x0C, 0x15, 0x09, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x16, 0x24, 0x01, 0x0B, 0x17, 0x18, 0x15, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x16, 0x24, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x18, 0x17, 0x0B, 0x01, 0x16, 0x24, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x09, 0x15, 0x0C, 0x01, 0x16, 0x24, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x16, 0x24, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x16, 0x24, 0x01, 0x0C, 0x15, 0x09, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x09, 0x15, 0x0C, 0x01, 0x16, 0x24, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x16, 0x24, 0x01, 0x0C, 0x15, 0x09, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x09, 0x15, 0x0C, 0x01, 0x16, 0x24, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x16, 
        0x24, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x16, 0x24, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x16,
  0x0F, 0x01, 0x17, 0x09, 0x09, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x24, 0x0F, 0x01, 0x0C, 0x19, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x24, 0x0F, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x19, 0x0C, 0x01, 0x24, 0x0F, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x09, 0x09, 0x17, 0x01, 0x24, 0x0F, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x24, 0x0F, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x24, 0x0F, 0x01, 0x17, 0x09, 0x09, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x09, 0x09, 0x17, 0x01, 0x24, 0x0F, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x24, 0x0F, 0x01, 0x17, 0x09, 0x09, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x09, 0x09, 0x17, 0x01, 0x24, 0x0F, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x24, 
        0x0F, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x24, 0x0F, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x24,
  0x1A, 0x01, 0x09, 0x09, 0x15, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x06, 0x1B, 0x1A, 0x01, 0x04, 0x04, 0x0C, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x06, 0x1B, 0x1A, 0x01, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0C, 0x04, 0x04, 0x06, 0x1B, 0x1A, 0x01, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x09, 0x09, 0x06, 0x1B, 0x1A, 0x01, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x06, 0x1B, 0x1A, 0x01, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x06, 0x1B, 0x1A, 0x01, 0x09, 0x09, 0x15, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x09, 0x09, 0x06, 0x1B, 0x1A, 0x01, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x06, 0x1B, 0x1A, 0x01, 0x09, 0x09, 0x15, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x09, 0x09, 0x06, 0x1B, 0x1A, 0x01, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x06, 0x1B, 
        0x1A, 0x01, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x06, 0x1B, 0x1A, 0x01, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x06, 0x1B,
  0x1C, 0x06, 0x09, 0x09, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x04, 0x1D, 0x1E, 0x1C, 0x06, 0x04, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x04, 0x1D, 0x1E, 0x1C, 0x06, 0x04, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x04, 0x1D, 0x1E, 0x1C, 0x06, 0x04, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x09, 0x09, 0x1D, 0x1E, 0x1C, 0x06, 0x04, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x04, 0x1D, 0x1E, 0x1C, 0x06, 0x04, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x04, 0x1D, 0x1E, 0x1C, 0x06, 0x09, 0x09, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x09, 0x09, 0x1D, 0x1E, 0x1C, 0x06, 0x04, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x04, 0x1D, 0x1E, 0x1C, 0x06, 0x09, 0x09, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x09, 0x09, 0x1D, 0x1E, 0x1C, 0x06, 0x04, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x04, 0x1D, 0x1E, 
        0x1C, 0x06, 0x04, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x04, 0x1D, 0x1E, 0x1C, 0x06, 0x04, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x04, 0x1D, 0x1E,
  0x1F, 0x20, 0x09, 0x09, 0x15, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x01, 0x24, 0x1F, 0x20, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x01, 0x24, 0x1F, 0x20, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x01, 0x24, 0x1F, 0x20, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x09, 0x09, 0x01, 0x24, 0x1F, 0x20, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0C, 0x04, 0x04, 0x01, 0x24, 0x1F, 0x20, 0x04, 0x04, 0x0C, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x01, 0x24, 0x1F, 0x20, 0x09, 0x09, 0x15, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x09, 0x09, 0x01, 0x24, 0x1F, 0x20, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x01, 0x24, 0x1F, 0x20, 0x09, 0x09, 0x15, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x09, 0x09, 0x01, 0x24, 0x1F, 0x20, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x01, 0x24, 
        0x1F, 0x20, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x01, 0x24, 0x1F, 0x20, 0x04, 0x04, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x11, 0x04, 0x04, 0x01, 0x24,
  0x07, 0x01, 0x17, 0x09, 0x09, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x1F, 0x07, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x1F, 0x07, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x1F, 0x07, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x09, 0x09, 0x17, 0x01, 0x1F, 0x07, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x19, 0x0C, 0x01, 0x1F, 0x07, 0x01, 0x0C, 0x19, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x1F, 0x07, 0x01, 0x17, 0x09, 0x09, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x09, 0x09, 0x17, 0x01, 0x1F, 0x07, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x1F, 0x07, 0x01, 0x17, 0x09, 0x09, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x09, 0x09, 0x17, 0x01, 0x1F, 0x07, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x1F, 
        0x07, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x1F, 0x07, 0x01, 0x03, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x04, 0x04, 0x03, 0x01, 0x1F,
  0x21, 0x01, 0x0C, 0x15, 0x09, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x22, 0x21, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x22, 0x21, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x22, 0x21, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x09, 0x15, 0x0C, 0x01, 0x22, 0x21, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x18, 0x17, 0x0B, 0x01, 0x22, 0x21, 0x01, 0x0B, 0x17, 0x18, 0x15, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x22, 0x21, 0x01, 0x0C, 0x15, 0x09, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x09, 0x15, 0x0C, 0x01, 0x22, 0x21, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x22, 0x21, 0x01, 0x0C, 0x15, 0x09, 0x10, 0x01, 0x01, 0x01, 0x01, 0x01, 0x10, 0x09, 0x15, 0x0C, 0x01, 0x22, 0x21, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x22, 
        0x21, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x22, 0x21, 0x01, 0x02, 0x11, 0x04, 0x12, 0x01, 0x01, 0x01, 0x01, 0x01, 0x12, 0x04, 0x11, 0x02, 0x01, 0x22,
  0x24, 0x01, 0x01, 0x10, 0x10, 0x0C, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x0C, 0x10, 0x10, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x03, 0x04, 0x04, 0x0C, 0x0C, 0x14, 0x09, 0x09, 0x09, 0x09, 0x0D, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x0D, 0x09, 0x09, 0x09, 0x09, 0x14, 0x0C, 0x0C, 0x04, 0x04, 0x03, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x10, 0x10, 0x0C, 0x04, 0x11, 0x12, 0x11, 0x04, 0x0C, 0x10, 0x10, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x10, 0x10, 0x0C, 0x04, 0x11, 0x12, 0x11, 0x04, 0x0C, 0x10, 0x10, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x24, 
        0x24, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x24, 0x24, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x11, 0x12, 0x11, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x24,
  0x0F, 0x06, 0x01, 0x01, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x23, 0x1F, 0x0F, 0x06, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x23, 0x1F, 0x0F, 0x06, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x23, 0x1F, 0x0F, 0x06, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x01, 0x01, 0x23, 0x1F, 0x0F, 0x06, 0x01, 0x01, 0x03, 0x04, 0x04, 0x0E, 0x0D, 0x09, 0x09, 0x09, 0x09, 0x01, 0x01, 0x23, 0x1F, 0x0F, 0x06, 0x01, 0x01, 0x09, 0x09, 0x09, 0x09, 0x0D, 0x0E, 0x04, 0x04, 0x03, 0x01, 0x01, 0x23, 0x1F, 0x0F, 0x06, 0x01, 0x01, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x01, 0x01, 0x23, 0x1F, 0x0F, 0x06, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x23, 0x1F, 0x0F, 0x06, 0x01, 0x01, 0x0C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x01, 0x01, 0x23, 0x1F, 0x0F, 0x06, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x23, 0x1F, 
        0x0F, 0x06, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x23, 0x1F, 0x0F, 0x06, 0x01, 0x01, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x01, 0x01, 0x23, 0x1F,
  0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x25, 0x00, 0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x25, 0x00, 0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x25, 0x00, 0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x25, 0x00, 0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x0B, 0x0A, 0x09, 0x09, 0x08, 0x01, 0x01, 0x01, 0x25, 0x00, 0x00, 0x24, 0x01, 0x01, 0x01, 0x08, 0x09, 0x09, 0x0A, 0x0B, 0x03, 0x02, 0x01, 0x01, 0x01, 0x25, 0x00, 0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x05, 0x01, 0x01, 0x01, 0x25, 0x00, 0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x25, 0x00, 0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x05, 0x01, 0x01, 0x01, 0x25, 0x00, 0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x25, 0x00, 
        0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x25, 0x00, 0x00, 0x24, 0x01, 0x01, 0x01, 0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x02, 0x01, 0x01, 0x01, 0x25, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmPumpAnimationAlarm = {
 204, /* XSize */
 13, /* YSize */
 204, /* BytesPerLine */
 8, /* BitsPerPixel */
 acPumpAnimationAlarm,  /* Pointer to picture data (indices) */
 &PalPumpAnimationAlarm  /* Pointer to palette */
};

/* *** End of file *** */
