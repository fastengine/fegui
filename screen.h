// Fast Engine Graphical User Interface (F.E.G.U.I)
// This feature is a part of FastEngine
// by Mario Freire
// Copyright (C) 2012 DSP Interactive. All rights reserved.
// Development Systems and Programs
// See more information in the website: http://www.dspinteractive.com

#ifndef SCREEN_H
#define SCREEN_H

#include "cimp.h"


extern int left,top,width,height;

void setscreenwidth(int w);
void setscreenheight(int h);

int getscreenwidth();
int getscreenheight();

//extern WNDCLASS wc;
//extern HWND hWnd;
//extern HDC hDC;
//extern HGLRC hRC;        
//extern MSG msg;

#ifdef TEST
extern HWND hWnd;
#endif

extern BMP* xbk;

#define XBACKGROUND_LEN 64

 static unsigned char xbackground[]=
 {
  0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,
  0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,
  0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,
  0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
  0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,
  0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,
  0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,
  0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,
  0x00
  };

void drawbkimage(void);

class TScreen
{
	public:
		// class constructor
		TScreen();
		// class destructor
		~TScreen();
		int width;
		int height;
};

#endif // SCREEN_H