#include "iostream"

using namespace std;

int* func()
{
	// new 返回的时 该数据类型的指针
	int *p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	//堆区的数据 由程序员管理开辟，程序员管理释放
	// 如果想释放堆区的数据，利用关键字 delete
	delete p;
	cout << *p << endl;// 报错
}

void test02()
{
	int* p = new int[10];// 数组十个元素，返回数组的首地址

	for (int i = 0; i < 10; i++)
	{
		p[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << p[i] << endl;
	}
	// 释放数组的时候要加 []
	delete[] p;
}
int main()
{
	
	// 1.NEW的基本语法
	//test01();
	// 2.在堆区利用NEW开辟数组

	// 引用：给变量起别名
	test02();
	return 0;
}
