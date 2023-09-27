#include "Blade.h"

float Blade::setLength(char* material) {
	for (short i = 0; i < sizeMaterial[0]; i++)
		if (material == arrMaterial[i])
			return arrBladeLength[i];

	return arrBladeLength[WOOD];
}
;
float Blade::setWeight(char* material, float length) {
	for (short i = 0; i < sizeMaterial[0]; i++)
		if (material == arrMaterial[i])
			return (arrDensity[i] * length * widthBlade * thkBlade) * 1000;

	return (arrDensity[WOOD] * length * widthBlade * thkBlade) * 1000;;
}
;
char* Blade::getBladeShape() {
	return _shape;
}
;
float Blade::getBladeLength() {
	return _lenght;
}
;
float Blade::getBladeWeight() {
	return _weight;
}
;