#include "employee.h"

// ���캯��
Employee::Employee(int id, string name, int dId)
{
	this->_Id = id;
	this->_Name = name;
	this->_DeptId = dId;
}

// ��ʾ������Ϣ
void Employee::showInfo()
{
	cout << "ְ����ţ� " << this->_Id
		<< "\tְ�������� " << this->_Name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ����ɾ����������� " << endl;
}

// ��ȡ��λ����
string Employee::getDeptName()
{
	return string("Ա��");
}