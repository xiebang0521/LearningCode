#pragma once

#include <iostream>
#include "worker.h"
using namespace std;

#define FILENAME "empFile.txt"
class WorkerManager
{
public:
	WorkerManager();

	void Init_Emp();

	void Show_Menu();

	void exitSystem();

	void Add_Emp();

	void ShowInfo();

	void Save();

	int get_EmpNum();

	void Del_Emp();

	void Mod_Emp();

	int IsExist(int id);

	void Find_Emp();

	void Sort_Emp();

	void Clean_File();

	~WorkerManager();

	int _EmpNum;

	Worker** _EmpArray;

	bool _FileIsEmpty;
};

