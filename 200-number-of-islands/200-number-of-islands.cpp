class Solution {
public:
    vector<pair<int,int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
    int numIslands(vector<vector<char>>&v) 
    {
        int ans=0;
        int n=v.size();
        int m=v[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]=='1')
                {
                    q.push({i,j});
                    v[i][j]='0';
                    ans++;
                    while(!q.empty())
                    {
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        for(int i=0;i<4;i++)
                        {
                            int dx=x+dir[i].first;
                            int dy=y+dir[i].second;
                            if(dx>=n||dx<0||dy>=m|| dy<0)
                            {
                                continue;
                            }
                            if(v[dx][dy]=='1')
                            {
                                v[dx][dy]='0';
                                q.push({dx,dy});
                            }
                        }
                        
                    }
                }
                
            }
            
        }
                   return ans;
    }
};