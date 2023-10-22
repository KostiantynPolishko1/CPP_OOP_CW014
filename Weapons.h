#pragma once

#ifndef WEAPONS_H
#define WEAPONS_H

#include "Saber.h"
#include "Katana.h"

class Weapons
{
private:
	const static short count = 2;
	CutWeapon cutWeapons[count];
	Saber saber;
	Katana katana;

public:

	Weapons() : saber{}, katana{} {

		cutWeapons[0] = saber.getCutWeapon();
		cutWeapons[1] = katana.getCutWeapon();
	}
}
;
#endif