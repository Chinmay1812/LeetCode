class Solution {
public:
    int peakIndexInMountainArray(vector<int>&v) 
    {
        int n=v.size();
        int lo=0;
        int hi=n-1;
        int ans;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            
            if(v[mid]>v[mid+1])
            {
                ans=mid;
                hi=mid-1;
            } 
            else if(v[mid]<v[mid+1])
            {
                lo=mid+1;
            }
        }
        return ans;
    }
};