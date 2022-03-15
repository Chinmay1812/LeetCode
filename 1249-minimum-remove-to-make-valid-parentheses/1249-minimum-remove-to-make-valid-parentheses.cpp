class Solution {
public:
    string minRemoveToMakeValid(string s)
    {
        unordered_map<int,int> remove;
        stack<pair<char,int>> st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(st.empty() && s[i]==')')
            {
                remove[i]=1;
            }
            else if(!st.empty() && st.top().first=='(' && s[i]==')')
            {
                st.pop();
            }
            else if(s[i]=='(')
            {
                st.push({'(',i});
            }   
        }
        while(!st.empty())
        {
            remove[st.top().second]=1;
            st.pop();
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(remove[i]==0)
            {
                ans+=s[i];
            }
        }
        
        return ans;
    }
};