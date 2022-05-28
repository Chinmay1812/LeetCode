class Solution {
public:
    int missingNumber(vector<int>&v) 
    {
        int n=v.size();
        int sum=n*(n+1)/2;
        int val=0;
        for(auto &x:v)
        {
            val+=x;
        }
        int ans=sum-val;    
        return ans;
    }
};