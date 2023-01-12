/*
运算符重载概念：
	对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
	1、加号运算符重载
		作用：实现两个自定义数据类型相加的运算
		operator+
		1、通过成员函数重载+
		2、通过全局函数重载+
		3、也可以发生函数重载，例如operator+（person &p, int a）
	2、左移运算符重载
		作用：输出自定义数据类型
		operator<
*/
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	int m_a;
	int m_b;
	//1、通过成员函数重载+
	//Person operator+(Person &p)
	//{
	//	Person temp;
	//	temp.m_a = p.m_a + m_a;
	//	temp.m_b = p.m_b + m_b;
	//	return temp;
	//}
};
//2、通过全局函数重载+
Person operator+(Person &p1, Person &p2)
{
	Person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}

void test1()
{
	Person p1;
	p1.m_a = 10;
	p1.m_b = 10;
	Person p2;
	p2.m_a = 10;
	p2.m_b = 10;
	Person p3;
	p3 = p1 + p2;
	cout << "p3.m_a = " <<p3.m_a << endl;
}
void main()
{
	test1();
	system("pause");
}