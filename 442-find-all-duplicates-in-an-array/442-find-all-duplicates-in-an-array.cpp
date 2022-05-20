class Solution {
public:
    vector<int> findDuplicates(vector<int>&v) 
    {
        int n=v.size();
        vector<int> ans;
        for(auto &x:v)
        {
            if(v[abs(x)-1]<0)
            {
                ans.push_back(abs(x));
            }
            else
            {
                v[abs(x)-1]*=-1;
            }
        }
        return ans;
    }
};