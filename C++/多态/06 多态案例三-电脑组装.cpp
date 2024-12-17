#include <iostream>
#include <string>

using namespace std;

//抽象出每个零件的类
class Cpu
{
public:
	virtual void calculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};

class Memory
{
public:
	virtual void storeage() = 0;
};

class Computer
{
public:
	// 构造函数中传入三个零件指针
	// 提供工作的函数
	//{
	//	//调用每个零件工作的接口
	//}

	Computer(Cpu* cpu, VideoCard* vc, Memory* my)
	{
		_cpu = cpu;
		_vc = vc;
		_my = my;
	}

	void dowork()
	{
		_cpu->calculate();
		_vc->display();
		_my->storeage();
	}
	Cpu* _cpu;
	VideoCard* _vc;
	Memory* _my;

};


class IntelCpu :public Cpu
{
public:
	virtual void calculate()
	{
		cout << "intel的CPU" << endl;
	}
};

class AmdCpu :public Cpu
{
public:
	virtual void calculate()
	{
		cout << "Amd的CPU" << endl;
	}
};

class AmdVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Amd的VideoCard" << endl;
	}
};

class NvidiaVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Nvidia的VideoCard" << endl;
	}
};

class LenvonMemory :public Memory
{
public:
	virtual void storeage()
	{
		cout << "Lenvon的Memory" << endl;
	}
};

class SamsungMemory :public Memory
{
public:
	virtual void storeage()
	{
		cout << "Samsung的Memory" << endl;
	}
};


void test01()
{
	Cpu* intel = new IntelCpu;
	VideoCard* NC = new NvidiaVideoCard;
	Memory* lm = new LenvonMemory;
	Computer* cmp = new Computer(intel, NC, lm);
	cmp->dowork();

	delete cmp;
}
int main()
{
	test01();
	return 0;
}