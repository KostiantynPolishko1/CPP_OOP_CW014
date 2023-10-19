#pragma once

#ifndef KATANA_H
#define KATANA_H

#include "CutWeapon.h"

class Katana final:
    public CutWeapon
{
public:
    Katana() : CutWeapon((char*)"Katana") {}
}
;
#endif