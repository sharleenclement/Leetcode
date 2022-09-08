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
    int lengthList(ListNode* head)
    {
        int c = 0;
        while(head!=NULL)
        {
            head = head->next;
            c++;
        }
        return c;
    }
    
    ListNode* middleNode(ListNode* head) {
        int l = lengthList(head), c=1, k=0;
        if(l==1)
            return head;
        k = ceil(l/2.0);
        if(l%2==0)
            k++;
        while(head!=NULL)
        {
            if(c==k)
            {
                return head;
            }
            c++;
            head = head->next;
        }
        return head;
    }
};