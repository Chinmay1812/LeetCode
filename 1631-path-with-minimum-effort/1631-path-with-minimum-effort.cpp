class Solution {
public:
    int vis[104][104];
    void dfs(vector<vector<int>>&v,vector<pair<int,int>>&dir,int x,int y,int &k)
    {
        vis[x][y]=1;
        int n=v.size();
        int m=v[0].size();
        for(int i=0;i<4;i++)
        {
            int X=dir[i].first;
            int Y=dir[i].second;
            int dx=x+X;
            int dy=y+Y;
            if(dx>=n || dx<0 || dy>=m || dy<0)
            {
                continue;
            }
            if(abs(v[x][y]-v[dx][dy])<=k && !vis[dx][dy])
            {
                dfs(v,dir,dx,dy,k);
            }
        }
    }
    
    int minimumEffortPath(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        vector<pair<int,int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
        
        int lo=0,hi=1e9+1;
        int ans;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            memset(vis,0,sizeof(vis));
            dfs(v,dir,0,0,mid);
            if(vis[n-1][m-1])
            {
                ans=mid;
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return ans;
    }
};