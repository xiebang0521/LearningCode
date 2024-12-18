//#include <iostream>
//#include <fstream>
//
//using namespace std;
//// 文本文件 -文件以文本的ASCii码形式存储在计算机中
//// 二进制文件 -文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们
//
//// ofstream 写操作 
//// ifstream 读操作
//// fstream 读写操作
//
//void test01()
//{
//	ofstream ofs;
//	ofs.open("data.txt", ios::out);
//	ofs << "你好呀" << endl;
//	ofs << "姓名：谢邦" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//	ofs.close();
//}
//int main()
//{
//	// 1.包含头文件
//	// #include<fstream>
//	// 2.创建流对象
//	// ofstream ofs;
//	// 3.打开文件
//	// ofs.open("文件路径", 打开方式)；
//	// 4.写文件
//	// ofs << "写入的数据"；
//	// 5.关闭文件
//	// ofs.close();
//	test01();
//	return 0;
//}