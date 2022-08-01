class Solution {
public:
    int maxProfit(vector<int>&v) 
    {
        int n=v.size();
        int ans=0;
        for(int i=1;i<n;i++)
        {
            ans+=max(v[i]-v[i-1],0);
        }
        return ans;
    }
};