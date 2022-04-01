class Solution {
public:
   
    int vis[105][105];
    void dfs(vector<vector<int>>&v,vector<pair<int,int>> &dir,int x,int y,int &k)
    {
        vis[x][y]=1;    
        int n=v.size();
        int m=v[0].size();
       for(int i=0;i<4;i++)
       {
           int dx=x+dir[i].first;
           int dy=y+dir[i].second;
           if(dx>=n||dx<0||dy>=m||dy<0)
           {
               continue;
           }
           if(!vis[dx][dy] && v[dx][dy]>=k)
           {
               dfs(v,dir,dx,dy,k);
           }
       }
    }
    
    int maximumMinimumPath(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        int lo=0,hi=1e9+2;
        vector<pair<int,int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
        int ans=0;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            memset(vis,0,sizeof(vis));
            dfs(v,dir,0,0,mid);
            if(vis[n-1][m-1] && v[0][0]>=mid)
            {
                ans=mid;
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        return ans;
    }
};