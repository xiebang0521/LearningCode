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
//		cout << "age = " << _age << endl; // 默认 this->_age
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
//	p->showPersonAge(); // 因为传入的指针为NULL,所以不能访问 成员变量
//}
//int main()
//{
//	test01();
//	return 0;
//}