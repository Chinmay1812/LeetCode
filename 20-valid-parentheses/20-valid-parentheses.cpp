class Solution {
public:
    bool isValid(string s)
    {
        stack<int> st;
        int n=s.size();
        
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')'||s[i]=='}'||s[i]==']')
            {
                c++;
            }
        }
        if(c>n-c)
        {
            return 0;
        }
        
        for(int i=0;i<n;i++)
        {
           if(s[i]=='(')
           {
               st.push(1);
           }
           else if(s[i]=='{')
           {
               st.push(2);
           }
           else if(s[i]=='[')
            {
                st.push(3);
            }
            else if(st.size())
            {
                if(st.top()==1 && s[i]==')')
                {
                    st.pop();
                }
                else if(st.top()==2 && s[i]=='}')
                {
                    st.pop();
                }
                else if(st.top()==3 && s[i]==']')
                {
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};