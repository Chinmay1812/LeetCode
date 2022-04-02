class Solution {
public:
    int triangularSum(vector<int>&v) 
    {
        int n=v.size();
        for(int i=n;i>=1;i--)
        {
            for(int j=0;j<i-1;j++)
            {
                v[j]=(v[j]+v[j+1])%10;
            }
        }
        return v[0];
    }
};