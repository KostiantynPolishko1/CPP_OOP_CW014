#pragma once
#include "Property.h"

#ifndef STEEL_H
#define STEEL_H

class Material : public Property
{
protected:
	char* _material;

public:
	Material() : Property()
	{
		_material = (char*)"LowCarbon";
	}

	Material(char* material, char* quality) : Property(material, quality)
	{
		_material = material;
	}

	~Material() {
		_material = nullptr;
	}
	
	char* getTypeSteel();

}
;
#endif