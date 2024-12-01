//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	//Person(int a, int b, int c)
//	//{
//	//	_a = a;
//	//	_b = b;
//	//	_c = c;
//
//	//	cout << "Person 的有参构造函数调用" << endl;
//	//}
//	Person(int a, int b, int c) : _a(a), _b(b), _c(c)
//	{
//
//	}
//
//	~Person()
//	{
//		cout << "Person 的析构函数调用" << endl;
//	}
//
//	int _a;
//	int _b;
//	int _c;
//
//};
//
//void test01()
//{
//	//Person p(10, 20, 30);
//	//cout << "_a = " << p._a << endl;
//	//cout << "_b = " << p._b << endl;
//	//cout << "_c = " << p._c << endl;
//	Person p(30,20,10);
//	cout << "_a = " << p._a << endl;
//	cout << "_b = " << p._b << endl;
//	cout << "_c = " << p._c << endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}