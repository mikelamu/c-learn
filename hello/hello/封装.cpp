/*
	封装
	意义：将属性与行为作为一个整体，表现生活中的事物；将属性与行为加以权限进行控制
	1、语法：
	class 类名{ 访问权限：属性/行为 }；
	2、访问权限有三种：
		public 公共权限；类内类外均可访问
		protect 保护权限；类内可以访问，类外不可访问
		private 私有权限；类内可以访问，类外不可访问
	3、struct 和 class区别
		struct默认权限是公共 class默认是私有
	4、成员属性设置为私有
		1、优点可以控制读写权限；
		2、对于写可以检测数据有效性
	5、 拆分成头文件和源文件
		头文件包含：
		#pragma once  ;只编译一次
		#include <iostream>
		using namespace std;
		包含成员函数的声明
		源文件：
		#include"头文件.h"
		只保留函数的实现
		例如class circle
		在源文件中不需要重新声明，直接对函数进行定义
		void circle::funcname(){}
		调用时直接包含头文件即可

*/
#include<iostream>
#include<string>
using namespace std;
//1.语法
class Cyrcle
{
public:
	// 属性
	int m_r;
	//behavior; 计算圆的周长
	double calculate()
	{
		return 2 * 3.14*m_r;
	}

};
//2、访问权限有三种：
//public 公共权限；类内类外均可访问
//protect 保护权限；类内可以访问，类外不可访问,继承有区别，子可以访问父亲的保护内容，不能访问私有内容
//private 私有权限；类内可以访问，类外不可访问
class person
{
public:
	//公共权限
	string name;
protected:
	//保护权限
	string car;
public:
	void func()
	{
		name = "jack";
		car = "jack's car";
	}
};
//4、成员属性设置为私有
//	1、优点可以控制读写权限；
//	2、对于写可以检测数据有效性
class person1
{
public:
	//写姓名
	void setname(string name)
	{
		Name = name;
	}
	//读姓名
	string getname()
	{
		return Name;
	}
private:
	string Name;
	int Age;
};
int main()
{
	person1 p1;

	cout << p1.getname << endl;
	//cout << p1.car << endl;
	system("pause");
}