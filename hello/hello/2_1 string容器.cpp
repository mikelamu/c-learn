/*
	string��һ���࣬��c++�����ַ���
	�ص㣺�ڲ���װ�˺ܶ෽��
		���캯����
			string() ����һ�����ַ���
			string(const char* s) ʹ���ַ���s��ʼ��
			string(const string&str) ʹ��һ��string�����ʼ����һ��string����
			string(int n, char c) ʹ��n���ַ�c��ʼ��
		��ֵ��
			ֱ�� = ��ֵ
			����assign��ֵ
*/
#include<iostream>
using namespace std;
#include<string>
void test01()
{
	//string s1;
	const char* str = "hello";
	string s1(str);
	cout << s1 << endl;
	cout << str << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}