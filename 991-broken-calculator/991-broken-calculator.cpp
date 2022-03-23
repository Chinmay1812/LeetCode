class Solution {
public:
    int brokenCalc(int n, int k) 
    {
        int ans=0;
        while(n<k)
        {
            if(k%2==1)
            {
                k++;
            }
            else
            {
                k>>=1;
            }
            ans++;
        }
        return ans+n-k;
    }
};