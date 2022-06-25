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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while(temp){
            ++count;
            temp= temp->next;
        }
        cout<<count;
        temp = head;
        int k = count - n;
        if(!k)
        {
            head = head->next;
            return head;
        }
        while(temp){
            k--;
            if(!k)
            {
                temp->next = temp->next->next;
                return head;
            }
            temp = temp->next;
        }
        return temp;
    }
};