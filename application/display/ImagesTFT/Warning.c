/*
  C-file generated by Bitmap converter for emWin GSC V3.74, compiled Dec 19 2003, 12:45:08

  Copyright (C) 1998-2002
  Segger Microcontroller Systeme GmbH
  www.segger.com

  Solutions for real time microcontroller applications

  Source file: Warning
  Dimensions:  16 * 16
  NumColors:   46
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

static GUI_CONST_STORAGE GUI_COLOR ColorsWarning[] = {
     0x000000,0x000001,0x00091A,0x00CDD2
    ,0x00FFFF,0x00D3D7,0x000D1E,0x00B2B7
    ,0x00B6BB,0x000202,0x002727,0x009393
    ,0x009797,0x002B2B,0x004C4C,0x005656
    ,0x000F0F,0x006262,0x006969,0x001111
    ,0x007D7D,0x00F8F8,0x00F9F9,0x008686
    ,0x007979,0x008383,0x006C6C,0x00CBCB
    ,0x00CFCF,0x006F6F,0x00C6C6,0x00CDCD
    ,0x003030,0x00C4C4,0x008C8C,0x00C9C9
    ,0x00D5D5,0x00FBFB,0x006060,0x00BCBC
    ,0x00E4E4,0x00E1E1,0x00EBEB,0x00F0F0
    ,0x00E9E9,0x00BFBF
};

GUI_CONST_STORAGE GUI_LOGPALETTE PalWarning = {
  46,	/* number of entries */
  0, 	/* No transparency */
  &ColorsWarning[0]
};

static GUI_CONST_STORAGE unsigned char acWarning[] = {
  0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x04, 0x05, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x08, 0x09, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0A, 0x0B, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0C, 0x0D, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x10, 0x11, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x12, 0x13, 0x00, 0x00,
  0x00, 0x00, 0x14, 0x15, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x16, 0x17, 0x00, 0x00,
  0x00, 0x00, 0x18, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x19, 0x00, 0x00,
  0x00, 0x1A, 0x1B, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x1C, 0x1D, 0x00,
  0x00, 0x1E, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1F, 0x00,
  0x20, 0x21, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x22, 0x04, 0x04, 0x04, 0x04, 0x04, 0x23, 0x20,
  0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
  0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
  0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
  0x24, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x25, 0x24,
  0x26, 0x27, 0x28, 0x29, 0x29, 0x29, 0x2A, 0x2B, 0x2C, 0x29, 0x29, 0x29, 0x29, 0x28, 0x2D, 0x26,
  0x13, 0x12, 0x0C, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x0C, 0x1A, 0x13
};

GUI_CONST_STORAGE GUI_BITMAP bmWarning = {
 16, /* XSize */
 16, /* YSize */
 16, /* BytesPerLine */
 8, /* BitsPerPixel */
 acWarning,  /* Pointer to picture data (indices) */
 &PalWarning  /* Pointer to palette */
};

/* *** End of file *** */
