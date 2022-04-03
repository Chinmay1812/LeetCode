class Solution {
public:
    int twoSumLessThanK(vector<int>&v, int k) 
    {
        sort(v.begin(),v.end());
        int n=v.size();
        int lo=0,hi=n-1;
        int ans=-1;
        while(lo<hi)
        {
            if(v[lo]+v[hi]>=k)
            {
                hi--;
            }
            else
            {
                ans=max(v[lo]+v[hi],ans);
                lo++;
            }
        }
        return ans;
    }
};