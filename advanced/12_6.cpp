#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;
//�̳�����Ԫ
class Student;
class Person {
public:    
	friend void Display(const Person& p, const Student& s); 
protected:    string _name; // ���� 
}; 
class Student : public Person 
{
protected:    
	int _stuNum; // ѧ�� 
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

//�̳��뾲̬��Ա
class Person {
public:    
	Person() { ++_count; }
protected:    
	string _name; // ���� 
public :    
	static int _count; // ͳ���˵ĸ����� 
}; 
int Person :: _count = 0; 
class Student : public Person 
{ 
protected :    int _stuNum ; // ѧ��
}; 
class Graduate : public Student
{ 
protected :   
	string _seminarCourse ; // �о���Ŀ
}; 
void TestPerson()
{
	Student s1;
	Student s2;
	Student s3;
	Graduate s4;
	cout << " ���� :" << Person::_count << endl;
	Student::_count = 0;
	cout << " ���� :" << Person::_count << endl;
}
