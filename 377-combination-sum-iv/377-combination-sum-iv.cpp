class Solution {
public:
    int combinationSum4(vector<int>&v, int k) 
    {
        int n=v.size();
       unsigned int dp[k+1];
        memset(dp,0,sizeof(dp));
    
        dp[0]=1;
        for(int i=1;i<=k;i++)
        {
            for(auto x:v)
            {
                if(i>=x)
                {
                    dp[i]+=dp[i-x];
                }
            }
        }
        return dp[k];
    }
};