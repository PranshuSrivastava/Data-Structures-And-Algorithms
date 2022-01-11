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
    void calcSum(TreeNode* root,int &sum,int ret)
    {
        if(!root)
            return ;
        ret=2*ret+root->val;
        if(root->left!=NULL)
            calcSum(root->left,sum,ret);
        if(root->right!=NULL)
            calcSum(root->right,sum,ret);
        if(!root->left && !root->right)
            sum+=ret;
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum=0,ret=0;
        calcSum(root,sum,ret);
        return sum;
        
    }
};