#include <iostream>

using namespace std;

// ��̬��Ա����
// ���ж�����ͬһ������
// ��̬��Ա����ֻ�ܷ��ʾ�̬�ĳ�Ա����
class Person
{
public:
	// ��̬��Ա���� Ҳ���з���Ȩ��
	static void func()
	{
		_a = 100;//��̬�ĳ�Ա�������Է��ʾ�̬�ĳ�Ա����
		//_b = 200; //���ʷǾ�̬��Ա������ʱ��ͻᱨ����֪���ı�����ĸ�����ı���
		cout << "static void func����" << endl;
	}

	static int _a;//��̬��Ա����
	int _b;
};

int Person::_a = 0;
void test01()
{
	//1.ͨ���������
	Person p;
	p.func();
	//2.ͨ����������

	Person::func();
}
int main()
{
	test01();
	return 0;
}