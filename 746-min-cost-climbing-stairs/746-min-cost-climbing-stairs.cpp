class Solution {
public:
    int minCostClimbingStairs(vector<int>&v)
    {
        int n=v.size();
        int dp[n];
        if(n==1)
        {
            return v[0];
        }
        dp[0]=v[0];
        dp[1]=v[1];
        
        for(int i=2;i<n;i++)
        {
            dp[i]=min(dp[i-1],dp[i-2])+v[i];
        }
        // for(int i=0;i<n;i++) cout<<dp[i]<<endl;
        return min(dp[n-1],dp[n-2]);
    }
};