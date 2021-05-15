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
    ListNode* middleNode(ListNode* head) {
        int len = length(head);
        int x = len/2, c=0;
        while(c<x)
        {
            head = head->next;
            c++;
        }
        return head;
    }
};