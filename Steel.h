#pragma once
#include "Material.h"
#include "Data.h"


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

	Steel(char* typeSteel)
	{
		_typeSteel = typeSteel;
		_hardness = setHardness(typeSteel);
		_resielence = setResielence(typeSteel);
	}

	~Steel() {
		_typeSteel = nullptr;
	}
	
	char* getTypeSteel() {
		return _typeSteel;
	}

protected:
	short setHardness(char* typeSteel) {
		for (short i = 0; i < size[0]; i++)
			if ( typeSteel = arrTypeSteel[i])
				return arrHardness[i];

		return arrHardness[0];
	}
	
	short setResielence(char* typeSteel) {
		for (short i = 0; i < size[0]; i++)
			if (typeSteel = arrTypeSteel[i])
				return arrResielence[i];
		
		return arrResielence[0];
	}
}
;
#endif