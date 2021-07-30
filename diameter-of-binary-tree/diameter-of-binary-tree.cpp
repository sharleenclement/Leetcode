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
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        return 1 + (max(height(root->left), height(root->right)));
    }
    
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        
        int hls = height(root->left);
        int hrs = height(root->right);
        int op1 = hls + hrs; // if it passes through the root
        int op2 = diameterOfBinaryTree(root->left); // only the left subtree
        int op3 = diameterOfBinaryTree(root->right); // only the right subtree
        
        return max(op1, max(op2, op3));
    }
};