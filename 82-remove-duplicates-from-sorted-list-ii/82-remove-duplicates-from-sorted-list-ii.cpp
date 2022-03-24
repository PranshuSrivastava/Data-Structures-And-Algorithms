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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return 0;
        if(!head->next)
            return head;
        ListNode* temp = head->next;
        int val = head->val;
        if(val == temp->val){
            while(temp && temp->val==val){
                ListNode* p = temp;
                temp = temp->next;
                delete p;
            }
            return deleteDuplicates(temp);
        }
        else{
            head->next =  deleteDuplicates(temp);
            return head;
        }
    }
};