#define ll long long
class Solution {
public:
    long long countPairs(vector<int>&v, int k) 
    {
        int n=v.size();
        unordered_map<ll,ll> m;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll curr=__gcd(v[i],k); 
            
            for(auto &x:m)
            {
                if((x.first*curr)%k==0)
                {
                    ans+=x.second;
                }
            }
            m[curr]++;
        }
        return ans;     
    }
};