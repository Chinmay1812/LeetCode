class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>&v, int k)
    {
        vector<int> ans;
        multiset<int> m;
        int n=v.size();
        for(int i=0;i<k;i++)
        {
            m.insert(v[i]);
        }
        ans.push_back(*--m.end());
        
        for(int i=k;i<n;i++)
        {
            m.erase(m.find(v[i-k]));
            m.insert(v[i]);
            ans.push_back(*--m.end());
        }
        
        return ans;
    }
};