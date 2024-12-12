//#include <iostream>
//
//#include <string>
//
//using namespace std;
//
//class Person
//{
//
//
//public:
//
//	Person(string name, int age)
//	{
//		_age = age;
//		_name = name;
//	}
//		
//
//	bool operator==(Person &p)
//	{
//		return (this->_age == p._age) && (this->_name == p._name);
//	}
//	int _age;
//	string _name;
//};
//
//void test01()
//{
//	Person p1("Tom", 11);
//	Person p2("Tom", 12);
//	Person p3("Tom", 11);
//
//	cout << (p1 == p2) << endl << (p1 == p3) << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}