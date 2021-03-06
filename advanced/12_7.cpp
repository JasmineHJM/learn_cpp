#define _CRT_SECURE_NO_WARNI

#include<iostream>
#include<string>

using namespace std;

/*
class Person {
public:   
	string _name; // 姓名
}; 
class Student : public Person 
{ 
protected :   
	int _num ; //学号 
}; 
class Teacher : public Person 
{ 
protected :    int _id ; // 职工编号 
}; 
class Assistant : public Student, public Teacher 
{ 
protected :  
	string _majorCourse ; // 主修课程
}; 
void Test () 
{    
	// 这样会有二义性无法明确知道访问的是哪一个   
	Assistant a ;    
	a._name = "peter";     
	// 需要显示指定访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决   
	a.Student::_name = "xxx";  
	a.Teacher::_name = "yyy";
}
*/

class Person {
public:    
	string _name; // 姓名 
};
class Student : virtual public Person 
{
protected :  
	int _num ; //学号
}; 
class Teacher : virtual public Person 
{
protected :   
	int _id ; // 职工编号 
}; 
class Assistant : public Student, public Teacher 
{ 
protected :  
	string _majorCourse ; // 主修课程 
}; 
void Test () 
{  
	Assistant a ; 
	a._name = "peter";
}

class A 
{ 
public:   
	int _a; 
};
// class B : public A 
class B : virtual public A 
{ 
public:   
	int _b; 
};
// class C : public A 
class C : virtual public A
{ 
public:   
	int _c;
};
class D : public B, public C 
{
public:    
	int _d;
};
int main() 
{
	D d;  
	d.B::_a = 1; 
	d.C::_a = 2;  
	d._b = 3;  
	d._c = 4;  
	d._d = 5;

	return 0;
}
