//#include <iostream>
//
//using namespace std;
//

//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person Ĭ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age)
//	{
//		_age = age;
//		cout << "Person �вι��캯������" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		_age = p._age;
//		cout << "Person �������캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person ����һ����������" << endl;
//	}
//
//	int _age;
//};
//
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2������Ϊ�� " << p2._age << endl;
//}
////2.ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);
//}
////3.ֵ��ʽ���ؾֲ�����
//Person doWork1()
//{
//	Person p1;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork1();
//}
//int main()
//{
//	test03();
//
//	return 0;
//}