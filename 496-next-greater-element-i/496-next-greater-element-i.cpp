class Solution {
public:
    vector<int> nextGreaterElement(vector<int>&v1, vector<int>&v2) 
    {
        vector<int> ans;
        unordered_map<int,int> m;
        stack<int> s;
        for(int i=0;i<v2.size();i++)
        {
            if(s.empty())
            {
                s.push(v2[i]);
            }
            else
            {
                int x=v2[i];
                if(s.top()>=x)
                {
                    s.push(x);
                }
                else
                {
                    while(!s.empty() && s.top()<x)
                    {
                        m[s.top()]=x;
                        s.pop();
                    }
                    s.push(x);
                }
            }
        }
        while(!s.empty())
        {
            m[s.top()]=-1;
            s.pop();
        }
        for(auto x:v1)
        {
            ans.push_back(m[x]);
        }
        return ans;
    }
};