class Solution {
public:
    bool validateStackSequences(vector<int>&v1, vector<int>&v2) 
    {
        int n=v1.size();
        int j=0;
        stack<int> s;
        for(int x:v1)
        {
            s.push(x);
            while(!s.empty() && s.top()==v2[j])
            {
                s.pop();
                j++;
            }
        }
        return j==n;
    }
};