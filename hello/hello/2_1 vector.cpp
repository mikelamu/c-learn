/*
	vector
	�㷨��for_each
	�������� vector<int>::iterator
	�﷨ vector<type>v;
		��Ԫ��ָ�� v.begin() 
		βԪ����һ��ַָ�� v.end()
		β�� v.push_back()
*/
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void print(int a)
{
	cout << a << endl;
}
void test01()
{
	//������һ��vector����������
	vector<int> v;
	//�������в������ݣ�β��
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	//ͨ����������������������
	vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ��������һ��Ԫ�ص�λ��
	vector<int>::iterator itEnd = v.end(); //������������ָ�����������һ��Ԫ�ص���һ��λ��
	//��һ�ֱ�����ʽ
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	//�����ֱ�����ʽ ����STL�ṩ�����㷨
	for_each(v.begin(), v.end(), print);


}
void main()
{
	test01();
	system("pause");
}