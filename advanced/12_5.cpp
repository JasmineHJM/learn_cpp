#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Person
{
public:    
	Person(const char* name = "peter") : _name(name)  
	{ cout << "Person()" << endl; }      
	Person(const Person& p) : _name(p._name)  
	{ cout << "Person(const Person& p)" << endl; }    
	Person& operator=(const Person& p)
	{
		cout << "Person operator=(const Person& p)" << endl;
		if (this != &p)
			_name = p._name;
		return *this;
	}
	~Person() 
	{ cout << "~Person()" << endl; } 
protected:   
	string _name; // 姓名 
};

class Student : public Person {
public:    
	Student(const char* name, int num) : Person(name), _num(num)  
	{ cout << "Student()" << endl; }    
	Student(const Student& s) : Person(s), _num(s._num)  
	{ cout << "Student(const Student& s)" << endl; }   
	Student& operator = (const Student& s)   
	{
		cout << "Student& operator= (const Student& s)" << endl;  
		if (this != &s)      
		{
			Person::operator =(s);
			_num = s._num;
		}     
		return *this;
	}      
	~Student() 
	{ cout << "~Student()" << endl; }
protected: 
	int _num; //学号
}; 
void Test () 
{  
	Student s1 ("jack", 18); 
	Student s2 (s1);  
	Student s3 ("rose", 17); 
	s1 = s3 ; 
}

//实现一个不能被继承的类
// C++98中构造函数私有化，派生类中调不到基类的构造函数。则无法继承 
class NonInherit { 
public:   
	static NonInherit GetInstance()   
	{   
		return NonInherit(); 
	}
private:  
	NonInherit()  
	{} 
};

// C++11给出了新的关键字final禁止继承 
class NonInherit final 
{};
