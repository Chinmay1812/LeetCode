class Solution {
public:
    vector<int> arraysIntersection(vector<int>&v1, vector<int>&v2, vector<int>&v3) 
    {
        vector<int> ans;
        for(auto x:v1)
        {
            if(binary_search(v2.begin(),v2.end(),x)&&binary_search(v3.begin(),v3.end(),x))
            {
                ans.push_back(x);
            }
        }
        return ans;
    }
};