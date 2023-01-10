/*
	函数重载
	作用：函数名可以相同，提高复用性
	条件： 1、同一个作用域下 2、 函数名相同 3、函数参数类型不同或者个数不同或者顺序不同
	返回值不作为函数重载的条件
	注意事项：
	1、引用作为重载条件：
	
	2、函数重载遇到默认参数

*/
#include<iostream>
#include<string>
using namespace std;

/*
引用作为参数时
int a = 10;
func(a); 调用的是& a = a；
func(10); 调用第二个 const int &a =10;
*/
void func(int & a)
{
	cout << "& a" << endl;
}
void func(const int & a)
{
	cout << "const int & a" << endl;
}

/*
函数重载
int a = 10;
func2(a); 不能确定调用函数出现二义性报错，应该避免最终情况
func2(10， 20); 调用第二个
*/

void func2(int a)
{
	cout << "& a" << endl;
}
void func(int a,int b =10)
{
	cout << "& a" << endl;
}



void func(int & a)
{
	cout << "& a" << endl;
}

void func()
{
	cout << "func 1" << endl;
}
void func(int a)
{
	cout << "func 2" << endl;
}
void func(double b)
{
	cout << "func 2" << endl;
}
int main()
{
	func();
	func(1);
	system("pause");
}
