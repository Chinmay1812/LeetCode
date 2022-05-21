class Solution {
public:
    int change(int k, vector<int>&v) 
    {
        sort(v.begin(),v.end());
        int dp[k+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int &x:v)
        {
            
            for(int i=1;i<=k;i++)
            {
                if(i-x>=0)
                {
                    dp[i]=dp[i]+dp[i-x];
                }
               
            }
            
        }

        return dp[k];
    }
};