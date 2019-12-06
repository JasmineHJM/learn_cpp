#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;
//继承与友元
class Student;
class Person {
public:    
	friend void Display(const Person& p, const Student& s); 
protected:    string _name; // 姓名 
}; 
class Student : public Person 
{
protected:    
	int _stuNum; // 学号 
};
void Display(const Person& p, const Student& s) 
{ 
	cout << p._name << endl;   
	cout << s._stuNum << endl; 
}

void main()
{
	Person p;  
	Student s;  
	Display(p, s); 
}

//继承与静态成员
class Person {
public:    
	Person() { ++_count; }
protected:    
	string _name; // 姓名 
public :    
	static int _count; // 统计人的个数。 
}; 
int Person :: _count = 0; 
class Student : public Person 
{ 
protected :    int _stuNum ; // 学号
}; 
class Graduate : public Student
{ 
protected :   
	string _seminarCourse ; // 研究科目
}; 
void TestPerson()
{
	Student s1;
	Student s2;
	Student s3;
	Graduate s4;
	cout << " 人数 :" << Person::_count << endl;
	Student::_count = 0;
	cout << " 人数 :" << Person::_count << endl;
}
