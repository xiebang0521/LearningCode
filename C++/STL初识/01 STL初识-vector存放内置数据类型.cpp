//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//// vector容器存放内置数据类型
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	vector<int>::iterator itBegin = v.begin();// 起始迭代器，指向容器的第一个元素
//	vector<int>::iterator itEnd = v.end(); // 结束迭代器，指向容器的最后一个元素的下一个位置
//
//	// 第一种遍历方式
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//	//第二种遍历方式
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	// 第三种遍历方式
//	for_each(v.begin(), v.end(), myPrint);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}