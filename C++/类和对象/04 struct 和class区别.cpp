#include <iostream>

using namespace std;

// struct �� class ������
// struct Ĭ��Ȩ���� ���е� public
// class  Ĭ��Ȩ����  ˽�е�  private
class C1
{
	int _A;// Ĭ��Ȩ�� ��˽��
};

struct C2
{
	int _A;// Ĭ��Ȩ�� �ǹ���
};
int main()
{
	C1 c1;
	//c1._A = 100;

	C2 c2;
	c2._A = 100;
	cout << c2._A << endl;
	return 0;
}
