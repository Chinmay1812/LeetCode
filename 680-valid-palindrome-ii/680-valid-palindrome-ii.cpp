class Solution {
public:
    
    bool is(string s)
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
    
    
    bool validPalindrome(string s) 
    {
        int x=0,y=s.size()-1;
      
        while(x<y)
        {
            if(s[x]==s[y])
            {
                x++;
                y--;
            }
            else
            {
                string a=s;
                string b=s;
                a.erase(a.begin()+x);
                b.erase(b.begin()+y);
                return is(a)||is(b);
            }
        }
        
       return 1;
    }
};