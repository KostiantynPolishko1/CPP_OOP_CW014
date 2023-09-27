#include "Material.h"

short Material::setHardness(char* typeSteel) {
    for (short i = 0; i < size[0]; i++)
        if (typeSteel == arrTypeSteel[i])
            return arrHardness[i];

    return arrHardness[0];
}
;
short Material::setResielence(char* typeSteel) {
    for (short i = 0; i < size[0]; i++)
        if (typeSteel == arrTypeSteel[i])
            return arrResielence[i];

    return arrResielence[0];
}
;
short Material::setDurality(char* typeSteel) {
	for (short i = 0; i < size[0]; i++)
		if (typeSteel == arrTypeSteel[i])
			return arrDurality[i];

	return arrResielence[0];
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