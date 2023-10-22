#pragma once

#ifndef CUTWEAPON_H
#define CUTWEAPON_H

#include "Blade.h"
#include "Handler.h"
#include "Stopper.h"

class CutWeapon
{
private:
	char* name;
	Blade blade;
	Handler handler;
	Stopper stopper;

protected:
	CutWeapon(char* name) : blade{}, handler{}, stopper{} {
		this->name = name;
	}

public:
	CutWeapon() : name{}, blade {}, handler{}, stopper{} {}

	CutWeapon getCutWeapon() const {
		return *this;
	}
}
;
#endif