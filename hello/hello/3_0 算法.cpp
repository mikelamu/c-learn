/*
	STL- 常用算法:
		概述:
			算法主要是由头文件 <algorithm> <functional> <numeric> 组成。
			<algorithm> 是所有STL头文件中最大的一个，范围涉及到比较、 交换、查找、遍历操作、复制、修改等等
			<numeric> 体积很小，只包括几个在序列上面进行简单数学运算的模板函数
			<functional> 定义了一些模板类,用以声明函数对象。
	常用遍历算法
		算法简介：
			for_each //遍历容器
				功能描述：
					实现遍历容器
					函数原型：
					for_each(iterator beg, iterator end, _func);
					// 遍历算法 遍历容器元素
					// beg 开始迭代器
					// end 结束迭代器
					// _func 函数或者函数对象
			transform //搬运容器到另一个容器中
				功能描述：
					搬运容器到另一个容器中
					函数原型：
					transform(iterator beg1, iterator end1, iterator beg2, _func);
					//beg1 源容器开始迭代器
					//end1 源容器结束迭代器
					//beg2 目标容器开始迭代器
					//_func 函数或者函数对象
					总结： 搬运的目标容器必须要提前开辟空间，否则无法正常搬运
		常用查找算法:
			算法简介：
			find //查找元素
			功能描述：
				查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
				函数原型：
				find(iterator beg, iterator end, value);
				// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
				// beg 开始迭代器
				// end 结束迭代器
				// value 查找的元素
			find_if //按条件查找元素
				功能描述：
				按条件查找元素
				函数原型：
				find_if(iterator beg, iterator end, _Pred);
				// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
				// beg 开始迭代器
				// end 结束迭代器
				// _Pred 函数或者谓词（返回bool类型的仿函数）
			adjacent_find //查找相邻重复元素
				功能描述：
				查找相邻重复元素
				函数原型：
				adjacent_find(iterator beg, iterator end);
				// 查找相邻重复元素,返回相邻元素的第一个位置的迭代器
				// beg 开始迭代器
				// end 结束迭代器
			binary_search //二分查找法
				功能描述：
				查找指定元素是否存在
				函数原型：
				bool binary_search(iterator beg, iterator end, value);
				// 查找指定的元素，查到 返回true 否则false
				注意: 在无序序列中不可用
				// beg 开始迭代器
				// end 结束迭代器
				// value 查找的元素
			count //统计元素个数
			功能描述：
				统计元素个数
				函数原型：自定义类需要重载operator==
				count(iterator beg, iterator end, value);
				// 统计元素出现次数
				// beg 开始迭代器
				// end 结束迭代器
				// value 统计的元素
			count_if //按条件统计元素个数
				功能描述：
				按条件统计元素个数
				函数原型：
				count_if(iterator beg, iterator end, _Pred);
				// 按条件统计元素出现次数
				// beg 开始迭代器
				// end 结束迭代器
				// _Pred 谓词
		常用排序算法
			学习目标：
			掌握常用的排序算法
			算法简介：
			sort //对容器内元素进行排序
				功能描述：
					对容器内元素进行排序
				函数原型：
					sort(iterator beg, iterator end, _Pred);
					// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
					// beg 开始迭代器
					// end 结束迭代器
					// _Pred 谓词
			random_shuffle //洗牌 指定范围内的元素随机调整次序
				功能描述：
					洗牌 指定范围内的元素随机调整次序
					函数原型：
					random_shuffle(iterator beg, iterator end);
					// 指定范围内的元素随机调整次序
					// beg 开始迭代器
					// end 结束迭代器
			merge // 容器元素合并，并存储到另一容器中
				功能描述：
				两个容器元素合并，并存储到另一容器中
				函数原型：
				merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
				// 容器元素合并，并存储到另一容器中
				// 注意: 两个容器必须是有序的
				// beg1 容器1开始迭代器 // end1 容器1结束迭代器 // beg2 容器2开始迭代器 // end2 容器2结束迭代器 //
				dest 目标容器开始迭代器
			reverse // 反转指定范围的元素
				功能描述：
				将容器内元素进行反转
				函数原型：
				reverse(iterator beg, iterator end);
				// 反转指定范围的元素
				// beg 开始迭代器
				// end 结束迭代器
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	v.pop_back();
	vector<int>::iterator i =  find(v.begin(), v.end(), 5);
	vector<int>::iterator j = find(v.begin(), v.end(), 6);
	if (i == v.end())
	{
		cout << "5 isn't exit" << endl;
	}
	else
	{
		cout << j-i << endl;
	}
}

void myPrint(int val)
{
	cout << val << " ";
}
void test02() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);
	//sort默认从小到大排序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	//从大到小排序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	reverse(v.begin(), v.end());
	
	for_each(v.begin(), v.end(), myPrint);
}
int main()
{
	test02();
	system("pause");
	return 0;
}