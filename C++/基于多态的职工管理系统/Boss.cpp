#include "Boss.h"

// ���캯��
Boss::Boss(int id, string name, int dId)
{
	this->_Id = id;
	this->_Name = name;
	this->_DeptId = dId;
}
// ��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ����ţ� " << this->_Id
		<< "\tְ�������� " << this->_Name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ�𣺹���˾����������" << endl;
}
// ��ȡ��λ����
string Boss::getDeptName()
{
	return string("�ܲ�");
}