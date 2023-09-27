#pragma once
#include "Material.h"

#ifndef STEEL_H
#define STEEL_H

class Steel : public Material
{
protected:
	char* _typeSteel;

public:
	Steel() : Material() 
	{
		_typeSteel = (char*)"LowCarbon";
	}

	Steel(char* typeSteel) : Material(typeSteel)
	{
		_typeSteel = typeSteel;
	}

	~Steel() {
		_typeSteel = nullptr;
	}
	
	char* getTypeSteel();

}
;
#endif