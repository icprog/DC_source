/*
  C-file generated by Bitmap converter for emWin GSC V3.74, compiled Dec 19 2003, 12:45:08

  Copyright (C) 1998-2002
  Segger Microcontroller Systeme GmbH
  www.segger.com

  Solutions for real time microcontroller applications

  Source file: PitLevelSensor
  Dimensions:  6 * 35
  NumColors:   27
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

static GUI_CONST_STORAGE GUI_COLOR ColorsPitLevelSensor[] = {
     0xDC00FF,0x777777,0x797777,0x757876
    ,0x757777,0x787676,0x777876,0x757778
    ,0x797776,0x797678,0x787878,0x747676
    ,0x7C7877,0xFFFFFE,0xFFFFFF,0xFFFEFF
    ,0xFDFFFF,0xFDFEFF,0xFEFFFD,0xFBFFFF
    ,0xFDFFFE,0xFFFDFF,0xFEFDFF,0xFCFFFD
    ,0xFAFDFF,0xFEFEFE,0xFFFFFC
};

GUI_CONST_STORAGE GUI_LOGPALETTE PalPitLevelSensor = {
  27,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsPitLevelSensor[0]
};

static GUI_CONST_STORAGE unsigned char acPitLevelSensor[] = {
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x03, 0x04, 0x00, 0x00, 0x00,
  0x05, 0x06, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x03, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x02, 0x07, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x09, 0x0A, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0B, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0C, 0x00, 0x00,
  0x00, 0x00, 0x0D, 0x0E, 0x0F, 0x00,
  0x00, 0x0F, 0x10, 0x11, 0x0E, 0x0D,
  0x00, 0x10, 0x12, 0x0D, 0x13, 0x14,
  0x00, 0x15, 0x14, 0x0F, 0x11, 0x0F,
  0x00, 0x16, 0x17, 0x0E, 0x0E, 0x14,
  0x00, 0x0E, 0x0E, 0x0E, 0x0E, 0x18,
  0x00, 0x0D, 0x0D, 0x19, 0x0F, 0x1A,
  0x00, 0x0D, 0x10, 0x10, 0x19, 0x0F
};

GUI_CONST_STORAGE GUI_BITMAP bmPitLevelSensor = {
 6, /* XSize */
 35, /* YSize */
 6, /* BytesPerLine */
 8, /* BitsPerPixel */
 acPitLevelSensor,  /* Pointer to picture data (indices) */
 &PalPitLevelSensor  /* Pointer to palette */
};

/* *** End of file *** */
