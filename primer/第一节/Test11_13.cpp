#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
// ��ģ��Ķ����ʽ
template<class T1, class T2, ..., class Tn>
class //��ģ���� 
{    
	// ���ڳ�Ա����
};    
// ��̬˳���
// ע�⣺Vector���Ǿ�����࣬�Ǳ��������ݱ�ʵ�������������ɾ������ģ��
template<class T> 
class Vector 
{
public :  
	Vector(size_t capacity = 10)     
		:_pData(new T[capacity])        
		,_size(0)        
		,_capacity(capacity)  
	{}        
// ʹ������������ʾ�������������������ⶨ�塣    
~Vector();       
void PushBack(const T& data)��  
void PopBack()��    
// ...       
size_t Size() 
{
	return _size;
}       
T& operator[](size_t pos)   
{       
	assert(pos < _size);     
	return _pData[pos];   
}   
private:   
	T* _pData;  
	size_t _size;  
	size_t _capacity;
};

	// ע�⣺��ģ���к�������������ж���ʱ����Ҫ��ģ������б� 
template <class T> Vector<T>::~Vector()
{   
	if(_pData)    
		delete[] _pData;   
	_size = _capacity = 0; 
} 