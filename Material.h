#pragma once
#include "Property.h"

#ifndef STEEL_H
#define STEEL_H

class Material : public Property
{
protected:
	char* _material;
	char* _quality;

protected:
	Material() : Property()
	{
		_material = (char*)arrMaterial[WOOD];
		_quality = (char*)arrQuality[LOW];
	}

	Material(char* material, char* quality) : Property(material, quality)
	{
		_material = material;
		_quality = quality;
	}

	~Material() {
		_material = nullptr;
		_quality = nullptr;
	}

public:	
	char* getMaterial();
	char* getQuality();
}
;
#endif