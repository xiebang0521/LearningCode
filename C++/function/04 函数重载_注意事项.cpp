#include <iostream>

using namespace std;

void func(int	&a)
{
	cout << "func (int &a)����" << endl;
}

void func(const int& a)
{
	cout << "func(const int &a)����" << endl;
}

// 2.������������Ĭ�ϲ���

void func2(int a)
{
	cout << "func2(int a)����" << endl;
}

//void func2(int a, int b) // �����������أ������ȱʡ������ʱ��
//{
//	cout << "func2(int a)����" << endl;
//}

void func2(int a, int b = 10)// ��ʱ�ж����Բ���������
{
	cout << "func2(int a, int b = 10)����" << endl;
}
int main()
{
	//int a = 10;
	//func(a);

	//func(10); // int &a = 10; ���ǲ��Ϸ���
	// const int &a = 10;  �Ϸ��Ĵ���
	// ���� ��const �� ���� cosnt ���Թ�������

	func2(10,20);// ������������Ĭ�ϲ����������˶����ԣ���������������������


	return 0;
}