#include <iostream>

using namespace std;

class Animal
{
public:
	int _age;
};

class Sheep :virtual public Animal
{
	
};

class Tou : virtual public Animal
{

};

class SheepTou : public Sheep, public Tou
{

};

void test01()
{
	SheepTou st;
	st.Sheep::_age = 18;
	st.Tou::_age = 19;
	// 菱形继承，两个父类拥有相同数据，需要加一作用域区分
	cout << "st.Sheep::_age =" << st.Sheep::_age << endl;
	cout << "st.Tou::_age =" << st.Tou::_age << endl;

	// 这份数据我们知道， 只有一份就可以了，菱形继承会有两份造成空间浪费
	// 加上 virtual 虚继承，可以解决菱形继承的问题
	// vbptr 虚基类表，记录了一个偏移量，指向同一个指针
}
int main()
{
	test01();
	return 0;
}