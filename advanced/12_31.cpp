#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//旋转
void _RotateR(PNode pParent){   
	// pSubL: pParent的左孩子   
	// pSubLR: pParent左孩子的右孩子，注意：该 
	PNode pSubL = pParent->_pLeft;  
	PNode pSubLR = pSubL->_pRight;

	// 旋转完成之后，30的右孩子作为双亲的左孩子  
	pParent->_pLeft = pSubLR;    
	// 如果30的左孩子的右孩子存在，更新亲双亲   
	if(pSubLR)       
		pSubLR->_pParent = pParent;

	// 60 作为 30的右孩子   
	pSubL->_pRight = pParent;  
	// 因为60可能是棵子树，因此在更新其双亲前必须先保存60的双亲  
	PNode pPParent = pParent->_pParent;
	// 更新60的双亲 
	pParent->_pParent = pSubL;  
	// 更新30的双亲 
	pSubL->_pParent = pPParent;

	// 如果60是根节点，根新指向根节点的指针 
	if(NULL == pPParent){
		_pRoot = pSubL;    
		pSubL->_pParent = NULL;  
	}else{      
		// 如果60是子树，可能是其双亲的左子树，也可能是右子树   
		if(pPParent->_pLeft == pParent)     
			pPParent->_pLeft = pSubL;   
		else         
			pPParent->_pRight = pSubL;  
	}

	// 根据调整后的结构更新部分节点的平衡因子  
	pParent->_bf = pSubL->_bf = 0;
}