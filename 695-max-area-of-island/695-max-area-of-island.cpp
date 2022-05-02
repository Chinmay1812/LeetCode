class Solution {
public:
  
    vector<vector<int>> dir{{-1,0},{1,0},{0,1},{0,-1}};
    int c;
    void dfs(vector<vector<int>>&v,int x,int y)
    {
        v[x][y]=0;
        int n=v.size();
        int m=v[0].size();
        c++;
        for(int i=0;i<4;i++)
        {
            int dx=x+dir[i][0];
            int dy=y+dir[i][1];
            if(dx>=n||dx<0||dy>=m||dy<0)
            {
                continue;
            }
            if(v[dx][dy]==1)
            {
                dfs(v,dx,dy);
            }
            else if(v[dx][dy]!=1)
            {
                v[dx][dy]=0;
            }
        }
        
    }

    int maxAreaOfIsland(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        int ans=0;
     
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==1)
                {
                    c=0;
                    dfs(v,i,j);
                    ans=max(ans,c);
                }   
            }   
        }
        return ans;
    }
};