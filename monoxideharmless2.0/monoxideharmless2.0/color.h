#pragma once
#include "monoxideharmless2.0.h"

typedef struct {
	FLOAT h;
	FLOAT s;
	FLOAT l;
} HSLCOLOR;

HSLCOLOR
RGBToHSL(
	_In_ RGBQUAD rgb
);

RGBQUAD
HSLToRGB(
	_In_ HSLCOLOR hsl
);