/*
	string��һ���࣬��c++�����ַ���
	�ص㣺�ڲ���װ�˺ܶ෽��
		���캯����
			string() ����һ�����ַ���
			string(const char* s) ʹ���ַ���s��ʼ��
			string(const string&str) ʹ��һ��string�����ʼ����һ��string����
			string(int n, char c) ʹ��n���ַ�c��ʼ��
		��ֵ��
			- string& operator=(const char* s);             //char*�����ַ��� ��ֵ����ǰ���ַ���
			- string& operator=(const string &s);         //���ַ���s������ǰ���ַ���
			- string& operator=(char c);                          //�ַ���ֵ����ǰ���ַ���
			- string& assign(const char *s);                  //���ַ���s������ǰ���ַ���
			- string& assign(const char *s, int n);     //���ַ���s��ǰn���ַ�������ǰ���ַ���
			- string& assign(const string &s);              //���ַ���s������ǰ�ַ���
			- string& assign(int n, char c);                  //��n���ַ�c������ǰ�ַ���
		ƴ�ӣ�
			- string& operator+=(const char* str);                   //����+=������
			- string& operator+=(const char c);                         //����+=������
			- string& operator+=(const string& str);                //����+=������
			- string& append(const char *s);                               //���ַ���s���ӵ���ǰ�ַ�����β
			- string& append(const char *s, int n);                 //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
			- string& append(const string &s);                           //ͬoperator+=(const string& str)
			- string& append(const string &s, int pos, int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
		���ң�
			int find(const string& str,int pos=0); ����str��һ�γ���λ�ã���pos��ʼ���ң�û�ҵ�����-1
			int rfind(const string& str,int pos=0); �����������str���һ�γ���λ�ã���pos��ʼ����
		�滻��
			int replace(int pos, int n, const string& str); �滻��pos��ʼn���ַ� Ϊ�ַ���str
			int replace(int pos, int n, const char* s); �滻��pos��ʼn���ַ� Ϊ�ַ���s
		�Ƚϣ�
			�����ַ���ASCII���бȽ�
			int compare(const string &s) const; ���ַ���s���бȽϣ����Ϊ��
			int compare(const char *s) const;
		�ַ���ȡ��
			ͨ��[] at ���ʵ����ַ�
			char& operator[](int n); 
			char& at(int n);
		�����ɾ����
			string& insert(int pos, const char* s);
			string& insert(int pos, const string& str);
			string& insert(int pos, int n, const char c);
			string& erase(int pos, int n = npos); ɾ����pos��ʼ��n���ַ�
		��ȡ�Ӵ���
			string substr(int pos = 0, int n = npos) const ����pos��ʼ��n���ַ���ɵ��ַ���
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