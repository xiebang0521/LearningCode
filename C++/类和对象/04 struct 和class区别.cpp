#include <iostream>

using namespace std;

// struct 和 class 的区别
// struct 默认权限是 公有的 public
// class  默认权限是  私有的  private
class C1
{
	int _A;// 默认权限 是私有
};

struct C2
{
	int _A;// 默认权限 是公有
};
int main()
{
	C1 c1;
	//c1._A = 100;

	C2 c2;
	c2._A = 100;
	cout << c2._A << endl;
	return 0;
}
