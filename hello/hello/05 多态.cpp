/*
	��̬��
		��̬��̬�� �������غ���������أ����ú�����
			������ַ��󶨣�����׶�ȷ��������ַ
		��̬��̬�� ��������麯��ʵ�ֶ�̬
			������ַ��󶨣����н׶�ȷ��������ַ
			����������Ҫ�м̳й�ϵ������Ҫ��д������麯�� 
			��д������ֵ�������� ������ �����б���ȫ��ͬ
			��̬��̬ʹ��
				�����ָ���������ָ���������
			�鿴������Ĳ���
				vs������Ա������ʾ��
				cd��Ŀ¼�£� c1 /d1 reportSingleClassLayout ��Ҫ�鿴������
				�麯�����һ���麯��ָ�� vfstr
				������麯��ָ����滻�����麯����ĸ����麯��ָ��,�Ӷ�ʵ�������麯������
		��̬�ŵ㣺
			1���ṹ����	2���ɶ���ǿ 3������ά��������չ���п��ţ����޸Ľ��йر�
		���麯���ͳ�����
			��̬�У������ʵ����û������ģ���Ҫ�ǵ���������д�����ݣ����
			���Խ��麯����Ϊ���麯��
			�﷨�� virtual ����ֵ���� ������ �������б� = 0��
			���������˴��麯������Ϊ������
			�������ص㣺
				1���޷�ʵ��������
				2�����������д����Ĵ��麯��������Ҳ�ǳ�����
		�������ʹ���������
			����ָ���ͷ������������:������������Կ��ٵ���������ô����ָ�����ͷ�ʱ���ܵ��õ��������������
			ͨ�������������������Ϊ���������ߴ����������
			����ָ��������ʱ�򲻻���������������������Ҫ��Ϊ������
			����������Ҫ�о����ʵ�֣��ڸ�������ʱ�ᱻ����
			�д����������ǳ����࣬�޷�ʵ����

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