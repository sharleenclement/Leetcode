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
    int length(ListNode* head)
    {
        int c = 0;
        
        while(head!=NULL)
        {
            head = head->next;
            c++;
        }
        
        return c;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL or head->next==NULL)
            return head;
        
        int l = length(head);
        int i;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr;
        ListNode* n;
        
        while(l>=k)
        {
            curr = prev->next;
            n = curr->next;
            for(i=1;i<k;++i)
            {
                curr->next = n->next;
                n->next = prev->next;
                prev->next = n;
                n = curr->next;
            }
            prev = curr;
            l -= k;
        }
        
        return dummy->next;
    }
};