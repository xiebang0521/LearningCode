#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		//cout << "�вι���ĵ���" << endl;
		this->_Capacity = capacity;
		this->_Size = 0;
		this->_Parray = new T[this->_Capacity];
	}

	MyArray(const MyArray& arr)
	{
		//cout << "��������ĵ���" << endl;
		this->_Capacity = arr._Capacity;
		this->_Size = arr._Size;
		// ǳ���������⣬�ᵼ�¶����������ظ��ͷ�
		this->_Parray = new T[arr._Capacity];
		for (int i = 0; i < this->_Size; i++)
		{
			this->_Parray[i] = arr._Parray[i];
		}
	}

	MyArray& operator=(const MyArray& arr)
	{
		// ���ж�ԭ�������Ƿ������ݣ���������ͷ�
		//cout << "operator=�ĵ���" << endl;
		if (this->_Parray != NULL)
		{
			delete[] this->_Parray;
			this->_Parray = NULL;
			this->_Capacity = 0;
			this->_Size = 0;
		}

		this->_Capacity = arr._Capacity;
		this->_Size = arr._Size;
		// ǳ���������⣬�ᵼ�¶����������ظ��ͷ�
		this->_Parray = new T[arr._Capacity];
		for (int i = 0; i < this->_Size; i++)
		{
			this->_Parray[i] = arr._Parray[i];
		}
		return *this;
	}
	// β�巨
	void PushBack(const T& val)
	{
		if (this->_Size == this->_Capacity)
		{
			return;
		}

		this->_Parray[this->_Size] = val;
		this->_Size++;
	}
	// βɾ��
	void PopBack()
	{
		if (this->_Size == 0)
		{
			return;
		}
		this->_Size--;
	}

	// ͨ���±�ķ�ʽ��������
	T& operator[](int index)
	{
		return this->_Parray[index];
	}

	// �Ż����������

	int getCapacity()
	{
		return this->_Capacity;
	}
	// ��������Ĵ�С
	int getSize()
	{
		return this->_Size;
	}
	~MyArray()
	{
		//cout << "���������ĵ���" << endl;
		if (this->_Parray != NULL)
		{
			delete[] this->_Parray;
			this->_Parray = NULL;
		}
	}



private:
	T* _Parray;
	int _Capacity;
	int _Size;
};