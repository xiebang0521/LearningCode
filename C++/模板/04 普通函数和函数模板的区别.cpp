//#include <iostream>
//using namespace std;
//
//// 1.��ͨ�������ÿ��Է�����ʽ����ת��
//// 2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//// 3.����ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
//// ����ģ��
//template<class T>
//T MyAdd02(T a, T b)
//{
//	return a + b;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';// �ַ�������ʽת�������α���
//	cout << myAdd01(a, c) << endl;
//
//	//cout << MyAdd02(a, c) << endl; // �����Զ������Ƶ����ܷ�����ʽ����ת��
//
//	cout << MyAdd02<int>(a, c) << endl;// ��ʾָ�����ͣ� �ᷢ����ʽ����ת��
//}
//int main()
//{
//	test01();
//	return 0;
//}