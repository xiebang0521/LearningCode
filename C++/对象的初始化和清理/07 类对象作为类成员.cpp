//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// �������Ϊ���Ա
//
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		_pName = pName;
//		cout << "Phone �Ĺ��캯������" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone ��������������" << endl;
//	}
//	string _pName;
//};
//
//class Person
//{
//public:
//
//	Person(string name, string pName):_name(name),_phone(pName)
//	{
//		cout << "Person �Ĺ��캯������" << endl;
//	}
//	string _name;
//	Phone _phone;
//
//	~Person()
//	{
//		cout << "Person ��������������" << endl;
//	}
//
//};
//
//// �������������Ϊ�����Ա������ʱ���ȹ���������ڹ��챾��
//// ������˳��͹����˳�����෴��
//void test01()
//{
//	Person p("����", "ƻ��MAX");
//	cout << p._name << "���ţ�" << p._phone._pName << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}