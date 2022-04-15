class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        vector<vector<int>> dis(n,vector<int>(m,-1));
        vector<vector<int>> dir{{-1, 0},{0, -1}, {0, 1}, {1, 0}};
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==0)
                {
                    q.push({i,j});
                    dis[i][j]=0;
                }
            }
        }
        
        while(!q.empty())
        {
            auto x=q.front().first;
            auto y=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                auto a=dir[i][0]+x;
                auto b=dir[i][1]+y;
                if(a>=n||a<0||b>=m||b<0)
                {
                    continue;
                }
                if(dis[a][b]==-1)  //it means ki vaha pe 1 rakha hua hai
                {
                    dis[a][b]=dis[x][y]+1;  // 1 ki distance 0 se ek zyada hi hogi obviously
                    q.push({a,b}); //aur yahi one se dusre 1 ke liye zero ki distance nikalenge
                }
            }
            
        }
       
        return dis;
    }
};