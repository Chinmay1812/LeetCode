class Solution {
public:
    
    void dfs(int u,bool *vis,vector<int>&temp,vector<int> *v)
    {
        vis[u]=1;
        temp.push_back(u);
        for(auto x:v[u])
        {
            if(!vis[x])
            {
                dfs(x,vis,temp,v);
            }
        }
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>&vg) 
    {
        int n=s.size();
        vector<int> v[n];
        for(auto x:vg)
        {
            v[x[0]].push_back(x[1]);
            v[x[1]].push_back(x[0]);
        }
        bool vis[n];
        memset(vis,0,sizeof(vis));
        for(int i=0;i<n;i++)
        {
            vector<int> temp;
            if(!vis[i])
            {
                dfs(i,vis,temp,v);
            }        
            string g="";
            for(auto x:temp)
            {
                g+=s[x];
            }
            sort(g.begin(),g.end());
            sort(temp.begin(),temp.end());
            int c=0;
            for(auto x:temp)
            {
                s[x]=g[c++];
            }
         
        }
        return s;
    }
};