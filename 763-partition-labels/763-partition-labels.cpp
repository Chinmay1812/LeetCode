class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        unordered_map<char,int> m;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            m[s[i]]=i;
        }
        int last=0;
        int mx=-1;
        vector<int> ans;
        ans.reserve(n);
        for(int i=0;i<n;i++)
        {
            mx=max(mx,m[s[i]]);
            if(i==mx)
            {
                ans.push_back(i-last+1);
                last=i+1;
            }
        }
        return ans;
    }
};