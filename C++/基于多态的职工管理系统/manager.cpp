#include "manager.h"

// 构造函数
Manager::Manager(int id, string name, int dId)
{
	this->_Id = id;
	this->_Name = name;
	this->_DeptId = dId;
 }
// 显示个人信息
void Manager::showInfo()
{
	cout << "职工编号： " << this->_Id
		<< "\t职工姓名： " << this->_Name
		<< "\t岗位： " << this->getDeptName()
		<< "\t岗位职责：完成老板交给的任务，并且下发任务给普通员工 " << endl;
}
// 获取岗位名称
string Manager::getDeptName()
{
	return string("经理");
}