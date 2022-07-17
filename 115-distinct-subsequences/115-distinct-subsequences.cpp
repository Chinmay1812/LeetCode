class Solution {
public:
 
    int numDistinct(string s, string g) 
    {
       int n=s.size();
       int m=g.size();
      unsigned __int128 dp[n+1][m+1];
       memset(dp,0,sizeof(dp));
       for(int i=0;i<=n;i++) dp[i][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==g[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
};