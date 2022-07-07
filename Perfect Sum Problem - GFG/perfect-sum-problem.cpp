// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
#define mod 1000000007
	public:
	int perfectSum(int v[], int n, int sum)
	{
	    int dp[n+1][sum+1];
	    memset(dp,0,sizeof(dp));
	    for(int i=0;i<=sum;i++)
	    dp[0][i]=0;
	    
	    for(int i=0;i<=n;i++)
	    dp[i][0]=1;
	    
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=0;j<=sum;j++)
	        {
	      
	            int t=0;
	            int nt=0;
	            
	            if(j>=v[i-1])
	            {
	                t=dp[i-1][j-v[i-1]]%mod;
	            }
	            nt=dp[i-1][j]%mod;
	            dp[i][j]=(nt+t)%mod;
	
	        }
	    }
	    
	    return dp[n][sum];
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends