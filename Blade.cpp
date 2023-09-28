#include "Blade.h"

float Blade::setLength(char* material) {
	int i(0);
	for (char **iter = arrMaterial; iter != arrMaterial + sizeMaterial; iter++, i++)
		if(material == *iter)
			return *(arrBladeLength + i);

	return *(arrBladeLength + WOOD);
}
;
float Blade::setWeight(char* material, float length) {
	int i(0);
	for (char** iter = arrMaterial; iter != arrMaterial + sizeMaterial; iter++, i++)
		if (material == *iter)
			return (*(arrDensity + i) * length * widthBlade * thkBlade) * 1000;

	return (*(arrDensity + WOOD) * length * widthBlade * thkBlade) * 1000;;
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