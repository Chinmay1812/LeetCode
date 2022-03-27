class Solution {
public:
    
    bool is(vector<int>&v,int k,int num)
    {
        int sum=0;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            sum+=ceil(v[i]*(1.0)/num);
        }
        return sum<=k;
    }
    
    
    int minEatingSpeed(vector<int>&v, int k) 
    {
        int n=v.size();
        sort(v.begin(),v.end());
        long s=1,e=v[n-1];
        int ans;
        while(s<=e)
        {
            long mid=s+(e-s)/2;
            
            if(is(v,k,mid))
            {
                e=mid-1;
                ans=mid;
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};