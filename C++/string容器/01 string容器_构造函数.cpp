//#include <iostream>
//#include <string>
//using namespace std;
//
//
///*
//* 本质是一个类， 内部维护一个char *的字符串数组
//	1. string() // 创建一个空字符串
//	2. string(const char* s) // 使用字符串 s初始化
//	3. string(const string& str) 使用一个string对象初始化另一个string对象
//	4. string(int n, char c ) // 使用 n个字符c初始化
//*/
//void test01()
//{
//	string s1; // 默认构造
//	const char* str = "hello world";
//	string s2(str);
//
//	cout << "s2 = " << s2 << endl;
//
//	string s3(s2);
//	cout << "s3 = " << s3 << endl;
//
//	string s4(10, 'a');
//	cout << "s4 = " << s4 << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}