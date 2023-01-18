/*
	���ͱ����STL
		���ͱ����Ҫ���õļ�����ģ��
			ģ�壺����ͨ�õ�ģ�ߣ������߸�����
			����ģ����ƣ�����ģ�����ģ��
				����ģ�壺
					����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ������ƶ���
					��һ����������ʹ���
					�﷨�� template<typename T>
						template ��������ģ��
						typename ����������һ���������ͣ�������class����
						T ͨ�õ��������ͣ�ͨ��Ϊ��д��ĸ
			��ͨ������ģ�庯��������
				��ͨ�������ÿ��Է����Զ�����ת������ʽ����ת����
				����ģ����ã���������Զ������Ƶ������ᷢ����ʽ����ת��
				���������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��
			��ͨ������ģ�庯���ĵ��ù���
				1 �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
				2 ��ͨ����ģ������б�ǿ�Ƶ���ģ�庯��
				3 ����ģ���������
				4 �������ģ����Բ������õ�ƥ���������ȵ���ģ�庯��
			ģ������ԣ�
				�����Զ����������ͣ�ģ���޷���������
				1����Ҫ�þ��廯��ʽ������ʵ��
				2������ͨ�������������ؽ��

		ѧϰģ�岢����Ϊ��дģ�壬������STL������ϵͳ��ߵ�ģ��
		
		typeid(T).name() �鿴��ģ��
		��ģ�壺����һ��ͨ�õ���
			�﷨�뺯��ģ��һ��
			����
			 1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
			 2����ģ����ģ������б��п�����Ĭ�ϲ���  
				template<class NameType = string, class AgeType = int>
		��ģ���г�Ա��������ʱ�䣺
			��ģ���г�Ա�����ڵ���ʱ��ȥ����
		��ģ�����������������
			��ģ��ʵ�������Ķ����������εķ�ʽ
			���ַ�ʽ��
				1��ָ����������� ֱ����ʾ������������� ���
				2������ģ�廯 ������Ĳ�����Ϊģ����д���
				3��������ģ�廯 ����������ģ�廯���д���
		��ģ����̳У�
			������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ�������T������
			��ָ�����޷�����������ڴ�
			��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
		��ģ���Ա��������ʵ�֣�
			template<class T>
			�������� ����<T> :: ��Ա����()
			{ }
		��ģ����ļ���д
			���⣺��ģ���г�Ա�����Ĵ���ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
			���������
				1��ֱ�Ӱ���.cpp�ļ�
				2����.h�� .cpp������д��һ�𣬽���׺���ĳ�.hpp�ļ�
		��ģ������Ԫ��
			ȫ�ֺ�������ʵ�� ֱ��������������Ԫ����
			ȫ�ֺ�������ʵ�� ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ��ڣ���Ҫ��ǰ����ȫ�ֺ���ģ��
*/	
#include<iostream>
#include<string>
using namespace std;
template<typename T>
void maswap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
//ģ��ʹ�÷���
void test01()
{
	int a = 1;
	int b = 2;
	int c = 3;
	//1���Զ������Ƶ�
	maswap(a, b);
	cout << "a is "<<a << "b is " << b << "c is " << c <<endl;
	//2����ʾָ������
	maswap<int>(b, c);
	cout << "a is " << a << "b is " << b << "c is " << c << endl;
}
//�Ա����������Ƿ����
template<class T>
bool mycompare(T &a, T&b)
{
	if (a == b) //����ͨ����������ؽ��
	{
		return true;
	}
	else
	{
		return false;
	}
}
class Person
{
public:
	Person(int a, int b)
	{
		m_a = a;
		m_b = b;
	}
	int m_a;
	int m_b;
	bool operator==(Person & b)
	{
		if (m_a == b.m_b && m_b == b.m_b) //����ͨ����������ؽ��
		{
			return true;
		}
		else
		{
			return false;

		}
	}
};
//template<> bool mycompare(Person &a, Person &b)
//{
//	if ( a.m_a == b.m_b && a.m_b == b.m_b) //����ͨ����������ؽ��
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
void test02()
{
	//int a = 1;
	//int b = 1;
	Person a(1, 1);
	Person b(1, 1);
	if (mycompare(a, b))
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

//��ģ��
template<class NameType, class AgeType>
class Person2
{
public:
	Person2(NameType name, AgeType age)
	{
		this->m_name = name;
		m_age = age;
	}
	NameType m_name;
	AgeType m_age;
};
void test03()
{
	Person2<string, int> p1("zhangsan", 1);
	cout << p1.m_name << "'s age is " << p1.m_age << endl;
}


template<class NameType, class AgeType>
class Person3
{
public:
	Person3(NameType name, AgeType age);
	void showperson();
	NameType m_name;
	AgeType m_age;
};
//���ַ�ʽ��
//1��ָ����������� ֱ����ʾ�������������
void ShowPerson01(Person3<string, int> &p)
{
	p.showperson();

}
//2������ģ�廯 ������Ĳ�����Ϊģ����д���
template<class T1,class T2>
void ShowPerson02(Person3<T1, T2> &p)
{
	p.showperson();
	cout << "T1 type is " << typeid(T1).name() << endl;
	cout << "T1 type is " << typeid(T2).name() << endl;
}
//3��������ģ�廯 ����������ģ�廯���д���
template<class T>
void ShowPerson03(T &p)
{
	p.showperson();
	cout << "T type is " << typeid(T).name() << endl;
}

template<class NameType , class AgeType >
Person3< NameType, AgeType>::Person3(NameType name, AgeType age)
	{
		this->m_name = name;
		this->m_age = age;
	}
template<class NameType, class AgeType >
void Person3< NameType, AgeType>::showperson()
	{
		cout <<m_name << "'s age is " << m_age << endl;
	}
void test04()
{
	Person3<string,int> p1("zhangsan", 1);
	ShowPerson03(p1);
}

//��ģ����̳�
template<class T>
class base
{
public:
	T m;
};
class son : public base<int>
{

};

//���ļ���д
#include"person.cpp"
void test05()
{
	Person04<string, int> p1("zhangsan", 1);
	p1.showperson();
}
void main()
{
	test05();
	system("pause");
}
