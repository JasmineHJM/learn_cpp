#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

class Person
{
public: 
	virtual void BuyTicket() 
	{ 
		cout << "ÂòÆ±-È«¼Û" << endl;
	} 
};

class Student : public Person 
{
public:   
	virtual void BuyTicket() 
	{ 
		cout << "ÂòÆ±-°ë¼Û" << endl; 
	}
};

void Func(Person& p) 
{ p.BuyTicket(); }

int main() {
	Person ps;   
	Student st;   
	Func(ps);  
	Func(st);

	return 0;
}
//³éÏóÀà
class Car 
{ 
public: 
	virtual void Drive() = 0;
};

class Benz :public Car 
{ 
public:  
	virtual void Drive()    
{ cout << "Benz-ÊæÊÊ" << endl; } 
};

class BMW :public Car
{ 
public:  
	virtual void Drive()  
{ cout << "BMW-²Ù¿Ø" << endl; } 
};

void Test()
{
	Car* pBenz = new Benz; 
	pBenz->Drive();

	Car* pBMW = new BMW;
	pBMW->Drive();
}
