//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// 重载自增运算符
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger& myInt);
//
//public:
//	MyInteger()
//	{
//		_num = 0;
//	}
//	// 重载前置++ 运算符
//
//	MyInteger& operator++()
//	{
//		_num++;
//		return *this;
//	} 
//	// 重载后置++ 运算符
//	// int 代表占位参数，可以用于区分前置和后置递增
//	MyInteger operator++(int)
//	{
//		MyInteger temp = *this;
//		_num++;
//		return temp;
//	}
//
//private:
//	int _num;
//};
//
//ostream& operator<<(ostream& cout, MyInteger& myInt)
//{
//	cout << myInt._num << endl;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//	cout << ++(++myint) << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//	cout << (myint++) << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}