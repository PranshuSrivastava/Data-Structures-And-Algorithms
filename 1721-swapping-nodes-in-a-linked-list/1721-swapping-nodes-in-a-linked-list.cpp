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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* left = head;
        ListNode* right = head;
        ListNode* curr = head;
        int cnt = 1;
        while(curr){
            if(cnt<k){
                left = left->next;
            }
            else if(k<cnt){
                right = right->next;
            }
            ++cnt;
            curr = curr->next;
        }
        int temp = left->val;
        left->val = right->val;
        right->val = temp;
        return head;
        
    }
};