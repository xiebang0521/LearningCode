//#include <iostream>
//#include <string>
//using namespace std;
//
//// 类模板和函数模板的区别
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//
//	Person(NameType name, AgeType age)
//	{
//		this->_age = age;
//		this->_name = name;
//	}
//
//	void showPerson()
//	{
//		cout << "name: " << this->_name << " age = " << this->_age << endl;
//	}
//	NameType _name;
//	AgeType _age;
//};
//
//// 类模板没有自动类型推导的使用方式
//void test01()
//{
//	//Person p("tom", 18); // 错误!, 无法自动类型推导
//	Person<string, int> p("tom", 18); // 只能显示指定
//	p.showPerson();
//}
//// 类模板在模板参数列表中可以有默认参数
//
//void test02()
//{
//	Person<string> p("jon", 20);
//	p.showPerson();
//}
//int main()
//{
//	test02();
//	return 0;
//}