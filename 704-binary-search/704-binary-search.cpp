class Solution {
public:
    int search(vector<int>&v, int k) 
    {
        int ans=-1;
        int s=0,e=v.size()-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(v[mid]==k)
            {
                return mid;
            }
            else if(v[mid]>k)
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