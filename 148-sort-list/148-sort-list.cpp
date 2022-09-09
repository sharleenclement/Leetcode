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
    ListNode* midElem(ListNode* head)
    {
        if(head==NULL or head->next==NULL)
            return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast!=NULL and fast->next!=NULL) // 1 2 3 4 5
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
    
    ListNode* merge(ListNode* hf1, ListNode* hf2)
    {
        if(hf1==NULL)
            return hf2;

        if(hf2==NULL)
            return hf1;

        ListNode* temp;
        if(hf1->val<=hf2->val)
        {
            temp = hf1;
            temp->next = merge(hf1->next, hf2);
        }
        else
        {
            temp = hf2;
            temp->next = merge(hf1, hf2->next);
        }

        return temp;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        
        ListNode* mid = midElem(head); 
        ListNode* hf1 = head;  
        ListNode* hf2 = mid->next; 

        mid->next = NULL;
        
        hf1 = sortList(hf1);
        hf2 = sortList(hf2);

        ListNode* m = merge(hf1, hf2);

        return m;
    }
};