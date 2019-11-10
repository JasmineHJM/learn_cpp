#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>

using namespace std;

/*
int main() 
{
	int a[] = { 1, 2, 3, 4 };  
	vector<int> v(a, a + sizeof(a) / sizeof(int));
	vector<int>::iterator it = v.begin();   
	while (it != v.end()) 
	{
		cout << *it << " ";     
		++it; 
	}   
	cout << endl;

	v.pop_back();   
	v.pop_back();

	it = v.begin(); 
	while (it != v.end()) 
	{ 
		cout << *it << " ";    
		++it; 
	}   
	cout << endl;

	return 0;
}
*/

void PrintVector(const vector<int>& v) 
{  
	// const����ʹ��const���������б�����ӡ  
	vector<int>::const_iterator it = v.begin();   
	while (it != v.end())    
	{      
		cout << *it << " ";     
		++it;    
	}   
	cout << endl;
}

int main()
{
	// ʹ��push_back����4������  
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	// ʹ�õ��������б�����ӡ  
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	// ʹ�õ����������޸�  
	it = v.begin();
	while (it != v.end())
	{
		*it *= 2;
		++it;
	}
	// ʹ�÷�����������б����ٴ�ӡ   
	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
	PrintVector(v);

	return 0;
}