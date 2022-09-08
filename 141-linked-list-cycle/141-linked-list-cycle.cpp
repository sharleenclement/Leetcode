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
    bool hasCycle(ListNode *head) {
        ListNode* h = head;
        unordered_set<ListNode*> st;
        
        while(h!=NULL)
        {
            if(st.find(h)!=st.end())
                return true;
            st.insert(h);
            h = h->next;
        }
        
        return false;
    }
};