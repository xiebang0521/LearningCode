//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Base1
//{
//public:
//	Base1()
//	{
//		_a = 100;
//	}
//	int _a;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		_a = 200;
//	}
//	int _a;
//};
//
//class Son : public Base1, public Base2
//{
//public:
//	Son()
//	{
//		_c = 300;
//		_d = 400;
//	}
//	int _c;
//	int _d;
//};
//
//void test01()
//{
//	Son s;
//	cout << sizeof(s) << endl;
//	// 当父类中出现同名的变量时，需要加作用域
//	cout << "Base1 ::"  << s.Base1::_a << endl;
//	cout << "Base2 ::" << s.Base2::_a << endl;
//}
//int main() 
//{
//	test01();
//	return 0;
//}