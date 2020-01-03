#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

template <class T1, class T2>
struct pair {
	typedef T1 first_type;  
	typedef T2 second_type;

	T1 first; 
	T2 second; 
	pair() : first(T1()), second(T2())  
	{}   
	pair(const T1& a, const T2& b) : first(a), second(b)
	{}
};
int main()
{
	int carrots;
	carrots = 25;
	cout << "I have ";
	cout << carrots;
	cout << " carrots ";
	cout << endl;
	carrots = carrots -1;
	cout << "Crunch, crunch.Now i have " << carrots << " carrots." << endl;

	return 0;
}