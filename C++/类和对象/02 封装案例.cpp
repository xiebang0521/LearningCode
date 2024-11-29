//#include <iostream> 
//#include <string>
//using namespace std;
//
//class Student
//{
//
//	// 属性 成员属性 成员变量 
//	// 行为 成员函数	成员方法
//public:
//	string _name;
//	int _StudentId;
//
//	void DisplayInfo(void)
//	{
//		cout << "姓名：" << _name << "学号：" << _StudentId << endl;
//	}
//
//	//给姓名赋值
//
//	void setName(string name)
//	{
//		_name = name;
//	}
//
//	void setid(int id)
//	{
//		_StudentId = id;
//	}
//};
//
//
//
//// 封装的意义：属性和行为在一起表现事物
//int main()
//{
//	//Circle c1;// 实例化：通过类创建对象的过程
//	//c1.m_r = 10;
//
//	//cout << "圆的周长为 ： " << c1.calculateZC() << endl;
//
//	Student s1;
//	s1._name = "张三";
//	s1._StudentId = 1;
//	s1.DisplayInfo();
//
//	Student s2;
//	s2._name = "李四";
//	s2._StudentId = 2;
//	s2.DisplayInfo();
//
//
//	Student s3;
//	s3.setName("王五");
//	s3.setid(3);
//	s3.DisplayInfo();
//	system("pause");
//	return 0;
//}