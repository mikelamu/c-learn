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
		operator<<
		左移运算符一般通过全局函数进行重载
	3、递增运算符重载
		作用：利用重载，实现自己的
		operator++
	4、赋值运算符 operator=，对属性进行值拷贝
		利用深拷贝解决浅拷贝导致的内存重复释放问题，利用new 开创堆区内存
	5、关系运算符
		operator==
	6、函数调用运算符重载
		函数调用运算符( )也可以重载
		重载后的使用方式非常像函数的调用，因此称为仿函数，在STL运用较多
		仿函数没有固定写法，非常灵活
		operator()
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
	// operator<<
	//int operator<<(cout) //p.operator<<(cout)
	//{
	//	
	//}
	//重载前置++
	Person  operator++()
	{
		Person temp = * this;
		temp.m_a++;
		//再将自身返回
		return temp;
	}
	//后置递增 Person & operator++(int) int表示占位参数
	Person operator++(int)
	{
		//先 先记录结果
		Person temp = *this;
		m_a++;

		//后 递增
		return temp;
	}
};
//2、通过全局函数重载+
Person operator+(Person &p1, Person &p2)
{
	Person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
ostream & operator<<(ostream & cout, Person p) //operator<<(cout,p)=cout<<p
{
	cout << "m_A : " << p.m_a <<endl;
	return cout;
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
	//cout << "p3.m_a = " <<p3.m_a << endl;
	//cout << p1 << endl;
	//operator<<(cout, p1);
	//cout << ++(++p1) << endl;
	//cout << p1 << endl;
	cout << (p1++)++ << endl;
	cout << p1 << endl;
}
void main()
{
	test1();
	system("pause");
}