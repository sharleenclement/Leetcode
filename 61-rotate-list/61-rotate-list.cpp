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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL)
            return head;
        
        int i, l = length(head);
        
        if(k>=l)
            k %= l;
        
        for(i=0;i<k;++i)
        {
            ListNode* temp = head;
            while(temp->next->next!=NULL)
            {
                temp = temp->next;
            }
            ListNode* n = temp->next;
            temp->next = NULL;
            n->next = head;
            head = n;
        }
        
        return head;
    }
};