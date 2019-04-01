// Fast Engine Graphical User Interface (F.E.G.U.I)
// This feature is a part of FastEngine
// by Mario Freire
// Copyright (C) 2012 DSP Interactive. All rights reserved.
// Development Systems and Programs
// See more information in the website: http://www.dspinteractive.com

#ifndef PANEL_H
#define PANEL_H

#include "cimp.h"
#include "brush.h"
#include "pen.h"
#include "graphicobject.h"
#include "canvas.h"
#include "bitmap.h"
#include "png.h"
#include "picture.h"
#include "window.h"
#include "screen.h"
#include "gfx.h"
#include "icons.h"
#include "mouse.h"
#include "hint.h"
#include "control.h" // inheriting class's header file

extern bool panelcontrolon;

class TPanel : public TControl
{
private:
public:		// User declarations
TPanel(TWindow *Window);
void show();
void hide();
void rendercontrol();
TBorderStyle borderstyle;
TBevelStyle bevelinner;
TBevelStyle bevelouter;
int bevelwidth;
TColor color;
};

#pragma pack(push, 1)

#ifdef __cplusplus
extern "C" {
#endif

int createpanel(int winid);

#ifdef __cplusplus
}
#endif

#pragma pack(pop)

#endif // PANEL_H