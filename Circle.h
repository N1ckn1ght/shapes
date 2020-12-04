#pragma once
#include "Shape.h"

typedef unsigned int unt;
using namespace std;

class Circle : public Shape
{
private:
	Point center;
	double radius;
public:
	Circle(Point new_center, double new_radius = 1);
	Circle();
	void set_center(Point new_center);
	void set_radius(double new_radius);
	Point get_center();
	const double get_radius();
	const double Area();
	const double Perimeter();
	string Type();
};