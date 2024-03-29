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
    TreeNode* rightMost(TreeNode* root){
        if(!root->right)
            return root;
        return rightMost(root->right);
    }
    void flatten(TreeNode* root) {
        if(!root)
            return;
        TreeNode* rightmost;
        TreeNode* nextright;
        while(root){
            if(root->left){
                rightmost = rightMost(root->left);
                nextright = root->right;
                root->right = root->left;
                root->left = NULL;
                rightmost->right = nextright;
            }
            root = root->right;
        }
        
    }
};