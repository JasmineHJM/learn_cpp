#define _CRT_SECURE_NO_WARNINGS 1

// constructing lists
#include <iostream> 
#include <list>
/*
int main() 
{
	std::list<int> l1;          
	// ����յ�l1  
	std::list<int> l2 (4,100);   
	// l2�з�4��ֵΪ100��Ԫ��  
	std::list<int> l3 (l2.begin(), l2.end());  
	// ��l2��[begin(), end()������ҿ������乹��l3  
	std::list<int> l4 (l3);               
	// ��l3��������l4 
	// ������Ϊ���������乹��l5  
	int array[] = {16,2,77,29};  
	std::list<int> l5 (array, array + sizeof(array) / sizeof(int) );

	// �õ�������ʽ��ӡl5�е�Ԫ��  
	for(std::list<int>::iterator it = l5.begin();it != l5.end(); it++)     
		std::cout << *it << " "; 
	std::cout<<endl;       
	// C++11��Χfor�ķ�ʽ����  
	for(auto& e : l5)     
		std::cout<< e << " ";   
	std::cout<<endl;   
	return 0; 
}
*/