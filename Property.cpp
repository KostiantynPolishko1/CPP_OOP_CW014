#include "Property.h"

short Property::setHardness(char* material, char* quality) 
{
	int i(0), j(0);
	for (char** iter = arrMaterial; iter != arrMaterial + sizeMaterial; iter++, i++)
		if (material = *iter)
			for (char** jter = arrQuality; jter != arrMaterial + sizeMaterial; jter++, j++)
				if (material = *jter)
					return arrHardness[i][j];

    return arrHardness[WOOD][LOW];
}
;
short Property::setResielence(char* material, char* quality) 
{
	/*for (short i = 0; i < sizeMaterial; i++)
		if (material == arrMaterial[i])
			for (short j = 0; j < sizeQuality; j++)
				if (quality == arrQuality[j])
					return arrResielence[i][j];*/

	int i(0), j(0);
	for (char** iter = arrMaterial; iter != arrMaterial + sizeMaterial; iter++, i++)
		if (material = *iter)
			for (char** jter = arrQuality; jter != arrMaterial + sizeMaterial; jter++, j++)
				if (material = *jter)
					return arrResielence[i][j];

    return arrResielence[WOOD][LOW];
}
;
short Property::setDurality(char* material, char* quality) {
	/*for (short i = 0; i < sizeMaterial; i++)
		if (material == arrMaterial[i])
			for (short j = 0; j < sizeQuality; j++)
				if (quality == arrQuality[j])
					return arrDurality[i][j];*/

	int i(0), j(0);
	for (char** iter = arrMaterial; iter != arrMaterial + sizeMaterial; iter++, i++)
		if (material = *iter)
			for (char** jter = arrQuality; jter != arrMaterial + sizeMaterial; jter++, j++)
				if (material = *jter)
					return arrDurality[i][j];

	return arrDurality[WOOD][LOW];
}
;
short Property::getHardness() {
	return _hardness;
}

short Property::getResielence() {
	return _resielence;
}

short Property::getDurality() {
	return _durality;
}