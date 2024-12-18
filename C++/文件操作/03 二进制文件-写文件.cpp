//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//// 二进制文件， 写文件
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
//	Person p = { "张三", 18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}