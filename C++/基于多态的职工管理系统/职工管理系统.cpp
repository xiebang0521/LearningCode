#include <iostream>
#include "WorkManage.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "Boss.h"

using namespace std;

// ����������
// 1.���û��Ĺ�ͨ�˵�����
// 2.��ְ����ɾ��ĵĲ���
// 3.���ļ��Ķ�д����

// ��̬�Ĳ���
//void test01()
//{
//	Worker* worker = NULL;
//	worker = new Employee(1, "����", 1);
//	worker->showInfo();
//	delete worker;
//	worker = new Manager(2, "����", 2);
//	worker->showInfo();
//	delete worker;
//	worker = new Boss(3, "����", 3);
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
		cout << "����������ѡ��>> " << endl;
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