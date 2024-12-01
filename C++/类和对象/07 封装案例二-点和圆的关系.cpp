//#include <iostream>
//#include <math.h>
//#include "Point.h"
//#include "Circle.h"
//using namespace std;
//
//// 1.在类中可以让另一个类是本类的成员
//// 如何把一个类拆在不同文件夹中
//
//// 判断点和圆的关系
//
//void isInCircle(Circle& c, Point& p)
//{
//	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())
//		+ (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	int rDistance = c.getR() * c.getR();
//
//	if (distance == rDistance)
//	{
//		cout << "点在圆上 "<< endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "点在圆外 " << endl;
//	}
//	else
//	{
//		cout << "点在圆内 " << endl;
//	}
//}
//int main()
//{
//	Circle c1;
//	Point cp;
//	cp.setX(0);
//	cp.setY(0);
//	c1.setR(10);
//	c1.setCenter(cp);
//	Point p1;
//	p1.setX(0);
//	p1.setY(0);
//
//	isInCircle(c1, p1);
//
//	return 0;
//}