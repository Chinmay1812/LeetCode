class Solution {
public:
    int maximumBags(vector<int>&c, vector<int>&a, int k) 
    {
        int n=c.size();
        set<pair<int,int>> s;
        for(int i=0;i<n;i++)
        {
           s.insert({c[i]-a[i],i});
        }
        for(auto x:s)
        {
            int need=x.first;
            int z=min(need,k);
            k-=z;
            int id=x.second;
            a[id]+=z;
        }
        int cnt=0;
        for(int i=0;i<n;i++) cnt+=a[i]==c[i];
        return cnt;
    }
};