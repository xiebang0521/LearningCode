//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->_Age = age;
//		this->_Name = name;
//	}
//
//	string _Name;
//	int _Age;
//};
//
//void test01()
//{
//	vector<Person> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		/*cout << "name: " << (*it)._Name << " age: " << (*it)._Age << endl;*/
//		cout << "name: " << it->_Name << " age: " << it->_Age << endl;
//	}
//}
//
//void test02()
//{
//	vector<Person*> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "name: " << (*it)->_Name << " age: " << (*it)->_Age << endl;
//	}
//}
//int main()
//{
//
//	test02();
//	return 0;
//}