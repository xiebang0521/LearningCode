#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		//cout << "有参构造的调用" << endl;
		this->_Capacity = capacity;
		this->_Size = 0;
		this->_Parray = new T[this->_Capacity];
	}

	MyArray(const MyArray& arr)
	{
		//cout << "拷贝构造的调用" << endl;
		this->_Capacity = arr._Capacity;
		this->_Size = arr._Size;
		// 浅拷贝的问题，会导致堆区的数据重复释放
		this->_Parray = new T[arr._Capacity];
		for (int i = 0; i < this->_Size; i++)
		{
			this->_Parray[i] = arr._Parray[i];
		}
	}

	MyArray& operator=(const MyArray& arr)
	{
		// 先判断原来堆区是否有数据，如果有先释放
		//cout << "operator=的调用" << endl;
		if (this->_Parray != NULL)
		{
			delete[] this->_Parray;
			this->_Parray = NULL;
			this->_Capacity = 0;
			this->_Size = 0;
		}

		this->_Capacity = arr._Capacity;
		this->_Size = arr._Size;
		// 浅拷贝的问题，会导致堆区的数据重复释放
		this->_Parray = new T[arr._Capacity];
		for (int i = 0; i < this->_Size; i++)
		{
			this->_Parray[i] = arr._Parray[i];
		}
		return *this;
	}
	// 尾插法
	void PushBack(const T& val)
	{
		if (this->_Size == this->_Capacity)
		{
			return;
		}

		this->_Parray[this->_Size] = val;
		this->_Size++;
	}
	// 尾删法
	void PopBack()
	{
		if (this->_Size == 0)
		{
			return;
		}
		this->_Size--;
	}

	// 通过下标的方式访问数据
	T& operator[](int index)
	{
		return this->_Parray[index];
	}

	// 放回数组的容量

	int getCapacity()
	{
		return this->_Capacity;
	}
	// 返回数组的大小
	int getSize()
	{
		return this->_Size;
	}
	~MyArray()
	{
		//cout << "析构函数的调用" << endl;
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