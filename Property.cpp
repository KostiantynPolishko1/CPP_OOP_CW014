#include "Property.h"

short Property::setHardness(char* material, char* quality) {
	for (short i = 0; i < sizeMaterial[0]; i++)
		if (material == arrMaterial[i])
			for (short j = 0; j < sizeQuality[0]; j++)
                if (quality == arrQuality[j])
                    return arrHardness[i][j];

    return arrHardness[0][0];
}
;
short Property::setResielence(char* material, char* quality) {
	for (short i = 0; i < sizeMaterial[0]; i++)
		if (material == arrMaterial[i])
			for (short j = 0; j < sizeQuality[0]; j++)
				if (quality == arrQuality[j])
					return arrResielence[i][j];

    return arrResielence[0][0];
}
;
short Property::setDurality(char* material, char* quality) {
	for (short i = 0; i < sizeMaterial[0]; i++)
		if (material == arrMaterial[i])
			for (short j = 0; j < sizeQuality[0]; j++)
				if (quality == arrQuality[j])
					return arrDurality[i][j];

	return arrResielence[0][0];
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