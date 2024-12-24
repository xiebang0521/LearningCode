//#include <iostream>
//#include <string>
//// 1.包含.cpp
////#include "Person.cpp"
//// 2.包含.hpp 常用
//#include "Person.hpp"
//using namespace std;
//// 问题 ：类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
//
////template<class T1, class T2>
////class Person
////{
////public:
////	Person(T1 name, T2 age);
////	void showPerson();
////	T1 _Name;
////	T2 _Age;
////};
//
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age)
////{
////	this->_Age = age;
////	this->_Name = name;
////}
////
////template<class T1, class T2>
////void Person<T1, T2>::showPerson()
////{
////	cout << "name: " << this->_Name << " age: " << this->_Age << endl;
////}
//
//void test01()
//{
//	Person<string, int> p("Jerry", 18);
//	p.showPerson();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}