class Solution {
public:
    
    ListNode* mergeTwoLists(ListNode* first, ListNode* second) {
        
		if(first==NULL)
            return second;
        if(second==NULL)
            return first;
			
		ListNode* fin = first;
		
		if(first->val < second->val)
		{
			fin = first;
			fin->next = mergeTwoLists(first->next, second);
		}
		else
		{
			fin = second;
			fin->next = mergeTwoLists(first, second->next);
		}
		
		return fin;
    }
};