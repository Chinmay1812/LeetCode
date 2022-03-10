class Solution {
public:
    vector<int> topKFrequent(vector<int>&v, int k)
    {
        set<pair<int,int>,greater<pair<int,int>>> s;
        unordered_map<int,int> m;
        for(auto x:v)
        {
            m[x]++;
        }
        for(auto x:v)
        {
            s.insert({m[x],x});
        }
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
             ans.push_back(s.begin()->second);
                s.erase(s.begin());
        }
        return ans;
    }
};