//#include <iostream>
//using namespace std;
//
//// 利用函数模板封装一个排序的函数， 可以对不同数据类型数组进行排序
//// 排序规则从大到小，排序算法为选择排序
//// 分别利用char数组和int数组进行测试
//template<class T>
//void MySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void SelectSort(T array[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int maxindex = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (array[maxindex] < array[j])
//			{
//				maxindex = j;
//			}
//		}
//
//		if (maxindex != i)
//		{
//			MySwap(array[maxindex], array[i]);
//		}
//	}
//}
//
//template<class T>
//void printArray(T array[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << array[i] << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	SelectSort(charArr, num);
//	printArray(charArr, num);
//
//}
//
//void test02()
//{
//
//	int intArr[] = { 7,5,1,3,9,2,4,6,8 };
//	int num = sizeof(intArr) / sizeof(int);
//	SelectSort(intArr, num);
//	printArray(intArr, num);
//}
//int main()
//{
//	test02();
//	return 0;
//}