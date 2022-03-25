class Solution {
public:
    string removeDuplicates(string s)
    {
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(!ans.empty() && ans.back()==s[i])
            {
                ans.pop_back();
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};