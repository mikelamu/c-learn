/*
	要求：
	1. 添加联系人
	2. 显示联系人
	3、 删除联系人
	4、 查找联系人
	5、 修改联系人
	6、 清空联系人
	0、 退出通讯录
*/
#include<iostream>
#include<string>
using namespace std;
#define max 100
// 显示界面函数
void show_menu()
{
	string ind[7] = { "添加" ,"显示", "删除","查找","修改","清空","退出"};
	for(int i = 0; i < 7; i++)
	{
		if (i == 6)
		{
			cout << "***** 0、退出通讯录 *****" << endl;
			continue;
		}
		cout << "***** "<<i+1 <<", "<<ind[i] <<"联系人" << " *****" << endl;
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
// 思路 利用switch实现
int main() 
{
	//创建一个选择输入的变量
	int select = 0;
	//creat a personarray
	person_array parray;
	while (true)
	{
		show_menu();
		cin >> select;
		switch (select)  // "添加", "显示", "删除", "查找", "修改", "清空", "退出"
		{
		case 1:		// "添加" 利用地址传递
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
			cout << "程序退出" << endl;
			return 0;
			system("pause");
			break;
		default:
			break;
		}
		
		
	}

	}
