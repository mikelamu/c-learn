#include<iostream>
using namespace std;
int main()
{
	//���̽ṹ
	/*
	1. ˳��ṹ
	2. ѡ��ṹ
	3. ѭ���ṹ
	
		2. ѡ��ṹ
		2.1 if���
		if ( ���� )
		{ }
		else
		{ }
		2.2 ��Ŀ�����
		expression 1 ? expression2 : expression3
		if expre 1 is true return expre2 else expre3
		2.3 switch
		case ֻ���ж����������ж�С������
		2.4 while
		do {ѭ�����} while{ѭ������}
		��ִ��һ��������ж�����
		3 forѭ��
		for����ʼ���ʽ���������ʽ��ĩβѭ���壩{ѭ�����}
		4 ��ת���
		4.1 break 
		������switch����ÿ��case���˳�˳��ִ��
		for ѭ���п����˳�ѭ��
		4.2 continue
		��ѭ���������������ѭ���е�δִ����䲢��ִ���´�ѭ��
		4.3 goto
		��������ת���
		goto flag��
		��flag��������ת��flag
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