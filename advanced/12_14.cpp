#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

// ﬁnal：修饰虚函数，表示该虚函数不能再被继承
class Car { 
public:   
	virtual void Drive() final {}
};

class Benz :public Car { 
public:    virtual void Drive() 
{ cout << "Benz-舒适" << endl; }
};

//override: 检查派生类虚函数是否重写了基类某个虚函数，如果没有重写编译报错
class Car{
public:    virtual void Drive(){} 
};

class Benz :public Car { 
public:    virtual void Drive() override 
{ cout << "Benz-舒适" << endl; }
};