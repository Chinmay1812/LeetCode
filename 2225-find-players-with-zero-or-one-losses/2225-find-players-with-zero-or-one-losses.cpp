class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>&v) 
    {
        set<int> s;
        map<int,int> lose;
        for(auto x:v)
        {
            s.insert(x[0]);
            lose[x[1]]++;
        }
        vector<int> v2;
        for(auto [p,q]:lose)
        {
            if(q==1)
            {
                v2.push_back(p);
            }
            s.erase(p);
        }
        return {vector<int>(s.begin(),s.end()),v2};
    }
};