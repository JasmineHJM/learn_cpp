#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

template<class T> 
struct AVLTreeNode {
	AVLTreeNode(const T& data) 
	: _pLeft(nullptr), _pRight(nullptr), _pParent(nullptr),
	_data(data), _bf(0) 
	{}

	AVLTreeNode<T>* _pLeft;  // 该节点的左孩子   
	AVLTreeNode<T>* _pRight;  // 该节点的右孩子   
	AVLTreeNode<T>* _pParent; // 该节点的双亲  
	T _data;   
	int _bf;// 该节点的平衡因子 
};

bool Insert(const T& data){
	while (pParent){   
		// 更新双亲的平衡因子     
		if (pCur == pParent->_pLeft)   
			pParent->_bf--;      
		else     
			pParent->_bf++;

		// 更新后检测双亲的平衡因子 
		if (0 == pParent->_bf)       
			break;    
		else if (1 == pParent->_bf || -1 == pParent->_bf){
			// 插入前双亲的平衡因子是0，插入后双亲的平衡因为为1 或者 -1 ，说明以双亲为根的二叉 树    
			// 的高度增加了一层，因此需要继续向上调整    
			pCur = pParent;         
			pParent = pCur->_pParent;    
		}else{      
			// 双亲的平衡因子为正负2，违反了AVL树的平衡性，需要对以pParent    
			// 为根的树进行旋转处理         
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