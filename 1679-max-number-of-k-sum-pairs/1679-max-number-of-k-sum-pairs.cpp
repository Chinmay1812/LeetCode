class Solution {
public:
    int maxOperations(vector<int>&v, int k) 
    {
        int n=v.size();
        sort(v.begin(),v.end());
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
               ans++;
                    lo++;
                    hi--;
                
               
             
            }
            
        }
        return ans;
    }
};