//#include <iostream>
//
//using namespace std;
//
//// ǳ������ʱ����������ʱָ�룬������һ������ı�ָ���ڵ�ֵʱ����һ�������ֵҲ�ᱻ�ı�
//// ����� �����ڿ��ٿռ䣬��ֵ���ƹ���
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person ��Ĭ�Ϲ��캯������" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		_age = p._age;
//		//_height = p._height;// ������Ĭ��д�Ĵ���
//		_height = new int(*p._height);
//		cout << "Person �Ŀ������캯������" << endl;
//	}
//
//	Person(int age, int height)
//	{
//		//*_height = height;
//		_height = new int(height);
//		_age = age;
//		cout << "Person ���вι��캯������" << endl;
//	}
//
//	~Person()
//	{
//		if (_height != NULL)
//		{
//			delete _height;
//			_height = NULL;
//		}
//		cout << "Person ��������������" << endl;
//	}
//
//	int _age;
//	int* _height;
//
//};
//void test01()
//{
//	Person p1(18,160);
//
//	cout << "p1������Ϊ ��" << p1._age <<  " ���Ϊ��" << *p1._height << endl;
//
//	Person p2(p1);
//	cout << "p2������Ϊ ��" << p2._age << " ���Ϊ��" << *p2._height << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}