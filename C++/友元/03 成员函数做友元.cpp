#include <iostream>
#include<string>

using namespace std;


class Building;
class GoodGay 
{
public:
	GoodGay();
	~GoodGay();
	void visit1();
	void visit2();
	Building *building;

};


class Building
{
	friend void GoodGay::visit1();
public:
	Building();
	string _SitingRoom;

private:
	string _BedRoom;
};
Building::Building()
{
	_SitingRoom = "客厅";
	_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
	building = new Building;
}
GoodGay::~GoodGay()
{
	if (building == NULL)
	{
		return;
	}

	delete building;
	building = NULL;
}

void GoodGay::visit1()
{
	cout << "visit1正在参观：" << building->_SitingRoom << endl;
	cout << "visit1正在参观：" << building->_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "visit2正在参观：" << building->_SitingRoom << endl;
	//cout << "GoodGay正在参观：" << building->_BedRoom << endl;// 非友元成员函数，不能访问私有变量
}

void test01()
{
	GoodGay gg;
	gg.visit1();
}

void test02()
{
	GoodGay gg;
	gg.visit2();
}
int main()
{
	test01();
	return 0;
}
