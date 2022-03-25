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
    vector<vector<int>> ans;
    
    bool isLeaf(TreeNode* root)
    {
        if(root->left==NULL && root->right==NULL)
        {
            return 1;
        }
        return 0;
    }
    
    void preOrder(TreeNode* root,vector<int> &temp,unordered_map<TreeNode*,int> &m)
    {
        if(!root)
        {
            return;
        }
        if(isLeaf(root))
        {
            m[root]=1;
            temp.push_back(root->val);
            return;
        }
        preOrder(root->left,temp,m);
      if(m[root->left])  root->left=NULL;
        preOrder(root->right,temp,m);
        if(m[root->right]) root->right=NULL;
    }
    
    
    vector<vector<int>> findLeaves(TreeNode* root)
    {
        if(!root)
        {
            return ans;
        }
        unordered_map<TreeNode*,int> m;
        vector<int> temp;
        
        while(root->left!=NULL || root->right!=NULL)
        {
             temp.clear();
             preOrder(root,temp,m);
             ans.push_back(temp);
        }
        ans.push_back({root->val});
        return ans;
    }
};