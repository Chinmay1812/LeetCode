class Solution {
public:
    int minSwaps(vector<int>&v)
    {
        int n=v.size();
        int k=0;
        for(int i=0;i<n;i++) k+=v[i]==1;
        if(k==0) return 0;
        int ans=INT_MAX;
        for(int i=1;i<n;i++)
        {
            v[i]+=v[i-1];
        }
        int c=k-v[k-1];
        ans=min(ans,c);
        for(int i=k;i<n;i++)
        {
            c=k-(v[i]-v[i-k]);
            ans=min(ans,c);
        }
        return ans;
    }
};