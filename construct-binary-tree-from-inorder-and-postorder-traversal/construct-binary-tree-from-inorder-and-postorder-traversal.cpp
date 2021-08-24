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
   
    TreeNode* buildTreeFromPostIn(vector<int>& inorder, vector<int>& postorder, int s, int e, int *i)
    {
        if(s>e)
        return NULL;
        
        TreeNode* root = new TreeNode(postorder[*i]);
        
        int index = -1;
        for(int j=s;j<=e;j++)
        {
            if(inorder[j]==postorder[*i])
            {
                index = j;
                break;
            }
        }
        
        (*i)--;
        root->right = buildTreeFromPostIn(inorder, postorder, index+1, e, i);
        root->left = buildTreeFromPostIn(inorder, postorder, s, index-1, i);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        int i = n-1;
        return buildTreeFromPostIn(inorder, postorder, 0, n-1, &i);
    }
};