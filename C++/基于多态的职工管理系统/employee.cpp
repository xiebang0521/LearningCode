#include "employee.h"

// 构造函数
Employee::Employee(int id, string name, int dId)
{
	this->_Id = id;
	this->_Name = name;
	this->_DeptId = dId;
}

// 显示个人信息
void Employee::showInfo()
{
	cout << "职工编号： " << this->_Id
		<< "\t职工姓名： " << this->_Name
		<< "\t岗位： " << this->getDeptName()
		<< "\t岗位职责：完成经理交给的任务 " << endl;
}

// 获取岗位名称
string Employee::getDeptName()
{
	return string("员工");
}