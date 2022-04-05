class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        vector<vector<int> > dir{{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        // int vis[101][101]={0};
        queue<pair<int,int> >q;
        q.push({0,0});
        if(v[0][0]!=0||v[n-1][m-1]!=0)
        {
            return -1;
        }
        v[0][0]=1;
        while(!q.empty())
        {
            auto var=q.front();
            q.pop();
            int x=var.first;
            int y=var.second;
            int dist=v[x][y];
            if(x==n-1 && y==m-1)
            {
                return dist;
            }
            for(int i=0;i<8;i++)
            {
                int p=x+dir[i][0];
                int r=y+dir[i][1];

                if(p>=n||p<0||r>=m||r<0)
                {
                    continue;
                }
                if(v[p][r]==0)
                {
                    v[p][r]=dist+1;
                    q.push({p,r});
                }
            }
        }
        return -1;
    }
};