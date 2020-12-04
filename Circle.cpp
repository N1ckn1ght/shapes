#include "Circle.h"

Circle::Circle(Point new_center, double new_radius)
{
	if (new_radius < 0) throw ShapeException();
	center = new_center;
	radius = new_radius;
}

Circle::Circle()
{
	Circle(Point(0, 0), 1);
}

void Circle::set_center(Point new_center)
{
	center = new_center;
}

void Circle::set_radius(double new_radius)
{
	if (new_radius < 0) throw ShapeException();
	radius = new_radius;
}

Point Circle::get_center()
{
	return center;
}

const double Circle::get_radius()
{
	return radius;
}

const double Circle::Area()
{
	if (radius <= 0) return 0;
	return pow(radius, 2) * atan(1) * 4;
}

const double Circle::Perimeter()
{
	if (radius <= 0) return 0;
	return radius * atan(1) * 8;
}

string Circle::Type()
{
	return "Circle";
}