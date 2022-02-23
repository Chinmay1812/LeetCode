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
    void dfs(TreeNode* root,int level)
    {
        if(!root)
        {
            return;
        }
        if(ans.size()==level)
        {
            ans.push_back(vector<int>{});
        }
        ans[level].push_back(root->val);
        dfs(root->left,level+1);
        dfs(root->right,level+1);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        if(!root)
        {
            return ans;
        }
        dfs(root,0);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};