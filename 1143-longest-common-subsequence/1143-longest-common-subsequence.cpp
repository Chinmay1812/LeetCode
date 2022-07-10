class Solution {
public:
    int dp[1001][1001];
    int fun(string &s1, string &s2,int i,int j)
    {
        int n1=s1.size();
        int n2=s2.size();
        
        if(i==n1||j==n2)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
       int a=0,b=0;
       if(s1[i]==s2[j])
       {
           return 1+fun(s1,s2,i+1,j+1);
       }
       else
       {
           a=fun(s1,s2,i+1,j);
           b=fun(s1,s2,i,j+1);
       }
      return dp[i][j]=max(a,b);
    }
    
    int longestCommonSubsequence(string s1, string s2) 
    {
        memset(dp,-1,sizeof(dp));
        return fun(s1,s2,0,0);
    }
};