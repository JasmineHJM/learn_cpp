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
	// ��̬����һ��int���͵Ŀռ�     
	int* ptr4 = new int;          
	// ��̬����һ��int���͵Ŀռ䲢��ʼ��Ϊ10    
	int* ptr5 = new int(10);          
	// ��̬����10��int���͵Ŀռ�    
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
	// ���뵥��Test���͵Ŀռ�
	Test* p1 = (Test*)malloc(sizeof(Test));
	free(p1);
	// ����10��Test���͵Ŀռ�
	Test* p2 = (Test*)malloc(sizoef(Test) * 10);
	free(p2);
}
void Test2() 
{    
	// ���뵥��Test���͵Ķ���   
	Test* p1 = new Test;    
	delete p1;       
	// ����10��Test���͵Ķ��� 
	Test* p2 = new Test[10];   
	delete[] p2; 
}