#pragma once
#include "Data.h"

#ifndef MATERIAL_H
#define MATERIAL_H

class Material
{
protected:
	
	short _hardness;
	short _resielence;
	short _durality;

	Material()
	{
		_hardness = arrHardness[0];
		_resielence = arrResielence[0];
		_durality = arrDurality[0];
	}

	Material(char* typeSteel)
	{
		_hardness = setHardness(typeSteel);
		_resielence = setResielence(typeSteel);
		_durality = setDurality(typeSteel);
	}

	short setHardness(char* typeSteel);

	short setResielence(char* typeSteel);

	short setDurality(char* typeSteel);

public:

	short getHardness();

	short getResielence();

	short getDurality();
}
;
#endif