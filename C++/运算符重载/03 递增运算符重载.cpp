//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// �������������
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger& myInt);
//
//public:
//	MyInteger()
//	{
//		_num = 0;
//	}
//	// ����ǰ��++ �����
//
//	MyInteger& operator++()
//	{
//		_num++;
//		return *this;
//	} 
//	// ���غ���++ �����
//	// int ����ռλ������������������ǰ�úͺ��õ���
//	MyInteger operator++(int)
//	{
//		MyInteger temp = *this;
//		_num++;
//		return temp;
//	}
//
//private:
//	int _num;
//};
//
//ostream& operator<<(ostream& cout, MyInteger& myInt)
//{
//	cout << myInt._num << endl;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//	cout << ++(++myint) << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//	cout << (myint++) << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	test02();
//	return 0;
//}