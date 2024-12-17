//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// 纯虚函数
//// virtual 返回类型 函数名 （参数列表）= 0;
//// 当类中有了纯虚函数，这个类也称为抽象类
//// 抽象类的特点：
//// 1.无法实例化对象
//// 2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//
//class Base
//{
//public:
//	//纯虚函数
//	// 只要一个纯虚函数，这个类称为抽象类
//	// 抽象类特点：
//	// 1无法实例化对象
//	// 2.抽象类的子类，必须要重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func函数调用" << endl;
//	}
//};
//int main()
//{
//	//Base b;
//	//new Base;
//	// 抽象类无法实例化对象
//	//Son s;
//	Base* base = new Son;
//	base->func();
//	return 0;
//}