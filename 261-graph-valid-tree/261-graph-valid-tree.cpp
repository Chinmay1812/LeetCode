class Solution {
public:
    
    void dfs(int x,int *vis,vector<int> *v)
    {
        vis[x]=1;
        for(auto z:v[x])
        {
            if(!vis[z])
            {
                dfs(z,vis,v);
            }
        }
    }
    
    
    bool validTree(int n, vector<vector<int>>&v1) 
    {
        int edges=v1.size();
        if(edges!=n-1)
        {
            return false;
        }
        vector<int> v[n+1];
        for(auto x:v1)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        int c=0;
        int vis[n];
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,v);
                c++;
            }
        }
        
        return c==1 ;
    }
};