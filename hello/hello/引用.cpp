/*
	引用的使用
	作用：给变量起别名
	语法： 数据类型 &别名 = 原名
	本质：指针常量
	引用前必需初始化
	引用传递：形参会修饰实参
	不要返回局部变量的引用，局部变量会在函数结束时释放
	引用作为函数返回值的时候可以作为函数左值进行赋值
		int a = 0;
		int & ref = a;
		发现是引用，转换为 int * const ref = &a;
		ref = 1;
		内部发现是引用；转换为 * ref = 1；
	常量引用：用于防止形参被修改；且能直接给引用赋值而不用初始化。
	const int & a = 10；


*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	while (1)
	{
		int r = rand() % 10;
		for (int i = 0; i < r; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
}