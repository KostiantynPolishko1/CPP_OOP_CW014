#pragma once
#include "Material.h"

#ifndef BLADE_H
#define BLADE_H

class Blade final: public Material
{
protected:
	char* _shape;
	float _lenght;
	float _weight;

public:
	Blade() : Material()
	{
		_shape = arrBladeShape[NORMAL];
		_lenght = arrBladeLength[WOOD];
		_weight = setWeight(arrMaterial[WOOD], _lenght);
	}

	Blade(char* shape, char* material = (char*)arrMaterial[WOOD], char* quality = (char*)arrQuality[LOW])
	: Material(material, quality)
	{
		_shape = shape;
		_lenght = setLength(material);
		_weight = setWeight(material, _lenght);
	}
	
	~Blade()
	{
		_shape = nullptr;
	}

protected:
	float setLength(char* material);
	float setWeight(char* material, float length);

public:
	char* getBladeShape();
	float getBladeLength();
	float getBladeWeight();
}
;
#endif
