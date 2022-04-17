class Solution {
public:
    int minimumRounds(vector<int>&v) 
    {
        int n=v.size();
        int ans=0;
        unordered_map<int,int> m;
        for(auto x:v)
        {
            m[x]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            int x=it->second;
            if(x%3==0)
            {
                ans+=x/3;
            }
            else if(x%3==2)
            {
                ans+=x/3 +1;
            }
            else if(x%3==1 && x>3)
            {
            ans+=x/3 +1;
            }
            else if(x%2==0)
            {
                ans+=x/2;
            }
            else
            {
                return -1;
            }
        }
        return ans;
    }
};