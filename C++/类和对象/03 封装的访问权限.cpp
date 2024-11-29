//#include <iostream>
//
//using namespace std;
//
//// 访问权限 成员属性和成员函数都有访问权限
//// 公共权限 public		成员 类内可以访问 类外可以访问
//// 保护权限 protected	成员 类内可以访问 类外不可以访问 子类可以访问
//// 私有权限 private		成员 类内可以访问	 类外不可以访问 子类不可以访问
//
//class Person
//{
//public: 
//	string _name;
//
//	void func()
//	{
//		_name = "张三";
//		_car = "拖拉机";
//		_password = 123456;
//	}
//
//protected:
//	string _car;
//
//private:
//	int _password;
//};
//int main()
//{
//	Person p1;
//	p1._name = "李四";
//	//p1._car = "奔驰";
//	//p1._password = 123; // 这两个权限是不能访问的
//	return 0;
//}