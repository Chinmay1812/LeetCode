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
    int maxDepth(TreeNode* root) 
    {
        if(!root)
        {
            return 0;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        int c=0;
        while(!q.empty())
        {
            c++;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                auto first=q.front();
                q.pop();
                if(first->left)
                {
                    q.push(first->left);
                }
                if(first->right)
                {
                    q.push(first->right);
                }
            }
            
        }
     return c;
    }
};