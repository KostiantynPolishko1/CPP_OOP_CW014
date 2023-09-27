#pragma once
#include "Material.h"

#ifndef STEEL_H
#define STEEL_H

class Steel : public Material
{
protected:
	char* _material;

public:
	Steel() : Material() 
	{
		_material = (char*)"LowCarbon";
	}

	Steel(char* material, char* quality) : Material(material, quality)
	{
		_material = material;
	}

	~Steel() {
		_material = nullptr;
	}
	
	char* getTypeSteel();

}
;
#endif