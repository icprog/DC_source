/*
  C-file generated by Bitmap converter for emWin GSC V3.74, compiled Dec 19 2003, 12:45:08

  Copyright (C) 1998-2002
  Segger Microcontroller Systeme GmbH
  www.segger.com

  Solutions for real time microcontroller applications

  Source file: Help
  Dimensions:  21 * 21
  NumColors:   15
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

static GUI_CONST_STORAGE GUI_COLOR ColorsHelp[] = {
     0xFDFDFF,0x000000,0xEDEDEF,0xAEAEAF
    ,0x7F7F80,0x8E8E8F,0xCDCDCF,0x9E9E9F
    ,0x101010,0x3F3F40,0x303030,0x202020
    ,0xDDDDDF,0xBEBEBF,0x5F5F60
};

GUI_CONST_STORAGE GUI_LOGPALETTE PalHelp = {
  15,	/* number of entries */
  0, 	/* No transparency */
  &ColorsHelp[0]
};

static GUI_CONST_STORAGE unsigned char acHelp[] = {
  0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x11, 0x00, 0x00, 0x01, 0x11, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
  0x00, 0x01, 0x00, 0x00, 0x23, 0x44, 0x56, 0x00, 0x01, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x07, 0x81, 0x11, 0x11, 0x92, 0x00, 0x10, 0x00,
  0x01, 0x00, 0x00, 0x31, 0x11, 0x11, 0x11, 0x1A, 0x00, 0x01, 0x00,
  0x01, 0x00, 0x00, 0xB1, 0x11, 0x94, 0x81, 0x11, 0x70, 0x01, 0x00,
  0x01, 0x00, 0x06, 0x11, 0x18, 0x20, 0x41, 0x11, 0x40, 0x01, 0x00,
  0x10, 0x00, 0x00, 0xCD, 0x37, 0x0C, 0xB1, 0x11, 0x70, 0x00, 0x10,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x68, 0x11, 0x1A, 0x00, 0x00, 0x10,
  0x10, 0x00, 0x00, 0x00, 0x06, 0x81, 0x11, 0x92, 0x00, 0x00, 0x10,
  0x10, 0x00, 0x00, 0x00, 0x0B, 0x11, 0x1E, 0x00, 0x00, 0x00, 0x10,
  0x10, 0x00, 0x00, 0x00, 0x01, 0x11, 0xA0, 0x00, 0x00, 0x00, 0x10,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x44, 0x30, 0x00, 0x00, 0x01, 0x00,
  0x01, 0x00, 0x00, 0x00, 0xC4, 0x44, 0x70, 0x00, 0x00, 0x01, 0x00,
  0x01, 0x00, 0x00, 0x00, 0xD1, 0x11, 0x90, 0x00, 0x00, 0x01, 0x00,
  0x00, 0x10, 0x00, 0x00, 0xD1, 0x11, 0x90, 0x00, 0x00, 0x10, 0x00,
  0x00, 0x01, 0x00, 0x00, 0xD1, 0x11, 0x90, 0x00, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x11, 0x00, 0x00, 0x01, 0x11, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmHelp = {
 21, /* XSize */
 21, /* YSize */
 11, /* BytesPerLine */
 4, /* BitsPerPixel */
 acHelp,  /* Pointer to picture data (indices) */
 &PalHelp  /* Pointer to palette */
};

/* *** End of file *** */
