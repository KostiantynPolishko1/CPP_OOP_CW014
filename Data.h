#pragma once
#ifndef DATA_H
#define DATA_H

enum BladeShape {
	NORMAL,
	REAL_TANTO,
	GUT_HOOK,
	HAWKBILL
}
;
enum TypeMaterial {
	WOOD,
	BRASS,
	STEEL
}
;
enum QualityMaterial {
	LOW,
	MIDDLE,
	HIGH
}
;

char* arrMaterial[];
char* arrQuality[];

extern const short sizeMaterial;
extern const short sizeQuality;

short arrHardness[][3];
short arrResielence[][3];
short arrDurality[][3];
float arrBladeLength[];
char* arrBladeShape[];

extern const float densitySteel;
extern const float densityBrass;
extern const float densityWood;
extern const float widthBlade;
extern const float thkBlade;

float arrDensity[];

#endif