class Solution {
public:
    vector<long long> maximumEvenSplit(long long n)
    {
        vector<long long> v;
        if(n%2)
        {
            return v;
        }
        long long c=2;
        long long sum=0;
        while(sum+c<=n)
        {
            sum+=c;
            v.push_back(c);
            c+=2;
        }
        v[v.size()-1]+=n-sum;
        
        return v;
    }
};