/*
	1.可以对内置数据类型以及自定义数据类型的数据进行存储
	2.将数组中的数据存储到堆区
	3.构造函数可以传入数组的容量
	4.提供对应的拷贝构造函数以及operator=防止浅拷贝的问题
	5.提供尾插法和尾删法对数组进行增加和删除
	6.可以通过下标的方式访问数组中的元素
	7.可以获取数组中当前元素个数和数组的容量
*/
#include <iostream>
#include "MyArray.hpp"
using namespace std;

void test01()
{
	MyArray<int> arr1(5);
	MyArray<int> arr2(arr1);
	MyArray<int> arr3(100);
	arr3 = arr1;
}

void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test02()
{
	MyArray<int> arr1(5);
	for (int i = 0; i < 5; i++)
	{
		arr1.PushBack(i);
	}
	cout << "arr1的打印输出为：" << endl;
	printIntArray(arr1);
	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2的打印输出为：" << endl;
	printIntArray(arr2);
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为：" << arr2.getSize() << endl;

	cout << "arr2的打印输出为：" << endl;
	arr2.PopBack();
	printIntArray(arr2);
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为：" << arr2.getSize() << endl;
}

// 测试自定义数据类型
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->_Name = name;
		this->_Age = age;
	}

	string _Name;
	int _Age;
};

void printPeron(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "name: " << arr[i]._Name << " age: " << arr[i]._Age << endl;
	}
}
void test03()
{
	MyArray<Person> arr(10);
	Person p1("tom", 10);
	Person p2("Bob", 11);
	Person p3("jom", 12);
	Person p4("jerry", 13);
	Person p5("conda", 14);

	arr.PushBack(p1);
	arr.PushBack(p2);
	arr.PushBack(p3);
	arr.PushBack(p4);
	arr.PushBack(p5);
	printPeron(arr);

	cout << "arr 容量为： " << arr.getCapacity() << endl;
	cout << "arr 大小为： " << arr.getSize() << endl;
}
int main()
{
	test03();
	return 0;
}