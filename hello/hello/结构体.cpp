#include<iostream>
#include<string>
using namespace std;
/*
结构体：用户自定义的数据类型
语法： struct 结构体名 { 结构体成员列表 }；
1. 创建学生数据类型 ： 学生包括（姓名，年龄，分数）
*/
struct Student
{
	//成员列表

	//姓名
	string name;
	//age
	int age;
	// 分数
	int score;
};
// 通过学生类型创建具体学生
int main（）
{
	//2.1 struct Student s1
	struct Student s1;
	// 给结构体s1属性赋值，通过访问结构体变量的属性
	s1.name = "jack";
	s1.age = 16;
	s1.score = 100;
	cout << "姓名：" << s1.name << endl;
}	