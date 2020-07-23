#include <iostream>
#include <string>
#include "Shapes.h"

using namespace std;

float Shapes::getArea(float length, float width)
{
	float area = length * width;
	return area;
}

float Shapes::getPerimeter(int numOfEdges)
{
	float perimeter = 4.0 * numOfEdges;
	return perimeter;
}
