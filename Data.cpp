#include "Data.h"
#include <wchar.h>


char* arrMaterial[] = { (char*)"Wood", (char*)"Brass", (char*)"Steel" };
char* arrQuality[] = { (char*)"Low", (char*)"Normal", (char*)"High" };

short sizeQuality[] = { sizeof(arrQuality) / sizeof(arrQuality[0]) };
short sizeMaterial[] = { sizeof(arrMaterial) / sizeof(arrMaterial[0]) };

short arrHardness[][3] = { {45, 50, 55} , {35, 40, 45}, {25, 30, 35} };
short arrResielence[][3] = { {40, 50, 60}, {30, 40, 50}, {20, 30, 40} };
short arrDurality[][3] = { {30, 40, 50}, {20, 30, 40}, {10, 20, 30} };