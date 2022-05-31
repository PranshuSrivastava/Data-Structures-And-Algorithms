class Solution {
public:
    void reorderList(ListNode* head) {
		
        ListNode *slow = head, *fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode *prev = NULL, *temp = NULL;
        while(slow) {
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        

        ListNode *p1 = head, *p2 = prev;
        ListNode *t1, *t2;
        while(p1 && p2) {
            t1 = p1->next;
            t2 = p2->next;
            p1->next = p2;
            p2->next = t1;
            p1 = t1;
            p2 = t2;
        }
        if(p1)
            p1->next = NULL;
        return;
    }
};
