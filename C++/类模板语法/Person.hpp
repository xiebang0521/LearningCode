#pragma once
#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void showPerson();
	T1 _Name;
	T2 _Age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->_Age = age;
	this->_Name = name;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "name: " << this->_Name << " age: " << this->_Age << endl;
}