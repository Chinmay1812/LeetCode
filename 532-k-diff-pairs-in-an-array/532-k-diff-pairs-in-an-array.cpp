class Solution {
public:
    int findPairs(vector<int>&v, int k) 
    {
        int n=v.size();
        int ans=0;
        unordered_map<int,int> m;
        for(auto x:v)
        {
            m[x]++;
        }
        for(auto x:m)
        {
            if(k==0)
            {
                if(x.second>1)
                {
                    ans++;
                }
            }
            else
            {
                 if(m.find(x.first+k)!=m.end())
                 {
                  ans++;
                 }
            }
        }
        
        return ans;
    }
};