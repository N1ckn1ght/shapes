#pragma once
#include "Shape.h"
#include <vector>

typedef unsigned int unt;
using namespace std;

class Triangle : public Shape
{
private:
	const unt amount = 3;
	Point* vertex;
public:
	Triangle();
	Triangle(vector <Point> vertices);
	~Triangle();
	void set(unt vertice, Point point);
	Point get(unt vertice);
	const double Area();
	const double Perimeter();
	string Type();
};