//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Building
//{
//	friend void goodGay(Building& building);
//public:
//	Building()
//	{
//		_SittingRoom = "客厅";
//		_BedRoom = "卧室";
//	}
//public:
//	string _SittingRoom;// 客厅
//
//private: 
//	string _BedRoom;//卧室
//};
//
//// 全局函数
//void goodGay(Building& building)
//{
//	cout << "好基友全局函数 正在访问：" << building._SittingRoom << endl;
//	cout << "好基友全局函数 正在访问：" << building._BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodGay(building);
//}
//int main()
//{
//	test01();
//	return 0;
//}