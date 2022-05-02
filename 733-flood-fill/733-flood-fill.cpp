class Solution {
public:
    vector<vector<int> > dir{{0,1},{0,-1},{1,0},{-1,0}};
    
    vector<vector<int>> floodFill(vector<vector<int>>&v, int sr, int sc, int k) 
    {
        int n=v.size();
        int m=v[0].size();
        int vis[n][m];
        memset(vis,0,sizeof(vis));
        queue<pair<int,int> > q;
        q.push({sr,sc});
        int val=v[sr][sc];
        while(!q.empty())
        {
            auto var=q.front();
            q.pop();
            int x=var.first;
            int y=var.second;
            v[x][y]=k;
            vis[x][y]=1;
            for(int i=0;i<dir.size();i++)
            {
                int dx=x+dir[i][0];
                int dy=y+dir[i][1];
                if(dx>=n||dx<0||dy>=m||dy<0)
                {
                    continue;
                }
                if(!vis[dx][dy] && v[dx][dy]==val)
                {
                    q.push({dx,dy});
                }
            }
        }

        return v;
    }
};