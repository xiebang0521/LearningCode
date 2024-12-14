//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//		_a = a;
//		_b = b;
//	}
//
//private:
//
//	int _a;
//	int _b;
//
//	// 利用成员函数来重载 左移运算符
//	// 不会利用成员函数重载<< 运算符
//	//void operator<<(Person &p)
//	//{
//	//	cout << "p._a = " << p._a << "p._b = " << p._b << endl;
//	//}
//};
//
//// 只能利用全局函数重载左移运算符
//ostream& operator<<(ostream &cout ,Person &p)
//{
//	cout << "_a = " << p._a << "_b = " << p._b << endl;
//	return cout;
//}
//
//void test01()
//{
//	Person p1(10,10);
//
//	cout << p1 << p1;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
//
//
