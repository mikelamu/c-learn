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
// ˼· ����switchʵ��
int main() 
{
	//����һ��ѡ������ı���
	int select = 0;
	while (true)
	{
		show_menu();
		cin >> select;
		switch (select)  // "���", "��ʾ", "ɾ��", "����", "�޸�", "���", "�˳�"
		{
		case 1:		// "���" ���õ�ַ����
			break;
		case 2:
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
		system("pause");
		
	}

	}
