//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// ���麯��
//// virtual �������� ������ �������б�= 0;
//// ���������˴��麯���������Ҳ��Ϊ������
//// ��������ص㣺
//// 1.�޷�ʵ��������
//// 2.���������д�������еĴ��麯��������Ҳ���ڳ�����
//
//class Base
//{
//public:
//	//���麯��
//	// ֻҪһ�����麯����������Ϊ������
//	// �������ص㣺
//	// 1�޷�ʵ��������
//	// 2.����������࣬����Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func��������" << endl;
//	}
//};
//int main()
//{
//	//Base b;
//	//new Base;
//	// �������޷�ʵ��������
//	//Son s;
//	Base* base = new Son;
//	base->func();
//	return 0;
//}