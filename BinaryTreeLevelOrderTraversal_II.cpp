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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL) return res;
        
        queue<TreeNode*> level, nextLevel;
        level.push(root);
        
        while (!level.empty()) {
            vector<int> vec;
            while (!level.empty()) {
                TreeNode* tmp = level.front();
                level.pop();
                vec.push_back(tmp->val);
                if (tmp->left != NULL) nextLevel.push(tmp->left);
                if (tmp->right != NULL) nextLevel.push(tmp->right);
            }
            res.insert(res.begin(), vec);
            
            queue<TreeNode*> q;
            q = level;
            level = nextLevel;
            nextLevel = q;
        }
        
        return res;
    }
};
