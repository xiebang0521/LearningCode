//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		age = age; // ȫ����Ϊ���β�age
//
//		this->age = age;
//	}
//
//	Person&  PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//// 1.������Ƴ�ͻ
//
//void test01()
//{
//	Person p1(18);
//	cout << "p1������Ϊ�� " << p1.age << endl;
//}
//// 2. ���ض����� *this
//
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2������Ϊ�� " << p2.age << endl;
//}
//int main()
//{
//	test02();
//	return 0;
//}