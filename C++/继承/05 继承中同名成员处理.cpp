//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		_a = 10;
//	}
//
//	void func()
//	{
//		cout << "Base - func() 调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a) 调用" << endl;
//	}
//	int _a;
//};
//
//class Son : public Base
//{
//public:
//
//	Son()
//	{
//		_a = 20;
//	}
//	int _a;
//
//	void func()
//	{
//		cout << "Son - func() 调用" << endl;
//	}
//
//
//};
//
//// 同名成员的处理方式
//void test01()
//{
//	Son s;
//	cout << s._a << endl;
//	cout << s.Base::_a << endl;
//}
//
//// 同名成员函数的处理方式 都是通过作用域处理, 
//// 子类中出现和父类同名的成员函数，子类的同名函数会隐藏掉父类中所有同名成员函数
//// 如果想访问到父类被隐藏的同名成员函数，需要加作用域
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	s.Base::func(1);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}