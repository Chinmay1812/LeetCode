class Solution {
public:
    int fixedPoint(vector<int>&v) 
    {
        int ans=-1;
        
        int s=0,e=v.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            
            if(mid==v[mid])
            {
                ans=mid;
                e=mid-1;
            }
            else if(mid<v[mid])
            {
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