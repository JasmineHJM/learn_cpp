#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

//����һ�ö��������������ö���������ת����һ�������˫������
//Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��

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
	}    //�����������list�а�����˳�򱣴�  
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
	//����list���޸�ָ��  
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