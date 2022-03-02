class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int x=0,y=0;
        int n1=s.size();
        int n2=t.size();
        
        while(x<n1 && y<n2)
        {
            if(s[x]==t[y])
            {
                x++;
                y++;
            }
            else
            {
                y++;
            }
        }
        return x==n1;
    }
};