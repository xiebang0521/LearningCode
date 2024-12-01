#include <iostream>

using namespace std;

// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态的成员变量
class Person
{
public:
	// 静态成员函数 也是有访问权限
	static void func()
	{
		_a = 100;//静态的成员函数可以访问静态的成员变量
		//_b = 200; //访问非静态成员变量的时候就会报错，不知道改变的是哪个对象的变量
		cout << "static void func调用" << endl;
	}

	static int _a;//静态成员变量
	int _b;
};

int Person::_a = 0;
void test01()
{
	//1.通过对象访问
	Person p;
	p.func();
	//2.通过类名访问

	Person::func();
}
int main()
{
	test01();
	return 0;
}