class Solution {
public:
    vector<pair<int,int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
    int vis[301][301];
    
    void dfs(vector<vector<char>>&v,int x,int y)
    {
        vis[x][y]=1;
        int n=v.size();
        int m=v[0].size();
        for(int i=0;i<4;i++)
        {
            int dx=dir[i].first+x;
            int dy=dir[i].second+y;
            if(dx>=n || dx<0 || dy>=m||dy<0)
            {
                continue;
            }
            if(!vis[dx][dy] && v[dx][dy]=='1')
            {
                dfs(v,dx,dy);
            }
        }
    }
    int numIslands(vector<vector<char>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        memset(vis,0,sizeof(vis));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && v[i][j]=='1')
                {
                    dfs(v,i,j);
                    ans++;
                }
            }
        }
        return ans;
        
    }
};