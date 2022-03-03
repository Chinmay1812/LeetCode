class Solution {
public:
    vector<int> searchRange(vector<int>&v, int k) 
    {
        vector<int> ans;
        int var=-1;
        int n=v.size();
        int x=0,y=n-1;
        while(x<=y)
        {
            int mid=x+(y-x)/2;
            if(v[mid]==k)
            {
                y=mid-1;
                var=mid;
            }
            else if(v[mid]>k)
            {
                y=mid-1;
            }
            else
            {
                x=mid+1;
            }
        }
        ans.push_back(var);
        var=-1;
        x=0,y=n-1;
        while(x<=y)
        {
            int mid=x+(y-x)/2;
           
            if(v[mid]==k)
            {
                x=mid+1;
                var=mid;
             
            }
            else if(v[mid]>k)
            {
                y=mid-1;
            }
            else
            {
                x=mid+1;
            }
        }
        ans.push_back(var);
        return ans;
        
    }
};