class Solution {
public:
    
    int fun(vector<int>&v,int i,int n)
    {
      int dp[n+1];
      memset(dp,0,sizeof(dp));
      dp[i]=v[i];
      dp[i+1]=max(dp[i],v[i+1]);
      for(int j=i+2;j<n;j++)
      {
          dp[j]=max(dp[j-1],v[j]+dp[j-2]);
      }
    return dp[n-1];
    }
    
    int rob(vector<int>&v)
    {
        int n=v.size();
        if(n==1)
        {
            return v[0];
        }
        if(n==2)
        {
            return max(v[0],v[1]);
        }
        if(n==3)
        {
            return max({v[0],v[1],v[2]});
        }
        
        int ans1=fun(v,0,n-1);
        int ans2=fun(v,1,n);
        return max(ans1,ans2);
    }
};