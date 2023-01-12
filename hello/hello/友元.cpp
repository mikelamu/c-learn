/*
	友元：关键字 friend
		私有属性想让类外的一些特殊函数进行访问
		三种实现方法：
			1、全局函数做友元
			2、类做友元
			3、成员函数做友元
*/
#include<iostream>
#include<string>
using namespace std;
class Building;
//类做友元
class Goodgay
{
public:
	Goodgay();
	void visit();//参观函数，访问Building的属性

	Building * building;
};
class Building
{
	// 提前声明goodgay是Building的friend，可以访问私有变量
	friend void goodgay(Building * building);
	//2、类做友元
	//friend class Goodgay;
	//3、成员函数做友元
	friend void Goodgay::visit();
public:
	Building(string sitroom,string bedroom):m_bedroom(bedroom),m_sitroom(sitroom)
	{
		m_bedroom = "bedroom";
		m_sitroom = "sitroom";
	}
public:
	string m_sitroom;
	
private:
	string m_bedroom;
};
Goodgay::Goodgay()
{
	building = new Building("a", "b");
}
//1、全局函数
void goodgay(Building * building)
{
	cout << "访问 sitroom：" << building->m_sitroom << endl;
	cout << "访问 sitroom：" << building->m_bedroom << endl;
}
void test1()
{
	Building b1("a", "b");
	goodgay(&b1);
}

//类外写成员函数
void Goodgay::visit()
{
	cout << building->m_sitroom << endl;
	cout << building->m_bedroom << endl;
}
void test2()
{
	Goodgay g;
	g.visit();
}
void main()
{
	test2();
	system("pause");
}