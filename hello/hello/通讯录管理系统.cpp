/*
	Ҫ��
	1. �����ϵ��
	2. ��ʾ��ϵ��
	3�� ɾ����ϵ��
	4�� ������ϵ��
	5�� �޸���ϵ��
	6�� �����ϵ��
	0�� �˳�ͨѶ¼
*/
#include<iostream>
#include<string>
using namespace std;
#define max 100
// ��ʾ���溯��
void show_menu()
{
	string ind[7] = { "���" ,"��ʾ", "ɾ��","����","�޸�","���","�˳�"};
	for(int i = 0; i < 7; i++)
	{
		if (i == 6)
		{
			cout << "***** 0���˳�ͨѶ¼ *****" << endl;
			continue;
		}
		cout << "***** "<<i+1 <<", "<<ind[i] <<"��ϵ��" << " *****" << endl;
	}
	
}
// define person construct
struct person
{
	string name;
	string phone;
};

struct person_array 
{
	person member[max];
	int indx = 0;
};

void add_person(person_array * parray)
{
	string name;
	string phone;
	cout << "please input the name : " << endl;
	cin >> name;
	parray->member[parray->indx].name = name;
	cout << "please input the phone number :" << endl;
	cin >> phone;
	parray->member[parray->indx].phone = phone;
	parray->indx += 1;
	cout << "add success !" << endl;
	system("pause");
	system("cls"); // clear the screen
}
//display personarray
void dis_person(person_array * parray)
{
	int len = parray->indx;
	for (int i = 0; i < len; i++)
	{
		cout << "name is :" << parray->member[i].name << " phone number is :" 
		<<parray->member[i].phone << endl;
	}
	system("pause");
	system("cls"); // clear the screen
}
// ˼· ����switchʵ��
int main() 
{
	//����һ��ѡ������ı���
	int select = 0;
	//creat a personarray
	person_array parray;
	while (true)
	{
		show_menu();
		cin >> select;
		switch (select)  // "���", "��ʾ", "ɾ��", "����", "�޸�", "���", "�˳�"
		{
		case 1:		// "���" ���õ�ַ����
			add_person(&parray);
			break;
		case 2:
			dis_person(&parray);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 0:
			cout << "�����˳�" << endl;
			return 0;
			system("pause");
			break;
		default:
			break;
		}
		
		
	}

	}
