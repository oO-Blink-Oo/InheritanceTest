#pragma once
#include "Shapes.h"

class Triangle : public Shapes
{
public:
	Triangle(string name = "Triangle") : Triangle::_name(name) {}

	float getArea(float base, float height);
	float getPerimeter(float edge1, float edge2, float edge3);

	string getName() { return _name; }

private:
	float _base;
	float _height;
	float _area;
	string _name;
};
