#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

//输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。
//要求不能创建任何新的结点，只能调整树中结点指针的指向。

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};
class Solution {
public:
	TreeNode Convert(TreeNode pRootOfTree)
	{
		if (pRootOfTree == null)
		{
			return null;
		}
		ArrayList<TreeNode> list = new ArrayList<>();
		Convert(pRootOfTree, list);
		return Convert(list);
	}    //中序遍历，在list中按遍历顺序保存  
public: 
	void Convert(TreeNode pRootOfTree, ArrayList<TreeNode> list)
	{
		if (pRootOfTree.left != null)
		{
			Convert(pRootOfTree.left, list);
		}         list.add(pRootOfTree);
		if (pRootOfTree.right != null)
		{
			Convert(pRootOfTree.right, list);
		}
	}
	//遍历list，修改指针  
public:
	TreeNode Convert(ArrayList<TreeNode> list)
	{

		for (int i = 0; i < list.size() - 1; i++)
		{
			list.get(i).right = list.get(i + 1);
			list.get(i + 1).left = list.get(i);
		}
		return list.get(0);
	}
};