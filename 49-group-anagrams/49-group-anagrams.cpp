class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>&v) 
    {
        int n=v.size();
        unordered_map<string,vector<string> > m;
        
        for(int i=0;i<n;i++)
        {
            string s=v[i];
            sort(s.begin(),s.end());
            m[s].push_back(v[i]);
        }
        vector<vector<string>> ans;
            
        for(auto x=m.begin();x!=m.end();x++)
        {
            ans.push_back(x->second);
        }
        return ans;   
    }
};