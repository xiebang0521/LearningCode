//#include <iostream>
//#include <string>
//using namespace std;
//
//template<class T1, class T2>
//class Person;
//// 2.全局函数类外实现
//// 无法链接的外部命令
////  普通函数，却是函数模板的实现
//// 如果全局函数， 是类外实现，需要让编译器提前知道这个函数的存在
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "name: " << p._Name << " age: " << p._Age << endl;
//}
//
//template<class T1, class T2>
//class Person
//{
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "name: " << p._Name << " age: "<< p._Age << endl;
//	}
//
//	//friend void printPerson2(Person<T1, T2> p);
//	// 需要加空参数列表
//	// 如果全局函数， 是类外实现，需要让编译器提前知道这个函数的存在
//	friend void printPerson2<>(Person<T1, T2> p);
//public:
//	Person(T1 name, T2 age)
//	{
//		this->_Name = name;
//		this->_Age = age;
//	}
//private:
//	T1 _Name;
//	T2 _Age;
//};
//
//// 1.全局函数在类内实现
//void test01()
//{
//	Person<string, int> p("tom", 20);
//	printPerson(p);
//}
//
//
//
//void test02()
//{
//	Person<string, int> p("Jeery", 18);
//	printPerson2(p);
//}
//int main()
//{
//	test02();
//	return 0;
//}