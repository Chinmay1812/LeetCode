class Solution {
public:
    int maxSubArray(vector<int>&v) 
    {
        int n=v.size();
        int sum=v[0];
        int ans=v[0];
        for(int i=1;i<n+1;i++)
        {
            ans=max(ans,sum);
            if(sum<0)
            {
                sum=0;
            }
            if(i<n)
            {
                sum+=v[i];
            }
            
        }
        return ans;
    }
};