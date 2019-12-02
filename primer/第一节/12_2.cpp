#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//模板
namespace std {    
	// 定义一个模板类型的静态数组 
	template<class T, size_t N = 10>  
	class array    { 
	public:     
		T& operator[](size_t index){return _array[index];}    
		const T& operator[](size_t index)const{return _array[index];}     
		size_t size()const{return _size;}      
		bool empty()const{return 0 == _size;}  
	private:     
		T _array[N];      
		size_t _size;  
	};
}

//特化

template<class T>
bool IsEqual(T& left, T& right) { return left == right; }

void Test() 
{
	char* p1 = "hello";  
	char* p2 = "world";

	if (IsEqual(p1, p2))      
		cout << p1 << endl;   
	else       
		cout << p2 << endl;
}

template<> 
bool IsEqual<char*>(char*& left, char*& right) 
{
	if (strcmp(left, right) > 0)   
		return true;      
	return false; 
}

//类模板全特化
template<class T1, class T2> 
class Data { 
public:   
	Data() { cout << "Data<T1, T2>" << endl; } 
private:   
	T1 _d1;   
	T2 _d2;
};

template<> 
class Data<int, char> { 
public:   
	Data() { cout << "Data<int, char>" << endl; }
private:   
	T1 _d1;  
	T2 _d2;
};

void TestVector() 
{ 
	Data<int, int> d1;   
	Data<int, char> d2; 
}

//类模板偏特化
template<class T1, class T2> 
class Data {
public:   
	Data() { cout << "Data<T1, T2>" << endl; } 
private:   
	T1 _d1; 
	T2 _d2;
};