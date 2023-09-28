#include "Property.h"

short Property::setHardness(char* material, char* quality) 
{
	int i(0), j(0);
	for (char** iter = arrMaterial; iter != arrMaterial + sizeMaterial; iter++, i++)
		if (material == *iter)
			for (char** jter = arrQuality; jter != arrQuality + sizeQuality; jter++, j++)
				if (quality == *jter)
					return arrHardness[i][j];

    return arrHardness[WOOD][LOW];
}
;
short Property::setResielence(char* material, char* quality) 
{
	int i(0), j(0);
	for (char** iter = arrMaterial; iter != arrMaterial + sizeMaterial; iter++, i++)
		if (material == *iter)
			for (char** jter = arrQuality; jter != arrQuality + sizeQuality; jter++, j++)
				if (quality == *jter)
					return arrResielence[i][j];

    return arrResielence[WOOD][LOW];
}
;
short Property::setDurality(char* material, char* quality) 
{
	int i(0), j(0);
	for (char** iter = arrMaterial; iter != arrMaterial + sizeMaterial; iter++, i++)
		if (material == *iter)
			for (char** jter = arrQuality; jter != arrQuality + sizeQuality; jter++, j++)
				if (quality == *jter)
					return arrDurality[i][j];

	return arrDurality[WOOD][LOW];
}
;
short Property::getHardness() {
	return _hardness;
}
;
short Property::getResielence() {
	return _resielence;
}
;
short Property::getDurality() {
	return _durality;
}
;