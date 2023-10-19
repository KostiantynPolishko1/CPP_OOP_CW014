#pragma once

#ifndef STOPPER_H
#define STOPPER_H

#include "Material.h"

class Stopper final:
    public Material
{
private:
    char* _shape;
    float _weight;
    float _length;

public:
    Stopper() : Material(), _shape{ (char*)"Rubber" }, _length{ 0.1f }, _weight{ 0.05f } {}

}
;
#endif