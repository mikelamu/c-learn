/*
	对象的初始化和清理
	1、构造函数：初始化
	   析构函数：使用完对象进行清理
	   两个函数会被编译器自动调用，默认为空实现
		构造函数语法 类名(){}
			没有返回值不写void 
			函数名与类名相同
			可以重载
			调用对象时自动调用，而且只会调用一次
		析构函数 ~类名(){}
			没有参数，不能重载，销毁对象前会自动调用
	2、构造函数的分类及调用
			两种分类模型：有参构造与无参构造；按类型分类：普通构造函数与拷贝构造函数
	3、拷贝构造函数调用时机
			1、使用一个创建完的对象初始化新对象
			2、值传递的方式给函数参数传值
			3、值方式返回局部对象
	4、 构造函数调用规则
		一般包括：
			1默认构造函数 无参（空实现）
			2默认析构函数 无参 （空实现）
			3默认拷贝函数 对属性进行值拷贝
			若用户定义有参构造函数，c++不再提供默认构造函数
			若用户定义拷贝构造函数，则不会提供其他构造函数
	5、 深拷贝与浅拷贝
			浅拷贝：简单的赋值拷贝，例如堆区地址，在析构时重复释放报错
			深拷贝：堆区重新申请空间
	6、 初始化列表
		语法：构造函数():属性1（值1），属性2（值2）{ }
	7、类对象作为类成员
			先构造类成员对象，再构造自身；析构的时候先析构自身，再析构类成员
	8、静态成员
			静态成员变量：
				所有对象共享一份数据
				编译阶段分配内存
				类内声明，类外初始化
					1、通过对象进行访问
					2、通过类名访问，类名加上作用域  类名::静态变量名
					3、私有权限无法访问
			静态成员函数：
				所有对象共享一个函数
				静态成员函数只能访问静态成员变量
					1、两种访问方式，类名与对象访问
					2、也有访问权限
	9、对象模型和this指针
		c++中，类内的成员变量和成员函数分开存储
		只有非静态成员变量属于类的对象上，静态变量与成员函数都不属于类的对象
		this指针
			this指针指向被调用的成员函数所属的对象
			this指针不需要定义，直接使用即可
			用途：1形参与成员变量同名时，使用this指针来区分
				2、在类的非静态成员函数中返回对象本身，可使用return * this
	10、空指针访问成员函数
		c++中空指针也可以调用成员函数，但是要注意有没有用到this指针
	11、const修饰成员函数
		常函数：
			成员函数加const修饰后
			常函数不可以修改成员属性
			成员属性声明是加关键词mutable后，在常函数中依然可以修改
		常对象：
			声明对象前加const称该对象为常对象
			常对象只能调用常函数
*/
#include<iostream>
#include<string>
using namespace std;
class person
{/*
	1、构造函数：初始化
		析构函数：使用完对象进行清理
		两个函数会被编译器自动调用，默认为空实现
		构造函数语法 类名() {}
	没有返回值不写void
		函数名与类名相同
		可以重载
		调用对象时自动调用，而且只会调用一次
		析构函数 ~类名() {}*/
public:
	int age;
	person()
	{
		cout << "person 构造函数的调用" << endl;
	}
	person(int a)
	{
		cout << "person 构造函数的调用" << endl;
	}
	//拷贝构造函数
	person(const person &p)
	{
		age = p.age;
	}
	~person()
	{
		cout << "person 析构函数的调用" << endl;
	}
};
//2构造函数调用
void test01()
{
	//1. 括号法
	person p0; //无参调用
	person p(1);
	person p1(p);
	//注意 调用构造函数不要加小括号 加了会被当作声明而不是创建对象
	//2. 显示法
	person p02;//无参调用
	person p2 = person(1);//person(1)是匿名对象，调用完会立即释放
	person p3 = person(p2);//不要利用拷贝构造函数初始化匿名对象 即 person(p4) 
	//3、隐式转换法
	person p4 = 10; //相当于 person p4 = person(10);
}
//3、拷贝构造函数调用时机
class person2
{

public:
	int age;
	person2()
	{
		cout << "person 构造函数的调用" << endl;
	}
	person2(int a)
	{
		age = a;
		cout << "person 构造函数的调用" << endl;
	}
	//拷贝构造函数
	person2(const person2 &p)
	{
		age = p.age;
		cout << "person 拷贝构造函数的调用" << endl;
	}
	~person2()
	{
		cout << "person 析构函数的调用" << endl;
	}
};
//		1、使用一个创建完的对象初始化新对象
void test02()
{
	person2 p1(1);
	person2 p2(p1);
}
//		2、值传递的方式给函数参数传值
void work(person2 p){}
void test03()
{
	person2 p1(1);
	work(p1);
}
//		3、值方式返回局部对象*/
person2 work1()
{
	person2 p;
	return p;
}
void test04()
{
	person2 p1 = work1();
}

//5、 深拷贝与浅拷贝
class person3
{

public:
	int age;
	int * height;
	person3()
	{
		cout << "person 构造函数的调用" << endl;
	}
	person3(int a, int h)
	{
		age = a;
		height = new int(h);//堆区开辟数据
		cout << "person 构造函数的调用" << endl;
	}
	//	浅拷贝：简单的赋值拷贝
	//person3(const person3 &p)
	//{
	//	age = p.age;
	//	height = p.height;
	//	cout << "person 拷贝构造函数的调用" << endl;
	//}

	//	深拷贝：堆区重新申请空间
	person3(const person3 &p)
	{
		age = p.age;
		height = new int (*p.height);
		cout << "person 拷贝构造函数的调用" << endl;
	}

	~person3()
	{
		//析构代码，将堆区数据释放
		delete height;
		cout << "person 析构函数的调用" << endl;
	}
};

//6、 初始化列表
class human
{
public:
	int A;
	int B;
	int C;
	human(int a, int b, int c):A(a),B(b),C(c)// 直接赋值
	{
	}
};
//7、类对象作为类成员
class A
{
public:
	A()
	{
		cout << "A构造" << endl;
	}
	~A()
	{
		cout << "A析构" << endl;
	}
};
class B
{
public:
	B()
	{
		cout << "B构造" << endl;
		
	}
	~B()
	{
		cout << "B析构" << endl;
	}
	A a;
};
//先构造A再构造B
void test06()
{
	B b1;
}
//8、静态成员
//	静态成员变量：
//		所有对象共享一份数据
//		编译阶段分配内存
//		类内声明，类外初始化
//	静态成员函数：
//		所有对象共享一个函数
//		静态成员函数只能访问静态成员变量
class person4
{
public:
//	静态成员变量：
//		所有对象共享一份数据
//		编译阶段分配内存
//		必须类内声明，类外初始化
	static int m_A;
	static void func()
	{
		m_A = 0;
	}

};
int person4::m_A = 10;
void test07()
{
	person4 p;
	cout << p.m_A << endl;
	person4 p1;
//	所有对象共享一份数据
//	1、通过对象进行访问
	p1.m_A = 1;
//  2、 通过类名访问
	person4::m_A = 2;
	cout << p.m_A << endl;
	p1.func();
	person4::func();
	cout << p.m_A << endl;
}
//9、对象模型和this指针
//	c++中，类内的成员变量和成员函数分开存储
//	只有非静态成员变量属于类的对象上
class emp
{

};
void test09()
{
	emp p;//c++编译器会给每个空对象分配一个字节空间

}
//this指针
//this指针指向被调用的成员函数所属的对象
//this指针不需要定义，直接使用即可
//用途：1形参与成员变量同名时，使用this指针来区分
//2、在类的非静态成员函数中返回对象本身，可使用return * this
class person09
{
public:
	person09(int age)
	{
		//this 指针指向被调用的成员函数所属的对象
		this->age = age;
	}
	person09& add() //引用返回是返回自身的对象，值返回是返回一个新对象
	{
		return *this;
	}
	int age;
};
//10、空指针访问成员函数
//c++中空指针也可以调用成员函数，但是要注意有没有用到this指针
class person10
{
public:
	void showname()
	{
		cout << "person10 class" << endl;
	}
	void showage()
	{
		cout << "age is :" << age << endl;
	}
	int age;
};
void test10()
{
	person10 * p = NULL;
	p->showname();
	p->showage();
}

//11、const修饰成员函数
	//常函数：
	//成员函数加const修饰后
	//常函数不可以修改成员属性
	//成员属性声明是加关键词mutable后，在常函数中依然可以修改

class person11
{
public:
	//this指针的本质是指针常量，指针的指向不可修改
	//person11 * const
	//如果函数加了const修饰
	//变成 const person11 * const 指针指向的值也不可修改

	void showperson() const
	{
		m_A = 10;
	}
	int m_age;
	mutable int m_A;//特殊变量，即使在常函数中，也可以修改
};
//常对象：
//	声明对象前加const称该对象为常对象
//	常对象只能调用常函数
void test12()
{
	const person11 p;// add const 变为常对象
	p.m_A = 1;
	//p.m_age = 1;//报错
	p.showperson();//只能调用常函数

}
void main() {
	//human h1(1, 2, 6);
	//cout << h1.A << " " << h1.B << " " << h1.C << endl;
	//test06();
	test10();
	system("pause");
}