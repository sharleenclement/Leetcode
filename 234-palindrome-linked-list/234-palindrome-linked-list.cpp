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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        
        while(head!=NULL)
        {
            arr.push_back(head->val);
            head = head->next;
        }
        
        int i, n = arr.size();
        for(int i=0;i<n;++i)
        {
            if(arr[i]!=arr[n-i-1])
                return false;
        }
        
        return true;
    }
};
