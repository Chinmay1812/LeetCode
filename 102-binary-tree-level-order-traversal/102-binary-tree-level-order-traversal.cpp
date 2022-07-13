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
    vector<vector<int> > a,b;
    vector<vector<int>> levelOrder(TreeNode* z)
    {
        
        if(z==NULL)
        {
            return b;
        }
        
        queue<TreeNode*> q;
        q.push(z);
        
        while(!q.empty())
        {
            int k=q.size();
            vector<int> temp;
            for(int i=0;i<k;i++)
            {
                TreeNode* root=q.front();
                q.pop();
                if(root->left)
                {
                    q.push(root->left);
                }
                if(root->right)
                {
                    q.push(root->right);
                }
                temp.push_back(root->val);  
            }  
            
            a.push_back(temp);
        }
        
        return a;
    }
};