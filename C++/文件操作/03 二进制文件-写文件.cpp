//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//// �������ļ��� д�ļ�
//class Person
//{
//public:
//	char _Name[64];
//	int _age;
//};
//void test01()
//{
//	ofstream ofs;
//	ofs.open("person.txt", ios::out | ios::binary);
//	Person p = { "����", 18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}