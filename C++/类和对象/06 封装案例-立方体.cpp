//#include <iostream>
//#include <math.h>
//
//
////�����������
//// 1.������������
//// 2.�������
//// 3.�����Ϊ ��ȡ��������������
//// 4.�ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
//using namespace std;
//
//class Cube
//{
//public:
//	void setHight(int h)
//	{
//		_h = h;
//	}
//
//	void setWide(int w)
//	{
//		_w = w;
//	}
//
//	void setLength(int l)
//	{
//		_l = l;
//	}
//
//	int getHeight(void)
//	{
//		return _h;
//	}
//
//	int getWide(void)
//	{
//		return _w;
//	}
//
//	int getLength(void)
//	{
//		return _l;
//	}
//
//	int calculateS()
//	{
//		return 2 * (_l * _h + _w*_l + _w*_h);
//	}
//
//	int calculateV()
//	{
//		return _l * _w * _h;
//	}
//
//	// ���ó�Ա�����ж������������Ƿ����
//
//	bool isEqualClass(Cube& c)
//	{
//		return _l == c.getLength() && _w == c.getWide() && _h == c.getHeight();
//	}
//
//
//private:
//	int _l;
//	int _w;
//	int _h;
//
//};
//
//// ����ȫ�ֺ����жϣ� �����������Ƿ����
//bool isequal(Cube &c1, Cube &c2)
//{
//	return (c1.getHeight() == c2.getHeight())
//		&& (c1.getLength() == c2.getLength())
//		&& (c1.getWide() == c2.getWide());
//}
//
//int main()
//{
//	Cube c1;
//	c1.setLength(10);
//	c1.setWide(10);
//	c1.setHight(10);
//
//	Cube c2;
//	c2.setLength(10);
//	c2.setWide(10);
//	c2.setHight(10);
//	
//	//bool ret = isequal(c1, c2);
//	bool ret = c1.isEqualClass(c2);
//	if (ret)
//	{
//		cout << "����һ����Ա�����жϵĽ����c1 �� c2 ����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "����һ����Ա�����жϵĽ����c1 �� c2 �ǲ���ȵ�" << endl;
//	}
//	//cout << "c1�����Ϊ�� " << c1.calculateS() << endl;
//	//cout << "c1�����Ϊ�� " << c1.calculateV() << endl;
//	return 0;
//}