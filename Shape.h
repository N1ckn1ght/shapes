#pragma once
#include "Point.h"
#include <string>

using namespace std;

class ShapeException {};

class Shape
{
public:
	virtual const double Perimeter() = 0;
	virtual const double Area() = 0;
	virtual string Type() = 0;
};