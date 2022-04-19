class Solution {
public:
    
    int fun(vector<vector<int>>&v,int row,int i,int dp[][201])
    {
        int sum=INT_MAX;
        if(row>=v.size() || i>=v[row].size())
        {
            return 0;
        }    
        if(dp[row][i]!=-1)
        {
            return dp[row][i];
        }
        int n=v[row].size();
        sum=v[row][i]+min(fun(v,row+1,i,dp),fun(v,row+1,i+1,dp));;
        return dp[row][i]=sum;
        
    }
    
    int minimumTotal(vector<vector<int>>&v) 
    {
        int n=v.size();
        
        int dp[n][201];
        memset(dp,-1,sizeof(dp));
        return fun(v,0,0,dp); 
    }
};