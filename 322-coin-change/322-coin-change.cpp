class Solution {
public:
    int coinChange(vector<int>&v, int k) 
    {
        int n=v.size();
        int dp[k+1];
        for(int i=0;i<=k;i++) dp[i]=INT_MAX;
        dp[0]=0;
        for(int i=0;i<n;i++) 
        {
            if(v[i]<=k)
            {
                dp[v[i]]=1;
            }
        }
        for(int i=1;i<=k;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(i>v[j] && dp[i-v[j]]!=INT_MAX)
               {
                   dp[i]=min(1+dp[i-v[j]],dp[i]);
               }
            }
        }
        return dp[k]!=INT_MAX?dp[k]:-1;
    }
};