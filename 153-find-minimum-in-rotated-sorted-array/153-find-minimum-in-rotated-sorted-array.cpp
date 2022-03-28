class Solution {
public:
    int findMin(vector<int>&v) 
    {
        int n=v.size();
        int s=0,e=n-1;
        int ans=v[0];
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int prev=v[(mid-1+n)%n];
            int next=v[(mid+1)%n];
            if(prev>v[mid] && v[mid]<next)
            {
                return v[mid];
            }
            else if(v[mid]>v[e])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
    }
};