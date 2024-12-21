#include <iostream>
#include "WorkManage.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "Boss.h"

using namespace std;

// 创建管理类
// 1.与用户的沟通菜单界面
// 2.对职工增删查改的操作
// 3.与文件的读写交互

// 多态的测试
//void test01()
//{
//	Worker* worker = NULL;
//	worker = new Employee(1, "张三", 1);
//	worker->showInfo();
//	delete worker;
//	worker = new Manager(2, "李四", 2);
//	worker->showInfo();
//	delete worker;
//	worker = new Boss(3, "王五", 3);
//	worker->showInfo();
//	delete worker;
//}
int main()
{
	//test01();

	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.Show_Menu();
		cout << "请输入您的选择>> " << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
			wm.exitSystem();
			break;
		case 1:
			wm.Add_Emp();
			break;
		case 2:
			wm.ShowInfo();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}

	return 0;
}