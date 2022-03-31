class Solution {
public:
    
    
    bool fun(vector<int>&v,int m,long mid)
    {
        int n=v.size();
        int c=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(sum+v[i]<=mid)
            {
                sum+=v[i];
            }
            else
            {
                c++;
                sum=v[i];
            }
        }
        // cout<<c<<endl;
        return c<=m;
    }
    
    int splitArray(vector<int>&v, int m) 
    {
        int n=v.size();
        long s=*max_element(v.begin(),v.end()),e=accumulate(v.begin(),v.end(),0);
        int ans=1;
        while(s<=e)
        {
            long mid=s+(e-s)/2;
            if(fun(v,m,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return ans;
    }
};