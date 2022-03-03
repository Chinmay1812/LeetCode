class Solution {
public:
    string longestCommonPrefix(vector<string>&v) 
    {
        sort(v.begin(),v.end());
        auto x=v[0];
        auto y=v[v.size()-1];
        string s="";
        for(int i=0;i<x.size();i++)
        {
            if(x[i]==y[i])
            {
                s+=x[i];
            }
            else
            {
                break;
            }
        }
        return s;
    }
};