#include "Material.h"

short Material::setHardness(char* material, char* quality) {
	for (short i = 0; i < sizeMaterial[0]; i++)
		if (material == arrMaterial[i])
			for (short j = 0; j < sizeQuality[0]; j++)
                if (quality == arrQuality[j])
                    return arrHardness[i][j];

    return arrHardness[0][0];
}
;
short Material::setResielence(char* material, char* quality) {
	for (short i = 0; i < sizeMaterial[0]; i++)
		if (material == arrMaterial[i])
			for (short j = 0; j < sizeQuality[0]; j++)
				if (quality == arrQuality[j])
					return arrResielence[i][j];

    return arrResielence[0][0];
}
;
short Material::setDurality(char* material, char* quality) {
	for (short i = 0; i < sizeMaterial[0]; i++)
		if (material == arrMaterial[i])
			for (short j = 0; j < sizeQuality[0]; j++)
				if (quality == arrQuality[j])
					return arrDurality[i][j];

	return arrResielence[0][0];
}
;
short Material::getHardness() {
	return _hardness;
}

short Material::getResielence() {
	return _resielence;
}

short Material::getDurality() {
	return _durality;
}