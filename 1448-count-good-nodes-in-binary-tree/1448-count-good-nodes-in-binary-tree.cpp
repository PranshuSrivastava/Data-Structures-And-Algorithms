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
    int ans = 0;
    int goodNodes(TreeNode* root) {
        dfs(root, INT_MIN);
        return ans;
    }
    void dfs(TreeNode* root, int maxi){
        if(!root)
            return;
        maxi = max(maxi, root->val);
        dfs(root->left, maxi);
        dfs(root->right, maxi);
        if(root->val >= maxi)
            ++ans;
        
    }
};