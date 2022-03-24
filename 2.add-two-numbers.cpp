/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
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
#include <bits/stdc++.h>
#define ll long long int
#define pb pop_back
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define vi vector<int>
#define mi unordered_map<int, int>
#define nline cout << '\n';
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
using namespace std;
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ptr = new ListNode();
        int carry = 0;
        ListNode *temp = ptr;
        while (l1 || l2)
        {
            int sum = 0;
            sum += (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            sum += carry;
            carry = sum / 10;
            ListNode *node = new ListNode(sum % 10);
            temp->next = node;
            temp = temp->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        if(carry)
        {
            ListNode* tmp = new ListNode(carry);
            temp ->next = tmp;
            temp = temp->next;
        }
        return ptr->next;
    }
};
// @lc code=end
