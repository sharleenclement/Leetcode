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
    
    ListNode* mergeTwoLists(ListNode* first, ListNode* second) {
        // We will create a dummy node 
    if(first == NULL)
        return second;
    if(second == NULL)
        return first;
    ListNode* output = NULL;
    if(first->val < second->val)
    {
        output = first;
        first = first->next;
    }
    else
    {
        output = second;
        second = second->next;
    }
    ListNode* curr = output;
    while(first != NULL && second!= NULL)
    {
        if(first->val > second->val)
        {
            curr->next = second;
            second = second->next;
        }
        else
        {
            curr->next = first;
            first = first->next;
        }
        curr = curr->next;
    }
    if(first!= NULL)
        curr->next = first;
   if(second!= NULL)
        curr->next = second;
   return output;
}
};