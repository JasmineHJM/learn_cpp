#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

//1.const对象可以调用非const成员函数吗？
class test{
	int i;
public:
	void print();
	test(int i);
};
//语法角度上不允许const对象调用普通方法，const只可以调用常方法


//2.非const对象可以调用const成员函数吗？

//普通对象既可以调用普通方法，又可以调用常方法


//3.const成员函数内可以调用其他的非const成员函数吗？

//常方法不允许调用普通方法


//4.非const成员函数内可以调用其他的const成员函数吗？

//普通方法既可以调用普通方法，又可以调用常方法

