/*
  C-file generated by Bitmap converter for emWin GSC V3.74, compiled Dec 19 2003, 12:45:08

  Copyright (C) 1998-2002
  Segger Microcontroller Systeme GmbH
  www.segger.com

  Solutions for real time microcontroller applications

  Source file: SurfaceArea
  Dimensions:  76 * 10
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

static GUI_CONST_STORAGE GUI_COLOR ColorsSurfaceArea[] = {
     0xFFFFFF,0x000000
};

GUI_CONST_STORAGE GUI_LOGPALETTE PalSurfaceArea = {
  2,	/* number of entries */
  0, 	/* No transparency */
  &ColorsSurfaceArea[0]
};

static GUI_CONST_STORAGE unsigned char acSurfaceArea[] = {
  ________, _______X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, ________, ________,
  _______X, XXXXXXX_, ________, ________, ________, ________, ________, ______XX, XXXXXX__, ________,
  ___XXXX_, ________, ________, ________, ________, ________, ________, ________, ______XX, XX______,
  XXX_____, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  X_______, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  X_______, ________, ________, ________, ________, ________, ________, ________, ________, ________,
  XXX_____, ________, ________, ________, ________, ________, ________, ________, ________, __XX____,
  __XXXXX_, ________, ________, ________, ________, ________, ________, ________, ______XX, XXX_____,
  _______X, XXXXXX__, ________, ________, ________, ________, ________, _______X, XXXXXXX_, ________,
  ________, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmSurfaceArea = {
 76, /* XSize */
 10, /* YSize */
 10, /* BytesPerLine */
 1, /* BitsPerPixel */
 acSurfaceArea,  /* Pointer to picture data (indices) */
 &PalSurfaceArea  /* Pointer to palette */
};

/* *** End of file *** */
