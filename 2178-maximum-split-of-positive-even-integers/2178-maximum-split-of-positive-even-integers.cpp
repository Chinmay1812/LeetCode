class Solution {
public:
    vector<long long> maximumEvenSplit(long long sum)
    {
        vector<long long> v;
        long long n=sum;
        if(sum%2)
        {
            return v;
        }
        unordered_map<long long,int> m;
        
        int c=2;
        while(sum>0)
        {
            if(m[sum]==1)
            {
             v[v.size()-1]+=sum;
                break;
            }
            sum-=c;
            v.push_back(c);
            m[c]=1;
            c+=2;
        }

        
        
        
        return v;
    }
};