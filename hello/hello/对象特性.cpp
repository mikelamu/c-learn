/*
	����ĳ�ʼ��������
	1�����캯������ʼ��
	   ����������ʹ��������������
	   ���������ᱻ�������Զ����ã�Ĭ��Ϊ��ʵ��
		���캯���﷨ ����(){}
			û�з���ֵ��дvoid 
			��������������ͬ
			��������
			���ö���ʱ�Զ����ã�����ֻ�����һ��
		�������� ~����(){}
			û�в������������أ����ٶ���ǰ���Զ�����
	2�����캯���ķ��༰����
			���ַ���ģ�ͣ��вι������޲ι��죻�����ͷ��ࣺ��ͨ���캯���뿽�����캯��
	3���������캯������ʱ��
			1��ʹ��һ��������Ķ����ʼ���¶���
			2��ֵ���ݵķ�ʽ������������ֵ
			3��ֵ��ʽ���ؾֲ�����
	4�� ���캯�����ù���
		һ�������
			1Ĭ�Ϲ��캯�� �޲Σ���ʵ�֣�
			2Ĭ���������� �޲� ����ʵ�֣�
			3Ĭ�Ͽ������� �����Խ���ֵ����
			���û������вι��캯����c++�����ṩĬ�Ϲ��캯��
			���û����忽�����캯�����򲻻��ṩ�������캯��
	5�� �����ǳ����
			ǳ�������򵥵ĸ�ֵ���������������ַ��������ʱ�ظ��ͷű���
			�����������������ռ�
	6�� ��ʼ���б�
		�﷨�����캯��():����1��ֵ1��������2��ֵ2��{ }
			
*/
#include<iostream>
#include<string>
using namespace std;
class person
{/*
	1�����캯������ʼ��
		����������ʹ��������������
		���������ᱻ�������Զ����ã�Ĭ��Ϊ��ʵ��
		���캯���﷨ ����() {}
	û�з���ֵ��дvoid
		��������������ͬ
		��������
		���ö���ʱ�Զ����ã�����ֻ�����һ��
		�������� ~����() {}*/
public:
	int age;
	person()
	{
		cout << "person ���캯���ĵ���" << endl;
	}
	person(int a)
	{
		cout << "person ���캯���ĵ���" << endl;
	}
	//�������캯��
	person(const person &p)
	{
		age = p.age;
	}
	~person()
	{
		cout << "person ���������ĵ���" << endl;
	}
};
//2���캯������
void test01()
{
	//1. ���ŷ�
	person p0; //�޲ε���
	person p(1);
	person p1(p);
	//ע�� ���ù��캯����Ҫ��С���� ���˻ᱻ�������������Ǵ�������
	//2. ��ʾ��
	person p02;//�޲ε���
	person p2 = person(1);//person(1)���������󣬵�����������ͷ�
	person p3 = person(p2);//��Ҫ���ÿ������캯����ʼ���������� �� person(p4) 
	//3����ʽת����
	person p4 = 10; //�൱�� person p4 = person(10);
}
//3���������캯������ʱ��
class person2
{

public:
	int age;
	person2()
	{
		cout << "person ���캯���ĵ���" << endl;
	}
	person2(int a)
	{
		age = a;
		cout << "person ���캯���ĵ���" << endl;
	}
	//�������캯��
	person2(const person2 &p)
	{
		age = p.age;
		cout << "person �������캯���ĵ���" << endl;
	}
	~person2()
	{
		cout << "person ���������ĵ���" << endl;
	}
};
//		1��ʹ��һ��������Ķ����ʼ���¶���
void test02()
{
	person2 p1(1);
	person2 p2(p1);
}
//		2��ֵ���ݵķ�ʽ������������ֵ
void work(person2 p){}
void test03()
{
	person2 p1(1);
	work(p1);
}
//		3��ֵ��ʽ���ؾֲ�����*/
person2 work1()
{
	person2 p;
	return p;
}
void test04()
{
	person2 p1 = work1();
}

//5�� �����ǳ����
class person3
{

public:
	int age;
	int * height;
	person3()
	{
		cout << "person ���캯���ĵ���" << endl;
	}
	person3(int a, int h)
	{
		age = a;
		height = new int(h);//������������
		cout << "person ���캯���ĵ���" << endl;
	}
	//	ǳ�������򵥵ĸ�ֵ����
	//person3(const person3 &p)
	//{
	//	age = p.age;
	//	height = p.height;
	//	cout << "person �������캯���ĵ���" << endl;
	//}

	//	�����������������ռ�
	person3(const person3 &p)
	{
		age = p.age;
		height = new int (*p.height);
		cout << "person �������캯���ĵ���" << endl;
	}

	~person3()
	{
		//�������룬�����������ͷ�
		delete height;
		cout << "person ���������ĵ���" << endl;
	}
};

//6�� ��ʼ���б�
class human
{
public:
	int A;
	int B;
	int C;
	human(int a, int b, int c):A(a),B(b),C(c)//ֱ�Ӹ�ֵ
	{
	}
};



void main() {
	human h1(1, 2, 6);
	cout << h1.A << " " << h1.B << " " << h1.C << endl;
	system("pause");
}