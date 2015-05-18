/*
  C-file generated by Bitmap converter for emWin GSC V3.74, compiled Dec 19 2003, 12:45:08

  Copyright (C) 1998-2002
  Segger Microcontroller Systeme GmbH
  www.segger.com

  Solutions for real time microcontroller applications

  Source file: MenuStatusWarning
  Dimensions:  13 * 13
  NumColors:   5
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

static GUI_CONST_STORAGE GUI_COLOR ColorsMenuStatusWarning[] = {
     0x000000,0x001122,0x00FFFF,0x008C8C
    ,0x001111
};

GUI_CONST_STORAGE GUI_LOGPALETTE PalMenuStatusWarning = {
  5,	/* number of entries */
  0, 	/* No transparency */
  &ColorsMenuStatusWarning[0]
};

static GUI_CONST_STORAGE unsigned char acMenuStatusWarning[] = {
  0x00, 0x00, 0x12, 0x22, 0x10, 0x00, 0x00,
  0x00, 0x00, 0x22, 0x22, 0x20, 0x00, 0x00,
  0x00, 0x02, 0x22, 0x22, 0x22, 0x00, 0x00,
  0x00, 0x02, 0x23, 0x02, 0x22, 0x00, 0x00,
  0x00, 0x22, 0x23, 0x02, 0x22, 0x20, 0x00,
  0x00, 0x22, 0x23, 0x02, 0x22, 0x20, 0x00,
  0x02, 0x22, 0x23, 0x02, 0x22, 0x22, 0x00,
  0x02, 0x22, 0x23, 0x02, 0x22, 0x22, 0x00,
  0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20,
  0x22, 0x22, 0x23, 0x02, 0x22, 0x22, 0x20,
  0x22, 0x22, 0x23, 0x32, 0x22, 0x22, 0x20,
  0x32, 0x22, 0x22, 0x22, 0x22, 0x22, 0x30,
  0x43, 0x33, 0x33, 0x33, 0x33, 0x33, 0x40
};

GUI_CONST_STORAGE GUI_BITMAP bmMenuStatusWarning = {
 13, /* XSize */
 13, /* YSize */
 7, /* BytesPerLine */
 4, /* BitsPerPixel */
 acMenuStatusWarning,  /* Pointer to picture data (indices) */
 &PalMenuStatusWarning  /* Pointer to palette */
};

/* *** End of file *** */
