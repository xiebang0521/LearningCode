//#include <iostream>
//
//using namespace std;
//
////// 自定义了有参构造函数，c++不提供无参构造函数，提供拷贝构造函数
////// 自定义了拷贝构造函数，c++不提供其他构造函数
//
//// 1.创建一个类，c++编译器会给每个类都添加至少三个函数
////	默认构造函数 （空实现）
//// 析构函数		 （空实现）
//// 拷贝构造函数	 （值拷贝）
//
//// 2.自定义了有参构造函数，c++不提供无参构造函数，提供拷贝构造函数
//// 3.自定义了拷贝构造函数，c++不提供其他构造函数
//
//
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person 的默认构造函数调用" << endl;
//	//}
//
//	Person(const Person &p)
//	{
//		_age = p._age;
//		cout << "Person 的拷贝构造函数调用" << endl;
//	}
//
//	//Person(int age)
//	//{
//	//	_age = age;
//	//	cout << "Person 的有参构造函数调用" << endl;
//	//}
//
//	~Person()
//	{
//		cout << "Person 的析构函数调用" << endl;
//	}
//
//	int _age;
//
//};
//
////void test01()
////{
////	Person p(18);
////	//p._age = 18;
////
////	Person p2(p);
////
////	cout << "p2的年龄为：" << p2._age << endl;
////}
//
//void test02()
//{
//	Person p;
//}
//int main()
//{
//	test02();
//	return 0;
//}