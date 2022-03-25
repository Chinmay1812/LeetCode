class Solution {
public:
    int trailingZeroes(int n) 
    {
        int ans=0;
        int x=5;
        int c=1;
        while(1)
        {
            ans+=n/x;
            x*=5;
           int z=n/x;
            if(z==0)
            {
                break;
            }
        }
        return ans;
    }
};