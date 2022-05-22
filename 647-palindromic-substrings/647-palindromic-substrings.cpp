class Solution {
public:
    bool pal(string s)
    {
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-1-i])
            {
                return 0;
            }
        }
        return 1;
    }
    
    
    int countSubstrings(string s) 
    {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            string temp="";
            temp+=s[i];
            for(int j=i+1;j<n;j++)
            {
                temp+=s[j];
                ans+=pal(temp);
            }
        }
        ans+=n;
        return ans;
    }
};