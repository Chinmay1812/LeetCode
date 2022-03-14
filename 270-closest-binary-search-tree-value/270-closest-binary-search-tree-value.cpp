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
      double diff=INT_MAX;
      int ans=INT_MAX;
    
    void fun(TreeNode* root, double k)
    {
        
        if(!root)
        {
            return;
        }
    
       double var=abs(root->val-k);
        if(var<diff)
        {
            ans=root->val;
            diff=var;
        }
        fun(root->left,k);
        fun(root->right,k);
    }
    int closestValue(TreeNode* root, double k)
    {
        if(!root)
        {
            return 0;
        }
        fun(root,k);
        return ans;
    }
};