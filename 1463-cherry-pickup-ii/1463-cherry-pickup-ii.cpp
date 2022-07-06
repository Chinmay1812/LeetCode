class Solution {
public:
    int dp[71][71][71];
    int fun(vector<vector<int>>&v,int i,int j,int k)
    {
        int n=v.size();
        int m=v[0].size();
        if(i==n-1)
        {
            if(j==k)
            {
                return dp[i][j][j]=v[i][j];
            }
            else
            {
             return dp[i][j][k]=v[i][j]+v[i][k];
            }
        }
        if(dp[i][j][k]!=-1)
        {
            return dp[i][j][k];
        }
        int val=0;
        if(j!=k)
        {
            val=v[i][j]+v[i][k];
        }
        else
        {
            val=v[i][j];
        }
          int var=0;
        for(int dj=-1;dj<=1;dj++)
        {
          
            for(int dk=-1;dk<=1;dk++)
            {
                int dx=dj+j;
                int dy=dk+k;
                if(dx>=m||dx<0||dy>=m||dy<0)
                {
                    continue;
                }
                var=max(var,fun(v,i+1,dx,dy));
            }
        }
        
        return dp[i][j][k]=val+var;
    }
    int cherryPickup(vector<vector<int>>&v) 
    {
        memset(dp,-1,sizeof(dp));
        int m=v[0].size();
        return fun(v,0,0,m-1);
    }
};