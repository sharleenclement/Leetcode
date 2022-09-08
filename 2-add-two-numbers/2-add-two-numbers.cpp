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
        int carry=0, value=0, sum=0;
        ListNode* l = new ListNode(-1);
        ListNode* temp = l;
        while((l1!=NULL or l2!=NULL) or carry)
        {
            sum = 0;
            if(l1!=NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if(l2!=NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            
            sum += carry;
            carry = sum/10;
            ListNode* n = new ListNode(sum%10);
            temp->next = n;
            temp = temp->next;
        }
        
        return l->next;
    }
};