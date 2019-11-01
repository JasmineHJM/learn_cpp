#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<time.h>
//传值、传引用效率比较
/*
struct A
{
int a[10000];
};
void TestFunc1(A a)
{}
void TestFunc2(A& a)
{}
void TestRefAndValue()
{
A a;
// 以值作为函数参数
size_t begin1 = clock();
for (size_t i = 0; i < 10000; ++i)
TestFunc1(a);
size_t end1 = clock();

// 以引用作为函数参数
size_t begin2 = clock();
for (size_t i = 0; i < 10000; ++i)
TestFunc2(a);
size_t end2 = clock();

// 分别计算两个函数运行结束后的时间
cout << "TestFunc1(int*)-time:" << end1 - begin1 << endl;
cout << "TestFunc2(int&)-time:" << end2 - begin2 << endl;
}

// 运行多次，检测值和引用在传参方面的效率区别
int main()
{
for (int i = 0; i < 10; ++i)
{


TestRefAndValue();
}
return 0;
}
*/
// 值和引用的作为返回值类型的性能比较
struct A
{
	int a[10000];
};

A a;
A TestFunc1()
{
	return a;
}
A& TestFunc2()
{
	return a;
}
void TestReturnByRefOrValue()
{
	// 以值作为函数的返回值类型
	size_t begin1 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc1();
	size_t end1 = clock();

	// 以引用作为函数的返回值类型    
	size_t begin2 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc2();
	size_t end2 = clock();

	// 计算两个函数运算完成之后的时间    
	cout << "TestFunc1 time:" << end1 - begin1 << endl;
	cout << "TestFunc2 time:" << end2 - begin2 << endl;
}

// 测试运行10次，值和引用作为返回值效率方面的区别 
int main()
{
	for (int i = 0; i < 10; ++i)
		TestReturnByRefOrValue();

	return 0;
}