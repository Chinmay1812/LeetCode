class Solution {
public:
    int calculate(string s)
    {
        int n=s.size();
        stack<int> st;
        char sign='+';
        long num=0;
        
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                num=num*10+s[i]-'0';
            }
            if(!isdigit(s[i]) && !isspace(s[i])|| i==n-1)
            {
                if(sign=='+')
                {
                    st.push(num);
                }
                else if(sign=='-')
                {
                    st.push(-num);
                }
                else
                {
                    if(sign=='*')
                    {
                        int temp=st.top()*num;
                        st.pop();
                        st.push(temp);
                    }
                    else
                    {
                        int temp=st.top()/num;
                        st.pop();
                        st.push(temp);
                    }
                    
                }
                sign=s[i];
                num=0;
            }
                   
            
        }
        int ans=0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};