class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>&v, string s)
    {
        vector<vector<string>> ans;
        int lo=0,hi=v.size()-1;
        sort(v.begin(),v.end());
        for(int i=0;i<s.size();i++)
        {
            while(lo<=hi && (i>=v[lo].size() || v[lo][i]!=s[i]))
            {
                lo++;
            }
            while(lo<=hi && (i>=v[hi].size() || v[hi][i]!=s[i]))
            {
                hi--;
            }
            vector<string> temp;
            for(int k=lo;k<=hi && k<lo+3;k++)
            {
                temp.push_back(v[k]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};