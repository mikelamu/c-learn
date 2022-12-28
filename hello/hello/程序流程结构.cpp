#include<iostream>
using namespace std;
int main()
{
	//流程结构
	/*
	1. 顺序结构
	2. 选择结构
	3. 循环结构
	
		2. 选择结构
		2.1 if语句
		if ( 条件 )
		{ }
		else
		{ }
		2.2 三目运算符
		expression 1 ? expression2 : expression3
		if expre 1 is true return expre2 else expre3
		2.3 switch
		case 只能判断整数不能判断小数分数
		2.4 while
		do {循环语句} while{循环条件}
		先执行一次语句再判断条件
		3 for循环
		for（起始表达式；条件表达式；末尾循环体）{循环语句}
		4 跳转语句
		4.1 break 
		出现在switch中在每个case中退出顺序执行
		for 循环中可以退出循环
		4.2 continue
		在循环语句中跳过本次循环中的未执行语句并且执行下次循环
		4.3 goto
		无条件跳转语句
		goto flag：
		若flag存在则跳转到flag
	*/


	char a = '1';
	float f1 = 3.14f;
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;
	cout << "please input the weigh of pigs" << endl;
	cin >> pig1 >> pig2 >> pig3;
	if (pig1>pig2)
	{
		if (pig1 > pig3)
		{
			cout << "pig1 is the weightest"<<endl;
		}
		else
		{
			cout << "pig3 is the weightest" << endl;
		}
	}
	else if (pig2 > pig3)
	{
		cout << "pig2 is the weightest" << endl;
	}
	else
	{
		cout << "pig3 is the weightest" << endl;
	}
	//cout << "hello and a = " << a << sizeof(float) << endl;
	system("pause");

	return 0;
}