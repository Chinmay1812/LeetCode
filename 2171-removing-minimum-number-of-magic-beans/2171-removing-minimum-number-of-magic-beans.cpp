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
        
        for(long long i=0;i<=100000;i++)
        {
            auto it=v.end()-lower_bound(v.begin(),v.end(),i);
            long long var=sum-i*it;
           ans=min(ans,var);
        }
        
        return ans;
    }
};

    