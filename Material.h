#pragma once
#ifndef MATERIAL_H
#define MATERIAL_H

class Material
{
protected:
	
	short _hardness;
	int _resielence;

protected:
	Material() : _hardness{ 50 }, _resielence { 100 }
	{}

	Material(short hardness, int resielence) {
		_hardness = hardness;
		_resielence = resielence;
	}

public:
	short getHardness() {
		return _hardness;
	}
	
	int getResielence() {
		return _resielence;
	}
}
;
#endif