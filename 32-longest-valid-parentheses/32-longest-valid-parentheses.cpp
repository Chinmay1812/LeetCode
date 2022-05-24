class Solution {
public:
    int longestValidParentheses(string s)
    {
        
        int n=s.size();
        int ans=0;
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
           if(s[i]==')')
           {
               y++;
           }
           else if(s[i]=='(')
            {
                x++;
            }
            if(x==y)
            {
                ans=max(x+y,ans);
            }
            else if(y>x)
            {
                x=y=0;
            }
        }
        x=0,y=0;

        for(int i=n-1;i>=0;i--)
        {
           if(s[i]=='(')
           {
               x++;
           }
            else if(s[i]==')')
            {
                y++;
            }
            if(x==y)
            {
                ans=max(x+y,ans);
            }
            else if(x>y)
            {
                x=y=0;
            }
        }
        
        return ans;
    }
};