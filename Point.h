#pragma once

class Point
{
public:
	Point(double tx, double ty);
	Point();
	double x;
	double y;
	double dist(Point a);
};