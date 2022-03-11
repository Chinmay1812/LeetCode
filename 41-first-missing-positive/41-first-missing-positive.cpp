class Solution {
public:
    int firstMissingPositive(vector<int>&v) 
    {
        int n=v.size();
        for(auto &x:v)
        {
            if(x<=0) x=INT_MAX;
        }
        
        for(auto x:v)
        {
            x=abs(x);
            if(x>0 && x<=n && v[x-1]>0)
            {
                v[x-1]*=-1;
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            if(v[i-1]>0)
            {
                return i;
            }
            
        }
        
        
        return n+1;
    }
};