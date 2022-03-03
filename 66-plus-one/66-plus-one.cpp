class Solution {
public:
    vector<int> plusOne(vector<int>&v)
    {
        int n=v.size();
        vector<int> ans;
        int c=1;
        for(int i=n-1;i>=0;i--)
        {
                int x=v[i]+c;
                ans.push_back(x%10);
                c=x/10;
        }
        if(c)
        {
            ans.push_back(c);
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};