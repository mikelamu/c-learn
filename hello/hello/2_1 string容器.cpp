/*
	string是一个类，是c++风格的字符串
	特点：内部封装了很多方法
		构造函数：
			string() 创建一个空字符串
			string(const char* s) 使用字符串s初始化
			string(const string&str) 使用一个string对象初始化另一个string对象
			string(int n, char c) 使用n个字符c初始化
		赋值：
			直接 = 赋值
			利用assign赋值
*/
#include<iostream>
using namespace std;
#include<string>
void test01()
{
	//string s1;
	const char* str = "hello";
	string s1(str);
	cout << s1 << endl;
	cout << str << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}