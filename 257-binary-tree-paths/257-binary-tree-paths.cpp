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
    vector<string> ans;
    
    void fun(TreeNode* root,string s)
    {
        if(!root)
        {
            return;
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            s+=to_string(root->val);
            ans.push_back(s);
            s.pop_back();
            return;
        }
        
        s+=to_string(root->val)+"->";
        fun(root->left,s);
        fun(root->right,s);
        s.pop_back();
        s.pop_back();
    }
    
    
    
    vector<string> binaryTreePaths(TreeNode* root)
    {
        string s="";
        fun(root,s);
        return ans;   
    }
};