#include <iostream>
#include <string>


using namespace std;
class Person
{
public:
	int _a;
	int _b;
	//1.成员函数重载加号
	Person operator+(Person& p)
	{
		Person temp;
		temp._a = this->_a + p._a;
		temp._b = this->_b + p._b;
		return temp;
	}

	// 运算法重载 也可以发生函数重载
	Person operator+(int num)
	{
		Person temp;
		temp._a = this->_a + num;
		temp._b = this->_b + num;
		return temp;
	}

};
// 2.全局函数重载
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp._a = p1._a + p2._a;
//	temp._b = p1._b + p2._b;
//	return temp;
//}

void test01()
{
	Person p1;
	p1._a = 10;
	p1._b = 10;

	Person p2;
	p2._a = 10;
	p2._b = 10;

	Person p3 = p1 + p2;
	cout << "p3._a = " << p3._a << endl;
	cout << "p3._b = " << p3._b << endl;

	Person p4 = p1 + 200;
	cout << "p4._a = " << p4._a << endl;
	cout << "p4._b = " << p4._b << endl;
}
int main()
{
	test01();
	return 0;
}