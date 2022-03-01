class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++)
        {
            int x=i;
            int c=0;
            while(x)
            {
                x=x&(x-1);
                c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};