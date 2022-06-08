class Solution {
public:
    int removePalindromeSub(string s) 
    {    
        int n=s.size();
        int g=0;
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-1-i])
            {
                g=1;
                break;
            }
        }
        if(g==0)
        {
            return 1;
        }
        
        return 2;
    }
};