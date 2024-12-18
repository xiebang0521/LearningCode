#include <iostream>
#include <fstream>

using namespace std;

class Person
{
public:
	char _Name[64];
	int _age;
};

void test01()
{
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	
	if (!ifs.is_open())
	{
		cout << "打开文件失败" << endl;
		return;
	}

	Person p;
	ifs.read((char*) & p, sizeof(Person));
	cout << p._Name << p._age << endl;
	ifs.close();
}
int main()
{
	test01();
	return 0;
}