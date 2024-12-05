//#include <iostream>
//
//using namespace std;
//
//// 常函数
//// 成员函数后加const 后我们称这个函数为常函数
//// 常函数内不可以修改成员属性
//// 成员属性声明时加关键字mutable后，在常函数中依然可以修改
//
//// 常对象
//// 声明对象前加const 称该对象为常对象
//// 常对象只能调用常函数
//
//class Person
//{
//public:
//	// this 指针的本质， 是指针常量， 指针的指向是不可以修改的
//	// const Person * const this;
//	// 在成员函数后面加 const ，修饰的 this 指向， 让指针指向的值也不可以修改
//	void ShowPerson() const // 有了const之后就不可能修改成员变量
//	{
//		_b = 100;
//	}
//
//	void func()
//	{
//
//	}
//	int _a;
//	mutable int _b; // 加上 mutable 关键字，就能在常函数中修改成员变量
//};
//
//// 常对象
//void test02()
//{
//	const Person p;// 在对象前加 const ,变为常对象
//	p._a = 100;// 对象的属性不能修改
//	p._b = 100;// mutable 修饰的成员变量能修改
//	// 常对象只能调用常函数
//	p.ShowPerson();
//	//p.func(); 不能调用普通成员函数，因为普通成员函数可以修改属性
//}
//int main()
//{
//	return 0;
//}