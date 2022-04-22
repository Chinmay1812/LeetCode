class Solution {
public:
    
    int fun(int k, vector<int>&v,int i,int dp[][5001])
    {
        if(i>=v.size())
        {
            return 0;
        }
        if(k==0)
        {
            return 1;
        }
        if(k<0)
        {
            return 0;
        }
        if(dp[i][k]!=-1)
        {
            return dp[i][k];
        }
        
       return dp[i][k] =fun(k-v[i],v,i,dp)+fun(k,v,i+1,dp);
    }
    
    
    int change(int k, vector<int>&v) 
    {
        int n=v.size();
          int dp[301][5000+1];
        memset(dp,-1,sizeof(dp));
        return fun(k,v,0,dp);
        
    }
};