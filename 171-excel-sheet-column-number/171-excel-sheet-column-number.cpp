class Solution {
public:
    int titleToNumber(string s) 
    {
        unordered_map<char,int> m;
        int c=1;
        for(char it='A'; it<='Z';it++)
        {
            m[it]=c;
            c++;
        }
        int n=s.size();
        int ans=0;
        c=0;
        for(int i=n-1;i>=0;i--)
        {
            ans+=m[s[i]]*pow(26,c);
            c++;
        }
        
        
        return ans;
    }
};