#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>

/*
// ʵ����ʾ���ּ̳й�ϵ�»����Ա�ĸ����ͳ�Ա���ʹ�ϵ�ı仯 
class Person { 
public :    
	void Print ()   
	{       
		cout<<_name <<endl;  
	} 
protected :    
	string _name ; // ���� 
private : 
	int _age ;   // ���� 
};

//class Student : protected Person
//class Student : private Person 
class Student : public Person
{
protected :   
	int _stunum ; // ѧ��
};

class Person {
protected:   
	string _name; // ���� 
	string _sex;  // �Ա�   
	int _age;    // ����
}; 
class Student : public Person {
public :   
	int _No ; // ѧ��
};
void Test()
{
	Student sobj;
	// 1.���������Ը�ֵ���������/ָ��/����  
	Person pobj = sobj;
	Person* pp = &sobj;
	Person& rp = sobj;
	//2.��������ܸ�ֵ����������� 
	sobj = pobj;
	// 3.�����ָ�����ͨ��ǿ������ת����ֵ���������ָ��  
	pp = &sobj;
	Student* ps1 = (Student*)pp;
	// �������ת��ʱ���Եġ�
	ps1->_No = 10;
	pp = &pobj;
	Student* ps2 = (Student*)pp;
	// �������ת��ʱ��Ȼ���ԣ����ǻ����Խ����ʵ�����  
	ps2->_No = 10;
}
*/
class Person +{
protected:   
	string _name = "С����"; // ����
	int _num = 111;          // ���֤�� 
};

class Student : public Person
{
public:    
	void Print()   
	{ 
		cout << " ����:" << _name << endl;      
		cout << " ���֤��:" << Person::_num << endl;      
		cout << " ѧ��:" << _num << endl; 
	}
protected:  
	int _num = 999; // ѧ�� 
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