/*
	多态：
		静态多态： 函数重载和运算符重载，复用函数名
			函数地址早绑定，编译阶段确定函数地址
		动态多态： 派生类和虚函数实现多态
			函数地址晚绑定，运行阶段确定函数地址
			满足条件：要有继承关系，子类要重写父类的虚函数 
			重写：函数值返回类型 函数名 参数列表完全相同
			动态多态使用
				父类的指针或者引用指向子类对象
			查看单个类的布局
				vs开发人员命令提示符
				cd到目录下， c1 /d1 reportSingleClassLayout 需要查看的类名
				虚函数会多一个虚函数指针 vfstr
				子类的虚函数指针会替换子类虚函数表的父类虚函数指针,从而实现子类虚函数调用
		多态优点：
			1、结构清晰	2、可读性强 3、易于维护，对扩展进行开放，对修改进行关闭
		纯虚函数和抽象类
			多态中，父类的实现是没有意义的，主要是调用子类重写的内容，因此
			可以将虚函数改为纯虚函数
			语法： virtual 返回值类型 函数名 （参数列表） = 0；
			当类中有了纯虚函数，称为抽象类
			抽象类特点：
				1、无法实例化对象
				2、子类必须重写父类的纯虚函数，否则也是抽象类
*/
#include<iostream>
#include<string>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "Animal is speaking" << endl;
	}
};
class Cat : public Animal
{
public:
	virtual void speak()
	{
		cout << "Cat is speaking" << endl;

	}
};
class AbsDrinking
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
};
class Tea:public AbsDrinking
{
public:
	void Boil()
	{
		cout << "Boiling Water " << endl;
	}
	void Brew()
	{
		cout << "Add tea." << endl;
	}
};
class Coffee :public AbsDrinking
{
public:
	void Boil()
	{
		cout << "Boiling Coffee " << endl;
	}
	void Brew()
	{
		cout << "Add Coffee." << endl;
	}
};
void test01(AbsDrinking &drink)
{
	drink.Boil();
	drink.Brew();
	delete &drink;
}
int main()
{
	test01(* new Coffee);
	test01(* new Tea);
	system("pause");
	return 0;
}