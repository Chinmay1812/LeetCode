class Solution {
public:
    
    void dfs(int i,int u,bool *vis,vector<vector<int>>&ans, vector<vector<int>> &adj)
    {
        vis[u]=1;
        for(auto x:adj[u])
        {
            if(!vis[x])
            {
                ans[x].push_back(i);
                dfs(i,x,vis,ans,adj);
            }
           
        }
    
    
    }
    
    vector<vector<int>> getAncestors(int n, vector<vector<int>>&v) 
    {
        int e=v.size();
        vector<vector<int>> adj(n,vector<int>());
        for(int i=0;i<e;i++)
        {
            adj[v[i][0]].push_back(v[i][1]);
        }
         vector<vector<int>> ans(n,vector<int>());
        
        
        for(int i=0;i<n;i++)
        {
              bool vis[1001]={0}; 
            dfs(i,i,vis,ans,adj);
        }
        
        
        return ans;
    }
};