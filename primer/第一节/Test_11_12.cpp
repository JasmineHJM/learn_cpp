#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
//隐式实例化
template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}

int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.0, d2 = 20.0;
	Add(a1, a2);
	Add(d1, d2);
	// 此时有两种处理方式：1. 用户自己来强制转化 2. 使用显式实例化  
	Add(a1, (int)d1);
	return 0;
}

//显式实例化
int main(void)
{
	int a = 10;
	double b = 20.0;
	Add<int>(a, b);
	return 0;
}

//1.一个非模板函数可以和一个同名的函数模板同时存在，而且该函数模板还可以被实例化为这个非模板函数
// 专门处理int的加法函数 
int Add(int left, int right)
{
	return left + right;
}

// 通用加法函数 
template<class T>
T Add(T left, T right)
{
	return left + right;
}
void Test()
{
	Add(1, 2);
	// 与非模板函数匹配，编译器不需要特化   
	Add<int>(1, 2);
	// 调用编译器特化的Add版本
}

//2. 对于非模板函数和同名函数模板，如果其他条件都相同，在调动时会优先调用非模板函数而不会从该模 板产生出一个实例。如果模板可以产生一个具有更好匹配的函数， 那么将选择模板

// 专门处理int的加法函数 
int Add(int left, int right)
{
	return left + right;
}

// 通用加法函数
template<class T1, class T2>
T1 Add(T1 left, T2 right)
{
	return left + right;
}
void Test()
{
	Add(1, 2);
	// 与非函数模板类型完全匹配，不需要函数模板实例化  
	Add(1, 2.0);
	// 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函数 
}

//3. 模板函数不允许自动类型转换，但普通函数可以进行自动类型转换
