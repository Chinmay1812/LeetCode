class Solution {
public:
    int divide(long x, long y) 
    {
        int ans=0;
        int f=1;
        if(x<0)
        {
            f*=-1;
        }
        if(y<0)
        {
            f*=-1;
        }
        if(x<0)
        {
            x*=-1;
        }
        if(y<0)
        {
            y*=-1;
        }
    
        if(y==1)
        {
            x*=f;
            if(x>=INT_MAX)
            {
                return INT_MAX;
            }
            else if(x<=INT_MIN)
            {
                return INT_MIN;
            }
            else
            {
                return x;
            }
        }
    
        while(x>=y)
        {
            x-=y;
            ans++;
        }
        ans*=f;
        
        return ans;
       
    }
};