//#include <iostream>
//using namespace std;
//
//template<class T>
//class Base
//{
//	T _m;
//};
//
//// ȱ����ģ��Base�Ĳ����б�
////class Son :public Base
////{
////
////};
//
//// 1.ָ�����ͼ̳�
//class Son :public Base<int>
//{
//
//};
//
//// ��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
//// 2.����ģ�廯
//template<class T1, class T2>
//class Son2 : public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
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