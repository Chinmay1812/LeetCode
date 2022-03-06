class Solution {
public:
    int countOrders(int n) 
    {
        int mod=1e9+7;
        long ans=1;
        for(int i=1;i<=n;i++)
        {
            ans*=i;
            ans%=mod;
            ans*=(2*i-1);
            ans%=mod;
        }
        return ans;
    }
};