/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> s;
    void dfs(TreeNode* root, int k){
        if(!root)
            return;
        if(find(s.begin(), s.end(), root->val) == s.end())
            s.push_back(root->val);
        dfs(root->left, k);
        dfs(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        dfs(root, k);
        sort(s.begin(), s.end());
        return s[k - 1];
    }
};