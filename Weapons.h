#pragma once

#ifndef WEAPONS_H
#define WEAPONS_H

#include "Saber.h"
#include "Katana.h"

class Weapons
{
private:
	const static short length = 2;
	short index;
	CutWeapon cutWeapons[length];
	Saber saber;
	Katana katana;

public:

	Weapons() : index{}, saber {}, katana{} {

		cutWeapons[0] = saber.getCutWeapon();
		cutWeapons[1] = katana.getCutWeapon();
	}
#pragma region operators
	CutWeapon& operator[] (const short& index) {
		this->index = index;
		setIndex0();

		return this->cutWeapons[index];
	}
#pragma endregion

private:
#pragma region methods
	void setIndex0()
	{
		if (this->index == length)
			this->index = 0;
		else if (this->index < 0)
			this->index = length - 1;
	}
#pragma endregion

}
;
#endif