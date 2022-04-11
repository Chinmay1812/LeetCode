class Solution {
public:
    string customSortString(string g, string s) 
    {
        int h[26]={0};
        for(auto x:s)
        {
            h[x-'a']++;
        }
        string ans="";
        for(auto x:g)
        {
            ans+=string(h[x-'a'],x);
            h[x-'a']=0;
        }
        for(int i=0;i<26;i++)
        {
            ans+=string(h[i],i+'a');
        }
        
        return ans;
    }
};