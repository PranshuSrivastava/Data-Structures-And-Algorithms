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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        queue<TreeNode *> s;
        vector<vector<int>> sol;
        s.push(root);
        while(!s.empty())
        {
            vector<int> solution;
            int n=s.size();
            for(int i=0;i<n;i++){
                 TreeNode *temp =s.front();
            solution.push_back(temp->val);
            s.pop();
            if(temp->left!=NULL)
                s.push(temp->left);
            if(temp->right!=NULL)
                s.push(temp->right);
                
            }
            sol.push_back(solution);
           
        }
        return sol;
        
    }
};