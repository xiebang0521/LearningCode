#include "iostream"

using namespace std;

int* func()
{
	// new ���ص�ʱ ���������͵�ָ��
	int *p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	//���������� �ɳ���Ա�����٣�����Ա�����ͷ�
	// ������ͷŶ��������ݣ����ùؼ��� delete
	delete p;
	cout << *p << endl;// ����
}

void test02()
{
	int* p = new int[10];// ����ʮ��Ԫ�أ�����������׵�ַ

	for (int i = 0; i < 10; i++)
	{
		p[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << p[i] << endl;
	}
	// �ͷ������ʱ��Ҫ�� []
	delete[] p;
}
int main()
{
	
	// 1.NEW�Ļ����﷨
	//test01();
	// 2.�ڶ�������NEW��������

	// ���ã������������
	test02();
	return 0;
}
