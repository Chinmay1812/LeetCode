class Solution {
public:
    string smallestSubsequence(string s) 
    {
         int n=s.size();
        unordered_map<char,int> m,ind;
        for(int i=0;i<n;i++)
        {
            ind[s[i]]=i;
        }
        stack<char> st;
        for(int i=0;i<n;i++)
        {   
            if(m[s[i]]==1)
            {
                continue;
            }
            
                while(!st.empty() && st.top()>s[i] && ind[st.top()]>i)
                {
                    m[st.top()]=0;
                    st.pop();
                }
            if(m[s[i]]==0)
            {
                st.push(s[i]);
                m[s[i]]=1;
            }     
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};