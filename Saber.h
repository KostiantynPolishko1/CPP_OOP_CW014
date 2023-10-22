#pragma once

#ifndef SABER_H
#define SABER_H

#include "CutWeapon.h"

class Saber final:
    public CutWeapon
{
public:
    Saber() : CutWeapon(SINGLE_HANDED) {}
 }
;
#endif