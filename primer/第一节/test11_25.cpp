#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;
/*
class Person
{
private:
	string _name = "huwence";
};

//�̳�
class Student:public Person
{
private:
	string _stuid;
};

class Teacher :public Person
{
private:
	string _teach;
};

int main() 
{
	Student s;    
	Teacher t;    

	return 0;
}
*/

//ÿ����������һ���ַ������ַ�����󳤶�Ϊ100����ֻ������ĸ��������Ϊ�մ������ִ�Сд��
void one(string str)
{
	char arr[256] = { 0 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	int length = str.length();
	for (i = 0; i<len; i++)
	{
		arr[i] = 1;  //��256��Ԫ��ȫ����ʼ��Ϊ1
	}
	for (i = 0; i<length; i++)
	{
		if (arr[str[i]] == 1)
		{
			cout << str[i];
			arr[str[i]] = 0;
		}
	}
	cout << endl;
}
int main()
{
	string str;
	while (cin >> str)  //ѭ������
	{
		one(str);
	}
	return 0;
}
