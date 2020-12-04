#include "Rectangle.h"

Rectangle::Rectangle()
{
	vertex = new Point[amount];
}

Rectangle::Rectangle(vector <Point> vertices)
{
	if (vertices.size() != 4) throw ShapeException();
	vertex = new Point[amount];
	for (unt i = 0; i < amount; i++)
		vertex[i] = vertices[i];
}

Rectangle::~Rectangle()
{
	delete[] vertex;
}

void Rectangle::set(unt vertice, Point point)
{
	if (vertice >= amount) throw ShapeException();
	vertex[vertice] = point;
}

Point Rectangle::get(unt vertice)
{
	if (vertice >= amount) throw ShapeException();
	return vertex[vertice];
}

const double Rectangle::Perimeter()
{
	double p = 0;
	for (unt i = 0; i < amount / 2; i++)
		p += vertex[i].dist(vertex[(i + 1) % amount]);
	return p * 2;
}

const double Rectangle::Area()
{
	return vertex[0].dist(vertex[1]) * vertex[1].dist(vertex[2]);
}

string Rectangle::Type()
{
	return "Rectangle";
}