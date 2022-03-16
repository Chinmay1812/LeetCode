/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution 
{
public:
    vector<int> adj[501];
    vector<int> ans;
    void dfs(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        if(root->left)
        {
            adj[root->val].push_back((root->left->val));
             adj[(root->left->val)].push_back((root->val));
        }
        if(root->right)
        {
            adj[root->val].push_back(root->right->val);
            adj[(root->right->val)].push_back((root->val));
        }
        dfs(root->left);
        dfs(root->right);
    }
   
  
    void dfs2(int u,int k,vector<int> &vis,vector<int> &dis)
    {
        vis[u]=1;
        for(auto x:adj[u])
        {
            if(!vis[x])
            {
                dis[x]=dis[u]+1;
                dfs2(x,k,vis,dis);
            }
            
        }
        
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* node, int k) 
    {
        int u=node->val;
      
        dfs(root);
         vector<int> vis(501,0);
          vector<int> dis(501,0);
        
        if(k==0)
        {
            ans.push_back(node->val);
            return ans;
        }
        
        dfs2(u,k,vis,dis);
        for(int i=0;i<501;i++)
        {
            if(dis[i]==k)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};