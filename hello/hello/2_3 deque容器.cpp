/*
	功能：
		双端数组，可以对头端进行插入删除操作
	deque与vector区别：
		vector对于头部的插入删除效率低，数据量越大，效率越低
		deque相对而言，对头部的插入删除速度回比vector快
		vector访问元素时的速度会比deque快,这和两者内部实现有关

*/
#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
//void test01()
//{
//	deque<int> q1;
//	for (int i = 0; i < 10; i++)
//	{
//		q1.push_back(i);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		q1.push_front(i);
//	}
//	for (deque<int>::iterator it = q1.begin(); it != q1.end(); it++)
//	{
//		cout << *it;
//	}
//}
//void printDeque(const deque<int>& q)
//{
//	for (deque<int>::const_iterator it = q.begin(); it != q.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	cout << endl;
//}
//void test02()
//{
//	deque<int> q1;
//	for (int i = 0; i < 10; i++)
//	{
//		q1.push_back(i);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		q1.push_front(i);
//	}
//	sort(q1.begin(), q1.end());
//	printDeque(q1);
//}
#include<vector>
#include<string>
class Person
{
public:
	Person(string name, int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	void changeScore(const int score)
	{
		this->m_score = score;
	}
	string name()
	{
		return m_name;
	}
	int score()
	{
		return m_score;
	}
	string m_name;
private:
	int m_score;

};
void creatPerson(vector<Person>& q)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameseed[i];
		int score = 0;
		Person p(name, score);
		q.push_back(p);
	}
}
void setScore(vector<Person>& q)
{	

	deque<int> score;
	for (vector<Person>::iterator it = q.begin(); it != q.end(); it++)
	{
		deque<int> score;
		for (int j = 0; j < 10; j++)
		{
			int seed = rand() % 41 + 60;
			score.push_back(seed);
		}
		sort(score.begin(), score.end());
		score.pop_back();
		score.pop_front();
		int mean = 0;
		for (deque<int>::iterator itDeq = score.begin(); itDeq != score.end(); itDeq++)
		{
			mean += *itDeq;
		}
		mean = mean / score.size();
		it->changeScore(mean);
	}
}
void showPerson(vector<Person>& q)
{
	for (vector<Person>::iterator i = q.begin(); i != q.end(); i++)
	{

		cout << " name: " << i->m_name << "\t" <<
			"score : " << i->score() << endl;
	}
}
void test03()
{
	vector<Person> p;
	creatPerson(p);
	setScore(p);
	showPerson(p);

}
void test()
{
	vector<deque<int>> person;

}
int main()
{
	test03();
	system("pause");
}