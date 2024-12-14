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
//		cout << "Base构造函数" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base析构函数" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "Son析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	Son s1;
//}
//// 调用顺序是Base的构造函数 Son的构造函数 Son的析构函数 Base的析构函数
//int main()
//{
//	test01();
//	return 0;
//}