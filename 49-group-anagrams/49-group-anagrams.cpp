class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>&v) 
    {
        int n=v.size();
        unordered_map<string,vector<string> > m;
        
        for(int i=0;i<n;i++)
        {
            string s=v[i];
            int h[26]={0};
            for(int i=0;i<s.size();i++)
            {
                h[s[i]-'a']++;
            }  
            s.clear();
            for(int i=0;i<26;i++)
            {
                s+=string(h[i],i+'a');
            }
            
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