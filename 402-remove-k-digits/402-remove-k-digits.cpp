class Solution {
public:
    string removeKdigits(string st, int k) 
    {
        int n=st.size();
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            int x=st[i]-'0';
            if(s.empty())
            {
                s.push(x);
            }
            else
            {
                if(k>0)
                {
                    while(s.size() && s.top()>x && k>0)
                    {
                        
                        s.pop();
                        k--;
                    }
                }
                s.push(x);
              
                    
            }
        }
        
        
          while(k--)
           s.pop(); 
        
        
        
        string ans="";
        while(!s.empty())
        {
            ans=to_string(s.top())+ans;
            s.pop();
        }
    
        while(*ans.begin()=='0')
        {
            ans.erase(ans.begin());
        }
        
        if(ans.empty())
        {
            ans="0";
        }
       
        
        return ans;
    }
};