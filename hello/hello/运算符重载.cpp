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
		operator<<
		���������һ��ͨ��ȫ�ֺ�����������
	3���������������
		���ã��������أ�ʵ���Լ���
		operator++
	4����ֵ����� operator=�������Խ���ֵ����
		����������ǳ�������µ��ڴ��ظ��ͷ����⣬����new ���������ڴ�
	5����ϵ�����
		operator==
	6�������������������
		�������������( )Ҳ��������
		���غ��ʹ�÷�ʽ�ǳ������ĵ��ã���˳�Ϊ�º�������STL���ý϶�
		�º���û�й̶�д�����ǳ����
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
	//1��ͨ����Ա��������+
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
	//����ǰ��++
	Person  operator++()
	{
		Person temp = * this;
		temp.m_a++;
		//�ٽ�������
		return temp;
	}
	//���õ��� Person & operator++(int) int��ʾռλ����
	Person operator++(int)
	{
		//�� �ȼ�¼���
		Person temp = *this;
		m_a++;

		//�� ����
		return temp;
	}
};
//2��ͨ��ȫ�ֺ�������+
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