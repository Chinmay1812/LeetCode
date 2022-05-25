class Solution {
public:
    int nextGreaterElement(int n)
    {
        string s=to_string(n);
        next_permutation(s.begin(),s.end());
        long long val=stol(s);
        if(val>INT_MAX || val<=n)
        {
            val=-1;
        }
        return val;
    }
};