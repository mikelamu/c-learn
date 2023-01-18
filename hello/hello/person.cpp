#include"person.h"
template<class T1, class T2>
Person04<T1, T2>::Person04(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}
template<class T1, class T2>
void Person04<T1, T2>::showperson()
{
	cout << this->m_name << "'s age is " << this->m_age << endl;
}