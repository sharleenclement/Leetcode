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
        
        if(!l1 && !l2)
            return NULL;
    
        int c = (l1? l1->val : 0) + (l2? l2->val : 0);
        ListNode* t = new ListNode(c%10);
        ListNode* head = l1? l1->next : NULL;
        c = c/10;
        if(head) 
            head->val += c;
        else if(c) 
            head = new ListNode(c);
        t->next = addTwoNumbers(l2? l2->next:NULL, head);
        
        return t;
    }
};