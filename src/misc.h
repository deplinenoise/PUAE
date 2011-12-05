/*
 * PUAE - The Un*x Amiga Emulator
 *
 * Misc
 *
 * Copyright 2010-2011 Mustafa TUFAN
 */

#include "sysdeps.h"

extern int ispressed (int key);

extern int D3D_goodenough (void);
extern int DirectDraw_CurrentRefreshRate (void);
extern int DirectDraw_GetVerticalBlankStatus (void);
extern double getcurrentvblankrate (void);

TCHAR* buf_out (TCHAR *buffer, int *bufsize, const TCHAR *format, ...);
TCHAR *au_copy (TCHAR *dst, int maxlen, const char *src);
char *ua (const TCHAR *s);

void close_console (void);
