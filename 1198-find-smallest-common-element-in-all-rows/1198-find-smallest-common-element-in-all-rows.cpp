class Solution {
public:
    int smallestCommonElement(vector<vector<int>>&v) 
    {
    
        int n=v.size();
        int m=v[0].size();
        int ans=INT_MAX;
        for(int k=0;k<m;k++)
        {
            int val=v[0][k];
            int f=1;
            for(int i=1;i<n;i++)
            {
               f&=binary_search(v[i].begin(),v[i].end(),val);
            }
            if(f)
            {
                ans=min(ans,val);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};