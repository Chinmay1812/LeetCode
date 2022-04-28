class Solution {
public:
    
    bool is(vector<int>&v,int wt,int k)
    {
         int sum=0;
         int n=v.size();
         int c=1;
        for(int i=0;i<n;i++)
        {
            if(v[i]>wt)
            {
                return false;
            }
            
            if(sum+v[i]<=wt)
            {
                sum+=v[i];
            }
            else
            {
                sum=v[i];
                c++;
            }
            
        }

       return c<=k;
    }
    
    int shipWithinDays(vector<int>&v, int k) 
    {
        int lo=0;
        int sum=0;
        int n=v.size();
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        int hi=sum;
        int ans=0;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(is(v,mid,k))
            {
                
                ans=mid;
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return ans;
    }
};