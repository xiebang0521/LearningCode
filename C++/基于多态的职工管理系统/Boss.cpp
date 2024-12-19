#include "Boss.h"

// 构造函数
Boss::Boss(int id, string name, int dId)
{
	this->_Id = id;
	this->_Name = name;
	this->_DeptId = dId;
}
// 显示个人信息
void Boss::showInfo()
{
	cout << "职工编号： " << this->_Id
		<< "\t职工姓名： " << this->_Name
		<< "\t岗位： " << this->getDeptName()
		<< "\t岗位职责：管理公司的所有事物" << endl;
}
// 获取岗位名称
string Boss::getDeptName()
{
	return string("总裁");
}