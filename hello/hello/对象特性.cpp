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
	human(int a, int b, int c):A(a),B(b),C(c)//直接赋值
	{
	}
};



void main() {
	human h1(1, 2, 6);
	cout << h1.A << " " << h1.B << " " << h1.C << endl;
	system("pause");
}