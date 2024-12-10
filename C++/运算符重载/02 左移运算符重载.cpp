#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	int _a;
	int _b;

	// 利用成员函数来重载 左移运算符

	void operator<<()
	{

	}
	
};
void test01()
{
	Person p1;
	p1._a = 10;
	p1._b = 10;

	cout << p1;
}

int main()
{
	return 0;
}