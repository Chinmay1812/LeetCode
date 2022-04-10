class Solution {
public:
    int minProductSum(vector<int>&v1, vector<int>&v2) 
    {
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<int>());
        int ans=0;
        for(int i=0;i<v1.size();i++)
        {
            ans+=v1[i]*v2[i];
        }
        return ans;
    }
};