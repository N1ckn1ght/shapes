#include "Triangle.h"

Triangle::Triangle()
{
	vertex = new Point[amount];
}

Triangle::Triangle(vector <Point> vertices)
{
	if (vertices.size() != 3) throw ShapeException();
	vertex = new Point[amount];
	for (unt i = 0; i < amount; i++)
		vertex[i] = vertices[i];
}

Triangle::~Triangle()
{
	delete[] vertex;
}

void Triangle::set(unt vertice, Point point)
{
	if (vertice >= amount) throw ShapeException();
	vertex[vertice] = point;
}

Point Triangle::get(unt vertice)
{
	if (vertice >= amount) throw ShapeException();
	return vertex[vertice];
}

const double Triangle::Perimeter()
{
	double p = 0;
	for (unt i = 0; i < amount; i++)
		p += vertex[i].dist(vertex[(i + 1) % amount]);
	return p;
}

const double Triangle::Area()
{
	double hp = this->Perimeter() / 2;
	double p = hp;
	for (unt i = 0; i < amount; i++)
		p *= hp - vertex[i].dist(vertex[(i + 1) % amount]);
	return sqrt(p);
}

string Triangle::Type()
{
	return "Triangle";
}