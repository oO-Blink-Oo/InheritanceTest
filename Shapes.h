#pragma once

using namespace std;

class Shapes
{
public:
	Shapes(string name = "Shapes", float area = 0.0, float perimeter = 0.0, float length = 0.0, float width = 0.0, int edges = 3) : _name(name), _area(area), _perimeter(perimeter), _length(length), _width(width), _numOfEdges(edges) {}

	virtual float getArea(float length, float width);
	virtual float getPerimeter(int numOfEdges);
	
	virtual string getName() { return _name; }

private:
	string _name;
	float _length, _width, _area, _perimeter;
	
	int _numOfEdges;
};


