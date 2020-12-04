#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Polygon.h"
#include "Rectangle.h"

using namespace std;

int main()
{
	Polygon* polygon = new Polygon({ Point(0, 0), Point(3, 0), Point(5, 5), Point(0, 3), Point(0, 0) });
	Rectangle* rectangle = new Rectangle({ Point(2, 2), Point(2, 4), Point(4, 4), Point(4, 2) });
	Circle* circle = new Circle(Point(0, 0), 4);
	Triangle* triangle = new Triangle({ Point(0, 0), Point(5, 5), Point(10, 0) });
	vector <Shape*> shapes({ polygon, rectangle, circle, triangle });
	double SHAPES_AREA = 0;
	for (auto i : shapes) SHAPES_AREA += i->Area();
	cout << SHAPES_AREA;
}