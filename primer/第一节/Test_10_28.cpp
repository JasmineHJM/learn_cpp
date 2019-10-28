#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

//函数重载
int Add(int left, int right) 
{ 
	return left + right; 
}
double Add(double left, double right) 
{ 
	return left + right;
}
long Add(long left, long right) 
{ 
	return left + right; 
}
int main() 
{
	Add(10, 20);    
	Add(10.0, 20.0);
	Add(10L, 20L);
	return 0;
}

//引用
void TestRef() 
{
	int a = 10;   
	int& ra = a;//<====定义引用类型       
	printf("%p\n", &a);   
	printf("%p\n", &ra); 
}

//常引用
void TestConstRef() 
{
	const int a = 10;   
	//int& ra = a;   // 该语句编译时会出错，a为常量   
	const int& ra = a;   
	// int& b = 10;  // 该语句编译时会出错，b为常量  
	const int& b = 10;   
	double d = 12.34;   
	//int& rd = d;  // 该语句编译时会出错，类型不同   
	const int& rd = d; 
}
