//#include <iostream>
//
//using namespace std;
//
//// 浅拷贝的时候，若拷贝的时指针，当其中一个对象改变指针内的值时，另一个对象的值也会被改变
//// 深拷贝， 就是在开辟空间，把值复制过来
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person 的默认构造函数调用" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		_age = p._age;
//		//_height = p._height;// 编译器默认写的代码
//		_height = new int(*p._height);
//		cout << "Person 的拷贝构造函数调用" << endl;
//	}
//
//	Person(int age, int height)
//	{
//		//*_height = height;
//		_height = new int(height);
//		_age = age;
//		cout << "Person 的有参构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		if (_height != NULL)
//		{
//			delete _height;
//			_height = NULL;
//		}
//		cout << "Person 的析构函数调用" << endl;
//	}
//
//	int _age;
//	int* _height;
//
//};
//void test01()
//{
//	Person p1(18,160);
//
//	cout << "p1的年龄为 ：" << p1._age <<  " 身高为：" << *p1._height << endl;
//
//	Person p2(p1);
//	cout << "p2的年龄为 ：" << p2._age << " 身高为：" << *p2._height << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}