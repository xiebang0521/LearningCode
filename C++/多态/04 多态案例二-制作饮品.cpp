//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class AbstractDrinking
//{
//public:
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourIncup() = 0;
//	virtual void PutSomthing() = 0;
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourIncup();
//		PutSomthing();
//	}
//};
//
//class Coffee : public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	virtual void PourIncup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	virtual void PutSomthing()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
//class Tea : public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	virtual void PourIncup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	virtual void PutSomthing()
//	{
//		cout << "�������" << endl;
//	}
//};
//
//// ��������
//void doWork(AbstractDrinking* abs)
//{
//	abs->makeDrink();
//	delete abs;
//}
//int main()
//{
//	doWork(new Coffee);
//	cout << "-------------" << endl;
//	doWork(new Tea);
//	return 0;
//}