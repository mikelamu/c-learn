/*
	set��������
		��飺
			����Ԫ�ض����ڲ���ʱ�Զ�������
		���ʣ�
			set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
			set��multiset����
			set���������������ظ���Ԫ��
			multiset�������������ظ���Ԫ��
	set����͸�ֵ
		��������������set�����Լ���ֵ
		���죺
			set<T> st; //Ĭ�Ϲ��캯����
			set(const set &st); //�������캯��
		��ֵ��
			set& operator=(const set &st); //���صȺŲ�����
	set��С�ͽ���
		����������
			ͳ��set������С�Լ�����set����
		����ԭ�ͣ�
			size(); //����������Ԫ�ص���Ŀ
			empty(); //�ж������Ƿ�Ϊ��
			swap(st); //����������������
	set�����ɾ��
		����������
			set�������в������ݺ�ɾ������
		����ԭ�ͣ�
			insert(elem); //�������в���Ԫ�ء�
			clear(); //�������Ԫ��
			erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
			erase(beg, end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
			erase(elem); //ɾ��������ֵΪelem��Ԫ�ء�
	set���Һ�ͳ��
		����������
			��set�������в��������Լ�ͳ������
		����ԭ�ͣ�
			find(key); //����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
			count(key); //ͳ��key��Ԫ�ظ���
	set��multiset����
		ѧϰĿ�꣺
			����set��multiset������
		����
			set�����Բ����ظ����ݣ���multiset����
			set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
			multiset���������ݣ���˿��Բ����ظ�����
	 pair���鴴��
		����������
			�ɶԳ��ֵ����ݣ����ö�����Է�����������
		���ִ�����ʽ��
			pair<type, type> p ( value1, value2 );
			pair<type, type> p = make_pair( value1, value2 );
			p.first p.second ������������
	set��������
		ѧϰĿ�꣺
			set����Ĭ���������Ϊ��С����������θı��������
		��Ҫ�����㣺
			���÷º��������Ըı��������
			class MyCompare
			{
			public:
			bool operator()(int v1, int v2) {
			return v1 > v2;
			}
			};
			set<int,MyCompare> s2;
		�����Զ����������ͣ�set����ָ���������ſ��Բ�������
*/	
#include<iostream>
#include<set>
using namespace std;
void printSet(set<int>& s)
{
	for (set<int>::iterator i = s.begin(); i != s.end(); i++)
	{
		cout << *i << endl;
	}
}
void test01()
{
	set<int> s;
	set<int
	for (int i = 0; i < 10; i++)
	{
		s.insert(rand() % 10);
	}
	printSet(s);

}
int main()
{
	test01();
	system("pause");
}
