class Solution {
public:
    int minimumTotal(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[n-1].size();
        int dp[n][m];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<m;i++)
        {
            dp[n-1][i]=v[n-1][i];
        }
        int x=m;
        for(int i=n-2;i>=0;i--)
        {
            x--;
            for(int j=0;j<x;j++)
            {
                dp[i][j]=min(dp[i+1][j],dp[i+1][j+1])+v[i][j];
            }
        }
        return dp[0][0];
    }
};