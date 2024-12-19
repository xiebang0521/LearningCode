#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker
{
public:
	// 显示个人信息
	virtual void showInfo() = 0;
	// 获取岗位名称
	virtual string getDeptName() = 0;

	// 职工编号
	int _Id;
	string _Name;
	int  _DeptId;
};