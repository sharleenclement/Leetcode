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
    
    TC: O(N^2)
    
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        return max(height(root->left), height(root->right)) + 1;
    }
    
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL)
            return 1;
        
        int ls = height(root->left);
        int rs = height(root->right);
        
        if(abs(ls-rs)<=1 && isBalanced(root->left) && isBalanced(root->right))
            return 1;
        
        return 0;
    }
    */
    bool ans;
    int balanceCheck(TreeNode* root)
    {
        if(!root)
            return 0;
        
        if(!ans)
            return 0;
        
        int ls = balanceCheck(root->left);
        int rs = balanceCheck(root->right);
        
        if(abs(ls-rs)>=2)
            ans = false;
        
        return max(ls, rs) + 1;
        
    }
    
    bool isBalanced(TreeNode* root)
    {
        ans = true;
        int x = balanceCheck(root);
        return ans;
    }
};