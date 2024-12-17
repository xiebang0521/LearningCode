//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// 利用虚析构可以解决，父类指针释放子类对象时不干净的问题
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal的构造函数调用" << endl;
//	}
//	virtual void speak() = 0;
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal的析构函数调用" << endl;
//	//}
//	// 需要申明也需要实现
//	// 有了纯虚析构，类也是抽象类
//	virtual ~Animal() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal的纯虚析构函数调用" << endl;
//}
//class Cat : public Animal 
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat的构造函数调用" << endl;
//		_name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *_name << "小猫在说话" << endl;
//	}
//
//	 ~Cat()
//	{
//		if (_name != NULL)
//		{
//			cout << "Cat的析构函数调用" << endl;
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
//	// 父类的指针在析构的时候，不会调用子类中析构函数，
//	// 导致子类如果有堆区属性，出现内存泄露
//	delete animal;
//}
//int main()
//{
//	test01();
//	return 0;
//}