//#include <iostream>
//#include <string>
//using namespace std;
//
//template<class T1, class T2>
//class Person;
//// 2.ȫ�ֺ�������ʵ��
//// �޷����ӵ��ⲿ����
////  ��ͨ������ȴ�Ǻ���ģ���ʵ��
//// ���ȫ�ֺ����� ������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "name: " << p._Name << " age: " << p._Age << endl;
//}
//
//template<class T1, class T2>
//class Person
//{
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "name: " << p._Name << " age: "<< p._Age << endl;
//	}
//
//	//friend void printPerson2(Person<T1, T2> p);
//	// ��Ҫ�ӿղ����б�
//	// ���ȫ�ֺ����� ������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
//	friend void printPerson2<>(Person<T1, T2> p);
//public:
//	Person(T1 name, T2 age)
//	{
//		this->_Name = name;
//		this->_Age = age;
//	}
//private:
//	T1 _Name;
//	T2 _Age;
//};
//
//// 1.ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int> p("tom", 20);
//	printPerson(p);
//}
//
//
//
//void test02()
//{
//	Person<string, int> p("Jeery", 18);
//	printPerson2(p);
//}
//int main()
//{
//	test02();
//	return 0;
//}