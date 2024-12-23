#include <iostream>
#include <string>
using namespace std;

// ģ��ľ�����
// ģ�岢�������ܵģ���Щ�ض��������ͣ���Ҫ�þ��廯��ʽ������ʵ��

// �Ա��������������Ƿ����

class Person
{
public:
	Person(string name, int age)
	{
		_name = name;
		_age = age;
	}

	bool operator==(Person p1)
	{
		return p1._age == this->_age && p1._name == this->_name;
	}
	string _name;
	int _age;
};

template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//// ���þ��廯�� Person �İ汾ʵ�ִ��룬���廯���ȵ���
//template<> bool myCompare(Person& a, Person& b)
//{
//	if (a._age == b._age && a._name == b._name)
//	{
//		return true;
//	}
//	return false;
//}
void test01()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);

	if (ret)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}

void test02()
{
	Person p1("tom", 10);
	Person p2("tom", 10);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}
int main()
{
	test02();
	return 0;
}
