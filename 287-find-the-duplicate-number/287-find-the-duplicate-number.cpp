class Solution {
public:
    int findDuplicate(vector<int>&v) 
    {
        unordered_map<int,int> m;
        int ans;
        for(auto x:v)
        {
            if(m[x]==1)
            {
                return x;
            }
            m[x]++;
            ans=x;
        }
        return ans;
    }
};