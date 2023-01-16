/*
	�ļ�������ͨ���ļ����Խ����ݳ־û�
		����ͷ�ļ���include<fstream>
		�ļ����ͣ��ı��ļ��� �������ļ�
		��������� д �� ��д
		1��д
			����������ofstream ofs;
			���ļ�: ofs.open("�ļ�·��",�򿪷�ʽ);
				�򿪷�ʽ��
					ios::in Ϊ�����ļ�
					ios::out Ϊд�����ļ�
					ios::ate ��ʼλ�ã��ļ�β
					ios::app ׷�ӷ�ʽд�ļ�
					ios::trunc ����ļ�������ɾ���ڴ���
					ios::binary �����Ʒ�ʽ
				�򿪷�ʽ�������ʹ�ã�����|������ ios::binary|ios::out
			д����: ofs<<"д�������";
			�ر��ļ�: ofs.close();
		2����
			����������
				ifstream ifs��
			���ļ����ж��ļ��Ƿ�򿪳ɹ�
				ifs.open("�ļ�·��",�򿪷�ʽ);
			������
				���ֶ�ȡ��ʽ
			�ر��ļ�
				ifs.close();
		3���������ļ����ļ����ж�д
			�򿪷�ʽָ��Ϊios::binary
			ostream & write(const char * buffer,int len);
		4�������ƶ��ļ�
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
	//���ֶ�ȡ��ʽ
	//1��
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//ifs.close();
	//2��
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}
	//ifs.close();
	//3��
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}
	//4��
	//char c;
	//while ((c = ifs.get() != EOF)) //enf : end of file
	//{
	//	cout << c << endl;
	//}

	//�������ļ� д�ļ�

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
