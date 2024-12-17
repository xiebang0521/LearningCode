//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// 传统计算器的写法，要添加新的功能，就需要修改源码
//// 开闭原则，对扩展进行开发，对修改进行关闭
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
//// 多态实现计算器,
//// 1.组织结构清晰
//// 2.可读性强
//// 3.对于前期或后期扩展性以及维护性高
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