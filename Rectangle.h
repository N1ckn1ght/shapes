#pragma once
#include "Shape.h"
#include <vector>

typedef unsigned int unt;
using namespace std;

class Rectangle : public Shape
{
private:
	const unt amount = 4;
	Point* vertex;
public:
	Rectangle();
	Rectangle(vector <Point> vertices);
	~Rectangle();
	void set(unt vertice, Point point);
	Point get(unt vertice);
	const double Area();
	const double Perimeter();
	string Type();
};