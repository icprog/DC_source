/*
  C-file generated by Bitmap converter for emWin GSC V3.74, compiled Dec 19 2003, 12:45:08

  Copyright (C) 1998-2002
  Segger Microcontroller Systeme GmbH
  www.segger.com

  Solutions for real time microcontroller applications

  Source file: Pit1Pump
  Dimensions:  64 * 29
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

static GUI_CONST_STORAGE GUI_COLOR ColorsPit1Pump[] = {
     0x000000,0xFFFFFF
};

GUI_CONST_STORAGE GUI_LOGPALETTE PalPit1Pump = {
  2,	/* number of entries */
  0, 	/* No transparency */
  &ColorsPit1Pump[0]
};

static GUI_CONST_STORAGE unsigned char acPit1Pump[] = {
  _____XXX, XXXXXX__, ________, ________, ________, ________, ________, ________,
  _____XXX, XXXXXX__, ________, ________, ________, ________, ________, ________,
  ____XXXX, XXXXXXX_, ________, ________, ________, ________, ________, ________,
  ____XXX_, ______X_, ________, ________, ________, ________, ________, ________,
  ___XXX__, ______XX, ________, ________, ________, ________, ________, ________,
  ___XXX__, _______X, ________, ________, ________, ________, ________, ________,
  ___XXX__, _______X, ________, ________, ________, ________, ________, ________,
  __XXX___, _______X, X_______, ________, ________, ________, ________, ________,
  __XXX___, ________, X_______, ________, ________, ________, ________, ________,
  __XXX___, _XX_____, X_______, ________, ________, ________, ________, ________,
  __XXX___, __X_____, X_______, ________, ________, ________, ________, ________,
  _XXX____, __X_____, X_______, ________, ________, ________, ________, ________,
  _XXX____, __X_____, X_______, ________, ________, ________, ________, ________,
  _XXX____, __X_____, XX______, ________, ________, ________, ________, ________,
  _XXX____, __X_____, _X______, ________, ________, ________, ________, ________,
  _XXX____, __X_____, _X______, ________, ________, ________, ________, ________,
  _XXX____, __X_____, _X______, ________, ________, ________, ________, ________,
  _XXX____, ________, _X_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  _XXX____, ________, _X__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  _XXX____, ________, _X___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  _XXX____, ________, _X__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  _XXX____, ________, _X_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  _XXX____, ________, _X______, ________, ________, ________, ________, ________,
  _XXX____, ________, _X______, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________, ________, ________,
  X_______, ________, ________, ________, ________, ________, ________, ________,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX
};

GUI_CONST_STORAGE GUI_BITMAP bmPit1Pump = {
 64, /* XSize */
 29, /* YSize */
 8, /* BytesPerLine */
 1, /* BitsPerPixel */
 acPit1Pump,  /* Pointer to picture data (indices) */
 &PalPit1Pump  /* Pointer to palette */
};

/* *** End of file *** */
