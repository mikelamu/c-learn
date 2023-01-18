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
			普通函数与模板函数的区别：
				普通函数调用可以发生自动类型转换（隐式类型转换）
				函数模板调用，如果利用自动类型推导，不会发生隐式类型转换
				如果利用显示指定类型的方式，可以发生隐式类型转换
			普通函数与模板函数的调用规则：
				1 如果函数模板和普通函数都可以实现，优先调用普通函数
				2 可通过空模板参数列表强制调用模板函数
				3 函数模板可以重载
				4 如果函数模板可以产生更好的匹配结果，优先调用模板函数
			模板局限性：
				对于自定义数据类型，模板无法正常运行
				1、需要用具体化方式做特殊实现
				2、可以通过类的运算符重载解决

		学习模板并不是为了写模板，而是在STL能运用系统提高的模板
		
		typeid(T).name() 查看类模板
		类模板：建立一个通用的类
			语法与函数模板一样
			区别：
			 1、类模板没有自动类型推导的使用方式
			 2、类模板在模板参数列表中可以有默认参数  
				template<class NameType = string, class AgeType = int>
		类模板中成员函数创建时间：
			类模板中成员函数在调用时才去创建
		类模板对象做函数参数：
			类模板实例化出的对象向函数传参的方式
			三种方式：
				1、指定传入的类型 直接显示对象的数据类型 最常用
				2、参数模板化 将对象的参数变为模板进行传递
				3、整个类模板化 将对象类型模板化进行传递
		类模板与继承：
			当子类继承的父类是一个类模板时，子类在声明的时候要指定父类的T的类型
			不指定则无法给子类分配内存
			如果想灵活指定出父类中T的类型，子类也需要变为类模板
		类模板成员函数类外实现：
			template<class T>
			函数类型 类名<T> :: 成员函数()
			{ }
		类模板分文件编写
			问题：类模板中成员函数的创建时机是在调用阶段，导致分文件编写时链接不到
			解决方法：
				1、直接包含.cpp文件
				2、将.h和 .cpp的内容写到一起，将后缀名改成.hpp文件
		类模板与友元：
			全局函数类内实现 直接在类内声明友元即可
			全局函数类外实现 需要提前让编译器知道全局函数的存在，需要提前声明全局函数模板
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
//对比两个数据是否相等
template<class T>
bool mycompare(T &a, T&b)
{
	if (a == b) //可以通过运算符重载解决
	{
		return true;
	}
	else
	{
		return false;
	}
}
class Person
{
public:
	Person(int a, int b)
	{
		m_a = a;
		m_b = b;
	}
	int m_a;
	int m_b;
	bool operator==(Person & b)
	{
		if (m_a == b.m_b && m_b == b.m_b) //可以通过运算符重载解决
		{
			return true;
		}
		else
		{
			return false;

		}
	}
};
//template<> bool mycompare(Person &a, Person &b)
//{
//	if ( a.m_a == b.m_b && a.m_b == b.m_b) //可以通过运算符重载解决
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
void test02()
{
	//int a = 1;
	//int b = 1;
	Person a(1, 1);
	Person b(1, 1);
	if (mycompare(a, b))
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

//类模板
template<class NameType, class AgeType>
class Person2
{
public:
	Person2(NameType name, AgeType age)
	{
		this->m_name = name;
		m_age = age;
	}
	NameType m_name;
	AgeType m_age;
};
void test03()
{
	Person2<string, int> p1("zhangsan", 1);
	cout << p1.m_name << "'s age is " << p1.m_age << endl;
}


template<class NameType, class AgeType>
class Person3
{
public:
	Person3(NameType name, AgeType age);
	void showperson();
	NameType m_name;
	AgeType m_age;
};
//三种方式：
//1、指定传入的类型 直接显示对象的数据类型
void ShowPerson01(Person3<string, int> &p)
{
	p.showperson();

}
//2、参数模板化 将对象的参数变为模板进行传递
template<class T1,class T2>
void ShowPerson02(Person3<T1, T2> &p)
{
	p.showperson();
	cout << "T1 type is " << typeid(T1).name() << endl;
	cout << "T1 type is " << typeid(T2).name() << endl;
}
//3、整个类模板化 将对象类型模板化进行传递
template<class T>
void ShowPerson03(T &p)
{
	p.showperson();
	cout << "T type is " << typeid(T).name() << endl;
}

template<class NameType , class AgeType >
Person3< NameType, AgeType>::Person3(NameType name, AgeType age)
	{
		this->m_name = name;
		this->m_age = age;
	}
template<class NameType, class AgeType >
void Person3< NameType, AgeType>::showperson()
	{
		cout <<m_name << "'s age is " << m_age << endl;
	}
void test04()
{
	Person3<string,int> p1("zhangsan", 1);
	ShowPerson03(p1);
}

//类模板与继承
template<class T>
class base
{
public:
	T m;
};
class son : public base<int>
{

};

//分文件编写
#include"person.cpp"
void test05()
{
	Person04<string, int> p1("zhangsan", 1);
	p1.showperson();
}
void main()
{
	test05();
	system("pause");
}
