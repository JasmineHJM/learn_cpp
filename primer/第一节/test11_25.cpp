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

//继承
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

//每组数据输入一个字符串，字符串最大长度为100，且只包含字母，不可能为空串，区分大小写。
void one(string str)
{
	char arr[256] = { 0 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	int length = str.length();
	for (i = 0; i<len; i++)
	{
		arr[i] = 1;  //将256个元素全部初始化为1
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
	while (cin >> str)  //循环输入
	{
		one(str);
	}
	return 0;
}
