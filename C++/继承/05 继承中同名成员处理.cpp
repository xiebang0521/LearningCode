//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		_a = 10;
//	}
//
//	void func()
//	{
//		cout << "Base - func() ����" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a) ����" << endl;
//	}
//	int _a;
//};
//
//class Son : public Base
//{
//public:
//
//	Son()
//	{
//		_a = 20;
//	}
//	int _a;
//
//	void func()
//	{
//		cout << "Son - func() ����" << endl;
//	}
//
//
//};
//
//// ͬ����Ա�Ĵ���ʽ
//void test01()
//{
//	Son s;
//	cout << s._a << endl;
//	cout << s.Base::_a << endl;
//}
//
//// ͬ����Ա�����Ĵ���ʽ ����ͨ����������, 
//// �����г��ֺ͸���ͬ���ĳ�Ա�����������ͬ�����������ص�����������ͬ����Ա����
//// �������ʵ����౻���ص�ͬ����Ա��������Ҫ��������
//void test02()
//{
//	Son s;
//	s.func();
//	s.Base::func();
//	s.Base::func(1);
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}