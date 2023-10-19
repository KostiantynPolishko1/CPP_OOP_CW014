#pragma once

#ifndef HANDLER_H
#define HANDLER_H

#include "Material.h"

class Handler final:
    public Material
{
private:
    char* _shape;
    float _weight;
    float _length;

public:
    Handler() : Material(), _shape{(char*)"Cylinder"}, _length{0.2f}, _weight{0.1f} {}

}
;
#endif