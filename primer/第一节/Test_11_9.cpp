#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

//泛型编程
void Swap(int& left, int& right) 
{ 
	int temp = left;  
	left = right;   
	right = temp; 
}

void Swap(double& left, double& right)
{
	double temp = left;
	left = right;   
	right = temp; 
}

void Swap(char& left, char& right)
{
	char temp = left;
	left = right;
	right = temp;
}

//函数模板格式
template<typename T>
void Swap(T& left, T& right) 
{ 
	T temp = left;  
	left = right;   
	right = temp;
}

