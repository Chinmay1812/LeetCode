class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        int dp[n][m];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<m;i++)
        {
            if(v[0][i]==1)
            {
                break;
            }
            dp[0][i]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i][0]==1)
            {
                break;
            }
            dp[i][0]=1;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                int x=0;
                if(v[i-1][j]!=1)
                {
                    x+=dp[i-1][j];
                }
                if(v[i][j-1]!=1)
                {
                    x+=dp[i][j-1];
                }
                dp[i][j]=v[i][j]==1?0:x;
            }
        }
        return dp[n-1][m-1];
    }
};