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