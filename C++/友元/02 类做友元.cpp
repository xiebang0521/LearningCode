//#include <iostream>
//#include <string>
//
//using namespace std;
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit(); // 参观函数， 访问Building中的属性
//	
//	Building* building;
//};
//
//
//class Building
//{
//	friend class GoodGay;
//public:
//	Building();
//
//public:
//	string _SittingRoom; // 客厅
//	
//private:
//	string _BedRoom; // 卧室
//
//};
//
//// 类外实现成员函数
//
//Building::Building()
//{
//	_SittingRoom = "客厅";
//	_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "好基友正在访问： " << building->_SittingRoom << endl;
//	cout << "好基友正在访问： " << building->_BedRoom << endl;// 如果没有添加友元类，访问私有变量就会报错
//
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	return 0;
//}