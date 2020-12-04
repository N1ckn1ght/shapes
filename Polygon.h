#pragma once
#include "Shape.h"
#include <vector>

typedef unsigned int unt;
using namespace std;

class Polygon : public Shape
{
private:
	unt amount;
	Point* vertex;
public:
	Polygon(unt new_amount = 4);
	Polygon(vector <Point> vertices);
	~Polygon();
	void set(unt vertice, Point point);
	Point get(unt vertice);
	const double Area();
	const double Perimeter();
	string Type();
	const unt size();
	void resize(unt new_amount);
};