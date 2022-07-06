class Solution {
public:
    int cherryPickup(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        int dp[n][m][m];
        memset(dp,0,sizeof(dp));
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(j==k)
                {
                    dp[n-1][j][j]=v[n-1][j];
                }
                else
                {
                     dp[n-1][j][k]=v[n-1][j]+v[n-1][k];
                }
            }
        }
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                for(int k=0;k<m;k++)
                {
                    int val=0;
                    val+=v[i][j];
                    if(j!=k)
                    {
                        val+=v[i][k];
                    }
                    int var=0;
                    for(int dj=-1;dj<=1;dj++)
                    {
                        for(int dk=-1;dk<=1;dk++)
                        {
                            int dx=j+dj;
                            int dy=k+dk;
                            if(dx<0||dx>=m||dy<0||dy>=m)
                            {
                                continue;
                            }
                            var=max({var,dp[i+1][dx][dy]});   
                        }
                    }
                  dp[i][j][k]=val+var;
                }
            }
            
        }
        
        return dp[0][0][m-1];
    }
};