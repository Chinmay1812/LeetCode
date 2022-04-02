class Solution {
public:
    int vis[104][104];
     void bfs(vector<vector<int>>&v,vector<pair<int,int>>&dir,int &k)
    {
        queue<pair<int,int>> q;
        int n=v.size();
        int m=v[0].size();
   
                q.push({0,0});
                vis[0][0]=1;
                
                while(!q.empty())
                {
                    auto x=q.front().first;
                    auto y=q.front().second;
                    q.pop();
                    for(int i=0;i<4;i++)
                    {
                        int dx=dir[i].first+x;
                        int dy=dir[i].second+y;
                        if(dx>=n||dx<0||dy<0||dy>=m)
                        {
                            continue;
                        }
                        if(abs(v[x][y]-v[dx][dy])<=k && !vis[dx][dy])
                        {
                            vis[dx][dy]=1;
                            q.push({dx,dy});
                        }
                    }
                }
        
    }
    
    int minimumEffortPath(vector<vector<int>>&v) 
    {
       
        vector<pair<int,int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
         int n=v.size();
        int m=v[0].size();
        int lo=0,hi=1e6+1;
        int ans;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            memset(vis,0,sizeof(vis));
            bfs(v,dir,mid);
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