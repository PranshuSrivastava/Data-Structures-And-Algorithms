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
int ans;
class Solution {
public:
    void maxDiff(TreeNode *root,int maxi,int mini)
    {
        if(root==NULL)
            return;
        ans=max({ans,abs(root->val-maxi),abs(root->val-mini)});
        maxDiff(root->left,max(maxi,root->val),min(root->val,mini));
        maxDiff(root->right,max(maxi,root->val),min(root->val,mini));
    }
    int maxAncestorDiff(TreeNode* root) {
        ans=0;
        maxDiff(root,root->val,root->val);
        return ans;
        
        
        
    }
};