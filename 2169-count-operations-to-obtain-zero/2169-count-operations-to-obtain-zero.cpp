class Solution {
public:
    int countOperations(int a, int b)
    {
        int ans=0;
        if(a==0||b==0)
        {
            return ans;
        }
    
        while(a!=0 && b!=0)
        {
            if(a>=b)
            {
                a-=b;
                ans++;
            }
            else
            {
                b-=a;
                ans++;
            }
            if(a==1 && b>0)
            {
                ans+=b;
                break;
            }
            else if(b==1 && a>0)
            {
                ans+=a;
                break;
            }
        }
        return ans;
    }
};