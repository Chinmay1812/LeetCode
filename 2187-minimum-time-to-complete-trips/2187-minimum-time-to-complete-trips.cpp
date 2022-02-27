class Solution 
{
public:
    
    bool is(vector<int>&v,long long mid,int k)
    {
        long long ans=0;
        for(int i=0;i<v.size();i++)
        {
            ans+=mid/v[i];
        }
        return ans>=k;
    }
    
    
    
    long long minimumTime(vector<int>&v, int k) 
    {
        long long ans=0;
        long long x=0,y=1e14;
        
        while(x<=y)
        {
            long long mid=x+(y-x)/2;
            
            if(is(v,mid,k))
            {
                ans=mid;
                y=mid-1;
            }
            else
            {
                x=mid+1;
            }
        }
        return ans;
    }
};