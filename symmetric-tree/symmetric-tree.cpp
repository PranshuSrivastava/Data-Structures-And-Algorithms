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
    void isMirror(TreeNode *left, TreeNode *right, bool &ans)
    {
        if(left!=NULL && right!=NULL)
        {
            if(left->val != right->val)
            {
                ans=false;
                return;
            }
            else
            {
                isMirror(left->left,right->right,ans);
                isMirror(left->right,right->left,ans);
            }
        }
        else if((left==NULL && right!=NULL) || (right==NULL && left!=NULL))
            {
                ans=false;
                return;
            }
        
    }
    bool isSymmetric(TreeNode* root) {
        bool ans= true;
        isMirror(root->left,root->right,ans);
        return ans;
    }
};