#include <iostream>
#include <string>
using namespace std;

// 模板的局限性
// 模板并不是万能的，有些特定数据类型，需要用具体化方式做特殊实现

// 对比两个数据类型是否相等

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

//// 利用具体化的 Person 的版本实现代码，具体化优先调用
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
