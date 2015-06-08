/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> res;
		if (root == NULL) return res;

		stack<TreeNode*> st;
		st.push(root);

		while (!st.empty()) {
			TreeNode* st_top = st.top();
			st.pop();
			res.push_back(st_top->val);
			if (st_top->right != NULL)
				st.push(st_top->right);
			if (st_top->left != NULL)
				st.push(st_top->left);
		}
		return res;
	}
};
