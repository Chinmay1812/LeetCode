class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>&v, int k) 
    {
        int n=v.size();
        priority_queue<pair<double,pair<int,int>>,vector<pair<double,pair<int,int>>>,greater<pair<double,pair<int,int>>>> q;
        
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++)
        {
            int x=v[i][0]*v[i][0];
            int y=v[i][1]*v[i][1];
            double dist=sqrt(x+y);
            q.push({dist,{v[i][0],v[i][1]}});
        }
        for(int i=0;i<k;i++)
        {
            auto node=q.top();
            q.pop();
            ans.push_back({node.second.first,node.second.second});
        }
        return ans;
    }
};