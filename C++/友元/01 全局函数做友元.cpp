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
//		_SittingRoom = "����";
//		_BedRoom = "����";
//	}
//public:
//	string _SittingRoom;// ����
//
//private: 
//	string _BedRoom;//����
//};
//
//// ȫ�ֺ���
//void goodGay(Building& building)
//{
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building._SittingRoom << endl;
//	cout << "�û���ȫ�ֺ��� ���ڷ��ʣ�" << building._BedRoom << endl;
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