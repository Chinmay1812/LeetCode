class Solution {
public:
    int dp[501][501];
    
    int fun(string &s,string &g,int i,int j)
    {
        if(i<0)
        {
            return j+1;
        }
        if(j<0)
        {
            return i+1;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        if(s[i]==g[j])
        {
            return dp[i][j]=fun(s,g,i-1,j-1);
        }
        
        int x=1+fun(s,g,i-1,j);
        int y=1+fun(s,g,i,j-1);
        int z=fun(s,g,i-1,j-1)+1;
        return dp[i][j]=min({x,y,z});
    }
    
    int minDistance(string s, string g) 
    {
        memset(dp,-1,sizeof(dp));
        return fun(s,g,s.size()-1,g.size()-1);
        
    }
};