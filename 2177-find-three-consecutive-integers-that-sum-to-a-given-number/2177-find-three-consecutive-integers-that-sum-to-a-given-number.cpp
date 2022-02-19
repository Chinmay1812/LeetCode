class Solution {
public:
    vector<long long> sumOfThree(long long n) 
    {
        vector<long long> v;
        if(n%3==0)
        {
            long long x=n/3;
            v.push_back(x-1);
            v.push_back(x);
            v.push_back(x+1);
        }
        return v;
    }
};