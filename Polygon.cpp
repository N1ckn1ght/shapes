#include "Polygon.h"

Polygon::Polygon(unt new_amount)
{
	amount = new_amount;
	vertex = new Point[amount];
}

Polygon::Polygon(vector <Point> vertices)
{
	if (vertices.size() == 0) throw ShapeException();
	amount = vertices.size();
	vertex = new Point[amount];
	for (unt i = 0; i < amount; i++)
		vertex[i] = vertices[i];
}

Polygon::~Polygon()
{
	delete[] vertex;
}

void Polygon::set(unt vertice, Point point)
{
	if (vertice >= amount) throw ShapeException();
	vertex[vertice] = point;
}

Point Polygon::get(unt vertice)
{
	if (vertice >= amount) throw ShapeException();
	return vertex[vertice];
}

const double Polygon::Perimeter()
{
	double p = 0;
	for (unt i = 0; i < amount; i++)
		p += vertex[i].dist(vertex[(i + 1) % amount]);
	return p;
}

const double Polygon::Area()
{
	double f = 0, s = 0;
	for (unt i = 0; i < amount; i++)
	{
		f += vertex[i].x * vertex[(i + 1) % amount].y;
		s += vertex[(i + 1) % amount].x * vertex[i].y;
	}
	return abs(f - s);
}

string Polygon::Type()
{
	return "Polygon";
}

const unt Polygon::size()
{
	return amount;
}

void Polygon::resize(unt new_amount)
{
	if (new_amount == 0) throw ShapeException();
	else if (new_amount != amount)
	{
		Point* tmp;
		tmp = new Point[new_amount];
		for (unt i = 0; i < min(amount, new_amount); i++)
			tmp[i] = vertex[i];
		delete[] vertex;
		amount = new_amount;
		vertex = tmp;
	}
}