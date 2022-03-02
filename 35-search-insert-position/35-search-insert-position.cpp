class Solution {
public:
    int searchInsert(vector<int>&v, int k) 
    {
        int ans=v.size();
        int x=0,y=v.size()-1;
        
        while(x<=y)
        {
            int mid=x+(y-x)/2;
            if(v[mid]>=k)
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