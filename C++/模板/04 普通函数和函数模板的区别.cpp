//#include <iostream>
//using namespace std;
//
//// 1.普通函数调用可以发生隐式类型转换
//// 2.函数模板 用自动类型推导，不可以发生隐式类型转换
//// 3.函数模板 用显示指定类型，可以发生隐式类型转换
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
//// 函数模板
//template<class T>
//T MyAdd02(T a, T b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';// 字符变量隐式转换成整形变量
//	cout << myAdd01(a, c) << endl;
//
//	//cout << MyAdd02(a, c) << endl; // 错误！自动类型推导不能发生隐式类型转换
//
//	cout << MyAdd02<int>(a, c) << endl;// 显示指定类型， 会发生隐式类型转换
//}
//int main()
//{
//	test01();
//	return 0;
//}