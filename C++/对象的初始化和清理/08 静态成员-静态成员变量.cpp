//#include <iostream>
//
//using namespace std;
//
//// 静态成员变量
//// 所有对象共享一份数据
//// 在编译阶段分配内存
//// 类内声明，类外初始化
//
//
//// 静态成员函数
//// 所有对象共享同一个函数
//// 静态成员函数只能访问静态的成员变量
//class Person
//{
//public:
//	//1.所有对象都共享同一份数据
//	//2.编译阶段就分配内存
//	//3.类内声明，类外初始化操作
//	static int _a;
//
//private :
//
//	static int _b;//类外访问不到，该私有静态成员变量
//};
//
//int Person::_a = 100;
//int Person::_b = 200;
//
//void test01()
//{
//	Person p;
//	cout << p._a << endl;
//
//	Person p2;
//	p2._a = 200;
//
//	cout << p._a << endl;
//}
//
//void test02()
//{
//	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//	// 因此静态成员变量有两种访问方式
//
//	//1.通过对象进行访问
//	Person p;
//	cout << p._a << endl;
//	//2.通过类名进行访问
//	cout << Person::_a << endl;
//	//cout << Person::_b << endl;
//}
//int main()
//{
//	test02();
//	return 0;
//}