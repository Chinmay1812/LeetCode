class Solution {
public:
    int maxScore(vector<int>&v, int k) 
    {
        int n=v.size();
        int pref[n+2],suff[n+2];
        memset(pref,0,sizeof(pref));
        memset(suff,0,sizeof(suff));
        pref[0]=v[0];
        suff[n-1]=v[n-1];
        for(int i=1;i<n;i++)
        {
            pref[i]=v[i]+pref[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=v[i]+suff[i+1];
        }
        int ans=0;
        for(int i=0;i<k;i++)
        {
            ans=max(pref[i]+suff[n-k+i+1],ans);
        }
        ans=max(ans,pref[k-1]);
        ans=max(ans,suff[n-k]);
        return ans;
    }
};