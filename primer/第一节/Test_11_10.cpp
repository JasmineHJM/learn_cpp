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
	// const对象使用const迭代器进行遍历打印  
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
	// 使用push_back插入4个数据  
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	// 使用迭代器进行遍历打印  
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	// 使用迭代器进行修改  
	it = v.begin();
	while (it != v.end())
	{
		*it *= 2;
		++it;
	}
	// 使用反向迭代器进行遍历再打印   
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