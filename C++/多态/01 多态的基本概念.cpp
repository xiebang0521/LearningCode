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
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//	// ������д�����е��麯��
//	// �����е��麯���� �ڲ����滻�� ������麯����ַ &Cat::speak
//	// ������麯���� ���� &Animal::speak
//public:
//	void speak()
//	{
//		cout << "è��˵��" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//
//	// ��д ��������ֵ���� ������ �����б� ��һ��
//	void speak()
//	{
//		cout << "gou��˵��" << endl;
//	}
//};
//
//// ��ַ���  �ڱ���׶ξ�ȷ���˺�����ַ
//// �����ִ�� ��è˵������ô���������ַ�Ͳ�����ǰ�� ��Ҫ�����н׶ν��а󶨣���ַ���ͨ��virtual 
//
//
//// ��̬��̬��������
//// 1.�м̳й�ϵ
//// 2.������д������麯��
//
//// ��̬��̬ʹ��
//// �����ָ���������ָ������Ķ���
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
//	cout << "sizeof Animal = " << sizeof(Animal) << endl; // δ��virtual ��СΪ1 ����֮��ͱ�� 4 
//	// ���� һ�� vfptr �麯��ָ�� ָ���麯���� vftable virtual function table
//	// Animal::speak 
//}
//int main()
//{
//	test01();
//	return 0;
//}