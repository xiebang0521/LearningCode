//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// �������������Խ��������ָ���ͷ��������ʱ���ɾ�������
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal�Ĺ��캯������" << endl;
//	}
//	virtual void speak() = 0;
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal��������������" << endl;
//	//}
//	// ��Ҫ����Ҳ��Ҫʵ��
//	// ���˴�����������Ҳ�ǳ�����
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal�Ĵ���������������" << endl;
//}
//class Cat : public Animal 
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat�Ĺ��캯������" << endl;
//		_name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *_name << "Сè��˵��" << endl;
//	}
//
//	 ~Cat()
//	{
//		if (_name != NULL)
//		{
//			cout << "Cat��������������" << endl;
//			delete _name;
//			_name = NULL;
//		}
//	}
//	string* _name;
//};
//
//void test01()
//{
//	
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	// �����ָ����������ʱ�򣬲����������������������
//	// ������������ж������ԣ������ڴ�й¶
//	delete animal;
//}
//int main()
//{
//	test01();
//	return 0;
//}