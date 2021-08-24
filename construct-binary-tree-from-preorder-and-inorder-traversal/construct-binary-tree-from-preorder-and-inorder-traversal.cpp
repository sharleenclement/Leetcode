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
    int i = 0;
    TreeNode* buildTreeFromPreIn(vector<int>& pre, vector<int>& in, int s, int e)
    {
        if(s>e)
        return NULL;
        
        TreeNode* root = new TreeNode(pre[i]);
        
        int index = -1;
        for(int j=s;j<=e;++j)
        {
            if(in[j]==pre[i])
            {
                index = j;
                break;
            }
        }
        
        i++;
        root->left = buildTreeFromPreIn(pre, in, s, index-1);
        root->right = buildTreeFromPreIn(pre, in, index+1, e);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        return buildTreeFromPreIn(preorder, inorder, 0, n-1);
    }
};