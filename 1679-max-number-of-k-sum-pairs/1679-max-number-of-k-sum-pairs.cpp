class Solution {
public:
    int maxOperations(vector<int>&v, int k) 
    {
        int n=v.size();
        sort(v.begin(),v.end());
        unordered_map<int,int> m;
        int ans=0;
        int lo=0,hi=n-1;
        while(lo<hi)
        {
            int sum=v[lo]+v[hi];
            if(sum<k)
            {
                lo++;
            }
            else if(sum>k)
            {
                hi--;
            }
            else
            {
                if(m[lo]==0 && m[hi]==0)
                {
                    ans++;
                    lo++;
                    hi--;
                }
                else if(m[lo]==1 && m[hi]==0)
                {
                    lo++;
                }
                else if(m[lo]==0 && m[hi]==1)
                {
                    hi--;
                }
             
            }
            
        }
        return ans;
    }
};