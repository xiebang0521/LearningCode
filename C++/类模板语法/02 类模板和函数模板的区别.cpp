//#include <iostream>
//#include <string>
//using namespace std;
//
//// ��ģ��ͺ���ģ�������
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
//// ��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//void test01()
//{
//	//Person p("tom", 18); // ����!, �޷��Զ������Ƶ�
//	Person<string, int> p("tom", 18); // ֻ����ʾָ��
//	p.showPerson();
//}
//// ��ģ����ģ������б��п�����Ĭ�ϲ���
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