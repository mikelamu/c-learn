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
void main()
{
	test01();
	system("pause");
}
