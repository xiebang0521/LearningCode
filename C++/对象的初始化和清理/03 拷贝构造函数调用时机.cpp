//#include <iostream>
//
//using namespace std;
//

//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person 默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		_age = age;
//		cout << "Person 有参构造函数调用" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		_age = p._age;
//		cout << "Person 拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person 这是一个析构函数" << endl;
//	}
//
//	int _age;
//};
//
////1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2的年龄为： " << p2._age << endl;
//}
////2.值传递的方式给函数参数传值
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);
//}
////3.值方式返回局部对象
//Person doWork1()
//{
//	Person p1;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork1();
//}
//int main()
//{
//	test03();
//
//	return 0;
//}