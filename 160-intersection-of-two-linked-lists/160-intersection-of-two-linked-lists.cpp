/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode* head)
    {
        int c = 0;
        while(head!=0)
        {
            head = head->next;
            c++;
        }
        return c;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = length(headA);
        int l2 = length(headB);
        int l;
        ListNode* x = headA;
        ListNode* y = headB;
        l = l1-l2;
        if(l<0)
        {
            while(l!=0)
            {
                l++;
                y = y->next;
            }
        }
        else
        {
            while(l!=0)
            {
                l--;
                x = x->next;
            }
        }
        
        while(x!=NULL)
        {
            if(x==y)
                return x;
            x = x->next;
            y = y->next;
        }
        
        return NULL;
    }
};