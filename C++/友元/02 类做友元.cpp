//#include <iostream>
//#include <string>
//
//using namespace std;
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit(); // �ιۺ����� ����Building�е�����
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
//	string _SittingRoom; // ����
//	
//private:
//	string _BedRoom; // ����
//
//};
//
//// ����ʵ�ֳ�Ա����
//
//Building::Building()
//{
//	_SittingRoom = "����";
//	_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "�û������ڷ��ʣ� " << building->_SittingRoom << endl;
//	cout << "�û������ڷ��ʣ� " << building->_BedRoom << endl;// ���û�������Ԫ�࣬����˽�б����ͻᱨ��
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