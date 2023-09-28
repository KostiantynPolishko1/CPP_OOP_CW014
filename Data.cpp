#include "Data.h"
#include <wchar.h>

char* arrBladeShape[] = { (char*)"Normal Blade", (char*)"Real Tanto", (char*)"Gut Hook", (char*)"Hawkbill" };
char* arrMaterial[] = { (char*)"Wood", (char*)"Brass", (char*)"Steel" };
char* arrQuality[] = { (char*)"Low", (char*)"Middle", (char*)"High" };

extern const short sizeBladeShape = sizeof(arrBladeShape) / sizeof(arrBladeShape[0]);
extern const short sizeQuality = sizeof(arrQuality) / sizeof(arrQuality[0]);
extern const short sizeMaterial = sizeof(arrMaterial) / sizeof(arrMaterial[0]);

short arrHardness[][3] = { {45, 50, 55} , {35, 40, 45}, {25, 30, 35} };
short arrResielence[][3] = { {40, 50, 60}, {30, 40, 50}, {20, 30, 40} };
short arrDurality[][3] = { {30, 40, 50}, {20, 30, 40}, {10, 20, 30} };
float arrBladeLength[] = { 0.9f, 1.1f, 1.2f };

extern const float densitySteel = 7.85f; // gr/cm3
extern const float densityBrass = 8.73f; // gr/cm3
extern const float densityWood = 0.65f; // gr/cm3
extern const float widthBlade = 0.1f; //in m
extern const float thkBlade = 0.005f; //in m

float arrDensity[] = {densitySteel, densityBrass, densityWood};