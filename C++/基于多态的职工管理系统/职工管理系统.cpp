#include <iostream>
#include "WorkManage.h"
using namespace std;

// 创建管理类
// 1.与用户的沟通菜单界面
// 2.对职工增删查改的操作
// 3.与文件的读写交互

int main()
{
	WorkerManager wm;
	wm.Show_Menu();
	return 0;
}