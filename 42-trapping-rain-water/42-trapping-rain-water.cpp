class Solution {
public:
    int trap(vector<int>&v) 
    {
        int n=v.size();
        int right[n],left[n];
        right[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(v[i],right[i+1]);
        }
        left[0]=v[0];
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],v[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=min(left[i],right[i])-v[i];
        }
        return ans;
    }
};