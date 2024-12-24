//#include <iostream>
//using namespace std;
//
//template<class T>
//class Base
//{
//	T _m;
//};
//
//// 缺少类模板Base的参数列表
////class Son :public Base
////{
////
////};
//
//// 1.指定类型继承
//class Son :public Base<int>
//{
//
//};
//
//// 如果想灵活指定父类中T类型，子类也需要变类模板
//// 2.子类模板化
//template<class T1, class T2>
//class Son2 : public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的类型为：" << typeid(T1).name() << endl;
//		cout << "T2的类型为：" << typeid(T2).name() << endl;
//	}
//	T1 _s;
//};
//
//void test01()
//{
//	Son2<int, char> S2;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}