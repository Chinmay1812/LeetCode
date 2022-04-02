/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
     TreeNode* fun( TreeNode* root, TreeNode* k)
     {
         if(root==NULL)
         {
             return root;
         }
         if(root->val==k->val)
         {
             return root;
         }
          TreeNode* node1=fun(root->left,k);
          TreeNode* node2=fun(root->right,k);
         if(node1!=NULL)
         {
             return node1;
         }
       
             return node2;
     }
    
    
    TreeNode* getTargetCopy(TreeNode* root1, TreeNode* root2, TreeNode* k) 
    {
            return fun(root2,k);
    }
}; 