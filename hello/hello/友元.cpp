/*
	��Ԫ���ؼ��� friend
		˽���������������һЩ���⺯�����з���
		����ʵ�ַ�����
			1��ȫ�ֺ�������Ԫ
			2��������Ԫ
			3����Ա��������Ԫ
*/
#include<iostream>
#include<string>
using namespace std;
class Building;
//������Ԫ
class Goodgay
{
public:
	Goodgay();
	void visit();//�ιۺ���������Building������

	Building * building;
};
class Building
{
	// ��ǰ����goodgay��Building��friend�����Է���˽�б���
	friend void goodgay(Building * building);
	//2��������Ԫ
	//friend class Goodgay;
	//3����Ա��������Ԫ
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
//1��ȫ�ֺ���
void goodgay(Building * building)
{
	cout << "���� sitroom��" << building->m_sitroom << endl;
	cout << "���� sitroom��" << building->m_bedroom << endl;
}
void test1()
{
	Building b1("a", "b");
	goodgay(&b1);
}

//����д��Ա����
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