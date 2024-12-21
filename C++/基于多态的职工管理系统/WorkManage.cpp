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
		cout << "�ļ�������" << endl;
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
		cout << "�ļ�Ϊ��" << endl;
		this->_EmpArray = NULL;
		this->_EmpNum = 0;
		this->_FileIsEmpty = true;
		ifs.close();
		return;
	}

	int num = this->get_EmpNum();
	cout << "ְ��������" << num << endl;
	this->_EmpNum = num;

	this->_EmpArray = new Worker * [this->_EmpNum];

	Init_Emp();
}

void WorkerManager::Show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*********  ��ӭʹ��ְ������ϵͳ�� **********" << endl;
	cout << "*************  0.�˳��������  *************" << endl;
	cout << "*************  1.����ְ����Ϣ  *************" << endl;
	cout << "*************  2.��ʾְ����Ϣ  *************" << endl;
	cout << "*************  3.ɾ����ְְ��  *************" << endl;
	cout << "*************  4.�޸�ְ����Ϣ  *************" << endl;
	cout << "*************  5.����ְ����Ϣ  *************" << endl;
	cout << "*************  6.���ձ������  *************" << endl;
	cout << "*************  7.��������ĵ�  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void WorkerManager::exitSystem()
{
	cout << "��ӭ�´�ϵͳ" << endl;
	system("pause");
	exit(0);
}

WorkerManager::~WorkerManager()
{

}

void WorkerManager::Add_Emp()
{
	cout << "������Ҫ���ӵ�ְ������<< " << endl;
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

			cout << "�������" << i + 1 << "����ְ�����>>" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����ְ������>>" << endl;
			cin >> name;

			cout << "�������" << i + 1 << "����ְ���ĸ�λ>>" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
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
		cout << "�ɹ����" << addNum << "����ְ����" << endl;

		this->Save();
		this->_FileIsEmpty = false;
	}
	else
	{
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");
}


void WorkerManager::ShowInfo()
{
	if (this->_FileIsEmpty == true)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "������Ҫɾ����ְ���ţ�" << endl;
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
			cout << "ɾ���ɹ���" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���Ա��" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "�������޸�ְ���ı��>> " << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
		if (ret != -1)
		{
			delete this->_EmpArray[ret];

			int newId = 0;
			string newName = "";
			int dSelect = 0;

			cout << "�鵽��" << id << "��ְ������������ְ����>> " << endl;
			cin >> newId;

			cout << "������������>> " << endl;
			cin >> newName;

			cout << "�������λ>> " << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
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
			cout << "�޸ĳɹ�!" << endl;

			this->Save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ����޴���" << endl;
		}
	}

	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->_FileIsEmpty == true)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ>> " << endl;
		cout << "1.��ְ����Ų���" << endl;
		cout << "2.����������" << endl;

		int select = 0;
		cin >> select;

		if (1 == select)
		{
			int id = 0;
			cout << "������Ҫ���ҵ�id>> " << endl;
			cin >> id;

			int ret = IsExist(id);
			if (ret != -1)
			{
				cout << "���ҳɹ�����ְ����Ϣ���£�" << endl;
				this->_EmpArray[ret]->showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else if (2 == select)
		{
			string name;
			cout << "������Ҫ���ҵ�����>> " << endl;
			cin >> name;

			bool flag = false;

			for (int i = 0; i < this->_EmpNum; i++)
			{
				if (this->_EmpArray[i]->_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ��"
						<< this->_EmpArray[i]->_Id
						<< "�ŵ���Ϣ����" << endl;

					flag = true;

					this->_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴���" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;

		system("pause");
		system("cls");
	}
	else
	{
		cout << "����������ķ�ʽ>> " << endl;
		cout << "1.��ְ����Ž�������" << endl;
		cout << "2.��ְ����Ž��н���" << endl;
		int select = 0;
		cin >> select;

		for (int i = 0; i < this->_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < this->_EmpNum; j++)
			{
				if (select == 1) // ���� �ҵ�δ�ź������������С��������δ�ĺ��������ĵ�һλ���н���
				{
					if (this->_EmpArray[minOrMax]->_Id > this->_EmpArray[j]->_Id)
					{
						minOrMax = j;
					}
				}
				else // ����
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

		cout << "����ɹ����������Ϊ��" << endl;
		this->Save();
		this->ShowInfo();
	}
}

void WorkerManager::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;

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
		cout << "��ճɹ���" << endl;
	}

	system("pause");
	system("cls");
}