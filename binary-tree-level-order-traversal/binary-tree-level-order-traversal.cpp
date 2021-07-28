/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    /*
    TC: O(N^2), SC: O(N)
    vector<int> v;
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        int ls = height(root->left);
        int rs = height(root->right);
        
        return max(ls, rs) + 1;
    }
    
    void printKthLevel(TreeNode* root, int k)
    {
        
        if(root==NULL)
            return;
        
        if(k==1)
        {
            v.push_back(root->val);
            return;
        }
        
        printKthLevel(root->left, k-1);
        printKthLevel(root->right, k-1);
        
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> x;
        int h = height(root);
        
        for(int i=1;i<=h;++i)
        {
            printKthLevel(root, i);
            x.push_back(v);
            v.clear();
        }
        
        return x;
    }
    */
    
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> x;
        if (!root) 
            return x;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int len = q.size();
            vector<int> v;
            for(int i=0;i<len;++i)
            {
                TreeNode* first = q.front();
                v.push_back(first->val);
                q.pop();
                if(first->left)
                {
                    q.push(first->left);
                }
                if(first->right)
                {
                    q.push(first->right);
                }
            }
            x.push_back(v);
        }
        return x;
    }
};