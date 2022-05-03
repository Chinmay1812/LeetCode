class Solution {
public:
    vector<vector<int>> dir{{-1,0},{1,0},{0,-1},{0,1}};
    
    void dfs(vector<vector<int>>&v,int x,int y)
    {
        int n=v.size();
        int m=v[0].size();
        v[x][y]=0;
        for(auto i:dir)
        {
            int dx=x+i[0];
            int dy=y+i[1];
            if(dx>=n||dx<0||dy>=m||dy<0||v[dx][dy]==0)
            {
                continue;
            }
               dfs(v,dx,dy);
        }
    
    }
    
    int numEnclaves(vector<vector<int>>&v) 
    {
        int c=0;
        int n=v.size();
        int m=v[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i*j==0||i==n-1||j==m-1) && v[i][j]==1)
                {
                    dfs(v,i,j);
                }
            }
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               c+=v[i][j]==1;
            }
        }
        
        
        return c;
    }
};