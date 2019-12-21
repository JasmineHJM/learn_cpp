#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Base {
public:  
	virtual void func1() 
	{ cout << "Base::func1" << endl; } 
	virtual void func2() 
	{ cout << "Base::func2" << endl; }
private:   
	int a; 
};

class Derive :public Base { 
public:   
	virtual void func1() 
	{ cout << "Derive::func1" << endl; }  
	virtual void func3()
	{ cout << "Derive::func3" << endl; }   
	virtual void func4() 
	{ cout << "Derive::func4" << endl; }
private: 
	int b;
};

typedef void(*VFPTR) ();
void PrintVTable(VFPTR vTable[])
{   
	// ����ȡ����е��麯��ָ���ӡ�����á����þͿ��Կ���������ĸ�����  
	cout << " ����ַ>" << vTable << endl;  
	for (int i = 0; vTable[i] != nullptr; ++i) 
	{     
		printf(" ��%d���麯����ַ :0X%x,->", i, vTable[i]);   
		VFPTR f = vTable[i];   
		f();   
	}   
	cout << endl; 
}

int main() 
	{
		Base b;   
		Derive d;
		VFPTR* vTableb = (VFPTR*)(*(int*)&b);  
		PrintVTable(vTableb);

		VFPTR* vTabled = (VFPTR*)(*(int*)&d); 
		PrintVTable(vTabled);

		return 0;
}
