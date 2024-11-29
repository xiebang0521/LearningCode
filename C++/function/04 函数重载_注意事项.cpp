#include <iostream>

using namespace std;

void func(int	&a)
{
	cout << "func (int &a)调用" << endl;
}

void func(const int& a)
{
	cout << "func(const int &a)调用" << endl;
}

// 2.函数重载碰到默认参数

void func2(int a)
{
	cout << "func2(int a)调用" << endl;
}

//void func2(int a, int b) // 这样构成重载，当变成缺省参数的时候
//{
//	cout << "func2(int a)调用" << endl;
//}

void func2(int a, int b = 10)// 此时有二义性不构成重载
{
	cout << "func2(int a, int b = 10)调用" << endl;
}
int main()
{
	//int a = 10;
	//func(a);

	//func(10); // int &a = 10; 这是不合法的
	// const int &a = 10;  合法的代码
	// 所以 加const 和 不加 cosnt 可以构成重载

	func2(10,20);// 函数重载碰到默认参数，出现了二义性，报错，避免出现这样的情况


	return 0;
}