class Solution {
public:
    vector<int> arraysIntersection(vector<int>&v1, vector<int>&v2, vector<int>&v3) 
    {
        unordered_map<int,int> m1,m2;
        for(int i=0;i<v2.size();i++)
        {
            m1[v1[i]]++;
            m2[v2[i]]++;
        }
        vector<int> ans;
        for(auto x:v3)
        {
            if(m1[x] && m2[x])
            {
                ans.push_back(x);
            }
        }
        return ans;
    }
};