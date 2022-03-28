class Solution {
public:
    bool search(vector<int>&v, int k) 
    {
        int n=v.size();
        int s=0,e=n-1;
        int ans=v[0];
        while(s<=e)
        {
            while(s<e && v[s]==v[s+1])
            {
                s++;
            }
            while(s<e && v[e]==v[e-1])
            {
                e--;
            }
            int mid=s+(e-s)/2;
            if(v[mid]==k)
            {
                return true;
            }
            if(v[mid]>=v[s])
            {
                if(k<v[mid] && k>=v[s])
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
            else
            {
                if(k<=v[e] && k>v[mid])
                {
                    s=mid+1;
                }
                else
                {
                    e=mid-1;
                }
            }
            
            
        }
        
        
        return false;
        
    }
};