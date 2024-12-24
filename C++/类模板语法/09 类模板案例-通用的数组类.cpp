/*
	1.���Զ��������������Լ��Զ����������͵����ݽ��д洢
	2.�������е����ݴ洢������
	3.���캯�����Դ������������
	4.�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ����������
	5.�ṩβ�巨��βɾ��������������Ӻ�ɾ��
	6.����ͨ���±�ķ�ʽ���������е�Ԫ��
	7.���Ի�ȡ�����е�ǰԪ�ظ��������������
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
	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	printIntArray(arr1);
	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	printIntArray(arr2);
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;

	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	arr2.PopBack();
	printIntArray(arr2);
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
}

// �����Զ�����������
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

	cout << "arr ����Ϊ�� " << arr.getCapacity() << endl;
	cout << "arr ��СΪ�� " << arr.getSize() << endl;
}
int main()
{
	test03();
	return 0;
}