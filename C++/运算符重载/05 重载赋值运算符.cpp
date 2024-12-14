//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// 赋值运算符重载
//class Person
//{
//
//public:
//	Person(int age)
//	{
//		_age = new int(age);
//	}
//	~Person()
//	{
//		if (_age != NULL)
//		{
//			delete _age;
//			_age = NULL;
//		}
//	}
//
//	Person& operator=(Person& p)
//	{
//		if (_age != NULL)
//		{
//			delete _age;
//			_age = NULL;
//		}
//
//		_age = new int(*p._age);
//		return *this;
//	}
//
//	int *_age;
//};
//
//// 有了析构函数之后 ，p2指向的是p1里的_age ，p1 会先释放_age 所以会导致p2 释放的时候就是非法访问
//// 深拷贝解决浅拷贝的问题
//// 加了深拷贝代码后解决
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄为多少：" << *p1._age << endl;
//
//	Person p2(20);
//	cout << "p2的年龄为多少：" << *p2._age << endl;
//
//	Person p3(25);
//	 p3 = p2 = p1; // 赋值操作
//	cout << "p2的年龄为多少：" << *p3._age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}