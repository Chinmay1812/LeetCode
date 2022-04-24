// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> v, int n ) 
    {
        unordered_map<int,int> m;
        ll ans=0;
        ll sum=0;
        m[0]=1;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            m[sum]++;
        }
        for(auto x:m)
        {
            int z=x.second;
            if(z)
            {
                ans+=z*(z-1)/2;
            }
            
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<ll> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends