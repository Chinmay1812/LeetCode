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
    vector<int> distanceK(TreeNode* root, TreeNode* node, int k) 
    {
        unordered_map<TreeNode*,TreeNode*> parent;
        unordered_map<TreeNode*,bool> vis;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            auto tree=q.front();
            q.pop();
            if(tree->left)
            {
                q.push(tree->left);
                parent[tree->left]=tree;
            }
            if(tree->right)
            {
                q.push(tree->right);
                parent[tree->right]=tree;
            }
        }
        vector<int> ans;
        q.push(node);
        vis[node]=1;
        int c=0;
        while(!q.empty())
        {
          
            if(c==k)
            {
                break;
            }
            c++;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
              auto tree=q.front();
            q.pop();
            if(tree->left && !vis[tree->left])
            {
                q.push(tree->left);
                vis[tree->left]=1;
            }
            if(tree->right && !vis[tree->right])
            {
                q.push(tree->right);
                vis[tree->right]=1;
            }
            if(parent[tree] && !vis[parent[tree]])
            {
                q.push(parent[tree]);
                vis[parent[tree]]=1;
            }
         }
        }
        
        while(!q.empty())
        {
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};