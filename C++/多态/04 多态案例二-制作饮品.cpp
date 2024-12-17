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
//		cout << "ÖóÅ©·òÉ½Èª" << endl;
//	}
//
//	virtual void Brew()
//	{
//		cout << "³åÅÝ¿§·È" << endl;
//	}
//
//	virtual void PourIncup()
//	{
//		cout << "µ¹Èë±­ÖÐ" << endl;
//	}
//
//	virtual void PutSomthing()
//	{
//		cout << "¼ÓÈëÌÇºÍÅ£ÄÌ" << endl;
//	}
//};
//
//class Tea : public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "Öó¿óÈªË®" << endl;
//	}
//
//	virtual void Brew()
//	{
//		cout << "³åÅÝ²èÒ¶" << endl;
//	}
//
//	virtual void PourIncup()
//	{
//		cout << "µ¹Èë±­ÖÐ" << endl;
//	}
//
//	virtual void PutSomthing()
//	{
//		cout << "¼ÓÈëèÛè½" << endl;
//	}
//};
//
//// ÖÆ×÷º¯Êý
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