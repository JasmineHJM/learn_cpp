#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
//二叉树的最近公共祖先

class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		vector<TreeNode*> path_a, path_b;
		if (!get_path(root, p, path_a) || !get_path(root, q, path_b)) return nullptr;
		int i = 1;
		for (; i < path_a.size() && i < path_b.size(); i++) {
			if (path_a[i] != path_b[i]) return path_a[i - 1];
		}
		return path_a[i - 1];
	}
	bool get_path(TreeNode* root, TreeNode* a, vector<TreeNode*>& path) {
		if (!root) return false;
		path.emplace_back(root);
		if (root == a) return true;
		if (get_path(root->left, a, path)) return true;
		if (get_path(root->right, a, path)) return true;
		path.pop_back();
		return false;
	}
};
