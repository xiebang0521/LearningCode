#include <iostream>

using namespace std;

class Animal
{
public:
	int _age;
};

class Sheep :virtual public Animal
{
	
};

class Tou : virtual public Animal
{

};

class SheepTou : public Sheep, public Tou
{

};

void test01()
{
	SheepTou st;
	st.Sheep::_age = 18;
	st.Tou::_age = 19;
	// ���μ̳У���������ӵ����ͬ���ݣ���Ҫ��һ����������
	cout << "st.Sheep::_age =" << st.Sheep::_age << endl;
	cout << "st.Tou::_age =" << st.Tou::_age << endl;

	// �����������֪���� ֻ��һ�ݾͿ����ˣ����μ̳л���������ɿռ��˷�
	// ���� virtual ��̳У����Խ�����μ̳е�����
	// vbptr ��������¼��һ��ƫ������ָ��ͬһ��ָ��
}
int main()
{
	test01();
	return 0;
}