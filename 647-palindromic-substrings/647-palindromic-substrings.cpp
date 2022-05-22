class Solution {
public:
    int countSubstrings(string s) 
    {
        int n=s.size();
        bool dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        ans+=n;
        
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=1;
                ans++;
            }
        }
        
        
        for(int k=2;k<n;k++)    // k here represents length of palindrome.
        {
            int j=k;
            for(int i=0;i<n && j<n;i++,j++)
            {
                if(s[i]==s[j] && dp[i+1][j-1])
                {
                    dp[i][j]=1;
                    ans++;
                }
            }
        }
        return ans;
    }
};