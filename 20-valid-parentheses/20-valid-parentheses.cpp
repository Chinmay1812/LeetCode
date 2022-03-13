class Solution {
public:
    bool isValid(string s)
    {
        stack<int> st;
        int n=s.size();
        
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
                else
                {
                    return 0;
                }
            }
            else if(st.size()==0 && s[i]==')'||s[i]=='}'||s[i]==']')
            {
                return 0;
            }
        }
        return st.empty();
    }
};