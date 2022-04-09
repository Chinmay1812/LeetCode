class Solution {
public:
    vector<int> topKFrequent(vector<int>&v, int k)
    {
        int n=v.size();
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> m,g;
        for(auto x:v)
        {
            m[x]++;
        }
        
        for(auto x:v)
        {
            if(g[x]==0)
            {
                pq.push({m[x],x});
                g[x]=1;
            }
        }
        vector<int> ans;
        while(k--)
        {
            auto var=pq.top();
            pq.pop();
            ans.push_back(var.second);
        }
        return ans;
    }
};