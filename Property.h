#pragma once
#include "Data.h"

#ifndef MATERIAL_H
#define MATERIAL_H

class Property
{
protected:
	
	short _hardness;
	short _resielence;
	short _durality;

	Property()
	{
		_hardness = arrHardness[WOOD][LOW];
		_resielence = arrResielence[WOOD][LOW];
		_durality = arrDurality[WOOD][LOW];
	}

	Property(char* material, char* quality)
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