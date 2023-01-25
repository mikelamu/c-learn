/*
	STL- �����㷨:
		����:
			�㷨��Ҫ����ͷ�ļ� <algorithm> <functional> <numeric> ��ɡ�
			<algorithm> ������STLͷ�ļ�������һ������Χ�漰���Ƚϡ� ���������ҡ��������������ơ��޸ĵȵ�
			<numeric> �����С��ֻ��������������������м���ѧ�����ģ�庯��
			<functional> ������һЩģ����,����������������
	���ñ����㷨
		�㷨��飺
			for_each //��������
				����������
					ʵ�ֱ�������
					����ԭ�ͣ�
					for_each(iterator beg, iterator end, _func);
					// �����㷨 ��������Ԫ��
					// beg ��ʼ������
					// end ����������
					// _func �������ߺ�������
			transform //������������һ��������
				����������
					������������һ��������
					����ԭ�ͣ�
					transform(iterator beg1, iterator end1, iterator beg2, _func);
					//beg1 Դ������ʼ������
					//end1 Դ��������������
					//beg2 Ŀ��������ʼ������
					//_func �������ߺ�������
					�ܽ᣺ ���˵�Ŀ����������Ҫ��ǰ���ٿռ䣬�����޷���������
		���ò����㷨:
			�㷨��飺
			find //����Ԫ��
			����������
				����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()
				����ԭ�ͣ�
				find(iterator beg, iterator end, value);
				// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
				// beg ��ʼ������
				// end ����������
				// value ���ҵ�Ԫ��
			find_if //����������Ԫ��
				����������
				����������Ԫ��
				����ԭ�ͣ�
				find_if(iterator beg, iterator end, _Pred);
				// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
				// beg ��ʼ������
				// end ����������
				// _Pred ��������ν�ʣ�����bool���͵ķº�����
			adjacent_find //���������ظ�Ԫ��
				����������
				���������ظ�Ԫ��
				����ԭ�ͣ�
				adjacent_find(iterator beg, iterator end);
				// ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õĵ�����
				// beg ��ʼ������
				// end ����������
			binary_search //���ֲ��ҷ�
				����������
				����ָ��Ԫ���Ƿ����
				����ԭ�ͣ�
				bool binary_search(iterator beg, iterator end, value);
				// ����ָ����Ԫ�أ��鵽 ����true ����false
				ע��: �����������в�����
				// beg ��ʼ������
				// end ����������
				// value ���ҵ�Ԫ��
			count //ͳ��Ԫ�ظ���
			����������
				ͳ��Ԫ�ظ���
				����ԭ�ͣ��Զ�������Ҫ����operator==
				count(iterator beg, iterator end, value);
				// ͳ��Ԫ�س��ִ���
				// beg ��ʼ������
				// end ����������
				// value ͳ�Ƶ�Ԫ��
			count_if //������ͳ��Ԫ�ظ���
				����������
				������ͳ��Ԫ�ظ���
				����ԭ�ͣ�
				count_if(iterator beg, iterator end, _Pred);
				// ������ͳ��Ԫ�س��ִ���
				// beg ��ʼ������
				// end ����������
				// _Pred ν��
		���������㷨
			ѧϰĿ�꣺
			���ճ��õ������㷨
			�㷨��飺
			sort //��������Ԫ�ؽ�������
				����������
					��������Ԫ�ؽ�������
				����ԭ�ͣ�
					sort(iterator beg, iterator end, _Pred);
					// ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
					// beg ��ʼ������
					// end ����������
					// _Pred ν��
			random_shuffle //ϴ�� ָ����Χ�ڵ�Ԫ�������������
				����������
					ϴ�� ָ����Χ�ڵ�Ԫ�������������
					����ԭ�ͣ�
					random_shuffle(iterator beg, iterator end);
					// ָ����Χ�ڵ�Ԫ�������������
					// beg ��ʼ������
					// end ����������
			merge // ����Ԫ�غϲ������洢����һ������
				����������
				��������Ԫ�غϲ������洢����һ������
				����ԭ�ͣ�
				merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
				// ����Ԫ�غϲ������洢����һ������
				// ע��: �������������������
				// beg1 ����1��ʼ������ // end1 ����1���������� // beg2 ����2��ʼ������ // end2 ����2���������� //
				dest Ŀ��������ʼ������
			reverse // ��תָ����Χ��Ԫ��
				����������
				��������Ԫ�ؽ��з�ת
				����ԭ�ͣ�
				reverse(iterator beg, iterator end);
				// ��תָ����Χ��Ԫ��
				// beg ��ʼ������
				// end ����������
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.pop_back();
	vector<int>::iterator i =  find(v.begin(), v.end(), 5);
	vector<int>::iterator j = find(v.begin(), v.end(), 6);
	if (i == v.end())
	{
		cout << "5 isn't exit" << endl;
	}
	else
	{
		cout << j-i << endl;
	}
}

void myPrint(int val)
{
	cout << val << " ";
}
void test02() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	//sortĬ�ϴ�С��������
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	//�Ӵ�С����
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	reverse(v.begin(), v.end());
	
	for_each(v.begin(), v.end(), myPrint);
}
int main()
{
	test02();
	system("pause");
	return 0;
}