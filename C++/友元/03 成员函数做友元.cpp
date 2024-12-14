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
	_SitingRoom = "����";
	_BedRoom = "����";
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
	cout << "visit1���ڲιۣ�" << building->_SitingRoom << endl;
	cout << "visit1���ڲιۣ�" << building->_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "visit2���ڲιۣ�" << building->_SitingRoom << endl;
	//cout << "GoodGay���ڲιۣ�" << building->_BedRoom << endl;// ����Ԫ��Ա���������ܷ���˽�б���
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
