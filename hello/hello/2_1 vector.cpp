/*
	vector
	算法：for_each
	迭代器： vector<int>::iterator
	语法 vector<type>v;
		首元素指针 v.begin() 
		尾元素下一地址指针 v.end()
		尾插 v.push_back()
*/
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void print(int a)
{
	cout << a << endl;
}
void test01()
{
	//创建了一个vector容器，数组
	vector<int> v;
	//向容器中插入数据，尾插
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	//通过迭代器访问容器的数据
	vector<int>::iterator itBegin = v.begin();//起始迭代器，指向容器第一个元素的位置
	vector<int>::iterator itEnd = v.end(); //结束迭代器，指向容器中最后一个元素的下一个位置
	//第一种遍历方式
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;
	//}

	//第二种遍历方式
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	//第三种遍历方式 利用STL提供遍历算法
	for_each(v.begin(), v.end(), print);


}
void main()
{
	test01();
	system("pause");
}