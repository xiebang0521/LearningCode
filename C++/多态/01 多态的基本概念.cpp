//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//	// 子类重写父类中的虚函数
//	// 子类中的虚函数表 内部会替换成 子类的虚函数地址 &Cat::speak
//	// 父类的虚函数表 还是 &Animal::speak
//public:
//	void speak()
//	{
//		cout << "猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//
//	// 重写 函数返回值类型 函数名 参数列表 都一样
//	void speak()
//	{
//		cout << "gou在说话" << endl;
//	}
//};
//
//// 地址早绑定  在编译阶段就确定了函数地址
//// 如果想执行 让猫说话，那么这个函数地址就不能提前绑定 需要再运行阶段进行绑定，地址晚绑定通过virtual 
//
//
//// 动态多态满足条件
//// 1.有继承关系
//// 2.子类重写父类的虚函数
//
//// 动态多态使用
//// 父类的指针或引用来指向子类的对象
//void doSpeak(Animal& animal) // Animal  &animal = cat;
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "sizeof Animal = " << sizeof(Animal) << endl; // 未加virtual 大小为1 加了之后就变成 4 
//	// 存在 一个 vfptr 虚函数指针 指向虚函数表 vftable virtual function table
//	// Animal::speak 
//}
//int main()
//{
//	test01();
//	return 0;
//}