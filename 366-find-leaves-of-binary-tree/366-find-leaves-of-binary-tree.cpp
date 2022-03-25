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
    
    int dfs(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int level=1+max(dfs(root->left),dfs(root->right));
        
        if(level>ans.size()) ans.push_back(vector<int>());
        
        ans[level-1].push_back(root->val);
        return level;
        
    }
    
    vector<vector<int>> findLeaves(TreeNode* root) 
    {
        if(!root)
        {
            return ans;
        }
        dfs(root);
        return ans;
    }
};