#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>

using namespace std;
//����һ���������������䰴��α����Ľڵ�ֵ�� �������أ������ҷ������нڵ㣩��

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};

class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> ans;
		pre(root, 0, ans);
		return ans;
	}

	void pre(TreeNode *root, int depth, vector<vector<int>> &ans) {
		if (!root) return;
		if (depth >= ans.size())
			ans.push_back(vector<int> {});
		ans[depth].push_back(root->val);
		pre(root->left, depth + 1, ans);
		pre(root->right, depth + 1, ans);
	}
};