//#include <iostream>
//
//using namespace std;
//
//// 构造函数的分类以及调用
//// 分类  按参数分类 ： 无参构造 和 有参构造
//// 按类型分类 ： 普通构造  和 拷贝构造
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的无参构造函数调用" << endl;
//	}
//
//	Person(int a)
//	{
//		_age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	// 拷贝构造函数
//	Person(const Person& p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		_age = p._age;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int _age;
//};
//
//void test01()
//{
//	// 调用默认构造函数的时候，不要加()
//	// 因为Person p1()会被认为是函数申明
//	//Person p1; //默认构造函数调用
//	//Person p2(10);// 有参构造函数
//
//	//// 拷贝构造函数
//	//Person p3(p2);
//
//	//cout << "p2的年龄为：" << p2._age << endl;
//	//cout << "p3的年龄为：" << p3._age << endl;
//
//	//2.显式法
//
//	Person p1;
//	Person p2 = Person(10); // 有参构造
//	Person p3 = Person(p2); // 拷贝构造
//
//	// 匿名对象
//
//	//Person(10); // 当前行执行结束后，系统就会立即回收掉匿名对象
//	// 不要利用拷贝构造函数 初始化匿名对象 
//	Person(p3); // 编译器会认为 == Person p3;
//
//	cout << "aaaaaa" << endl;
//
//	//3.隐式转换法
//	Person P4 = 10; // 相当于 Person p4 = Person(10);
//
//}
//// 调用 
//// 括号法
//// 显式法
//// 隐式转换法
//int main()
//{
//	test01();
//
//	return 0;
//}