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
        int c=0;
        while(head!=NULL)
        {
            head = head->next;
            c++;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l = length(head), k=0;
        if(l==0)
            return head;
        ListNode* temp = head;
        ListNode* prev = head;
        
        if(l-n==0)
        {
            if(head->next!=NULL)
            {
                head = head->next;
                delete temp;
                return head;
            }
            else
            {
                delete temp;
                return NULL;
            }
        }
        
        while(temp!=NULL)
        {
            if(k==l-n)
            {
                prev->next = temp->next;
                delete temp;
                return head;
            }
            prev = temp;
            temp = temp->next;
            k++;
        }
        return head;
    }
};
/*3
1 2 3 
2 3 4
1 2 3
*/
