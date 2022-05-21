class Solution {
public:
 
    int coinChange(vector<int>&v, int k)
    {
        int dp[k+1];
        sort(v.begin(),v.end());
        dp[0]=0;
        for(int i=1;i<=k;i++)
        {
            dp[i]=INT_MAX;
            for(auto &x:v)
            {
                if(i-x<0)
                {
                    break;
                }
                if(dp[i-x]!=INT_MAX)
                {
                    dp[i]=min(dp[i-x]+1,dp[i]);
                }
            }
        }
        int ans=dp[k]==INT_MAX?-1:dp[k];
        return ans;
    }
};