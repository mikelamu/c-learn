/*
	��������
	���ã�������������ͬ����߸�����
	������ 1��ͬһ���������� 2�� ��������ͬ 3�������������Ͳ�ͬ���߸�����ͬ����˳��ͬ
	����ֵ����Ϊ�������ص�����
	ע�����
	1��������Ϊ����������
	
	2��������������Ĭ�ϲ���

*/
#include<iostream>
#include<string>
using namespace std;

/*
������Ϊ����ʱ
int a = 10;
func(a); ���õ���& a = a��
func(10); ���õڶ��� const int &a =10;
*/
void func(int & a)
{
	cout << "& a" << endl;
}
void func(const int & a)
{
	cout << "const int & a" << endl;
}

/*
��������
int a = 10;
func2(a); ����ȷ�����ú������ֶ����Ա���Ӧ�ñ����������
func2(10�� 20); ���õڶ���
*/

void func2(int a)
{
	cout << "& a" << endl;
}
void func(int a,int b =10)
{
	cout << "& a" << endl;
}



void func(int & a)
{
	cout << "& a" << endl;
}

void func()
{
	cout << "func 1" << endl;
}
void func(int a)
{
	cout << "func 2" << endl;
}
void func(double b)
{
	cout << "func 2" << endl;
}
int main()
{
	func();
	func(1);
	system("pause");
}
