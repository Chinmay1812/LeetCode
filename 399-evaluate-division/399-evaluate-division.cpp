class Solution {
public:
    unordered_map<string,vector<pair<string,double>>> adj;
    unordered_map<string,bool> vis;
    double var;
    
    bool dfs(string u,string v,double prod)
    {
        if(u==v && vis.find(u)!=vis.end())
        {
            var=prod;
            return 1;
        }
        
        
        vis[u]=true;
        for(auto x:adj[u])
        {
            if(!vis[x.first])
            {
                if(dfs(x.first,v,prod*x.second))
                {
                     vis[u]=false;
                     return 1;
                }
            }   
        }
        vis[u]=false;
        return false;
    }
    
    
    vector<double> calcEquation(vector<vector<string>>&v,vector<double>&val, vector<vector<string>>&q) 
    {
        int n=v.size();
        int m=q.size();
        for(int i=0;i<n;i++)
        {
            adj[v[i][0]].push_back({v[i][1],val[i]});
            adj[v[i][1]].push_back({v[i][0],1/val[i]});
            vis[v[i][0]]=false;
            vis[v[i][1]]=false;
        }
        vector<double> ans(m,-1.0);
        for(int i=0;i<m;i++)
        {
          var=1;
          bool f=dfs(q[i][0],q[i][1],1);
          if(f)
          {
              ans[i]=var;
          }
        }
        return ans;
    }
};