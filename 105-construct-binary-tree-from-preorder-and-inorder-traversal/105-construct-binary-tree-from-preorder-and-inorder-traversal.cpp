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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int, int> m;
        int n1 = preorder.size(), n2 = inorder.size();
        for(int i = 0; i < n2; ++i)
            m[inorder[i]] = i;
        TreeNode* ans = make(preorder, 0, n1 - 1, inorder, 0, n2 - 1, m);
        return ans;
    }
    TreeNode* make(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd, map<int, int>& m){
        if(preStart > preEnd || inStart > inEnd)
            return NULL;
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inRoot = m[root-> val];
        int left = inRoot - inStart;
        root->left = make(preorder, preStart + 1, preStart + left, inorder, inStart, inRoot - 1, m);
        root->right = make(preorder, preStart + left + 1, preEnd, inorder, inRoot + 1, inEnd, m);
        return root;
    }
};