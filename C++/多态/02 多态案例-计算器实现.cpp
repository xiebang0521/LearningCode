//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// ��ͳ��������д����Ҫ����µĹ��ܣ�����Ҫ�޸�Դ��
//// ����ԭ�򣬶���չ���п��������޸Ľ��йر�
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return _num1 + _num2;
//		}
//		else if(oper == "-")
//		{
//			return _num1 - _num2;
//		}
//		else if (oper == "*")
//		{
//			return _num1 * _num2;
//		}
//		return 0;
//	}
//
//	int _num1;
//	int _num2;
//};
//
//
//// ��̬ʵ�ּ�����,
//// 1.��֯�ṹ����
//// 2.�ɶ���ǿ
//// 3.����ǰ�ڻ������չ���Լ�ά���Ը�
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int _num1;
//	int _num2;
//};
//
//class AddCalculator :public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return _num1 + _num2;
//	}
//};
//
//class SubCalculator :public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return _num1 - _num2;
//	}
//};
//
//class MulCalculator :public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return _num1 * _num2;
//	}
//};
//void test01()
//{
//	Calculator c;
//	c._num1 = 10;
//	c._num2 = 10;
//
//	cout << c._num1 << " + " << c._num2 << " = " << c.getResult("+") << endl;
//	cout << c._num1 << " - " << c._num2 << " = " << c.getResult("-") << endl;
//	cout << c._num1 << " * " << c._num2 << " = " << c.getResult("*") << endl;
//}
//
//void test02()
//{
//	AbstractCalculator *abc;
//	abc = new AddCalculator;
//	abc->_num1 = 100;
//	abc->_num2 = 100;
//	abc->getResult();
//	cout << abc->_num1 << " + " << abc->_num2 << " = " << abc->getResult() << endl;
//	delete abc;
//	abc = NULL;
//
//	abc = new SubCalculator;
//	abc->_num1 = 100;
//	abc->_num2 = 100;
//	abc->getResult();
//	cout << abc->_num1 << " - " << abc->_num2 << " = " << abc->getResult() << endl;
//	delete abc;
//	abc = NULL;
//
//	abc = new MulCalculator;
//	abc->_num1 = 100;
//	abc->_num2 = 100;
//	abc->getResult();
//	cout << abc->_num1 << " * " << abc->_num2 << " = " << abc->getResult() << endl;
//	delete abc;
//	abc = NULL;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}