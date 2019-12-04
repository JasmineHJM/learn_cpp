#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>

/*
// 实例演示三种继承关系下基类成员的各类型成员访问关系的变化 
class Person { 
public :    
	void Print ()   
	{       
		cout<<_name <<endl;  
	} 
protected :    
	string _name ; // 姓名 
private : 
	int _age ;   // 年龄 
};

//class Student : protected Person
//class Student : private Person 
class Student : public Person
{
protected :   
	int _stunum ; // 学号
};

class Person {
protected:   
	string _name; // 姓名 
	string _sex;  // 性别   
	int _age;    // 年龄
}; 
class Student : public Person {
public :   
	int _No ; // 学号
};
void Test()
{
	Student sobj;
	// 1.子类对象可以赋值给父类对象/指针/引用  
	Person pobj = sobj;
	Person* pp = &sobj;
	Person& rp = sobj;
	//2.基类对象不能赋值给派生类对象 
	sobj = pobj;
	// 3.基类的指针可以通过强制类型转换赋值给派生类的指针  
	pp = &sobj;
	Student* ps1 = (Student*)pp;
	// 这种情况转换时可以的。
	ps1->_No = 10;
	pp = &pobj;
	Student* ps2 = (Student*)pp;
	// 这种情况转换时虽然可以，但是会存在越界访问的问题  
	ps2->_No = 10;
}
*/
class Person +{
protected:   
	string _name = "小李子"; // 姓名
	int _num = 111;          // 身份证号 
};

class Student : public Person
{
public:    
	void Print()   
	{ 
		cout << " 姓名:" << _name << endl;      
		cout << " 身份证号:" << Person::_num << endl;      
		cout << " 学号:" << _num << endl; 
	}
protected:  
	int _num = 999; // 学号 
};
void Test() 
{ 
	Student s1;    s1.Print();
};
class A 
{ 
public:  
	void fun()  
	{ cout << "func()" << endl; }
};
class B : public A {
public:   
	void fun(int i)
	{
		A::fun();     
		cout << "func(int i)->" << i << endl;
	}
};

void Test() 
{
	B b;   
	b.fun(10);
};