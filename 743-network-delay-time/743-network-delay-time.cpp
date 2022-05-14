class Solution {
public:
    int ans;
    static bool cp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        return a.second<b.second;
    }
    
    
    void dfs(vector<pair<int,int>> *v,int *vis,int u, int n,int val=0) 
    {
        for(auto &x:v[u])
        {
            if(vis[x.first]==-1||vis[x.first]>val)
            {
                
               if(vis[x.first]!=-1) vis[x.first]=min(val+x.second,vis[x.first]);
                else
                {
                    vis[x.first]=val+x.second;
                }
                
                dfs(v,vis,x.first,n,val+x.second);
            }
        }
    }
    
    int networkDelayTime(vector<vector<int>>&adj,int n, int k)
    {
        vector<pair<int,int>> v[n+1];
        ans=0;
        int vis[n+1];
        memset(vis,-1,sizeof(vis));
        for(auto &x:adj)
        {
            v[x[0]].push_back({x[1],x[2]});
        }
        for(auto &x:v)
        {
            sort(x.begin(),x.end(),cp);
        }
        
        dfs(v,vis,k,n);
        ans=-1;
        vis[k]=0;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==-1)
            {
                return -1;
            }
            ans=max(ans,vis[i]);
        }
        return ans;
    }
};