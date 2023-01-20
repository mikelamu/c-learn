/*
	vector �ṹ������ǳ����ƣ���Ϊ��������
		��֮ͬ�������Ǿ�̬�ռ䣬vector���Զ�̬��չ������һ���¿ռ䣬����ԭ�����ݿ�����ȥ���ͷžɿռ�
	�㷨��for_each
	�������� vector<int>::iterator
	�﷨ vector<type>v;
		��Ԫ��ָ�� v.begin() 
		βԪ����һ��ַָ�� v.end()
		β�� v.push_back()
	���캯����
		vector<T> v; //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
		vector(v.begin(), v.end()); //��v[begin(), end())�����е�Ԫ�ؿ���������
		vector(n, elem); //���캯����n��elem����������
		vector(const vector &vec); //�������캯����
	��ֵ��
		vector& operator=(const vector &vec); //���صȺŲ�����
		assign(beg, end); //��[beg, end)�����е����ݿ�����ֵ������
		assign(n, elem); //��n��elem������ֵ������
	�������С��
		empty(); //�ж������Ƿ�Ϊ��
		capacity(); //����������
		size(); //����������Ԫ�صĸ���
		resize(int num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ0�����λ�á�
		//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
		resize(int num, elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
		//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
	���룺
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