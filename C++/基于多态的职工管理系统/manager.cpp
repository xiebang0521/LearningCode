#include "manager.h"

// ���캯��
Manager::Manager(int id, string name, int dId)
{
	this->_Id = id;
	this->_Name = name;
	this->_DeptId = dId;
 }
// ��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ����ţ� " << this->_Id
		<< "\tְ�������� " << this->_Name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ������ϰ彻�������񣬲����·��������ͨԱ�� " << endl;
}
// ��ȡ��λ����
string Manager::getDeptName()
{
	return string("����");
}