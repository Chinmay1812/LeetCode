class Solution {
public:
    int dp[50][50][50];
    // r1+c1==r2+c2 alwayssssss
    int fun(vector<vector<int>>&v,int r1,int c1,int c2)
    {
        int n=v.size();
        int m=v[0].size();
        int r2=r1+c1-c2;
        int ans=0;
        if(r1>=n||r2>=n||c1>=m||c2>=m || v[r1][c1]==-1||v[r2][c2]==-1)
        {
            return INT_MIN;
        }
        else if(r1==n-1 && c1==m-1)
        {
            return v[r1][c1];
        }
        else if(dp[r1][c1][c2]!=-1)
        {
            return dp[r1][c1][c2];
        }
        
        ans=v[r1][c1];
        if(c1!=c2)
        {
            ans+=v[r2][c2];
        }
        ans+=max({fun(v,r1+1,c1,c2),fun(v,r1,c1+1,c2),fun(v,r1+1,c1,c2+1),fun(v,r1,c1+1,c2+1)});    

        
        return  dp[r1][c1][c2]=ans;
    }
    
    int cherryPickup(vector<vector<int>>&v) 
    {
        int n=v.size();
        int m=v[0].size();
        if(v[0][0]==-1||v[n-1][m-1]==-1)
        {
            return -1;
        }
        memset(dp,-1,sizeof(dp));
        int ans=max(fun(v,0,0,0),0);
        return ans;
    }
};