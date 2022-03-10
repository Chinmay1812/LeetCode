class Solution {
public:
    
   static bool cp(pair<int,string> a,pair<int,string> b)
    {
        if(a.first==b.first)
        {
            return a.second<b.second;
        }
        return a.first>b.first;
    }
    
    vector<string> topKFrequent(vector<string>&v, int k) 
    {
        unordered_map<string,int> m;
        vector<string> ans,b;
        vector<pair<int,string>> g;
        for(auto x:v)
        {
            if(m[x]==0)
            {
                b.push_back(x);
            }
            m[x]++;
        }
        for(auto x:b)
        {
            g.push_back({m[x],x});
        }
        sort(g.begin(),g.end(),cp);
        for(int i=0;i<k;i++)
        {
            ans.push_back(g[i].second);
        }
     
        return ans;
    }
};