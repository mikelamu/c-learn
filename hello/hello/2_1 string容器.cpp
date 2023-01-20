/*
	string是一个类，是c++风格的字符串
	特点：内部封装了很多方法
		构造函数：
			string() 创建一个空字符串
			string(const char* s) 使用字符串s初始化
			string(const string&str) 使用一个string对象初始化另一个string对象
			string(int n, char c) 使用n个字符c初始化
		赋值：
			- string& operator=(const char* s);             //char*类型字符串 赋值给当前的字符串
			- string& operator=(const string &s);         //把字符串s赋给当前的字符串
			- string& operator=(char c);                          //字符赋值给当前的字符串
			- string& assign(const char *s);                  //把字符串s赋给当前的字符串
			- string& assign(const char *s, int n);     //把字符串s的前n个字符赋给当前的字符串
			- string& assign(const string &s);              //把字符串s赋给当前字符串
			- string& assign(int n, char c);                  //用n个字符c赋给当前字符串
		拼接：
			- string& operator+=(const char* str);                   //重载+=操作符
			- string& operator+=(const char c);                         //重载+=操作符
			- string& operator+=(const string& str);                //重载+=操作符
			- string& append(const char *s);                               //把字符串s连接到当前字符串结尾
			- string& append(const char *s, int n);                 //把字符串s的前n个字符连接到当前字符串结尾
			- string& append(const string &s);                           //同operator+=(const string& str)
			- string& append(const string &s, int pos, int n);//字符串s中从pos开始的n个字符连接到字符串结尾
		查找：
			int find(const string& str,int pos=0); 查找str第一次出现位置，从pos开始查找，没找到返回-1
			int rfind(const string& str,int pos=0); 从右往左查找str最后一次出现位置，从pos开始查找
		替换：
			int replace(int pos, int n, const string& str); 替换从pos开始n个字符 为字符串str
			int replace(int pos, int n, const char* s); 替换从pos开始n个字符 为字符串s
		比较：
			按照字符的ASCII进行比较
			int compare(const string &s) const; 与字符串s进行比较，相等为零
			int compare(const char *s) const;
		字符存取：
			通过[] at 访问单个字符
			char& operator[](int n); 
			char& at(int n);
		插入和删除：
			string& insert(int pos, const char* s);
			string& insert(int pos, const string& str);
			string& insert(int pos, int n, const char c);
			string& erase(int pos, int n = npos); 删除从pos开始的n个字符
		获取子串：
			string substr(int pos = 0, int n = npos) const 返回pos开始的n个字符组成的字符串
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