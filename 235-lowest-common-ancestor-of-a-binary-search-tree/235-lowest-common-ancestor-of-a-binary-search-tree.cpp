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
//     void paths(TreeNode* root,TreeNode* node,vector<pair<TreeNode*,int>> &path)
//     {
//         if(!root)
//         {
//             return;
//         }
//         if(root->val==node->val)
//         {
//             path.push_back({root,node->val});
//             return;
//         }
//         path.push_back({root,root->val});
//         if(root->left && root->left->val<node->val)
//         {
//             paths(root->right,node,path);
//         }
//         else if(root->right && root->right->val>node->val)
//         {
//             paths(root->left,node,path);
//         }
//     }
    
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//     {
//         vector<pair<TreeNode*,int>> path1,path2;
//         if(!root)
//         {
//             return root;
//         }
//         paths(root,p,path1);paths(root,q,path2);
      
//         int x=0;
//         while(x<path1.size() && x<path2.size() && path1[x].second==path2[x].second)
//         {
//             x++;
//         }
        
//         return path1[x].first;
//     }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
      if(!root||root==p||root==q) 
        {
            return root;
        }
        
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        
        if(left && right)
        {
            return root;
        }
        else if(left && !right)
        {
            return left;
        }
        else
        {
            return right;
        }
        
        return root;
         
    }
};