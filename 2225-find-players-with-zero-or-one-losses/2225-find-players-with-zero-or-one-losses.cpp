class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>&v) 
    {
        unordered_map<int,int> lose,win;
        vector<vector<int>> ans(2,vector<int>());
        for(auto x:v)
        {
            lose[x[1]]++;
        }
        for(auto x:v)
        {
            if(lose[x[0]]==0 && win[x[0]]==0)
            {
                ans[0].push_back(x[0]);
                win[x[0]]=1;
            }
        }
        for(auto x:v)
        {
            if(lose[x[1]]==1)
            {
                ans[1].push_back(x[1]);
            }
        }
        sort(ans[0].begin(),ans[0].end());
         sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};