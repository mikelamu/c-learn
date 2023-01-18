#include<iostream>
#include<string>
using namespace std;
template<class T1, class T2>
class Person04
{
public:
	Person04(T1 name, T2 age);
	void showperson();
	T1 m_name;
	T2 m_age;
};