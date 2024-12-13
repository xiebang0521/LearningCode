//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Base
//{
//public:
//	static void func();
//	static int _a;
//};
//
//class Son : public Base
//{
//public:
//	static void func();
//	static int _a;
//};
//int Base::_a = 100;
//int Son::_a = 200;
//
//void Base::func()
//{
//	cout << "Base::func()" << endl;
//}
//
//void Son::func()
//{
//	cout << "Son::func()" << endl;
//}
//void test01()
//{
//	// 通过对象来访问数据
//	Son s;
//	cout << "s._a " << s._a << endl;
//	cout << "s.Base::_a = " << s.Base::_a << endl;
//
//	// 通过类名访问
//	cout << "Son::_a = " << Son::_a << endl;
//	cout << "Son::Base::_a = " << Son::Base::_a << endl;
//}
//
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//
//	Son::func();
//	Son::Base::func();
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}