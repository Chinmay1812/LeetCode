class Solution {
public:

    bool dfs(int v,int p,int *color,vector<vector<int>>&graph)
    {
        
        for(int i:graph[v])
        {
            if(color[i]==-1)
            {
                color[i]=1-color[v];
                if(dfs(i,v,color,graph)==false)
                {
                    return false;
                }
            }
            else if(i!=p && color[i]==color[v])
            {
                return false;
            }
        }
        return true;
    }
    
    
    bool isBipartite(vector<vector<int>>&graph) 
    {
        int n=graph.size();
        int color[n];
        
        memset(color,-1,sizeof color);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                color[i]=1;
             if(!dfs(i,-1,color,graph))
             {
                 return false;
             }
            }
        }
        return true;
    }
};