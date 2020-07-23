#include <iostream>
#include <string>
#include "triangle.h"

float Triangle::getArea(float base, float height)
{
	float area = .5 * base * height;
	return area;
}

float Triangle::getPerimeter(float edge1, float edge2, float edge3)
{
	float perimeter = edge1 + edge2 + edge3;
	return perimeter;
}
