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
		虚析构和纯虚析构：
			父类指针释放子类对象问题:如果子类有属性开辟到堆区，那么父类指针在释放时不能调用到子类的析构代码
			通过将父类的析构函数改为虚析构或者纯虚析构解决
			父类指针在析构时候不会调用子类的析构函数，需要改为虚析构
			纯虚析构需要有具体的实现，在父类析构时会被调用
			有纯虚析构都是抽象类，无法实例化

*/
#include<iostream>
#include<string>
using namespace std;
class CPU
{
public:
	virtual void calculate() = 0;
};
class Intel :public CPU
{
public:
	void calculate()
	{
		cout << "Intel CPU starts working !" << endl;
	}
};
class Lenovo :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo CPU starts working !" << endl;
	}
};
class Computer
{
public:
	Computer(CPU * cpu)
	{
		Computer::cpu = cpu;
	}

	void calculate()
	{
		cpu->calculate();
	}
	CPU * cpu;

};
Computer * test01()
{
	Lenovo * lenovo = new Lenovo;
	Intel * intel = new Intel;
	Computer * c1 = new Computer(lenovo);
	Computer c2 = Computer(intel);
	c1->calculate();
	c2.calculate();
	delete lenovo;
	delete intel;
	return c1;
}
int main()
{
	Computer * p = NULL;
	p = test01();
	if (p != NULL)
	{
		p->calculate();
	}
	system("pause");
	return 0;
}