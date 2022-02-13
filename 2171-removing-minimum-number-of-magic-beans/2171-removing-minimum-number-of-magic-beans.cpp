class Solution {
public:
    long long minimumRemoval(vector<int>&v) 
    {
        int n=v.size();
        long long sum=0,ans=1e18-1;
        multiset<long long> m;
        for(auto x:v)
        {
            m.insert(x);
            sum+=x;
        }
        long long z=n;
        auto it=m.begin();
        for(long long i=0;i<=100000;i++)
        {
            long long var=sum-i*z;
            ans=min(ans,var);
            
            while(it!=m.end() && (*it==i))
            {
                it++;
                z--;
            }
        }
        
        return ans;
    }
};

    