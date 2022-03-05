class Solution {
public:
    int deleteAndEarn(vector<int>&v) 
    {
        int n=v.size();
        int a[10001]={0};
        for(auto x:v)
        {
            a[x]++;
        }
        int dp[10001]={0};
        dp[1]=a[1];
        for(int i=2;i<10001;i++)
        {
            dp[i]=dp[i-2]+i*a[i];
            dp[i]=max(dp[i],dp[i-1]);
        }
        return dp[10000];
    }
};