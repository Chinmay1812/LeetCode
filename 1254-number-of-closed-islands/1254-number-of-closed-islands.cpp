class Solution {
public:

   vector<vector<int>> dir{{-1,0},{1,0},{0,1},{0,-1}};
    void dfs(vector<vector<int>>&v,int x,int y)
    {
        int n=v.size();
        int m=v[0].size();
        v[x][y]=1;
        for(int i=0;i<dir.size();i++)
        {
            int dx=x+dir[i][0];
            int dy=y+dir[i][1];
            
            if(dx>=n ||dx<0||dy<0||dy>=m || v[dx][dy])
            {
                continue;
            }
            if(v[dx][dy]==0)
            {
                 dfs(v,dx,dy);
            }  
        }
    }
    
    int closedIsland(vector<vector<int>>&v)
    {
        int n=v.size();
        int m=v[0].size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i*j==0||i==n-1||j==m-1) && v[i][j]==0)
                {
                   dfs(v,i,j);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==0)
                {
                   dfs(v,i,j);
                   c++; 
                }
            }
        }
        
        return c;
    }
};