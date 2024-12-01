#pragma once
#include "Point.h"
class Circle
{

public:
	void setR(int r);

	int getR();

	void setCenter(Point& p);

	Point& getCenter();


private:
	int _r;
	Point _Center;
};