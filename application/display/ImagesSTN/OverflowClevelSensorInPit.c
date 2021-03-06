/*
  C-file generated by Bitmap converter for emWin GSC V3.74, compiled Dec 19 2003, 12:45:08

  Copyright (C) 1998-2002
  Segger Microcontroller Systeme GmbH
  www.segger.com

  Solutions for real time microcontroller applications

  Source file: OverflowClevelSensorInPit
  Dimensions:  108 * 113
  NumColors:   2
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

static GUI_CONST_STORAGE GUI_COLOR ColorsOverflowClevelSensorInPit[] = {
     0xFFFFFF,0x000000
};

GUI_CONST_STORAGE GUI_LOGPALETTE PalOverflowClevelSensorInPit = {
  2,	/* number of entries */
  0, 	/* No transparency */
  &ColorsOverflowClevelSensorInPit[0]
};

static GUI_CONST_STORAGE unsigned char acOverflowClevelSensorInPit[] = {
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __X_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, _XX_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, XX______, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, X_______, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, X_______, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, X_______, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, XX______, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, _XX_____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, __XX____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ___X____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ___X____, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, _XXXXX__, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, _XXXXX__, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, _XXXXX__, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, _XXXXX__, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, _XXXXX__, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, _XXXXX__, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, _XXXXX__, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, _XXXXX__, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XX______, ________, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  ________, ________, ________, XXX_____, ________, ________, ________, ________, ________, ________, ________, ________, ________, _XXX____,
  ________, ________, ________, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_____,
  ________, ________, ________, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX______
};

GUI_CONST_STORAGE GUI_BITMAP bmOverflowClevelSensorInPit = {
 108, /* XSize */
 113, /* YSize */
 14, /* BytesPerLine */
 1, /* BitsPerPixel */
 acOverflowClevelSensorInPit,  /* Pointer to picture data (indices) */
 &PalOverflowClevelSensorInPit  /* Pointer to palette */
};

/* *** End of file *** */
