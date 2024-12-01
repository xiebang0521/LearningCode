#include "Circle.h"
void Circle::setR(int r)
{
	_r = r;
}

int Circle::getR()
{
	return _r;
}

void Circle::setCenter(Point& p)
{
	_Center = p;
}

Point& Circle::getCenter()
{
	return _Center;
}
