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
    int maxLevelSum(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        queue<TreeNode*> q;
        q.push(root);
        int sum=root->val;
        int ans=1;
        int level=1;
        while(!q.empty())
        {
            int n=q.size();
            int val=0;
            for(int i=0;i<n;i++)
            {
                auto node=q.front();
                q.pop();
                val+=node->val;
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            if(val>sum)
            {
                ans=level;
                sum=val;
            }
            level++;
        }
            
        return ans;    
    }
};