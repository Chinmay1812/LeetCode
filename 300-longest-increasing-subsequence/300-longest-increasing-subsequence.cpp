class Solution {
public:
    int lengthOfLIS(vector<int>&v) 
    {
        int n=v.size();
        int dp[n];
        dp[0]=1;
        int ans=1;
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=i-1;j>=0;j--)
            {
                if(v[i]>v[j])
                {
                    dp[i]=max(dp[i],1+dp[j]);
                    ans=max(dp[i],ans);
                }
            }
        }
        return ans;
    }
};