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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0, value=0, ans=0;
        ListNode* l = l1;
        ListNode* prev;
        ListNode* n = new ListNode(0);
        ListNode* fin = n;
        while(l1!=NULL and l2!=NULL)
        {
            ans = l1->val + l2->val + carry;// 99 99 = 19 8
            carry = ans/10;
            value = ans%10;
            ListNode* k = new ListNode(value);
            l1 = l1->next;
            l2 = l2->next;
            n->next = k;
            n = n->next;
        }
        while(l1!=NULL)
        {
            prev = l1;
            ans = l1->val + carry;
            carry = ans/10;
            value = ans%10;
            ListNode* k = new ListNode(value);
            n->next = k;
            n = n->next;
            l1 = l1->next;
        }
        while(l2!=NULL)
        {
            prev = l2;
            ans = l2->val + carry;
            carry = ans/10;
            value = ans%10;
            ListNode* k = new ListNode(value);
            n->next = k;
            n = n->next;
            l2 = l2->next;
        }
        if(carry>0)
        {
            ListNode* k = new ListNode(carry);
            n->next = k;
        }
        return fin->next;
    }
};