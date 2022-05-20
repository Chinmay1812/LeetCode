class Solution {
public:
    vector<int> findDuplicates(vector<int>&v) 
    {
        vector<int> ans;
        // ans.reserve(v.size());
        unordered_map<int,int> m;
        for(auto &x:v)
        {
            m[x]++;
            if(m[x]==2)
            {
                ans.push_back(x);
            }
        }
       return ans;
    }
};