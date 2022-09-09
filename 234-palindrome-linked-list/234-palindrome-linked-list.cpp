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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* n = NULL;
        
        while(head!=NULL)
        {
            n = head->next;
            head->next = prev;
            prev = head;
            head = n;
        }        
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL)
            return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverseList(slow->next);
        slow = slow->next;
        ListNode* n = head;
        
        while(slow!=NULL)
        {
            if(n->val!=slow->val)
                return false;
            
            n = n->next;
            slow = slow->next;
        }
        
        return true;
    }
};
