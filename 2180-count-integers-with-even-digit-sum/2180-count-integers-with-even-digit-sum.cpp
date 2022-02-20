class Solution {
public:
    bool sumx(int x)
    {
        int sum=0;
        while(x)
        {
            sum+=x%10;
            x/=10;
        }
        return sum%2==0;
    }
    
    
    int countEven(int n)
    {
        int ans=0;
        for(int i=2;i<=n;i++)
        {
            ans+=sumx(i);
        }
        return ans;
    }
};