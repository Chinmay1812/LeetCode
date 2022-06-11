class Solution {
public:
    int maxSubArrayLen(vector<int>&v, int k)
    {
        int n=v.size();
        unordered_map<long long,long long> m;
        long long ans=0;
        long long sum=0;
        for(long long i=0;i<n;i++)
        {
            sum+=v[i];
            if(m.find(sum)==m.end())
            {
                m[sum]=i;
            }
            if(sum==k)
            {
                ans=max(ans,i+1);
            }
            if(m.find(sum-k)!=m.end())
            {
                ans=max(ans,i-m[sum-k]);
            }
        }
        return ans;
    }
};