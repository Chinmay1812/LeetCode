class Solution {
public:
    int maxProfit(vector<int>&v) 
    {
        int n=v.size();
        int ans=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(mn>v[i])
            {
                mn=v[i];
            }
            ans=max(ans,v[i]-mn);
        }
        return ans;
    }
};