class Solution {
public:
    bool fun(string &s,int k)
    {
        int n=s.size();
        auto ch=s[n-1];
        int c=0; 
        for(int i=n-1;i>=n-k;i--)
        {
            c+=ch==s[i];
            if(ch!=s[i])
            {
                return false;
            }
        } 
        return c==k;
    }
    
    
    string removeDuplicates(string s, int k) 
    {
        string ans="";
        int n=s.size();
         if(n==1)
         {
             return s;
         }
         
        if(n==2)
        {
            if(s[0]!=s[1])
            {
                return s;
            }
            else
            {
                return " ";
            }
        }
        
        for(int i=0;i<n;i++)
        {   
            ans.push_back(s[i]);
            if(ans.size()>=k && fun(ans,k))
            {
                int x=k;
             
                while(x--)
                {
                    ans.pop_back();
                }
            }
        }
        
        return ans;
    }
};