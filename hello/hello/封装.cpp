/*
	��װ
	���壺����������Ϊ��Ϊһ�����壬���������е��������������Ϊ����Ȩ�޽��п���
	1���﷨��
	class ����{ ����Ȩ�ޣ�����/��Ϊ }��
	2������Ȩ�������֣�
		public ����Ȩ�ޣ�����������ɷ���
		protect ����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ�ɷ���
		private ˽��Ȩ�ޣ����ڿ��Է��ʣ����ⲻ�ɷ���
	3��struct �� class����
		structĬ��Ȩ���ǹ��� classĬ����˽��
	4����Ա��������Ϊ˽��
		1���ŵ���Կ��ƶ�дȨ�ޣ�
		2������д���Լ��������Ч��
	5�� ��ֳ�ͷ�ļ���Դ�ļ�
		ͷ�ļ�������
		#pragma once  ;ֻ����һ��
		#include <iostream>
		using namespace std;
		������Ա����������
		Դ�ļ���
		#include"ͷ�ļ�.h"
		ֻ����������ʵ��
		����class circle
		��Դ�ļ��в���Ҫ����������ֱ�ӶԺ������ж���
		void circle::funcname(){}
		����ʱֱ�Ӱ���ͷ�ļ�����

*/
#include<iostream>
#include<string>
using namespace std;
//1.�﷨
class Cyrcle
{
public:
	// ����
	int m_r;
	//behavior; ����Բ���ܳ�
	double calculate()
	{
		return 2 * 3.14*m_r;
	}

};
//2������Ȩ�������֣�
//public ����Ȩ�ޣ�����������ɷ���
//protect ����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ�ɷ���,�̳��������ӿ��Է��ʸ��׵ı������ݣ����ܷ���˽������
//private ˽��Ȩ�ޣ����ڿ��Է��ʣ����ⲻ�ɷ���
class person
{
public:
	//����Ȩ��
	string name;
protected:
	//����Ȩ��
	string car;
public:
	void func()
	{
		name = "jack";
		car = "jack's car";
	}
};
//4����Ա��������Ϊ˽��
//	1���ŵ���Կ��ƶ�дȨ�ޣ�
//	2������д���Լ��������Ч��
class person1
{
public:
	//д����
	void setname(string name)
	{
		Name = name;
	}
	//������
	string getname()
	{
		return Name;
	}
private:
	string Name;
	int Age;
};
int main()
{
	person1 p1;

	cout << p1.getname << endl;
	//cout << p1.car << endl;
	system("pause");
}