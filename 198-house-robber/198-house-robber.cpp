class Solution {
public:
    int rob(vector<int>&v) 
    {
        int n=v.size();
        int dp[n];
        memset(dp,0,sizeof(dp));
        if(n==1)
        {
            return v[0];
        }
        
        dp[0]=v[0];
        dp[1]=max(dp[0],v[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+v[i]);
        }
        return dp[n-1];
        
    }
};