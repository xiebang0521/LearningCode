//#include <iostream>
//
//using namespace std;
//
//// ����ģ��,�����Ͳ�����
//
//// ���κ͸������Ľ�������
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
//// ���ú���ģ�彻��
//// ���ַ�ʽʹ�ú���ģ��
//// 1.�Զ������Ƶ� �����Ƶ���һ������������
//// 2.��ʾָ������
//void test02()
//{
//	int a = 10;
//	int b = 20;
//	// 1.�Զ������Ƶ�
//	MySwap(a, b);
//	cout << "a = " << a << " b = " << b << endl;
//	// 2.��ʾָ������
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