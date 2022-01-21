/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void helper(ListNode *head, vector<int> &sol)
    {
        while(head!=NULL)
        {
            sol.push_back(head->val);
            head=head->next;
        }
    }
    bool isPalindrome(ListNode* head) {
        vector<int> sol;
        helper(head,sol);
        int n=sol.size();
        for(int i=0;i<n/2;i++)
        {
            if(sol[i]!=sol[n-1-i])
                return false;
        }
        return true;
        
    }
};