#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

//缺省参数
void TestFunc(int a = 0) 
{ 
	cout << a << endl; 
}
int main() 
{
	TestFunc();     // 没有传参时，使用参数的默认值    
	TestFunc(10);   // 传参时，使用指定的实参 
}
//全缺省参数
void TestFunc(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
//半缺省参数
void TestFunc(int a, int b = 10, int c = 20)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}

//a.h 
void TestFunc(int a = 10);

// a.c 
void TestFunc(int a = 20) 
{}

// 注意：如果生命与定义位置同时出现，恰巧两个位置提供的值不同，那编译器就无法确定到底该用那个缺省值。
