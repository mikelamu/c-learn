#include<iostream>
#include<string>
using namespace std;
/*
�ṹ�壺�û��Զ������������
�﷨�� struct �ṹ���� { �ṹ���Ա�б� }��
1. ����ѧ���������� �� ѧ�����������������䣬������
*/
struct Student
{
	//��Ա�б�

	//����
	string name;
	//age
	int age;
	// ����
	int score;
};
// ͨ��ѧ�����ʹ�������ѧ��
int main����
{
	//2.1 struct Student s1
	struct Student s1;
	// ���ṹ��s1���Ը�ֵ��ͨ�����ʽṹ�����������
	s1.name = "jack";
	s1.age = 16;
	s1.score = 100;
	cout << "������" << s1.name << endl;
}	