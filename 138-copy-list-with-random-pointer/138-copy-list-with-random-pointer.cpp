/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return head;
        
        unordered_map<Node*, Node*> mp;
        Node* temp = head;
        Node* nHead = new Node(temp->val);
        mp[temp] = nHead;
        
        while(temp->next!=NULL)
        {
            nHead->next = new Node(temp->next->val);
            nHead = nHead->next;
            temp = temp->next;
            mp[temp] = nHead;
        }
        temp = head;
        
        while(temp!=NULL)
        {
            mp[temp]->random = mp[temp->random];
            temp = temp->next;
        }
        
        return mp[head];
    }
};