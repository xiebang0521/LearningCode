//#include <iostream>
//using namespace std;
//
//// 函数模板注意事项
//
//template<typename T>// typename 可以用class替换
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//// 1.自动类型推到，必须推导出一致的数据类型T才可以使用
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b); // 数据类型一致
//
///*	mySwap(a, c);*/ // 错误 推导不出一致的数据类型，才可以使用
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//
//// 2.模板必须要确定出T的数据类型，才可以使用
//template<class T>
//void func()
//{
//	cout << "func 调用" << endl;
//}
//
//void test02()
//{
//	//func();// 错误，没有确定T的数据类型
//
//	func<int>();
//}
//
//int main()
//{
//	test02();
//	return 0;
//}