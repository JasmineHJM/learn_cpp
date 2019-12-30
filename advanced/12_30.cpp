#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

template<class T> 
struct AVLTreeNode {
	AVLTreeNode(const T& data) 
	: _pLeft(nullptr), _pRight(nullptr), _pParent(nullptr),
	_data(data), _bf(0) 
	{}

	AVLTreeNode<T>* _pLeft;  // �ýڵ������   
	AVLTreeNode<T>* _pRight;  // �ýڵ���Һ���   
	AVLTreeNode<T>* _pParent; // �ýڵ��˫��  
	T _data;   
	int _bf;// �ýڵ��ƽ������ 
};

bool Insert(const T& data){
	while (pParent){   
		// ����˫�׵�ƽ������     
		if (pCur == pParent->_pLeft)   
			pParent->_bf--;      
		else     
			pParent->_bf++;

		// ���º���˫�׵�ƽ������ 
		if (0 == pParent->_bf)       
			break;    
		else if (1 == pParent->_bf || -1 == pParent->_bf){
			// ����ǰ˫�׵�ƽ��������0�������˫�׵�ƽ����ΪΪ1 ���� -1 ��˵����˫��Ϊ���Ķ��� ��    
			// �ĸ߶�������һ�㣬�����Ҫ�������ϵ���    
			pCur = pParent;         
			pParent = pCur->_pParent;    
		}else{      
			// ˫�׵�ƽ������Ϊ����2��Υ����AVL����ƽ���ԣ���Ҫ����pParent    
			// Ϊ������������ת����         
			if(2 == pParent->_bf){
				// ...           
			}
			else{
				// ...
			}
		}
	}

	return true;
}