// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int dp[1001][1001];

int knapSacks(int n, int w, int val[], int wt[],int i=0)
    {
        if(i==n || w<=0)
        {
            return 0;
        }
        if(dp[i][w]!=-1)
        {
            return dp[i][w];
        }
        
        int var=knapSacks(n,w,val,wt,i+1);
        int jk=0;
        if(wt[i]<=w)
        {
            jk= max({val[i]+knapSacks(n,w-wt[i],val,wt,i),val[i]+knapSacks(n,w-wt[i],val,wt,i+1)});
        }
         return dp[i][w]=max(jk,var);
    }

    int knapSack(int n, int w, int val[], int wt[],int i=0)
    {
        memset(dp,-1,sizeof(dp));
        return knapSacks(n,w,val,wt,0);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends