//#include <iostream>
//
//using namespace std;
//
//// 函数模板,将类型参数化
//
//// 整形和浮点数的交换函数
//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapDouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
//
//template<typename T>
//void MySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	swapInt(a, b);
//	cout << "a = " << a << " b = " << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	swapDouble(c, d);
//	cout << "c = " << c << " d = " << d << endl;
//}
//
//// 利用函数模板交换
//// 两种方式使用函数模板
//// 1.自动类型推到 必须推到出一样的数据类型
//// 2.显示指定类型
//void test02()
//{
//	int a = 10;
//	int b = 20;
//	// 1.自动类型推到
//	MySwap(a, b);
//	cout << "a = " << a << " b = " << b << endl;
//	// 2.显示指定类型
//	double c = 1.1;
//	double d = 2.2;
//	MySwap<double>(c, d);
//	cout << "c = " << c << " d = " << d << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}