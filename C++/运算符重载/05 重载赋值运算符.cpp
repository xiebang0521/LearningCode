//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// ��ֵ���������
//class Person
//{
//
//public:
//	Person(int age)
//	{
//		_age = new int(age);
//	}
//	~Person()
//	{
//		if (_age != NULL)
//		{
//			delete _age;
//			_age = NULL;
//		}
//	}
//
//	Person& operator=(Person& p)
//	{
//		if (_age != NULL)
//		{
//			delete _age;
//			_age = NULL;
//		}
//
//		_age = new int(*p._age);
//		return *this;
//	}
//
//	int *_age;
//};
//
//// ������������֮�� ��p2ָ�����p1���_age ��p1 �����ͷ�_age ���Իᵼ��p2 �ͷŵ�ʱ����ǷǷ�����
//// ������ǳ����������
//// ��������������
//void test01()
//{
//	Person p1(18);
//	cout << "p1������Ϊ���٣�" << *p1._age << endl;
//
//	Person p2(20);
//	cout << "p2������Ϊ���٣�" << *p2._age << endl;
//
//	Person p3(25);
//	 p3 = p2 = p1; // ��ֵ����
//	cout << "p2������Ϊ���٣�" << *p3._age << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}