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
    int ht(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        return 1+max(ht(root->left),ht(root->right));
    }
    int sum=0;
     void dfs(TreeNode* root,int h,int lev=1)
     {
         if(!root)
         {
             return;
         }
         if(h==lev)
         {
             sum+=root->val;
         }
         dfs(root->left,h,lev+1);
         dfs(root->right,h,lev+1);
     }
    
    int deepestLeavesSum(TreeNode* root) 
    {
        int h=ht(root);
        dfs(root,h);
        return sum;
    }
};