class Solution {
public:
    
    static bool cp(vector<int>a,vector<int>b)
    {
       return a[0]-a[1]<b[0]-b[1];
    }
    
    
    int twoCitySchedCost(vector<vector<int>>&v) 
    {
        int n=v.size();
        n/=2;
        int ans=0;
        sort(v.begin(),v.end(),cp);
        for(int i=0;i<n;i++) ans+=v[i][0]+v[i+n][1];
        return ans;
    }
};