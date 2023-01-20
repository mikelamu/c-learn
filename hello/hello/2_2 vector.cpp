/*
	vector 结构和数组非常类似，称为单端数组
		不同之处数组是静态空间，vector可以动态扩展：开辟一个新空间，并将原有数据拷贝进去，释放旧空间
	算法：for_each
	迭代器： vector<int>::iterator
	语法 vector<type>v;
		首元素指针 v.begin() 
		尾元素下一地址指针 v.end()
		尾插 v.push_back()
	构造函数：
		vector<T> v; //采用模板实现类实现，默认构造函数
		vector(v.begin(), v.end()); //将v[begin(), end())区间中的元素拷贝给本身。
		vector(n, elem); //构造函数将n个elem拷贝给本身。
		vector(const vector &vec); //拷贝构造函数。
	赋值：
		vector& operator=(const vector &vec); //重载等号操作符
		assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
		assign(n, elem); //将n个elem拷贝赋值给本身。
	容量与大小：
		empty(); //判断容器是否为空
		capacity(); //容器的容量
		size(); //返回容器中元素的个数
		resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值0填充新位置。
		//如果容器变短，则末尾超出容器长度的元素被删除。
		resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
		//如果容器变短，则末尾超出容器长度的元素被删除
	插入：
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