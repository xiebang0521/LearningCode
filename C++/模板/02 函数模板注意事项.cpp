//#include <iostream>
//using namespace std;
//
//// ����ģ��ע������
//
//template<typename T>// typename ������class�滻
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//// 1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b); // ��������һ��
//
///*	mySwap(a, c);*/ // ���� �Ƶ�����һ�µ��������ͣ��ſ���ʹ��
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
//
//// 2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<class T>
//void func()
//{
//	cout << "func ����" << endl;
//}
//
//void test02()
//{
//	//func();// ����û��ȷ��T����������
//
//	func<int>();
//}
//
//int main()
//{
//	test02();
//	return 0;
//}