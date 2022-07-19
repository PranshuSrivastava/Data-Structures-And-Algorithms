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
    void sum(TreeNode* root, int& total){
        if(!root)
            return;
        sum(root->right, total);
        total += root->val;
        root->val = total;
        sum(root->left, total);
     }
    TreeNode* convertBST(TreeNode* root) {
        int total = 0;
        sum(root, total);
        return root;
    }
};