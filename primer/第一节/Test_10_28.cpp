#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

//��������
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

//����
void TestRef() 
{
	int a = 10;   
	int& ra = a;//<====������������       
	printf("%p\n", &a);   
	printf("%p\n", &ra); 
}

//������
void TestConstRef() 
{
	const int a = 10;   
	//int& ra = a;   // ��������ʱ�����aΪ����   
	const int& ra = a;   
	// int& b = 10;  // ��������ʱ�����bΪ����  
	const int& b = 10;   
	double d = 12.34;   
	//int& rd = d;  // ��������ʱ��������Ͳ�ͬ   
	const int& rd = d; 
}
