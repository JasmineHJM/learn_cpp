#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
/*异常
double Division(int a, int b) 
{   
	// 当b == 0时抛出异常  
	if (b == 0)    
		throw "Division by zero condition!"; 
	else  
		return ((double)a / (double)b);
}
void Func()
{
	int len, time;
	cin >> len >> time;
	cout << Division(len, time) << endl;
}
int main() 
{
	try
	{ Func(); }
	catch (const char* errmsg）
	{ cout << errmsg << endl; }
	catch (...)
	{ cout << "unkown exception" << endl; }

	return 0;
}
 */

double Division(int a, int b) 
{   
	// 当b == 0时抛出异常 
	if (b == 0)  
	{     
		throw "Division by zero condition!";  
	}   
	return (double)a / (double)b;
}
void Func() 
{   

	int* array = new int[10];  
	try 
	{  
		int len, time;     
		cin >> len >> time;  
		cout << Division(len, time) << endl;  
	}  
	catch (...)  
	{     
		cout << "delete []" << array << endl;    
		delete[] array;    
		throw; 
	}
	cout << "delete []" << array << endl;
	delete[] array;
}

int main() 
{
	try  
	{ Func(); }
	catch (const char* errmsg)  
	{ cout << errmsg << endl; }

	return 0;
}