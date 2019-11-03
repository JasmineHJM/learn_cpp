#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

int globalVar = 1; 
static int staticGlobalVar = 1;
void Test() 
{ 
	static int staticVar = 1;   
	int localVar = 1;        
	int num1[10] = { 1, 2, 3, 4 };    
	char char2[] = "abcd";   
	char* pChar3 = "abcd";   
	int* ptr1 = (int*)malloc(sizeof (int)* 4);   
	int* ptr2 = (int*)calloc(4, sizeof(int));   
	int* ptr3 = (int*)realloc(ptr2, sizeof(int)* 4);  
	free(ptr1);   
	free(ptr3); 
}

void Test() 
{     
	// 动态申请一个int类型的空间     
	int* ptr4 = new int;          
	// 动态申请一个int类型的空间并初始化为10    
	int* ptr5 = new int(10);          
	// 动态申请10个int类型的空间    
	int* ptr6 = new int[3];         
	delete ptr4;    
	delete ptr5;    
	delete[] ptr6; 
}

class Test 
{
public:    
	Test() : _data(0)    
	{ 
		cout << "Test():" << this << endl;
	}
   ~Test()    
   { 
	   cout << "~Test():" << this << endl;
   } 
private:    
	int _data;
};

void Test2()
{
	// 申请单个Test类型的空间
	Test* p1 = (Test*)malloc(sizeof(Test));
	free(p1);
	// 申请10个Test类型的空间
	Test* p2 = (Test*)malloc(sizoef(Test) * 10);
	free(p2);
}
void Test2() 
{    
	// 申请单个Test类型的对象   
	Test* p1 = new Test;    
	delete p1;       
	// 申请10个Test类型的对象 
	Test* p2 = new Test[10];   
	delete[] p2; 
}