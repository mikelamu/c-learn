/*
	泛型编程与STL
		泛型编程主要利用的技术：模板
			模板：建立通用的模具，大大提高复用性
			两种模板机制：函数模板和类模板
				函数模板：
					建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，
					用一个虚拟的类型代表
					语法： template<typename T>
						template 声明创建模板
						typename 表明后面是一种数据类型，可以用class代替
						T 通用的数据类型，通常为大写字母
*/
#include<iostream>
#include<string>
using namespace std;
template<typename T>
void maswap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
//模板使用方法
void test01()
{
	int a = 1;
	int b = 2;
	int c = 3;
	//1、自动类型推导
	maswap(a, b);
	cout << "a is "<<a << "b is " << b << "c is " << c <<endl;
	//2、显示指定类型
	maswap<int>(b, c);
	cout << "a is " << a << "b is " << b << "c is " << c << endl;
}
void main()
{
	test01();
	system("pause");
}
