//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	void ShowClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age = " << _age << endl; // Ĭ�� this->_age
//	}
//
//	int _age;
//};
//// 
//void test01()
//{
//	Person* p = NULL;
//
//	p->ShowClassName();
//	p->showPersonAge(); // ��Ϊ�����ָ��ΪNULL,���Բ��ܷ��� ��Ա����
//}
//int main()
//{
//	test01();
//	return 0;
//}