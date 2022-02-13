class Solution {
public:
    long long minimumRemoval(vector<int>&v) 
    {
        int n=v.size();
        long long sum=0,ans=1e18-1;
        sort(v.begin(),v.end());
        for(auto x:v)
        {
            sum+=x;
        }
        
        for(auto x:v)
        {
            auto it=v.end()-lower_bound(v.begin(),v.end(),x);
            long long var=sum-x*it;
           ans=min(ans,var);
        }
        
        return ans;
    }
};

    