/*
��������ظ��
	�����е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
	1���Ӻ����������
		���ã�ʵ�������Զ�������������ӵ�����
		operator+
		1��ͨ����Ա��������+
		2��ͨ��ȫ�ֺ�������+
		3��Ҳ���Է����������أ�����operator+��person &p, int a��
	2���������������
		���ã�����Զ�����������
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
	//1��ͨ����Ա��������+
	//Person operator+(Person &p)
	//{
	//	Person temp;
	//	temp.m_a = p.m_a + m_a;
	//	temp.m_b = p.m_b + m_b;
	//	return temp;
	//}
};
//2��ͨ��ȫ�ֺ�������+
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