//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//		_a = a;
//		_b = b;
//	}
//
//private:
//
//	int _a;
//	int _b;
//
//	// ���ó�Ա���������� ���������
//	// �������ó�Ա��������<< �����
//	//void operator<<(Person &p)
//	//{
//	//	cout << "p._a = " << p._a << "p._b = " << p._b << endl;
//	//}
//};
//
//// ֻ������ȫ�ֺ����������������
//ostream& operator<<(ostream &cout ,Person &p)
//{
//	cout << "_a = " << p._a << "_b = " << p._b << endl;
//	return cout;
//}
//
//void test01()
//{
//	Person p1(10,10);
//
//	cout << p1 << p1;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
//
//
