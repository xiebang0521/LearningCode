#include "WorkManage.h"
#include "employee.h"
#include "manager.h"
#include "Boss.h"
#include "fstream"

WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		this->_EmpArray = NULL;
		this->_EmpNum = 0;
		this->_FileIsEmpty = true;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空" << endl;
		this->_EmpArray = NULL;
		this->_EmpNum = 0;
		this->_FileIsEmpty = true;
		ifs.close();
		return;
	}

	int num = this->get_EmpNum();
	cout << "职工个数：" << num << endl;
	this->_EmpNum = num;

	this->_EmpArray = new Worker * [this->_EmpNum];

	Init_Emp();
}

void WorkerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  欢迎使用职工管理系统！ **********" << endl;
	cout << "*************  0.退出管理程序  *************" << endl;
	cout << "*************  1.增加职工信息  *************" << endl;
	cout << "*************  2.显示职工信息  *************" << endl;
	cout << "*************  3.删除离职职工  *************" << endl;
	cout << "*************  4.修改职工信息  *************" << endl;
	cout << "*************  5.查找职工信息  *************" << endl;
	cout << "*************  6.按照编号排序  *************" << endl;
	cout << "*************  7.清空所有文档  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void WorkerManager::exitSystem()
{
	cout << "欢迎下次系统" << endl;
	system("pause");
	exit(0);
}

WorkerManager::~WorkerManager()
{

}

void WorkerManager::Add_Emp()
{
	cout << "请输入要增加的职工数量<< " << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		int newSize = this->_EmpNum + addNum;

		Worker** newSpace = new Worker * [newSize];

		if (this->_EmpArray != NULL)
		{
			for (int i = 0; i < this->_EmpNum; i++)
			{
				newSpace[i] = this->_EmpArray[i];
			}
		}

		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int dSelect;

			cout << "请输入第" << i + 1 << "个新职工编号>>" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工姓名>>" << endl;
			cin >> name;

			cout << "请输入第" << i + 1 << "个新职工的岗位>>" << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, dSelect);
				break;
			case 2:
				worker = new Manager(id, name, dSelect);
				break;
			case 3:
				worker = new Boss(id, name, dSelect);
				break;
			default:
				break;
			}
			newSpace[this->_EmpNum + i] = worker;
		}

		delete[] this->_EmpArray;

		this->_EmpArray = newSpace;
		this->_EmpNum = newSize;
		cout << "成功添加" << addNum << "名新职工！" << endl;

		this->Save();
		this->_FileIsEmpty = false;
	}
	else
	{
		cout << "输入有误" << endl;
	}

	system("pause");
	system("cls");
}


void WorkerManager::ShowInfo()
{
	if (this->_FileIsEmpty == true)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		Worker* tmpWorker = NULL;
		for (int i = 0; i < this->_EmpNum; i++)
		{
			tmpWorker = this->_EmpArray[i];
			tmpWorker->showInfo();
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->_EmpNum; i++)
	{
		ofs << this->_EmpArray[i]->_Id << " "
			<< this->_EmpArray[i]->_Name << " "
			<< this->_EmpArray[i]->_DeptId << endl;
	}

	ofs.close();
}


int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	ifs.close();
	return num;
}

void WorkerManager::Init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* newWorker = NULL;

		if (dId == 1)
		{
			newWorker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			newWorker = new Manager(id, name, dId);
		}
		else if (dId == 3)
		{
			newWorker = new Boss(id, name, dId);
		}
		this->_EmpArray[index] = newWorker;
		index++;
	}
}

void WorkerManager::Del_Emp()
{
	if (this->_FileIsEmpty == true)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入要删除的职工号：" << endl;
		int id = 0;
		cin >> id;

		int indx = this->IsExist(id);

		if (indx != -1)
		{
			delete this->_EmpArray[indx];
			for (int i = indx; i < this->_EmpNum - 1; i++)
			{	
				this->_EmpArray[i] = this->_EmpArray[i + 1];
			}
			this->_EmpNum--;

			this->Save();
			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "删除失败，未找到该员工" << endl;
		}
	}

	system("pause");
	system("cls");
}

int WorkerManager::IsExist(int id)
{
	for (int i = 0; i < this->_EmpNum; i++)
	{
		if (id == this->_EmpArray[i]->_Id)
		{
			return i;
		}
	}
	return -1;
}

void WorkerManager::Mod_Emp()
{
	if (this->_FileIsEmpty == true)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入修改职工的编号>> " << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			delete this->_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "查到：" << id << "号职工，请输入新职工号>> " << endl;
			cin >> newId;

			cout << "请输入新姓名>> " << endl;
			cin >> newName;

			cout << "请输入岗位>> " << endl;
			cout << "1.普通职工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
			cin >> dSelect;

			Worker* newWorker = NULL;

			switch (dSelect)
			{
			case 1:
				newWorker = new Employee(newId, newName, dSelect);
				break;
			case 2:
				newWorker = new Manager(newId, newName, dSelect);
				break;
			case 3:
				newWorker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}

			this->_EmpArray[ret] = newWorker;
			cout << "修改成功!" << endl;

			this->Save();
		}
		else
		{
			cout << "修改失败，查无此人" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->_FileIsEmpty == true)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请输入查找的方式>> " << endl;
		cout << "1.按职工编号查找" << endl;
		cout << "2.按姓名查找" << endl;

		int select = 0;
		cin >> select;

		if (1 == select)
		{
			int id = 0;
			cout << "请输入要查找的id>> " << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "查找成功！该职工信息如下：" << endl;
				this->_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else if (2 == select)
		{
			string name;
			cout << "请输入要查找的姓名>> " << endl;
			cin >> name;

			bool flag = false;

			for (int i = 0; i < this->_EmpNum; i++)
			{
				if (this->_EmpArray[i]->_Name == name)
				{
					cout << "查找成功，职工编号为："
						<< this->_EmpArray[i]->_Id
						<< "号的信息如下" << endl;

					flag = true;

					this->_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp()
{
	if (this->_FileIsEmpty == true)
	{
		cout << "文件不存在或记录为空！" << endl;

		system("pause");
		system("cls");
	}
	else
	{
		cout << "请输入排序的方式>> " << endl;
		cout << "1.按职工编号进行升序" << endl;
		cout << "2.按职工编号进行降序" << endl;
		int select = 0;
		cin >> select;

		for (int i = 0; i < this->_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < this->_EmpNum; j++)
			{
				if (select == 1) // 升序 找到未排好序的数组中最小的数，与未拍好序的数组的第一位进行交换
				{
					if (this->_EmpArray[minOrMax]->_Id > this->_EmpArray[j]->_Id)
					{
						minOrMax = j;
					}
				}
				else // 降序
				{
					if (this->_EmpArray[minOrMax]->_Id < this->_EmpArray[j]->_Id)
					{
						minOrMax = j;
					}
				}
			}
			if (i != minOrMax)
			{
				Worker* temp = this->_EmpArray[i];
				this->_EmpArray[i] = this->_EmpArray[minOrMax];
				this->_EmpArray[minOrMax] = temp;
			}
		}

		cout << "排序成功，排序后结果为：" << endl;
		this->Save();
		this->ShowInfo();
	}
}

void WorkerManager::Clean_File()
{
	cout << "确认清空？" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;

	int select = 0;
	cin >> select;
	
	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->_EmpArray != NULL)
		{
			for (int i = 0; i < this->_EmpNum; i++)
			{
				delete this->_EmpArray[i];
			}

			this->_EmpNum = 0;
			delete[] this->_EmpArray;
			this->_EmpArray = NULL;
			this->_FileIsEmpty = true;
		}
		cout << "清空成功！" << endl;
	}

	system("pause");
	system("cls");
}