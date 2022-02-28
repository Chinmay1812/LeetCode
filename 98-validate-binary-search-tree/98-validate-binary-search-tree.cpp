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
class Solution
{
public:
    
    bool isTree(TreeNode* root,long long l,long long r)
    {
        if(!root)
        {
            return 1;
        }
        
        if(root->val<=l || root->val>=r)
        {
            return 0;
        }
        
        return (isTree(root->left,l,root->val)&isTree(root->right,root->val,r));
       
    }
    
    bool isValidBST(TreeNode* root) 
    {
        if(!root)
        {
            return 1;
        }
        
        return isTree(root,-1e17,1e17);
    }
};