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
        int cnt=0;
        while(head!=NULL)
        {
            head = head->next;
            cnt++;
        }
        return cnt;
    }
    int getDecimalValue(ListNode* head) {
        int dec=0, len=length(head)-1;
        while(head!=NULL)
        {
            dec += head->val * pow(2,len);
            head = head->next;
            len--;
        }
        return dec;
    }
};