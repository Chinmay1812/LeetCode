class Solution {
public:
    vector<int> nextGreaterElement(vector<int>&v1, vector<int>&v) 
    {
        stack<int> s;
        int n=v.size();
        int n1=v1.size();
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
            {
                
            }
            else
            {
                while(!s.empty() && s.top()<=v[i])
                {
                    s.pop();
                }
                if(!s.empty())
                {
                   m[v[i]]=s.top();
                }
            }
            s.push(v[i]);
        }
        for(int i=0;i<n1;i++)
        {
            if(m.find(v1[i])==m.end())
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(m[v1[i]]);
            }
        }
        return ans;
    }
};