class Solution {
public:
    int ans;
    int c=0;
    void dfs(int node,vector<int>*v,int *vis,int *dp)
    {
        vis[node]=1;
        
        for(auto x:v[node])
        {
           if(!vis[x]) dfs(x,v,vis,dp);
            
            
            dp[node]=max(1+dp[x],dp[node]);
        }
        
    }
  
    
    bool cycle(vector<int> *v,int node,int *cur,int *vis)
    {
        vis[node]=1;
        cur[node]=1;
        for(auto x:v[node])
        {
            if(!vis[x] && cycle(v,x,cur,vis))
            {
                return 1;
            }
            else if(cur[x]==1)
            {
                return 1;
            }
        }
        cur[node]=0;
        return 0;
    }

    int minimumSemesters(int n, vector<vector<int>>&g) 
    {
        vector<int> v[n+1];
        for(auto &x:g)
        {
            v[x[0]].push_back(x[1]);
        }
        int cur[n+1];
        int vis[n+1];
        memset(cur,0,sizeof(cur));
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++)
        {
            if(!vis[i] && cycle(v,i,cur,vis))
            {
                return -1;
            }
        }
        ans=0;
        int dp[n+1];
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++) dp[i]=1;
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i,v,vis,dp);
            }
        }
        for(int i=1;i<=n;i++)
        {
            ans=max(dp[i],ans);
        }
        return ans;
    }
};