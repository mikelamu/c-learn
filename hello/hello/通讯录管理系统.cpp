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
// 思路 利用switch实现
int main() 
{
	//创建一个选择输入的变量
	int select = 0;
	while (true)
	{
		show_menu();
		cin >> select;
		switch (select)  // "添加", "显示", "删除", "查找", "修改", "清空", "退出"
		{
		case 1:		// "添加" 利用地址传递
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
			cout << "程序退出" << endl;
			return 0;
			system("pause");
			break;
		default:
			break;
		}
		system("pause");
		
	}

	}
