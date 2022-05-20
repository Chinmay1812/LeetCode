class Solution {
public:
    int subsetXORSum(vector<int>&v) 
    {
        int n=v.size();
        n=pow(2,n);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x=i;
            int c=0;
            int val=0;
            while(x)
            {
                if(x&1)
                {
                    val^=v[c];
                }
                c++;
                x>>=1; 
            }
            ans+=val;
        }
        return ans;
    }
};