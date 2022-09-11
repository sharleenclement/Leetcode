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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL or k==0)
            return head;
        
        int i, length=1;
        ListNode* temp = head;
        
        while(temp->next!=NULL)
        {
            temp = temp->next;
            length++;
        }
                
        k = k%length;
        int end = length - k;
        temp->next = head;
        
        while(end!=0)
        {
            temp = temp->next;
            end--;
        }
        
        head = temp->next;
        temp->next = NULL;
        
        return head;
    }
};