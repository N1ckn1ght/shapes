#include "Point.h"
#include <cmath>

Point::Point(double tx, double ty)
{
	x = tx;
	y = ty;
}

Point::Point()
{
	Point(0, 0);
}

double Point::dist(Point a)
{
	return sqrt(pow((this->x - a.x), 2) + pow((this->y - a.y), 2));
}