//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// 类对象作为类成员
//
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		_pName = pName;
//		cout << "Phone 的构造函数调用" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone 的析构函数调用" << endl;
//	}
//	string _pName;
//};
//
//class Person
//{
//public:
//
//	Person(string name, string pName):_name(name),_phone(pName)
//	{
//		cout << "Person 的构造函数调用" << endl;
//	}
//	string _name;
//	Phone _phone;
//
//	~Person()
//	{
//		cout << "Person 的析构函数调用" << endl;
//	}
//
//};
//
//// 当其他类对象作为本类成员，构造时候先构造类对象，在构造本身
//// 析构的顺序和构造的顺序是相反的
//void test01()
//{
//	Person p("张三", "苹果MAX");
//	cout << p._name << "拿着：" << p._phone._pName << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}