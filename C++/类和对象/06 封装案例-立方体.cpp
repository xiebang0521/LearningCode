//#include <iostream>
//#include <math.h>
//
//
////立方体类设计
//// 1.创建立方体类
//// 2.设计属性
//// 3.设计行为 获取立方体面积和体积
//// 4.分别利用全局函数和成员函数 判断两个立方体是否相等
//using namespace std;
//
//class Cube
//{
//public:
//	void setHight(int h)
//	{
//		_h = h;
//	}
//
//	void setWide(int w)
//	{
//		_w = w;
//	}
//
//	void setLength(int l)
//	{
//		_l = l;
//	}
//
//	int getHeight(void)
//	{
//		return _h;
//	}
//
//	int getWide(void)
//	{
//		return _w;
//	}
//
//	int getLength(void)
//	{
//		return _l;
//	}
//
//	int calculateS()
//	{
//		return 2 * (_l * _h + _w*_l + _w*_h);
//	}
//
//	int calculateV()
//	{
//		return _l * _w * _h;
//	}
//
//	// 利用成员函数判断两个立方体是否相等
//
//	bool isEqualClass(Cube& c)
//	{
//		return _l == c.getLength() && _w == c.getWide() && _h == c.getHeight();
//	}
//
//
//private:
//	int _l;
//	int _w;
//	int _h;
//
//};
//
//// 利用全局函数判断， 两个立方体是否相等
//bool isequal(Cube &c1, Cube &c2)
//{
//	return (c1.getHeight() == c2.getHeight())
//		&& (c1.getLength() == c2.getLength())
//		&& (c1.getWide() == c2.getWide());
//}
//
//int main()
//{
//	Cube c1;
//	c1.setLength(10);
//	c1.setWide(10);
//	c1.setHight(10);
//
//	Cube c2;
//	c2.setLength(10);
//	c2.setWide(10);
//	c2.setHight(10);
//	
//	//bool ret = isequal(c1, c2);
//	bool ret = c1.isEqualClass(c2);
//	if (ret)
//	{
//		cout << "这是一个成员函数判断的结果：c1 和 c2 是相等的" << endl;
//	}
//	else
//	{
//		cout << "这是一个成员函数判断的结果：c1 和 c2 是不相等的" << endl;
//	}
//	//cout << "c1的面积为： " << c1.calculateS() << endl;
//	//cout << "c1的体积为： " << c1.calculateV() << endl;
//	return 0;
//}