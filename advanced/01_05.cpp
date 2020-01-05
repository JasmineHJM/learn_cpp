#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

template<class ValueType>
class RBTree 
{     
	bool Insert(const ValueType& data)  
	{    
		PNode& pRoot = GetRoot();   
		if (nullptr == pRoot)      
		{          
			pRoot = new Node(data, BLACK);   
			// ����˫��Ϊͷ�ڵ�          
			pRoot->_pParent = _pHead;       
			_pHead->_pParent = pRoot;  
		}     
		else   
		{         
			// 1. ���ն�������������ʽ�����½ڵ� 
			// 2. ����½ڵ����󣬺�����������Ƿ��쵽�ƻ���   
			//    ������ֱ���˳�������Ժ����������ת��ɫ���� 
		}

	// ���ڵ����ɫ���ܱ��޸ģ�����Ļغ�ɫ
	pRoot->_color = BLACK;
	_pHead->_pLeft = LeftMost();   
	_pHead->_pRight = RightMost();  
	return true;
	} 
private:  
	PNode& GetRoot()
	{ 
		return _pHead->_pParent; 
	} 
	// ��ȡ���������С�ڵ㣬�������ڵ�   
	PNode LeftMost();
	// ��ȡ����������ڵ㣬�����Ҳ�ڵ� 
	PNode RightMost(); 
private:   
	PNode _pHead;
}; 