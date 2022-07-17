class Solution {
public:
    int dp[1001][1001];
    int fun(string &s,string &g,int i,int j)
    {
       if(j<0) return 1;
       if(i<0) return 0;
       
       if(dp[i][j]!=-1) 
       {
           return dp[i][j];
       }
       
       if(s[i]==g[j])
       {
           dp[i][j]=fun(s,g,i-1,j-1)+fun(s,g,i-1,j);
       }
       else
       {
           dp[i][j]=fun(s,g,i-1,j);
       }
       return dp[i][j]; 
    }
    
    int numDistinct(string s, string g) 
    {
       memset(dp,-1,sizeof(dp));
       return fun(s,g,s.size()-1,g.size()-1);   
    }
};