class Solution {
public:
    int candy(vector<int>&v) 
    {
        int n=v.size();
        vector<int> dp(n,1);
        for(int i=1;i<n;i++)
        {
            if(v[i-1]<v[i])
            {
                dp[i]=1+dp[i-1];
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(v[i]>v[i+1] && dp[i]<=dp[i+1])
            {
                dp[i]=1+dp[i+1];
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=dp[i];
        }
        return ans;
    }
};