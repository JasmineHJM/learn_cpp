#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//��ת
void _RotateR(PNode pParent){   
	// pSubL: pParent������   
	// pSubLR: pParent���ӵ��Һ��ӣ�ע�⣺�� 
	PNode pSubL = pParent->_pLeft;  
	PNode pSubLR = pSubL->_pRight;

	// ��ת���֮��30���Һ�����Ϊ˫�׵�����  
	pParent->_pLeft = pSubLR;    
	// ���30�����ӵ��Һ��Ӵ��ڣ�������˫��   
	if(pSubLR)       
		pSubLR->_pParent = pParent;

	// 60 ��Ϊ 30���Һ���   
	pSubL->_pRight = pParent;  
	// ��Ϊ60�����ǿ�����������ڸ�����˫��ǰ�����ȱ���60��˫��  
	PNode pPParent = pParent->_pParent;
	// ����60��˫�� 
	pParent->_pParent = pSubL;  
	// ����30��˫�� 
	pSubL->_pParent = pPParent;

	// ���60�Ǹ��ڵ㣬����ָ����ڵ��ָ�� 
	if(NULL == pPParent){
		_pRoot = pSubL;    
		pSubL->_pParent = NULL;  
	}else{      
		// ���60����������������˫�׵���������Ҳ������������   
		if(pPParent->_pLeft == pParent)     
			pPParent->_pLeft = pSubL;   
		else         
			pPParent->_pRight = pSubL;  
	}

	// ���ݵ�����Ľṹ���²��ֽڵ��ƽ������  
	pParent->_bf = pSubL->_bf = 0;
}