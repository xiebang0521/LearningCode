#include <iostream>
#include <string>

using namespace std;

// 1.指定传入的类型
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->_age = age;
		this->_name = name;
	}

	void showPerson()
	{
		cout << "name : " << this->_name << " age : " << this->_age << endl;
	}
	T1 _name;
	T2 _age;
};
// 2.参数模板化
// 3.整个类模板化

void printPerson1(Person<string, int> &p)
{
	p.showPerson();
}
void test01()
{
	Person<string, int> p("tom", 100);
	printPerson1(p);
}

template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();
	cout << "T1 TYPE IS" << typeid(T1).name() << endl;
	cout << "T2 TYPE IS" << typeid(T2).name() << endl;
}



void test02()
{
	Person<string, int> p("john", 20);
	printPerson2(p);
}
template<class T>
void printPerson3(T& p)
{
	p.showPerson();
	cout << "T的数据类型" << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int> p("Bob", 23);
	printPerson3(p);
}
int main()
{
	test03();
	return 0;
}