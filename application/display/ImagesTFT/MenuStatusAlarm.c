/*
  C-file generated by Bitmap converter for emWin GSC V3.74, compiled Dec 19 2003, 12:45:08

  Copyright (C) 1998-2002
  Segger Microcontroller Systeme GmbH
  www.segger.com

  Solutions for real time microcontroller applications

  Source file: MenuStatusAlarm
  Dimensions:  13 * 13
  NumColors:   4
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

static GUI_CONST_STORAGE GUI_COLOR ColorsMenuStatusAlarm[] = {
     0x000000,0x1221F7,0x0000FF,0x091081
};

GUI_CONST_STORAGE GUI_LOGPALETTE PalMenuStatusAlarm = {
  4,	/* number of entries */
  0, 	/* No transparency */
  &ColorsMenuStatusAlarm[0]
};

static GUI_CONST_STORAGE unsigned char acMenuStatusAlarm[] = {
  0x00, 0x15, 0x00, 0x00,
  0x02, 0xA9, 0x60, 0x00,
  0x0A, 0xA9, 0x68, 0x00,
  0x2A, 0xB1, 0x6A, 0x00,
  0x2A, 0xB1, 0x6A, 0x00,
  0xAA, 0xB1, 0x6A, 0x80,
  0xAA, 0xB1, 0x6A, 0x80,
  0xAA, 0xB2, 0x6A, 0x80,
  0xAA, 0xAA, 0xAA, 0xC0,
  0x2A, 0xB2, 0xAA, 0xC0,
  0x3A, 0xBE, 0xAB, 0x00,
  0x0E, 0xAA, 0xAC, 0x00,
  0x03, 0xEA, 0xF0, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmMenuStatusAlarm = {
 13, /* XSize */
 13, /* YSize */
 4, /* BytesPerLine */
 2, /* BitsPerPixel */
 acMenuStatusAlarm,  /* Pointer to picture data (indices) */
 &PalMenuStatusAlarm  /* Pointer to palette */
};

/* *** End of file *** */
