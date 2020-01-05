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
			// 根的双亲为头节点          
			pRoot->_pParent = _pHead;       
			_pHead->_pParent = pRoot;  
		}     
		else   
		{         
			// 1. 按照二叉搜索的树方式插入新节点 
			// 2. 检测新节点插入后，红黑树的性质是否造到破坏，   
			//    若满足直接退出，否则对红黑树进行旋转着色处理 
		}

	// 根节点的颜色可能被修改，将其改回黑色
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
	// 获取红黑树中最小节点，即最左侧节点   
	PNode LeftMost();
	// 获取红黑树中最大节点，即最右侧节点 
	PNode RightMost(); 
private:   
	PNode _pHead;
}; 