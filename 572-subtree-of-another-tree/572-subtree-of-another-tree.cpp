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
    bool isSameTree(TreeNode* r, TreeNode* s){
        if(!r and !s)
            return 1;
        if(!r or !s)
            return 0;
        return (r->val == s->val) && isSameTree(r->left, s->left) && isSameTree(r->right, s->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot)
            return 1;
        if(!root)
            return 0;
        if(isSameTree(root, subRoot))
            return 1;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};