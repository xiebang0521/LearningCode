#include <iostream>
#include <string>

using namespace std;

class MyPrint
{
public:
	// ���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void test01()
{
	MyPrint myPrint;
	myPrint("myprint");
}

void test02()
{
	int a = 10;
	int b = 20;
	MyAdd myAdd;
	cout << myAdd(a, b) << endl;

	// ������������
	cout << MyAdd()(a, b) << endl;
}
int main()
{
	test02();
	return 0;
}