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
		_hardness = arrHardness[0][0];
		_resielence = arrResielence[0][0];
		_durality = arrDurality[0][0];
	}

	Material(char* material, char* quality)
	{
		_hardness = setHardness(material, quality);
		_resielence = setResielence(material, quality);
		_durality = setDurality(material, quality);
	}

	short setHardness(char* material, char* quality);

	short setResielence(char* material, char* quality);

	short setDurality(char* material, char* quality);

public:

	short getHardness();

	short getResielence();

	short getDurality();
}
;
#endif