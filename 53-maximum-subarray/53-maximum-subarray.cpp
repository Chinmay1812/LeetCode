class Solution {
public:
    int maxSubArray(vector<int>&v) 
    {
         int ans=0,sum=v[0];
        int n=v.size();
        ans=v[0];
        for(int i=1;i<n;i++)
        {
            if(sum<0)
            {
                sum=0;
            }
           
                sum+=v[i];
                ans=max(ans,sum);
    
            
        }
    
        return ans;
       
    }
};