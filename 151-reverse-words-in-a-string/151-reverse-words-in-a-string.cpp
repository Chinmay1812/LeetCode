class Solution {
public:
    string reverseWords(string s) 
    {
        
  
        while(s.back()==' ')
        {
            auto it=s.end();
            it--;
            s.erase(it);
        }
        while(s[0]==' ')
        {
            s.erase(s.begin());
        }
        int n=s.size();
        int x=0,y=n-1;
        while(x<y)
        {
            swap(s[x++],s[y--]);
        }
        
        for(int i=0;i<n;i++)
        {
            int x=i;
            while(i<n && s[i]!=' ')
            {
                i++;
            }
            reverse(s.begin()+x,s.begin()+i);
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ' && ans.back()==' ')
            {
                continue;
            }
            ans+=s[i];
        }
        return ans;
    }
};