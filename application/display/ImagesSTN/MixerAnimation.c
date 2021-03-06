/*
  C-file generated by Bitmap converter for emWin GSC V3.74, compiled Dec 19 2003, 12:45:08

  Copyright (C) 1998-2002
  Segger Microcontroller Systeme GmbH
  www.segger.com

  Solutions for real time microcontroller applications

  Source file: MixerAnimation
  Dimensions:  26 * 198
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

static GUI_CONST_STORAGE GUI_COLOR ColorsMixerAnimation[] = {
     0xFFFFFF,0x000000
};

GUI_CONST_STORAGE GUI_LOGPALETTE PalMixerAnimation = {
  2,	/* number of entries */
  0, 	/* No transparency */
  &ColorsMixerAnimation[0]
};

static GUI_CONST_STORAGE unsigned char acMixerAnimation[] = {
  ___XX___, ________, XXXXX___, ________,
  __XXXX__, ________, XXXXX___, ________,
  _XXX_XX_, ________, XXXXX___, ________,
  XXXXX_XX, ________, XXXXX___, ________,
  XXXXX_XX, ________, XXXXX___, ________,
  XXXXX_XX, ________, XXXXX___, ________,
  XXXXXXXX, __XXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __X___X_, XXXXX_X_, _X______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  XXXXXXXX, __XXXXX_, XXXXX_XX, XX______,
  XX_XXXXX, __XXXXX_, XXXXX_XX, XX______,
  XX_XXXXX, ________, XXXXX___, ________,
  XX_XXXXX, ________, XXXXX___, ________,
  XX_XXXXX, ________, XXXXX___, ________,
  _XX_XXX_, ________, XXXXX___, ________,
  __XXXX__, ________, XXXXX___, ________,
  ___XX___, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ___XX___, ________, XXXXX___, ________,
  __XXXX__, ________, XXXXX___, ________,
  _XXX_XX_, ________, XXXXX___, ________,
  XXXXX_XX, ________, XXXXX___, ________,
  XXXXX_XX, __XXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __X___X_, XXXXX_X_, _X______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  XX_XXXXX, __XXXXX_, XXXXX_XX, XX______,
  XX_XXXXX, ________, XXXXX___, ________,
  _XX_XXX_, ________, XXXXX___, ________,
  __XXXX__, ________, XXXXX___, ________,
  ___XX___, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ___XXX__, ________, XXXXX___, ________,
  _XXX_XX_, ________, XXXXX___, ________,
  XXXXX_XX, __XXXXX_, XXXXX_XX, XX______,
  XXXXXXXX, __X___X_, XXXXX_X_, _X______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  XXXXXXXX, __XXXXX_, XXXXX_XX, XX______,
  XX_XXXXX, __XXXXX_, XXXXX_XX, XX______,
  _XX_XXX_, ________, XXXXX___, ________,
  __XXX___, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ___XXX__, __XXXXX_, XXXXX_XX, XX______,
  _XXX_XX_, __X___X_, XXXXX_X_, _X______,
  XXXXXXXX, __XXXXX_, XXXXX_XX, XX______,
  _XXXXX__, _XXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  _XXXXX__, _XXXXXX_, XXXXX_XX, XX______,
  XXXXXXXX, __XXXXX_, XXXXX_XX, XX______,
  _X_XXXX_, __XXXXX_, XXXXX_XX, XX______,
  __XXX___, __XXXXX_, XXXXX_XX, XX______,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, __XXXXX_, XXXXX_XX, XX______,
  ________, __X___X_, XXXXX_X_, _X______,
  ________, __XXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, _XXXXXX_, XXXXX_XX, XX______,
  XXXXXXXX, XXXXXXX_, XXXXX_XX, XX______,
  XXXXXXXX, XXXXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, _XXXXXX_, XXXXX_XX, XX______,
  ________, __XXXXX_, XXXXX_XX, XX______,
  ________, __XXXXX_, XXXXX_XX, XX______,
  ________, __XXXXX_, XXXXX_XX, XX______,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ___XXX__, __XXXXX_, XXXXX_XX, XX______,
  _XXX_XX_, __X___X_, XXXXX_X_, _X______,
  XXXXXXXX, __XXXXX_, XXXXX_XX, XX______,
  _XXXXX__, _XXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  _XXXXX__, _XXXXXX_, XXXXX_XX, XX______,
  XXXXXXXX, __XXXXX_, XXXXX_XX, XX______,
  _X_XXXX_, __XXXXX_, XXXXX_XX, XX______,
  __XXX___, __XXXXX_, XXXXX_XX, XX______,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ___XXX__, ________, XXXXX___, ________,
  _XXX_XX_, ________, XXXXX___, ________,
  XXXXX_XX, __XXXXX_, XXXXX_XX, XX______,
  XXXXXXXX, __X___X_, XXXXX_X_, _X______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  XXXXXXXX, __XXXXX_, XXXXX_XX, XX______,
  XX_XXXXX, __XXXXX_, XXXXX_XX, XX______,
  _XX_XXX_, ________, XXXXX___, ________,
  __XXX___, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ___XX___, ________, XXXXX___, ________,
  __XXXX__, ________, XXXXX___, ________,
  _XXX_XX_, ________, XXXXX___, ________,
  XXXXX_XX, ________, XXXXX___, ________,
  XXXXX_XX, __XXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __X___X_, XXXXX_X_, _X______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  XX_XXXXX, __XXXXX_, XXXXX_XX, XX______,
  XX_XXXXX, ________, XXXXX___, ________,
  _XX_XXX_, ________, XXXXX___, ________,
  __XXXX__, ________, XXXXX___, ________,
  ___XX___, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ________, ________, XXXXX___, ________,
  ___XX___, ________, XXXXX___, ________,
  __XXXX__, ________, XXXXX___, ________,
  _XXX_XX_, ________, XXXXX___, ________,
  XXXXX_XX, ________, XXXXX___, ________,
  XXXXX_XX, ________, XXXXX___, ________,
  XXXXX_XX, ________, XXXXX___, ________,
  XXXXXXXX, __XXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __X___X_, XXXXX_X_, _X______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  ___XXXXX, XXXXXXX_, XXXXX_XX, XX______,
  __XXXX__, _XXXXXX_, XXXXX_XX, XX______,
  _XXXXXX_, __XXXXX_, XXXXX_XX, XX______,
  XXXXXXXX, __XXXXX_, XXXXX_XX, XX______,
  XX_XXXXX, __XXXXX_, XXXXX_XX, XX______,
  XX_XXXXX, ________, XXXXX___, ________,
  XX_XXXXX, ________, XXXXX___, ________,
  XX_XXXXX, ________, XXXXX___, ________,
  _XX_XXX_, ________, XXXXX___, ________,
  __XXXX__, ________, XXXXX___, ________,
  ___XX___, ________, XXXXX___, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmMixerAnimation = {
 26, /* XSize */
 198, /* YSize */
 4, /* BytesPerLine */
 1, /* BitsPerPixel */
 acMixerAnimation,  /* Pointer to picture data (indices) */
 &PalMixerAnimation  /* Pointer to palette */
};

/* *** End of file *** */
