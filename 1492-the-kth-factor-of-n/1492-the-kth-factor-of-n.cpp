class Solution {
public:
    int kthFactor(int n, int k) 
    {
        vector<int> v;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                int x=n/i;
                if(x!=i)
                {
                    v.push_back(i);
                    v.push_back(x);
                }
                else
                {
                    v.push_back(i);
                }
            }
        }
        sort(v.begin(),v.end());
        if(v.size()<k)
        {
            return -1;
        }
        return v[k-1];
    }
};