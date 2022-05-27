class Solution {
public:
    int numberOfSteps(int n) 
    {
        int ans=0;
        while(n)
        {
            if(n%2)
            {
                n--;
            }
            else
            {
                n/=2;
            }
            ans++;
        }
        return ans;
    }
};