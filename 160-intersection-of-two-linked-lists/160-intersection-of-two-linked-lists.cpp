/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* x = headA;
        ListNode* y = headB;
        unordered_set<ListNode*> st;
        while(x!=NULL)
        {
            st.insert(x);
            x = x->next;
        }
        while(y!=NULL)
        {
            if(st.find(y)!=st.end())
                return y;
            y = y->next;
        }
        return NULL;
    }
};