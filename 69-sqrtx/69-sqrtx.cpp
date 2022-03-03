class Solution {
public:
    int mySqrt(int n) 
    {
        int ans=1;
        int x=0;
        int y=n;
        
        while(x<=y)
        {
            long long mid=x+(y-x)/2;
            if(mid*mid<=n)
            {
                ans=mid;
                x=mid+1;
            }
            else
            {
                y=mid-1;
            }
        }
        return ans;
    }
};