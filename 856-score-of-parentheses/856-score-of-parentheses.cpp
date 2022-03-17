class Solution {
public:
    int scoreOfParentheses(string s) 
    {
         int n = s.size();
        int ans = 0;
        stack<int> st;
        
        for(int i=0; i<n; i++)
        {
            if(s[i] == '(') 
            {
                st.push(ans);
                ans= 0;
            }
            else 
            {
                ans = st.top() + max(2*ans, 1);
                st.pop();
            }
            
        }
        return ans;
        
    }
};