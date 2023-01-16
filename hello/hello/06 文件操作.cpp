/*
	文件操作：通过文件可以将数据持久化
		包含头文件：include<fstream>
		文件类型：文本文件、 二进制文件
		三大操作： 写 读 读写
		1、写
			创建流对象：ofstream ofs;
			打开文件: ofs.open("文件路径",打开方式);
				打开方式：
					ios::in 为读打开文件
					ios::out 为写而打开文件
					ios::ate 初始位置：文件尾
					ios::app 追加方式写文件
					ios::trunc 如果文件存在先删除在创建
					ios::binary 二进制方式
				打开方式可以配合使用，利用|操作符 ios::binary|ios::out
			写数据: ofs<<"写入的数据";
			关闭文件: ofs.close();
		2、读
			创建流对象
				ifstream ifs；
			打开文件并判断文件是否打开成功
				ifs.open("文件路径",打开方式);
			读数据
				四种读取方式
			关闭文件
				ifs.close();
		3、二进制文件对文件进行读写
			打开方式指定为ios::binary
			ostream & write(const char * buffer,int len);
		4、二进制读文件
			ifstream& read(char *buffer, int len);

*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void test01()
{
	ofstream ofs;
	ofs.open("test.txt",ios::ate|ios::in);
	ofs << "First Try." << endl;
	ofs << "Second" << endl;
	ofs.close();
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "File open fail " << endl;
		return;
	}
	//四种读取方式
	//1、
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//ifs.close();
	//2、
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	//ifs.close();
	//3、
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}
	//4、
	//char c;
	//while ((c = ifs.get() != EOF)) //enf : end of file
	//{
	//	cout << c << endl;
	//}

	//二进制文件 写文件

}
class Person
{
public:
	char m_name[64];
	int m_afe;
};
void test02()
{
	//write binary
	ofstream ofs;
	ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "zhangsan", 18 };
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
	//read binary file
	ifstream ifs("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		return;
	}
	Person pr;
	ifs.read((char *)&p, sizeof(Person));
	ifs.close();
	cout << "name is :" << p.m_name << "age is :" << p.m_afe << endl;
}
void main()
{
	test02();
	system("pause");
}
