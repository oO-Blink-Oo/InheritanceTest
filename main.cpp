#include <iostream>
#include <string>
//#include "Shapes.h"
#include "triangle.h"

using namespace std;

/*
Shapes:
- nameOfShape
- length
- width
- # edges
- area()
- perimeter()
*/

int main() {
	/*Shapes myShape;

	cout << "This shape's name is " << myShape.getName() << endl;
	cout << "Area: " << myShape.getArea(2, 3) << endl;
	cout << "Perimeter: " << myShape.getPerimeter(2) << endl;
*/
	cout << endl << endl;

	Triangle myTriangle;
	cout << "This shape's name is " << myTriangle.getName() << endl;
	cout << "Area: " << myTriangle.getArea(1, 1) << endl;
	cout << "Perimeter: " << myTriangle.getPerimeter(2,2,2) << endl;

	return 0;
}