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
	string _name; // ���� 
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
	int _num; //ѧ��
}; 
void Test () 
{  
	Student s1 ("jack", 18); 
	Student s2 (s1);  
	Student s3 ("rose", 17); 
	s1 = s3 ; 
}

//ʵ��һ�����ܱ��̳е���
// C++98�й��캯��˽�л����������е���������Ĺ��캯�������޷��̳� 
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

// C++11�������µĹؼ���final��ֹ�̳� 
class NonInherit final 
{};
